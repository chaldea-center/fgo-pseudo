void RecommendSupportSelectControl___ctor(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C3EEDE & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__);
    byte_4C3EEDE = 1;
  }
  this->fields._SelectIndex_k__BackingField = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__);
}


void RecommendSupportSelectControl__Awake(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C3EED8 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__);
    byte_4C3EED8 = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED490 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__);
}


void RecommendSupportSelectControl__GetAssets(
        RecommendSupportSelectControl_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AssetLoader_LoadEndDataHandler_o *v11; // x19

  if ( (byte_4C3EED6 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_RecommendSupportSelectControl___c__DisplayClass41_0__GetAssets_b__1__);
    sub_1C37058(&RecommendSupportSelectControl___c__DisplayClass41_0_TypeInfo);
    sub_1C37058(&StringLiteral_10567/*"PartyOrganization/RecommendSupport"*/);
    byte_4C3EED6 = 1;
  }
  v5 = sub_1C372A4(RecommendSupportSelectControl___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)finishCallback, v9, v10);
  if ( GameObjectExtensions__HasChild(this->fields.rootObject, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
  }
  else
  {
    v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v11,
      (Il2CppObject *)v5,
      Method_RecommendSupportSelectControl___c__DisplayClass41_0__GetAssets_b__1__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_10567/*"PartyOrganization/RecommendSupport"*/, v11, 1, 0);
  }
}


Il2CppObject *RecommendSupportSelectControl__GetDialog_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_318112C *method)
{
  const MethodInfo_318112C_RGCTXs *rgctx_data; // x8
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
  bool v15; // w8
  Il2CppObject *result; // x0
  System_Type_o *Type; // x20
  Il2CppType *v18; // x22
  System_RuntimeTypeHandle_o v19; // x0
  System_Type_o *v20; // x0
  bool v21; // w8
  long double v22; // q0
  Il2CppClass *_1_T; // x1
  __int64 v24; // x20
  long double v25; // q0
  Il2CppClass *v26; // x19

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&RecommendSupportCancelConfirmDialog_var);
    sub_1C37058(&RecommendSupportMessageSelectDialog_var);
    sub_1C37058(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8();
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
  v15 = UnityEngine_Object__op_Inequality(messageSelectDialog, 0, 0);
  result = 0;
  if ( v15 )
  {
    if ( !messageSelectDialog )
      sub_1C372B4(0);
    Type = System_Object__GetType((Il2CppObject *)messageSelectDialog, 0);
    v18 = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v19.fields.value = (intptr_t)v18;
    v20 = System_Type__GetTypeFromHandle(v19, 0);
    v21 = System_Type__op_Equality(Type, v20, 0);
    result = 0;
    if ( v21 )
    {
      _1_T = method->rgctx_data->_1_T;
      if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1C8776C(v22);
      v24 = sub_1C37194(messageSelectDialog, _1_T);
      v26 = method->rgctx_data->_1_T;
      if ( (*(&v26->_2.bitflags2 + 2) & 1) == 0 )
        v26 = (Il2CppClass *)sub_1C8776C(v25);
      if ( v24 )
      {
        result = (Il2CppObject *)sub_1C37194(v24, v26);
        if ( result )
          return result;
        sub_1C37574(v24);
      }
      return 0;
    }
  }
  return result;
}


