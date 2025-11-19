void RecommendSupportSelectControl___ctor(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  if ( (byte_4CB21C0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__);
    byte_4CB21C0 = 1;
  }
  this->fields._SelectIndex_k__BackingField = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A4F89C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__);
}


void RecommendSupportSelectControl__Awake(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  if ( (byte_4CB21BA & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__);
    byte_4CB21BA = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A4F6D8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__);
}


void RecommendSupportSelectControl__GetAssets(
        RecommendSupportSelectControl_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  AssetLoader_LoadEndDataHandler_o *v12; // x19

  if ( (byte_4CB21B8 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_RecommendSupportSelectControl___c__DisplayClass41_0__GetAssets_b__1__);
    sub_1C6BA08(&RecommendSupportSelectControl___c__DisplayClass41_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_10565/*"PartyOrganization/RecommendSupport"*/);
    byte_4CB21B8 = 1;
  }
  v5 = sub_1C6BC54(RecommendSupportSelectControl___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)finishCallback, v10, v11);
  if ( GameObjectExtensions__HasChild(this->fields.rootObject, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
  }
  else
  {
    v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v12,
      (Il2CppObject *)v5,
      Method_RecommendSupportSelectControl___c__DisplayClass41_0__GetAssets_b__1__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_10565/*"PartyOrganization/RecommendSupport"*/, v12, 1, 0);
  }
}


Il2CppObject *RecommendSupportSelectControl__GetDialog_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_31D5704 *method)
{
  const MethodInfo_31D5704_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x21
  System_RuntimeTypeHandle_o v6; // x0
  System_Type_o *TypeFromHandle; // x22
  UnityEngine_Object_o *messageSelectDialog; // x21
  Il2CppType *v9; // x21
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *v11; // x0
  Il2CppType *v12; // x21
  System_RuntimeTypeHandle_o v13; // x0
  System_Type_o *v14; // x0
  __int64 v15; // x1
  bool v16; // w8
  Il2CppObject *result; // x0
  System_Type_o *Type; // x20
  Il2CppType *v19; // x22
  System_RuntimeTypeHandle_o v20; // x0
  System_Type_o *v21; // x0
  bool v22; // w8
  long double v23; // q0
  Il2CppClass *_1_T; // x1
  __int64 v25; // x20
  long double v26; // q0
  Il2CppClass *v27; // x19

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&RecommendSupportCancelConfirmDialog_var);
    sub_1C6BA08(&RecommendSupportMessageSelectDialog_var);
    sub_1C6BA08(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C41AF8();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = (intptr_t)rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6.fields.value = _0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  messageSelectDialog = 0;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0) == 1 )
  {
    v9 = RecommendSupportMessageSelectDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v10.fields.value = (intptr_t)v9;
    v11 = System_Type__GetTypeFromHandle(v10, 0);
    if ( System_Type__op_Equality(TypeFromHandle, v11, 0) )
    {
      messageSelectDialog = (UnityEngine_Object_o *)this->fields.messageSelectDialog;
    }
    else
    {
      v12 = RecommendSupportCancelConfirmDialog_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v13.fields.value = (intptr_t)v12;
      v14 = System_Type__GetTypeFromHandle(v13, 0);
      messageSelectDialog = 0;
      if ( System_Type__op_Equality(TypeFromHandle, v14, 0) )
        messageSelectDialog = (UnityEngine_Object_o *)this->fields.cancelConfirmDialog;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__op_Inequality(messageSelectDialog, 0, 0);
  result = 0;
  if ( v16 )
  {
    if ( !messageSelectDialog )
      sub_1C6BC60(0, v15);
    Type = System_Object__GetType((Il2CppObject *)messageSelectDialog, 0);
    v19 = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v20.fields.value = (intptr_t)v19;
    v21 = System_Type__GetTypeFromHandle(v20, 0);
    v22 = System_Type__op_Equality(Type, v21, 0);
    result = 0;
    if ( v22 )
    {
      _1_T = method->rgctx_data->_1_T;
      if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1C41A9C(v23);
      v25 = sub_1C6BB44(messageSelectDialog, _1_T);
      v27 = method->rgctx_data->_1_T;
      if ( (*(&v27->_2.bitflags2 + 2) & 1) == 0 )
        v27 = (Il2CppClass *)sub_1C41A9C(v26);
      if ( v25 )
      {
        result = (Il2CppObject *)sub_1C6BB44(v25, v27);
        if ( result )
          return result;
        sub_1C6BFFC(v25);
      }
      return 0;
    }
  }
  return result;
}


Il2CppObject *RecommendSupportSelectControl__GetMenu_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_31D5934 *method)
{
  const MethodInfo_31D5934_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x21
  System_RuntimeTypeHandle_o v6; // x0
  System_Type_o *TypeFromHandle; // x21
  UnityEngine_Object_o *mainMenu; // x22
  Il2CppType *v9; // x22
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *v11; // x0
  Il2CppType *v12; // x22
  System_RuntimeTypeHandle_o v13; // x0
  System_Type_o *v14; // x0
  Il2CppType *v15; // x22
  System_RuntimeTypeHandle_o v16; // x0
  System_Type_o *v17; // x0
  Il2CppType *v18; // x22
  System_RuntimeTypeHandle_o v19; // x0
  System_Type_o *v20; // x0
  __int64 v21; // x1
  bool v22; // w8
  Il2CppObject *result; // x0
  System_Type_o *Type; // x20
  Il2CppType *v25; // x21
  System_RuntimeTypeHandle_o v26; // x0
  System_Type_o *v27; // x0
  bool v28; // w8
  long double v29; // q0
  Il2CppClass *_1_T; // x1
  __int64 v31; // x20
  long double v32; // q0
  Il2CppClass *v33; // x19

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&RecommendSupportEquipSelectListMenu_var);
    sub_1C6BA08(&RecommendSupportQuestSelectListMenu_var);
    sub_1C6BA08(&RecommendSupportSelectListViewMenu_var);
    sub_1C6BA08(&RecommendSupportServantSelectListMenu_var);
    sub_1C6BA08(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C41AF8();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = (intptr_t)rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6.fields.value = _0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  mainMenu = 0;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0) == 1 )
  {
    v9 = RecommendSupportSelectListViewMenu_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v10.fields.value = (intptr_t)v9;
    v11 = System_Type__GetTypeFromHandle(v10, 0);
    if ( System_Type__op_Equality(TypeFromHandle, v11, 0) )
    {
      mainMenu = (UnityEngine_Object_o *)this->fields.mainMenu;
    }
    else
    {
      v12 = RecommendSupportServantSelectListMenu_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v13.fields.value = (intptr_t)v12;
      v14 = System_Type__GetTypeFromHandle(v13, 0);
      if ( System_Type__op_Equality(TypeFromHandle, v14, 0) )
      {
        mainMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
      }
      else
      {
        v15 = RecommendSupportEquipSelectListMenu_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v16.fields.value = (intptr_t)v15;
        v17 = System_Type__GetTypeFromHandle(v16, 0);
        if ( System_Type__op_Equality(TypeFromHandle, v17, 0) )
        {
          mainMenu = (UnityEngine_Object_o *)this->fields.equipSelectMenu;
        }
        else
        {
          v18 = RecommendSupportQuestSelectListMenu_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v19.fields.value = (intptr_t)v18;
          v20 = System_Type__GetTypeFromHandle(v19, 0);
          mainMenu = 0;
          if ( System_Type__op_Equality(TypeFromHandle, v20, 0) )
            mainMenu = (UnityEngine_Object_o *)this->fields.questSelectMenu;
        }
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = UnityEngine_Object__op_Inequality(mainMenu, 0, 0);
  result = 0;
  if ( v22 )
  {
    if ( !mainMenu )
      sub_1C6BC60(0, v21);
    Type = System_Object__GetType((Il2CppObject *)mainMenu, 0);
    v25 = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v26.fields.value = (intptr_t)v25;
    v27 = System_Type__GetTypeFromHandle(v26, 0);
    v28 = System_Type__op_Equality(Type, v27, 0);
    result = 0;
    if ( v28 )
    {
      _1_T = method->rgctx_data->_1_T;
      if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1C41A9C(v29);
      v31 = sub_1C6BB44(mainMenu, _1_T);
      v33 = method->rgctx_data->_1_T;
      if ( (*(&v33->_2.bitflags2 + 2) & 1) == 0 )
        v33 = (Il2CppClass *)sub_1C41A9C(v32);
      if ( v31 )
      {
        result = (Il2CppObject *)sub_1C6BB44(v31, v33);
        if ( result )
          return result;
        sub_1C6BFFC(v31);
      }
      return 0;
    }
  }
  return result;
}


int32_t RecommendSupportSelectControl__GetState(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  RecommendSupportSelectControl_o *v2; // x19
  struct CStateManager_RecommendSupportSelectControl__o *fsm; // x8

  v2 = this;
  if ( (byte_4CB21BC & 1) == 0 )
  {
    this = (RecommendSupportSelectControl_o *)sub_1C6BA08(&Method_CStateManager_RecommendSupportSelectControl__getState__);
    byte_4CB21BC = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C6BC60(this, method);
  return fsm->fields.m_state;
}


void RecommendSupportSelectControl__Init(
        RecommendSupportSelectControl_o *this,
        SceneJumpInfo_o *sceneJumpInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v17; // x21
  EventUpValSetupInfo_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct CStateManager_RecommendSupportSelectControl__o **p_fsm; // x21
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  CStateManager_T__o *v26; // x22
  Il2CppObject *v27; // x23
  CStateManager_T__o *v28; // x22
  Il2CppObject *v29; // x23
  CStateManager_T__o *v30; // x22
  Il2CppObject *v31; // x23
  CStateManager_T__o *v32; // x21
  Il2CppObject *v33; // x22
  RecommendSupportData_o *v34; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x2

  if ( (byte_4CB21BB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CStateManager_RecommendSupportSelectControl___ctor__);
    sub_1C6BA08(&Method_CStateManager_RecommendSupportSelectControl__add__);
    sub_1C6BA08(&CStateManager_RecommendSupportSelectControl__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo);
    sub_1C6BA08(&EventUpValSetupInfo_TypeInfo);
    sub_1C6BA08(&RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo);
    sub_1C6BA08(&RecommendSupportData_TypeInfo);
    sub_1C6BA08(&RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo);
    sub_1C6BA08(&RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_RecommendSupportSelectControl___c__DisplayClass44_0__Init_b__0__);
    sub_1C6BA08(&RecommendSupportSelectControl___c__DisplayClass44_0_TypeInfo);
    byte_4CB21BB = 1;
  }
  v7 = sub_1C6BC54(RecommendSupportSelectControl___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  this->fields._SceneJumpInfo_k__BackingField = sceneJumpInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._SceneJumpInfo_k__BackingField, (int32_t)sceneJumpInfo, v14, v15);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v17 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v18 = (EventUpValSetupInfo_o *)sub_1C6BC54(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41972564(v18, v17, 0, 0, 0, 0);
  this->fields._EventSetupInfo_k__BackingField = v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._EventSetupInfo_k__BackingField, (int32_t)v18, v19, v20);
  p_fsm = &this->fields.fsm;
  if ( this->fields.fsm )
    goto LABEL_12;
  v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  v23 = (CStateManager_T__o *)sub_1C6BC54(CStateManager_RecommendSupportSelectControl__TypeInfo);
  CStateManager_object____ctor(
    v23,
    v22,
    4,
    (const MethodInfo_33848C4 *)Method_CStateManager_RecommendSupportSelectControl___ctor__);
  *p_fsm = (struct CStateManager_RecommendSupportSelectControl__o *)v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v23, v24, v25);
  v26 = (CStateManager_T__o *)*p_fsm;
  v27 = (Il2CppObject *)sub_1C6BC54(RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo);
  System_Object___ctor(v27, 0);
  if ( !v26 )
    goto LABEL_14;
  CStateManager_object___add(
    v26,
    0,
    (IState_T__o *)v27,
    (const MethodInfo_338496C *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v28 = (CStateManager_T__o *)*p_fsm;
  v29 = (Il2CppObject *)sub_1C6BC54(RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo);
  System_Object___ctor(v29, 0);
  if ( !v28 )
    goto LABEL_14;
  CStateManager_object___add(
    v28,
    1,
    (IState_T__o *)v29,
    (const MethodInfo_338496C *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v30 = (CStateManager_T__o *)*p_fsm;
  v31 = (Il2CppObject *)sub_1C6BC54(RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo);
  System_Object___ctor(v31, 0);
  if ( !v30
    || (CStateManager_object___add(
          v30,
          2,
          (IState_T__o *)v31,
          (const MethodInfo_338496C *)Method_CStateManager_RecommendSupportSelectControl__add__),
        v32 = (CStateManager_T__o *)*p_fsm,
        v33 = (Il2CppObject *)sub_1C6BC54(RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo),
        System_Object___ctor(v33, 0),
        !v32) )
  {
LABEL_14:
    sub_1C6BC60(Instance, v9);
  }
  CStateManager_object___add(
    v32,
    3,
    (IState_T__o *)v33,
    (const MethodInfo_338496C *)Method_CStateManager_RecommendSupportSelectControl__add__);
LABEL_12:
  v34 = (RecommendSupportData_o *)sub_1C6BC54(RecommendSupportData_TypeInfo);
  RecommendSupportData___ctor(v34, 0);
  this->fields._RecommendSupportData_k__BackingField = v34;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._RecommendSupportData_k__BackingField, (int32_t)v34, v35, v36);
  Instance = (DataManager_o *)this->fields._RecommendSupportData_k__BackingField;
  if ( !Instance )
    goto LABEL_14;
  RecommendSupportData__Init((RecommendSupportData_o *)Instance, this->fields._EventSetupInfo_k__BackingField, 0);
  EventTutorialMaster__CheckTutorial(0, 92, 0, 0, 0, 0, 0, 0);
  this->fields._IsEdit_k__BackingField = 0;
  v37 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_RecommendSupportSelectControl___c__DisplayClass44_0__Init_b__0__,
    0);
  RecommendSupportSelectControl__GetAssets(this, v37, v38);
}


void RecommendSupportSelectControl__OpenDialog_object_(
        RecommendSupportSelectControl_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        int32_t index,
        const MethodInfo_31D5C04 *method)
{
  const MethodInfo_31D5C04_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x21
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x21
  Il2CppType *v12; // x22
  System_RuntimeTypeHandle_o v13; // x0
  System_Type_o *v14; // x0
  UnityEngine_Object_o *messageSelectDialog; // x22
  __int64 v16; // x1
  RecommendSupportMessageSelectDialog_o *v17; // x0
  Il2CppType *v18; // x22
  System_RuntimeTypeHandle_o v19; // x0
  System_Type_o *v20; // x0
  UnityEngine_Object_o *cancelConfirmDialog; // x21

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&RecommendSupportCancelConfirmDialog_var);
    sub_1C6BA08(&RecommendSupportMessageSelectDialog_var);
    sub_1C6BA08(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C41AF8();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = (intptr_t)rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v10.fields.value = _0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
  this->fields._SelectIndex_k__BackingField = index;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0) == 1 )
  {
    v12 = RecommendSupportMessageSelectDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v13.fields.value = (intptr_t)v12;
    v14 = System_Type__GetTypeFromHandle(v13, 0);
    if ( System_Type__op_Equality(TypeFromHandle, v14, 0) )
    {
      messageSelectDialog = (UnityEngine_Object_o *)this->fields.messageSelectDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(messageSelectDialog, 0, 0) )
      {
        v17 = this->fields.messageSelectDialog;
        this->fields._IsEdit_k__BackingField = 1;
        if ( v17 )
        {
          RecommendSupportMessageSelectDialog__Open(v17, callback, 0);
          return;
        }
LABEL_24:
        sub_1C6BC60(v17, v16);
      }
    }
    v18 = RecommendSupportCancelConfirmDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v19.fields.value = (intptr_t)v18;
    v20 = System_Type__GetTypeFromHandle(v19, 0);
    if ( System_Type__op_Equality(TypeFromHandle, v20, 0) )
    {
      cancelConfirmDialog = (UnityEngine_Object_o *)this->fields.cancelConfirmDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(cancelConfirmDialog, 0, 0) )
      {
        v17 = (RecommendSupportMessageSelectDialog_o *)this->fields.cancelConfirmDialog;
        if ( !v17 )
          goto LABEL_24;
        RecommendSupportCancelConfirmDialog__Open((RecommendSupportCancelConfirmDialog_o *)v17, callback, 0);
      }
    }
  }
}