Il2CppObject *RecommendSupportSelectControl__GetMenu_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_318135C *method)
{
  const MethodInfo_318135C_RGCTXs *rgctx_data; // x8
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
  bool v21; // w8
  Il2CppObject *result; // x0
  System_Type_o *Type; // x20
  Il2CppType *v24; // x21
  System_RuntimeTypeHandle_o v25; // x0
  System_Type_o *v26; // x0
  bool v27; // w8
  long double v28; // q0
  Il2CppClass *_1_T; // x1
  __int64 v30; // x20
  long double v31; // q0
  Il2CppClass *v32; // x19

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&RecommendSupportEquipSelectListMenu_var);
    sub_1C37058(&RecommendSupportQuestSelectListMenu_var);
    sub_1C37058(&RecommendSupportSelectListViewMenu_var);
    sub_1C37058(&RecommendSupportServantSelectListMenu_var);
    sub_1C37058(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8();
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
  v21 = UnityEngine_Object__op_Inequality(mainMenu, 0, 0);
  result = 0;
  if ( v21 )
  {
    if ( !mainMenu )
      sub_1C372B4(0);
    Type = System_Object__GetType((Il2CppObject *)mainMenu, 0);
    v24 = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v25.fields.value = (intptr_t)v24;
    v26 = System_Type__GetTypeFromHandle(v25, 0);
    v27 = System_Type__op_Equality(Type, v26, 0);
    result = 0;
    if ( v27 )
    {
      _1_T = method->rgctx_data->_1_T;
      if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1C8776C(v28);
      v30 = sub_1C37194(mainMenu, _1_T);
      v32 = method->rgctx_data->_1_T;
      if ( (*(&v32->_2.bitflags2 + 2) & 1) == 0 )
        v32 = (Il2CppClass *)sub_1C8776C(v31);
      if ( v30 )
      {
        result = (Il2CppObject *)sub_1C37194(v30, v32);
        if ( result )
          return result;
        sub_1C37574(v30);
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
  if ( (byte_4C3EEDA & 1) == 0 )
  {
    this = (RecommendSupportSelectControl_o *)sub_1C37058(&Method_CStateManager_RecommendSupportSelectControl__getState__);
    byte_4C3EEDA = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C372B4(this);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v16; // x21
  EventUpValSetupInfo_o *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct CStateManager_RecommendSupportSelectControl__o **p_fsm; // x21
  Il2CppObject *v21; // x22
  CStateManager_T__o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  CStateManager_T__o *v25; // x22
  Il2CppObject *v26; // x23
  CStateManager_T__o *v27; // x22
  Il2CppObject *v28; // x23
  CStateManager_T__o *v29; // x22
  Il2CppObject *v30; // x23
  CStateManager_T__o *v31; // x21
  Il2CppObject *v32; // x22
  RecommendSupportData_o *v33; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Action_o *v36; // x21
  const MethodInfo *v37; // x2

  if ( (byte_4C3EED9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CStateManager_RecommendSupportSelectControl___ctor__);
    sub_1C37058(&Method_CStateManager_RecommendSupportSelectControl__add__);
    sub_1C37058(&CStateManager_RecommendSupportSelectControl__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo);
    sub_1C37058(&EventUpValSetupInfo_TypeInfo);
    sub_1C37058(&RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo);
    sub_1C37058(&RecommendSupportData_TypeInfo);
    sub_1C37058(&RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo);
    sub_1C37058(&RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_RecommendSupportSelectControl___c__DisplayClass44_0__Init_b__0__);
    sub_1C37058(&RecommendSupportSelectControl___c__DisplayClass44_0_TypeInfo);
    byte_4C3EED9 = 1;
  }
  v7 = sub_1C372A4(RecommendSupportSelectControl___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v11, v12);
  this->fields._SceneJumpInfo_k__BackingField = sceneJumpInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._SceneJumpInfo_k__BackingField, (int32_t)sceneJumpInfo, v13, v14);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v16 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  v17 = (EventUpValSetupInfo_o *)sub_1C372A4(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41737996(v17, v16, 0, 0, 0, 0);
  this->fields._EventSetupInfo_k__BackingField = v17;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._EventSetupInfo_k__BackingField, (int32_t)v17, v18, v19);
  p_fsm = &this->fields.fsm;
  if ( this->fields.fsm )
    goto LABEL_12;
  v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  v22 = (CStateManager_T__o *)sub_1C372A4(CStateManager_RecommendSupportSelectControl__TypeInfo);
  CStateManager_object____ctor(
    v22,
    v21,
    4,
    (const MethodInfo_332CF70 *)Method_CStateManager_RecommendSupportSelectControl___ctor__);
  *p_fsm = (struct CStateManager_RecommendSupportSelectControl__o *)v22;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v22, v23, v24);
  v25 = (CStateManager_T__o *)*p_fsm;
  v26 = (Il2CppObject *)sub_1C372A4(RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo);
  System_Object___ctor(v26, 0);
  if ( !v25 )
    goto LABEL_14;
  CStateManager_object___add(
    v25,
    0,
    (IState_T__o *)v26,
    (const MethodInfo_332D018 *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v27 = (CStateManager_T__o *)*p_fsm;
  v28 = (Il2CppObject *)sub_1C372A4(RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo);
  System_Object___ctor(v28, 0);
  if ( !v27 )
    goto LABEL_14;
  CStateManager_object___add(
    v27,
    1,
    (IState_T__o *)v28,
    (const MethodInfo_332D018 *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v29 = (CStateManager_T__o *)*p_fsm;
  v30 = (Il2CppObject *)sub_1C372A4(RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo);
  System_Object___ctor(v30, 0);
  if ( !v29
    || (CStateManager_object___add(
          v29,
          2,
          (IState_T__o *)v30,
          (const MethodInfo_332D018 *)Method_CStateManager_RecommendSupportSelectControl__add__),
        v31 = (CStateManager_T__o *)*p_fsm,
        v32 = (Il2CppObject *)sub_1C372A4(RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo),
        System_Object___ctor(v32, 0),
        !v31) )
  {
LABEL_14:
    sub_1C372B4(Instance);
  }
  CStateManager_object___add(
    v31,
    3,
    (IState_T__o *)v32,
    (const MethodInfo_332D018 *)Method_CStateManager_RecommendSupportSelectControl__add__);
LABEL_12:
  v33 = (RecommendSupportData_o *)sub_1C372A4(RecommendSupportData_TypeInfo);
  RecommendSupportData___ctor(v33, 0);
  this->fields._RecommendSupportData_k__BackingField = v33;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._RecommendSupportData_k__BackingField, (int32_t)v33, v34, v35);
  Instance = (DataManager_o *)this->fields._RecommendSupportData_k__BackingField;
  if ( !Instance )
    goto LABEL_14;
  RecommendSupportData__Init((RecommendSupportData_o *)Instance, this->fields._EventSetupInfo_k__BackingField, 0);
  EventTutorialMaster__CheckTutorial(0, 92, 0, 0, 0, 0, 0, 0);
  this->fields._IsEdit_k__BackingField = 0;
  v36 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_RecommendSupportSelectControl___c__DisplayClass44_0__Init_b__0__,
    0);
  RecommendSupportSelectControl__GetAssets(this, v36, v37);
}


void RecommendSupportSelectControl__OpenDialog_object_(
        RecommendSupportSelectControl_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        int32_t index,
        const MethodInfo_318162C *method)
{
  const MethodInfo_318162C_RGCTXs *rgctx_data; // x8
  intptr_t _0_T; // x21
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x21
  Il2CppType *v12; // x22
  System_RuntimeTypeHandle_o v13; // x0
  System_Type_o *v14; // x0
  UnityEngine_Object_o *messageSelectDialog; // x22
  RecommendSupportMessageSelectDialog_o *v16; // x0
  Il2CppType *v17; // x22
  System_RuntimeTypeHandle_o v18; // x0
  System_Type_o *v19; // x0
  UnityEngine_Object_o *cancelConfirmDialog; // x21

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&RecommendSupportCancelConfirmDialog_var);
    sub_1C37058(&RecommendSupportMessageSelectDialog_var);
    sub_1C37058(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8();
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
        v16 = this->fields.messageSelectDialog;
        this->fields._IsEdit_k__BackingField = 1;
        if ( v16 )
        {
          RecommendSupportMessageSelectDialog__Open(v16, callback, 0);
          return;
        }
LABEL_24:
        sub_1C372B4(v16);
      }
    }
    v17 = RecommendSupportCancelConfirmDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v18.fields.value = (intptr_t)v17;
    v19 = System_Type__GetTypeFromHandle(v18, 0);
    if ( System_Type__op_Equality(TypeFromHandle, v19, 0) )
    {
      cancelConfirmDialog = (UnityEngine_Object_o *)this->fields.cancelConfirmDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(cancelConfirmDialog, 0, 0) )
      {
        v16 = (RecommendSupportMessageSelectDialog_o *)this->fields.cancelConfirmDialog;
        if ( !v16 )
          goto LABEL_24;
        RecommendSupportCancelConfirmDialog__Open((RecommendSupportCancelConfirmDialog_o *)v16, callback, 0);
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

  if ( (byte_4C3EED7 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C3EED7 = 1;
  }
  cashedAssetData = this->fields.cashedAssetData;
  p_cashedAssetData = (CGThumbnailListItem_o *)&this->fields.cashedAssetData;
  v4 = cashedAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40534712(v4, 0);
  p_cashedAssetData->klass = 0;
  sub_1C36FFC(p_cashedAssetData, 0, v6, v7);
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
  SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x0

  if ( (byte_4C3EEDD & 1) == 0 )
  {
    sub_1C37058(&Method_RecommendSupportSelectControl_ReturnScene__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C3EEDD = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22215/*"ng"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( Instance )
    {
      AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( Instance )
      {
        if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 39, 1, 0, 0);
            return;
          }
        }
      }
    }
    sub_1C372B4(Instance);
  }
  v5 = Method_RecommendSupportSelectControl_ReturnScene__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectControl_ReturnScene__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C37070(Method_RecommendSupportSelectControl_ReturnScene__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  RecommendSupportSelectControl__SetState(this, 0, v7);
}


void RecommendSupportSelectControl__SetState(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C3EEDB & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_RecommendSupportSelectControl__setState__);
    byte_4C3EEDB = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C372B4(0);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_RecommendSupportSelectControl__setState__);
}


void RecommendSupportSelectControl__SetState_34874884(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        int32_t index,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C3EEDC & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_RecommendSupportSelectControl__setState__);
    byte_4C3EEDC = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  this->fields._SelectIndex_k__BackingField = index;
  this->fields._IsEdit_k__BackingField = 1;
  if ( !fsm )
    sub_1C372B4(0);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_RecommendSupportSelectControl__setState__);
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

  RecommendSupportData_k__BackingField = this->fields._RecommendSupportData_k__BackingField;
  SelectMessageIds = RecommendSupportSelectControl__get_SelectMessageIds(this, method);
  if ( !RecommendSupportData_k__BackingField )
    sub_1C372B4(SelectMessageIds);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
  sub_1C36FFC(
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
  sub_1C36FFC(
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
  sub_1C36FFC(
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A76B90;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76B48;
}


System_IAsyncResult_o *RecommendSupportSelectControl_DialogResultCallBack__BeginInvoke(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C3EEDF & 1) == 0 )
  {
    sub_1C37058(&RecommendSupportSelectControl_DialogState_TypeInfo);
    byte_4C3EEDF = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(
             RecommendSupportSelectControl_DialogState_TypeInfo,
             &v13,
             callback,
             object,
             method,
             v5,
             v6,
             v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void RecommendSupportSelectControl_DialogResultCallBack__EndInvoke(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v5; // x2

  if ( (byte_4C3EEE6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___);
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4C3EEE6 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_318135C *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v5);
      return;
    }
LABEL_12:
    sub_1C372B4(Instance);
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
  RecommendSupportSelectControl_EquipSelectMenuState___c_c *v4; // x8
  BaseMenu_o *v5; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v7; // x21
  struct RecommendSupportSelectControl_EquipSelectMenuState___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3EEE7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C37058(&Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__);
    sub_1C37058(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    byte_4C3EEE7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_318135C *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  v4 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
  v5 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    v4 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v4->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v7, Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__, 0);
    static_fields = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v9, v10);
  }
  if ( !v5 )
LABEL_12:
    sub_1C372B4(Instance);
  BaseMenu__Close(v5, _9__2_0, 0);
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

  if ( (byte_4C3EEE8 & 1) == 0 )
  {
    sub_1C37058(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    byte_4C3EEE8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_EquipSelectMenuState___c_o *)v1;
  sub_1C36FFC(
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
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_4C3EEE9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4C3EEE9 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_318135C *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v5);
      return;
    }
LABEL_12:
    sub_1C372B4(Instance);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  RecommendSupportQuestSelectListMenu__Open((RecommendSupportQuestSelectListMenu_o *)Menu_object, v6);
}


void RecommendSupportSelectControl_QuestSelectMenuState__end(
        RecommendSupportSelectControl_QuestSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  RecommendSupportSelectControl_QuestSelectMenuState___c_c *v4; // x8
  BaseMenu_o *v5; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v7; // x21
  struct RecommendSupportSelectControl_QuestSelectMenuState___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3EEEA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C37058(&Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__);
    sub_1C37058(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    byte_4C3EEEA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_318135C *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
  v4 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
  v5 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    v4 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v4->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v7, Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__, 0);
    static_fields = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v9, v10);
  }
  if ( !v5 )
LABEL_12:
    sub_1C372B4(Instance);
  BaseMenu__Close(v5, _9__2_0, 0);
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

  if ( (byte_4C3EEEB & 1) == 0 )
  {
    sub_1C37058(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    byte_4C3EEEB = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_QuestSelectMenuState___c_o *)v1;
  sub_1C36FFC(
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
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_4C3EEE0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C37058(&StringLiteral_22382/*"ok"*/);
    byte_4C3EEE0 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_318135C *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__ReturnScene(Instance, (System_String_o *)StringLiteral_22382/*"ok"*/, v5);
      return;
    }
LABEL_12:
    sub_1C372B4(Instance);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  RecommendSupportSelectListViewMenu__Open((RecommendSupportSelectListViewMenu_o *)Menu_object, v6);
}


void RecommendSupportSelectControl_RecommendSupportSelectMenuState__end(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_c *v4; // x8
  BaseMenu_o *v5; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v7; // x21
  struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3EEE1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C37058(&Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__);
    sub_1C37058(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    byte_4C3EEE1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_318135C *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  v4 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
  v5 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    v4 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v4->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2_0,
      v7,
      Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__,
      0);
    static_fields = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v9, v10);
  }
  if ( !v5 )
LABEL_12:
    sub_1C372B4(Instance);
  BaseMenu__Close(v5, _9__2_0, 0);
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

  if ( (byte_4C3EEE2 & 1) == 0 )
  {
    sub_1C37058(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    byte_4C3EEE2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_o *)v1;
  sub_1C36FFC(
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
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_4C3EEE3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4C3EEE3 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_318135C *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v5);
      return;
    }
LABEL_12:
    sub_1C372B4(Instance);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  RecommendSupportServantSelectListMenu__Open((RecommendSupportServantSelectListMenu_o *)Menu_object, v6);
}


void RecommendSupportSelectControl_ServantSelectMenuState__end(
        RecommendSupportSelectControl_ServantSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  RecommendSupportSelectControl_ServantSelectMenuState___c_c *v4; // x8
  BaseMenu_o *v5; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v7; // x21
  struct RecommendSupportSelectControl_ServantSelectMenuState___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3EEE4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_1C37058(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C37058(&Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__);
    sub_1C37058(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    byte_4C3EEE4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_318135C *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  v4 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
  v5 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    v4 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v4->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v7, Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__, 0);
    static_fields = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v9, v10);
  }
  if ( !v5 )
LABEL_12:
    sub_1C372B4(Instance);
  BaseMenu__Close(v5, _9__2_0, 0);
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

  if ( (byte_4C3EEE5 & 1) == 0 )
  {
    sub_1C37058(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    byte_4C3EEE5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_ServantSelectMenuState___c_o *)v1;
  sub_1C36FFC(
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

  if ( (byte_4C3EEED & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___);
    sub_1C37058(&StringLiteral_11226/*"RecommendSupportEquipSelectListMenuPrefab"*/);
    sub_1C37058(&StringLiteral_11230/*"RecommendSupportSelectMenuPrefab"*/);
    sub_1C37058(&StringLiteral_11228/*"RecommendSupportMessageSelectDialogPrefab"*/);
    sub_1C37058(&StringLiteral_11225/*"RecommendSupportCancelConfirmDialogPrefab"*/);
    sub_1C37058(&StringLiteral_11229/*"RecommendSupportQuestSelectMenuPrefab"*/);
    sub_1C37058(&StringLiteral_11234/*"RecommendSupportServantSelectMenuPrefab"*/);
    byte_4C3EEED = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)(_4__this + 32), (int32_t)assetData, (int32_t)method, v3);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &prefabObject,
    (System_String_o *)StringLiteral_11230/*"RecommendSupportSelectMenuPrefab"*/,
    v8->fields.cashedAssetData,
    v7);
  _4__this = (char *)prefabObject;
  if ( !prefabObject )
    goto LABEL_23;
  v9 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       prefabObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___);
  if ( !v9 )
    goto LABEL_23;
  v9->fields.mainMenu = (struct RecommendSupportSelectListViewMenu_o *)_4__this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->fields.mainMenu, (int32_t)_4__this, v10, v11);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v41,
    (System_String_o *)StringLiteral_11234/*"RecommendSupportServantSelectMenuPrefab"*/,
    v13->fields.cashedAssetData,
    v12);
  _4__this = (char *)v41;
  if ( !v41 )
    goto LABEL_23;
  v14 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v41,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___);
  if ( !v14 )
    goto LABEL_23;
  v14->fields.servantSelectMenu = (struct RecommendSupportServantSelectListMenu_o *)_4__this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->fields.servantSelectMenu, (int32_t)_4__this, v15, v16);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v40,
    (System_String_o *)StringLiteral_11226/*"RecommendSupportEquipSelectListMenuPrefab"*/,
    v18->fields.cashedAssetData,
    v17);
  _4__this = (char *)v40;
  if ( !v40 )
    goto LABEL_23;
  v19 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v40,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___);
  if ( !v19 )
    goto LABEL_23;
  v19->fields.equipSelectMenu = (struct RecommendSupportEquipSelectListMenu_o *)_4__this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v19->fields.equipSelectMenu, (int32_t)_4__this, v20, v21);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v39,
    (System_String_o *)StringLiteral_11229/*"RecommendSupportQuestSelectMenuPrefab"*/,
    v23->fields.cashedAssetData,
    v22);
  _4__this = (char *)v39;
  if ( !v39 )
    goto LABEL_23;
  v24 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v39,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___);
  if ( !v24 )
    goto LABEL_23;
  v24->fields.questSelectMenu = (struct RecommendSupportQuestSelectListMenu_o *)_4__this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->fields.questSelectMenu, (int32_t)_4__this, v25, v26);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v38,
    (System_String_o *)StringLiteral_11228/*"RecommendSupportMessageSelectDialogPrefab"*/,
    v28->fields.cashedAssetData,
    v27);
  _4__this = (char *)v38;
  if ( !v38 )
    goto LABEL_23;
  v29 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v38,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___);
  if ( !v29
    || (v29->fields.messageSelectDialog = (struct RecommendSupportMessageSelectDialog_o *)_4__this,
        sub_1C36FFC((CGThumbnailListItem_o *)&v29->fields.messageSelectDialog, (int32_t)_4__this, v30, v31),
        (v33 = this->fields.__4__this) == 0)
    || (RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
          this,
          &v37,
          (System_String_o *)StringLiteral_11225/*"RecommendSupportCancelConfirmDialogPrefab"*/,
          v33->fields.cashedAssetData,
          v32),
        (_4__this = (char *)v37) == 0)
    || (v34 = this->fields.__4__this,
        _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                             v37,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___),
        !v34) )
  {
LABEL_23:
    sub_1C372B4(_4__this);
  }
  v34->fields.cancelConfirmDialog = (struct RecommendSupportCancelConfirmDialog_o *)_4__this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v34->fields.cancelConfirmDialog, (int32_t)_4__this, v35, v36);
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
  if ( (byte_4C3EEEC & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3EEEC = 1;
  }
  if ( !assetData
    || (this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)AssetData__GetObject_object__51154888(
                                                                          assetData,
                                                                          prefabName,
                                                                          (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168),
        (_4__this = v8->fields.__4__this) == 0)
    || (v10 = (Il2CppObject *)this,
        (this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)_4__this->fields.rootObject) == 0) )
  {
    sub_1C372B4(this);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object__51855596(
          v10,
          transform,
          (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
  *prefabObject = (UnityEngine_GameObject_o *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)prefabObject, (int32_t)v12, v13, v14);
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
  const MethodInfo *v4; // x1
  struct RecommendSupportSelectControl_o *v5; // x8
  struct RecommendSupportSelectControl_o *v6; // x8
  const MethodInfo *v7; // x1
  struct RecommendSupportSelectControl_o *v8; // x8
  const MethodInfo *v9; // x1
  struct RecommendSupportSelectControl_o *v10; // x8
  struct RecommendSupportSelectControl_o *v11; // x8
  const MethodInfo *v12; // x2
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  v3 = this;
  this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)_4__this->fields.mainMenu;
  if ( !this )
    goto LABEL_16;
  RecommendSupportSelectListViewMenu__Init((RecommendSupportSelectListViewMenu_o *)this, method);
  v5 = v3->fields.__4__this;
  if ( !v5 )
    goto LABEL_16;
  this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v5->fields.servantSelectMenu;
  if ( !this )
    goto LABEL_16;
  RecommendSupportServantSelectListMenu__Init((RecommendSupportServantSelectListMenu_o *)this, v4);
  v6 = v3->fields.__4__this;
  if ( !v6 )
    goto LABEL_16;
  this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v6->fields.equipSelectMenu;
  if ( !this )
    goto LABEL_16;
  RecommendSupportEquipSelectListMenu__Init((RecommendSupportEquipSelectListMenu_o *)this, 0);
  v8 = v3->fields.__4__this;
  if ( !v8 )
    goto LABEL_16;
  this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v8->fields.questSelectMenu;
  if ( !this )
    goto LABEL_16;
  RecommendSupportQuestSelectListMenu__Init((RecommendSupportQuestSelectListMenu_o *)this, v7);
  v10 = v3->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v10->fields.messageSelectDialog;
  if ( !this
    || (RecommendSupportMessageSelectDialog__Init((RecommendSupportMessageSelectDialog_o *)this, v9),
        (v11 = v3->fields.__4__this) == 0)
    || (this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v11->fields.cancelConfirmDialog) == 0
    || (RecommendSupportCancelConfirmDialog__Init((RecommendSupportCancelConfirmDialog_o *)this, 0),
        (this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v3->fields.__4__this) == 0)
    || (RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)this, 0, v12),
        (callback = v3->fields.callback) == 0) )
  {
LABEL_16:
    sub_1C372B4(this);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}