void RecommendSupportSelectControl__ReleaseAsset(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_cashedAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *cashedAssetData; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB21B9 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB21B9 = 1;
  }
  cashedAssetData = this->fields.cashedAssetData;
  p_cashedAssetData = (CGThumbnailListItem_o *)&this->fields.cashedAssetData;
  v4 = cashedAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40765532(v4, 0);
  p_cashedAssetData->klass = 0;
  sub_1C6B9AC(p_cashedAssetData, 0, v6, v7);
}


void RecommendSupportSelectControl__ReturnScene(
        RecommendSupportSelectControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x0

  if ( (byte_4CB21BF & 1) == 0 )
  {
    sub_1C6BA08(&Method_RecommendSupportSelectControl_ReturnScene__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB21BF = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22301/*"ng"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( Instance )
    {
      AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( Instance )
      {
        if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__popScene((AvalonSceneManager_o *)Instance, 1, 0, 0);
            return;
          }
        }
        else
        {
          SceneJumpInfo_k__BackingField = this->fields._SceneJumpInfo_k__BackingField;
          if ( SceneJumpInfo_k__BackingField && SceneJumpInfo__ReturnScene(SceneJumpInfo_k__BackingField, 0) )
            return;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 39, 1, 0, 0);
            return;
          }
        }
      }
    }
    sub_1C6BC60(Instance, v9);
  }
  v5 = Method_RecommendSupportSelectControl_ReturnScene__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectControl_ReturnScene__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C6BA20(Method_RecommendSupportSelectControl_ReturnScene__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  RecommendSupportSelectControl__SetState(this, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportSelectControl__SetState(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4CB21BD & 1) == 0 )
  {
    sub_1C6BA08(&Method_CStateManager_RecommendSupportSelectControl__setState__);
    byte_4CB21BD = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C6BC60(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_33849F8 *)Method_CStateManager_RecommendSupportSelectControl__setState__);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportSelectControl__SetState_35093364(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        int32_t index,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4CB21BE & 1) == 0 )
  {
    sub_1C6BA08(&Method_CStateManager_RecommendSupportSelectControl__setState__);
    byte_4CB21BE = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  this->fields._SelectIndex_k__BackingField = index;
  this->fields._IsEdit_k__BackingField = 1;
  if ( !fsm )
    sub_1C6BC60(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_33849F8 *)Method_CStateManager_RecommendSupportSelectControl__setState__);
}


EventUpValSetupInfo_o *RecommendSupportSelectControl__get_EventSetupInfo(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._EventSetupInfo_k__BackingField;
}


System_String_o *RecommendSupportSelectControl__get_GetMessageSentence(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x19
  System_Int32_array *SelectMessageIds; // x0
  __int64 v4; // x1

  RecommendSupportData_k__BackingField = this->fields._RecommendSupportData_k__BackingField;
  SelectMessageIds = RecommendSupportSelectControl__get_SelectMessageIds(this, method);
  if ( !RecommendSupportData_k__BackingField )
    sub_1C6BC60(SelectMessageIds, v4);
  return RecommendSupportData__GetMessageSentence(RecommendSupportData_k__BackingField, SelectMessageIds, 0);
}


bool RecommendSupportSelectControl__get_IsEdit(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  return this->fields._IsEdit_k__BackingField;
}


RecommendSupportData_o *RecommendSupportSelectControl__get_RecommendSupportData(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._RecommendSupportData_k__BackingField;
}


SceneJumpInfo_o *RecommendSupportSelectControl__get_SceneJumpInfo(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._SceneJumpInfo_k__BackingField;
}


int64_t RecommendSupportSelectControl__get_SelectEquipId(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x0

  RecommendSupportData_k__BackingField = this->fields._RecommendSupportData_k__BackingField;
  if ( !RecommendSupportData_k__BackingField )
    sub_1C6BC60(0, method);
  return RecommendSupportData__GetEquip(
           RecommendSupportData_k__BackingField,
           this->fields._SelectIndex_k__BackingField,
           0);
}


int32_t RecommendSupportSelectControl__get_SelectIndex(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  return this->fields._SelectIndex_k__BackingField;
}


System_Int32_array *RecommendSupportSelectControl__get_SelectMessageIds(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x0

  RecommendSupportData_k__BackingField = this->fields._RecommendSupportData_k__BackingField;
  if ( !RecommendSupportData_k__BackingField )
    sub_1C6BC60(0, method);
  return RecommendSupportData__GetMessage(
           RecommendSupportData_k__BackingField,
           this->fields._SelectIndex_k__BackingField,
           0);
}


int64_t RecommendSupportSelectControl__get_SelectServantId(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x0

  RecommendSupportData_k__BackingField = this->fields._RecommendSupportData_k__BackingField;
  if ( !RecommendSupportData_k__BackingField )
    sub_1C6BC60(0, method);
  return RecommendSupportData__GetServant(
           RecommendSupportData_k__BackingField,
           this->fields._SelectIndex_k__BackingField,
           0);
}


void RecommendSupportSelectControl__set_EventSetupInfo(
        RecommendSupportSelectControl_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._EventSetupInfo_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void RecommendSupportSelectControl__set_IsEdit(
        RecommendSupportSelectControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEdit_k__BackingField = value;
}


void RecommendSupportSelectControl__set_RecommendSupportData(
        RecommendSupportSelectControl_o *this,
        RecommendSupportData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._RecommendSupportData_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._RecommendSupportData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void RecommendSupportSelectControl__set_SceneJumpInfo(
        RecommendSupportSelectControl_o *this,
        SceneJumpInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SceneJumpInfo_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void RecommendSupportSelectControl__set_SelectIndex(
        RecommendSupportSelectControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectIndex_k__BackingField = value;
}


void RecommendSupportSelectControl_DialogResultCallBack___ctor(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9CBF0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9CBA8;
}


System_IAsyncResult_o *RecommendSupportSelectControl_DialogResultCallBack__BeginInvoke(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4CB21C1 & 1) == 0 )
  {
    sub_1C6BA08(&RecommendSupportSelectControl_DialogState_TypeInfo);
    byte_4CB21C1 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(RecommendSupportSelectControl_DialogState_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void RecommendSupportSelectControl_DialogResultCallBack__EndInvoke(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void RecommendSupportSelectControl_DialogResultCallBack__Invoke(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void RecommendSupportSelectControl_EquipSelectMenuState___ctor(
        RecommendSupportSelectControl_EquipSelectMenuState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectControl_EquipSelectMenuState__begin(
        RecommendSupportSelectControl_EquipSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4CB21C8 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CB21C8 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_31D5934 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v6);
      return;
    }
LABEL_12:
    sub_1C6BC60(Instance, v4);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  RecommendSupportEquipSelectListMenu__Open((RecommendSupportEquipSelectListMenu_o *)Menu_object, 0);
}


void RecommendSupportSelectControl_EquipSelectMenuState__end(
        RecommendSupportSelectControl_EquipSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  RecommendSupportSelectControl_EquipSelectMenuState___c_c *v5; // x8
  BaseMenu_o *v6; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v8; // x21
  struct RecommendSupportSelectControl_EquipSelectMenuState___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB21C9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C6BA08(&Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__);
    sub_1C6BA08(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    byte_4CB21C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_31D5934 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  v5 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
  v6 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    v5 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v5->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v8, Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__, 0);
    static_fields = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11);
  }
  if ( !v6 )
LABEL_12:
    sub_1C6BC60(Instance, v4);
  BaseMenu__Close(v6, _9__2_0, 0);
}


void RecommendSupportSelectControl_EquipSelectMenuState__update(
        RecommendSupportSelectControl_EquipSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportSelectControl_EquipSelectMenuState___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB21CA & 1) == 0 )
  {
    sub_1C6BA08(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    byte_4CB21CA = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_EquipSelectMenuState___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void RecommendSupportSelectControl_EquipSelectMenuState___c___ctor(
        RecommendSupportSelectControl_EquipSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectControl_EquipSelectMenuState___c___end_b__2_0(
        RecommendSupportSelectControl_EquipSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportSelectControl_QuestSelectMenuState___ctor(
        RecommendSupportSelectControl_QuestSelectMenuState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectControl_QuestSelectMenuState__begin(
        RecommendSupportSelectControl_QuestSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  if ( (byte_4CB21CB & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CB21CB = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_31D5934 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v6);
      return;
    }
LABEL_12:
    sub_1C6BC60(Instance, v4);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  RecommendSupportQuestSelectListMenu__Open((RecommendSupportQuestSelectListMenu_o *)Menu_object, v7);
}


void RecommendSupportSelectControl_QuestSelectMenuState__end(
        RecommendSupportSelectControl_QuestSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  RecommendSupportSelectControl_QuestSelectMenuState___c_c *v5; // x8
  BaseMenu_o *v6; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v8; // x21
  struct RecommendSupportSelectControl_QuestSelectMenuState___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB21CC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C6BA08(&Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__);
    sub_1C6BA08(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    byte_4CB21CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_31D5934 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
  v5 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
  v6 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    v5 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v5->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v8, Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__, 0);
    static_fields = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11);
  }
  if ( !v6 )
LABEL_12:
    sub_1C6BC60(Instance, v4);
  BaseMenu__Close(v6, _9__2_0, 0);
}


void RecommendSupportSelectControl_QuestSelectMenuState__update(
        RecommendSupportSelectControl_QuestSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportSelectControl_QuestSelectMenuState___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB21CD & 1) == 0 )
  {
    sub_1C6BA08(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    byte_4CB21CD = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_QuestSelectMenuState___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void RecommendSupportSelectControl_QuestSelectMenuState___c___ctor(
        RecommendSupportSelectControl_QuestSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectControl_QuestSelectMenuState___c___end_b__2_0(
        RecommendSupportSelectControl_QuestSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportSelectControl_RecommendSupportSelectMenuState___ctor(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectControl_RecommendSupportSelectMenuState__begin(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  if ( (byte_4CB21C2 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C6BA08(&StringLiteral_22471/*"ok"*/);
    byte_4CB21C2 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_31D5934 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__ReturnScene(Instance, (System_String_o *)StringLiteral_22471/*"ok"*/, v6);
      return;
    }
LABEL_12:
    sub_1C6BC60(Instance, v4);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  RecommendSupportSelectListViewMenu__Open((RecommendSupportSelectListViewMenu_o *)Menu_object, v7);
}


void RecommendSupportSelectControl_RecommendSupportSelectMenuState__end(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_c *v5; // x8
  BaseMenu_o *v6; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v8; // x21
  struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB21C3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C6BA08(&Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__);
    sub_1C6BA08(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    byte_4CB21C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_31D5934 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  v5 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
  v6 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    v5 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v5->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2_0,
      v8,
      Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__,
      0);
    static_fields = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11);
  }
  if ( !v6 )
LABEL_12:
    sub_1C6BC60(Instance, v4);
  BaseMenu__Close(v6, _9__2_0, 0);
}


void RecommendSupportSelectControl_RecommendSupportSelectMenuState__update(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportSelectControl_RecommendSupportSelectMenuState___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB21C4 & 1) == 0 )
  {
    sub_1C6BA08(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    byte_4CB21C4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void RecommendSupportSelectControl_RecommendSupportSelectMenuState___c___ctor(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectControl_RecommendSupportSelectMenuState___c___end_b__2_0(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportSelectControl_ServantSelectMenuState___ctor(
        RecommendSupportSelectControl_ServantSelectMenuState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectControl_ServantSelectMenuState__begin(
        RecommendSupportSelectControl_ServantSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  if ( (byte_4CB21C5 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CB21C5 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_31D5934 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v6);
      return;
    }
LABEL_12:
    sub_1C6BC60(Instance, v4);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  RecommendSupportServantSelectListMenu__Open((RecommendSupportServantSelectListMenu_o *)Menu_object, v7);
}


void RecommendSupportSelectControl_ServantSelectMenuState__end(
        RecommendSupportSelectControl_ServantSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  RecommendSupportSelectControl_ServantSelectMenuState___c_c *v5; // x8
  BaseMenu_o *v6; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v8; // x21
  struct RecommendSupportSelectControl_ServantSelectMenuState___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB21C6 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C6BA08(&Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__);
    sub_1C6BA08(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    byte_4CB21C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_31D5934 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  v5 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
  v6 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    v5 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v5->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v8, Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__, 0);
    static_fields = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11);
  }
  if ( !v6 )
LABEL_12:
    sub_1C6BC60(Instance, v4);
  BaseMenu__Close(v6, _9__2_0, 0);
}


void RecommendSupportSelectControl_ServantSelectMenuState__update(
        RecommendSupportSelectControl_ServantSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportSelectControl_ServantSelectMenuState___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB21C7 & 1) == 0 )
  {
    sub_1C6BA08(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    byte_4CB21C7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_ServantSelectMenuState___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void RecommendSupportSelectControl_ServantSelectMenuState___c___ctor(
        RecommendSupportSelectControl_ServantSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectControl_ServantSelectMenuState___c___end_b__2_0(
        RecommendSupportSelectControl_ServantSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportSelectControl___c__DisplayClass41_0___ctor(
        RecommendSupportSelectControl___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_b__1(
        RecommendSupportSelectControl___c__DisplayClass41_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  char *_4__this; // x0
  const MethodInfo *v7; // x4
  struct RecommendSupportSelectControl_o *v8; // x8
  struct RecommendSupportSelectControl_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  struct RecommendSupportSelectControl_o *v13; // x8
  struct RecommendSupportSelectControl_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x4
  struct RecommendSupportSelectControl_o *v18; // x8
  struct RecommendSupportSelectControl_o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x4
  struct RecommendSupportSelectControl_o *v23; // x8
  struct RecommendSupportSelectControl_o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x4
  struct RecommendSupportSelectControl_o *v28; // x8
  struct RecommendSupportSelectControl_o *v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x4
  struct RecommendSupportSelectControl_o *v33; // x8
  struct RecommendSupportSelectControl_o *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UnityEngine_GameObject_o *v37; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *v38; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *v39; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v40; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v41; // [xsp+20h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *prefabObject; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4CB21CF & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___);
    sub_1C6BA08(&StringLiteral_11224/*"RecommendSupportEquipSelectListMenuPrefab"*/);
    sub_1C6BA08(&StringLiteral_11228/*"RecommendSupportSelectMenuPrefab"*/);
    sub_1C6BA08(&StringLiteral_11226/*"RecommendSupportMessageSelectDialogPrefab"*/);
    sub_1C6BA08(&StringLiteral_11223/*"RecommendSupportCancelConfirmDialogPrefab"*/);
    sub_1C6BA08(&StringLiteral_11227/*"RecommendSupportQuestSelectMenuPrefab"*/);
    sub_1C6BA08(&StringLiteral_11232/*"RecommendSupportServantSelectMenuPrefab"*/);
    byte_4CB21CF = 1;
  }
  v41 = 0;
  prefabObject = 0;
  v39 = 0;
  v40 = 0;
  v37 = 0;
  v38 = 0;
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  *((_QWORD *)_4__this + 4) = assetData;
  sub_1C6B9AC((CGThumbnailListItem_o *)(_4__this + 32), (int32_t)assetData, (int32_t)method, v3);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &prefabObject,
    (System_String_o *)StringLiteral_11228/*"RecommendSupportSelectMenuPrefab"*/,
    v8->fields.cashedAssetData,
    v7);
  _4__this = (char *)prefabObject;
  if ( !prefabObject )
    goto LABEL_23;
  v9 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       prefabObject,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___);
  if ( !v9 )
    goto LABEL_23;
  v9->fields.mainMenu = (struct RecommendSupportSelectListViewMenu_o *)_4__this;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9->fields.mainMenu, (int32_t)_4__this, v10, v11);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v41,
    (System_String_o *)StringLiteral_11232/*"RecommendSupportServantSelectMenuPrefab"*/,
    v13->fields.cashedAssetData,
    v12);
  _4__this = (char *)v41;
  if ( !v41 )
    goto LABEL_23;
  v14 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v41,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___);
  if ( !v14 )
    goto LABEL_23;
  v14->fields.servantSelectMenu = (struct RecommendSupportServantSelectListMenu_o *)_4__this;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v14->fields.servantSelectMenu, (int32_t)_4__this, v15, v16);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v40,
    (System_String_o *)StringLiteral_11224/*"RecommendSupportEquipSelectListMenuPrefab"*/,
    v18->fields.cashedAssetData,
    v17);
  _4__this = (char *)v40;
  if ( !v40 )
    goto LABEL_23;
  v19 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v40,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___);
  if ( !v19 )
    goto LABEL_23;
  v19->fields.equipSelectMenu = (struct RecommendSupportEquipSelectListMenu_o *)_4__this;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v19->fields.equipSelectMenu, (int32_t)_4__this, v20, v21);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v39,
    (System_String_o *)StringLiteral_11227/*"RecommendSupportQuestSelectMenuPrefab"*/,
    v23->fields.cashedAssetData,
    v22);
  _4__this = (char *)v39;
  if ( !v39 )
    goto LABEL_23;
  v24 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v39,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___);
  if ( !v24 )
    goto LABEL_23;
  v24->fields.questSelectMenu = (struct RecommendSupportQuestSelectListMenu_o *)_4__this;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v24->fields.questSelectMenu, (int32_t)_4__this, v25, v26);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v38,
    (System_String_o *)StringLiteral_11226/*"RecommendSupportMessageSelectDialogPrefab"*/,
    v28->fields.cashedAssetData,
    v27);
  _4__this = (char *)v38;
  if ( !v38 )
    goto LABEL_23;
  v29 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v38,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___);
  if ( !v29
    || (v29->fields.messageSelectDialog = (struct RecommendSupportMessageSelectDialog_o *)_4__this,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v29->fields.messageSelectDialog, (int32_t)_4__this, v30, v31),
        (v33 = this->fields.__4__this) == 0)
    || (RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
          this,
          &v37,
          (System_String_o *)StringLiteral_11223/*"RecommendSupportCancelConfirmDialogPrefab"*/,
          v33->fields.cashedAssetData,
          v32),
        (_4__this = (char *)v37) == 0)
    || (v34 = this->fields.__4__this,
        _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                             v37,
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___),
        !v34) )
  {
LABEL_23:
    sub_1C6BC60(_4__this, assetData);
  }
  v34->fields.cancelConfirmDialog = (struct RecommendSupportCancelConfirmDialog_o *)_4__this;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v34->fields.cancelConfirmDialog, (int32_t)_4__this, v35, v36);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
        RecommendSupportSelectControl___c__DisplayClass41_0_o *this,
        UnityEngine_GameObject_o **prefabObject,
        System_String_o *prefabName,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  RecommendSupportSelectControl___c__DisplayClass41_0_o *v8; // x20
  struct RecommendSupportSelectControl_o *_4__this; // x8
  Il2CppObject *v10; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  v8 = this;
  if ( (byte_4CB21CE & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject____78656176);
    this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB21CE = 1;
  }
  if ( !assetData
    || (this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)AssetData__GetObject_object__51495936(
                                                                          assetData,
                                                                          prefabName,
                                                                          (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200),
        (_4__this = v8->fields.__4__this) == 0)
    || (v10 = (Il2CppObject *)this,
        (this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)_4__this->fields.rootObject) == 0) )
  {
    sub_1C6BC60(this, prefabObject);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object__52199488(
          v10,
          transform,
          (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_GameObject____78656176);
  *prefabObject = (UnityEngine_GameObject_o *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)prefabObject, (int32_t)v12, v13, v14);
}


void RecommendSupportSelectControl___c__DisplayClass44_0___ctor(
        RecommendSupportSelectControl___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectControl___c__DisplayClass44_0___Init_b__0(
        RecommendSupportSelectControl___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportSelectControl_o *_4__this; // x8
  RecommendSupportSelectControl___c__DisplayClass44_0_o *v3; // x19
  struct RecommendSupportSelectControl_o *v4; // x8
  struct RecommendSupportSelectControl_o *v5; // x8
  struct RecommendSupportSelectControl_o *v6; // x8
  struct RecommendSupportSelectControl_o *v7; // x8
  struct RecommendSupportSelectControl_o *v8; // x8
  const MethodInfo *v9; // x2
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  v3 = this;
  this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)_4__this->fields.mainMenu;
  if ( !this )
    goto LABEL_16;
  RecommendSupportSelectListViewMenu__Init((RecommendSupportSelectListViewMenu_o *)this, method);
  v4 = v3->fields.__4__this;
  if ( !v4 )
    goto LABEL_16;
  this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v4->fields.servantSelectMenu;
  if ( !this )
    goto LABEL_16;
  RecommendSupportServantSelectListMenu__Init((RecommendSupportServantSelectListMenu_o *)this, method);
  v5 = v3->fields.__4__this;
  if ( !v5 )
    goto LABEL_16;
  this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v5->fields.equipSelectMenu;
  if ( !this )
    goto LABEL_16;
  RecommendSupportEquipSelectListMenu__Init((RecommendSupportEquipSelectListMenu_o *)this, 0);
  v6 = v3->fields.__4__this;
  if ( !v6 )
    goto LABEL_16;
  this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v6->fields.questSelectMenu;
  if ( !this )
    goto LABEL_16;
  RecommendSupportQuestSelectListMenu__Init((RecommendSupportQuestSelectListMenu_o *)this, method);
  v7 = v3->fields.__4__this;
  if ( !v7 )
    goto LABEL_16;
  this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v7->fields.messageSelectDialog;
  if ( !this
    || (RecommendSupportMessageSelectDialog__Init((RecommendSupportMessageSelectDialog_o *)this, method),
        (v8 = v3->fields.__4__this) == 0)
    || (this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v8->fields.cancelConfirmDialog) == 0
    || (RecommendSupportCancelConfirmDialog__Init((RecommendSupportCancelConfirmDialog_o *)this, 0),
        (this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v3->fields.__4__this) == 0)
    || (RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)this, 0, v9),
        (callback = v3->fields.callback) == 0) )
  {
LABEL_16:
    sub_1C6BC60(this, method);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}