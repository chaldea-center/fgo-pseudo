void RecommendSupportSelectControl___ctor(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  if ( (byte_4CC32D1 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__);
    byte_4CC32D1 = 1;
  }
  this->fields._SelectIndex_k__BackingField = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A5F640 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__);
}


void RecommendSupportSelectControl__Awake(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  if ( (byte_4CC32CB & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__);
    byte_4CC32CB = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A5F47C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x19

  if ( (byte_4CC32C9 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportSelectControl___c__DisplayClass41_0__GetAssets_b__1__);
    sub_1C713B0(&RecommendSupportSelectControl___c__DisplayClass41_0_TypeInfo);
    sub_1C713B0(&StringLiteral_10571/*"PartyOrganization/RecommendSupport"*/);
    byte_4CC32C9 = 1;
  }
  v5 = sub_1C715FC(RecommendSupportSelectControl___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  if ( GameObjectExtensions__HasChild(this->fields.rootObject, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
  }
  else
  {
    v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v20,
      (Il2CppObject *)v5,
      Method_RecommendSupportSelectControl___c__DisplayClass41_0__GetAssets_b__1__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_10571/*"PartyOrganization/RecommendSupport"*/, v20, 1, 0);
  }
}


Il2CppObject *RecommendSupportSelectControl__GetDialog_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_31E54A8 *method)
{
  const MethodInfo_31E54A8_RGCTXs *rgctx_data; // x8
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
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&RecommendSupportCancelConfirmDialog_var);
    sub_1C713B0(&RecommendSupportMessageSelectDialog_var);
    sub_1C713B0(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C474A0();
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
      sub_1C71608(0, v15);
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
        _1_T = (Il2CppClass *)sub_1C47444(v23);
      v25 = sub_1C714EC(messageSelectDialog, _1_T);
      v27 = method->rgctx_data->_1_T;
      if ( (*(&v27->_2.bitflags2 + 2) & 1) == 0 )
        v27 = (Il2CppClass *)sub_1C47444(v26);
      if ( v25 )
      {
        result = (Il2CppObject *)sub_1C714EC(v25, v27);
        if ( result )
          return result;
        sub_1C719A4(v25);
      }
      return 0;
    }
  }
  return result;
}


Il2CppObject *RecommendSupportSelectControl__GetMenu_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_31E56D8 *method)
{
  const MethodInfo_31E56D8_RGCTXs *rgctx_data; // x8
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
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&RecommendSupportEquipSelectListMenu_var);
    sub_1C713B0(&RecommendSupportQuestSelectListMenu_var);
    sub_1C713B0(&RecommendSupportSelectListViewMenu_var);
    sub_1C713B0(&RecommendSupportServantSelectListMenu_var);
    sub_1C713B0(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C474A0();
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
      sub_1C71608(0, v21);
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
        _1_T = (Il2CppClass *)sub_1C47444(v29);
      v31 = sub_1C714EC(mainMenu, _1_T);
      v33 = method->rgctx_data->_1_T;
      if ( (*(&v33->_2.bitflags2 + 2) & 1) == 0 )
        v33 = (Il2CppClass *)sub_1C47444(v32);
      if ( v31 )
      {
        result = (Il2CppObject *)sub_1C714EC(v31, v33);
        if ( result )
          return result;
        sub_1C719A4(v31);
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
  if ( (byte_4CC32CD & 1) == 0 )
  {
    this = (RecommendSupportSelectControl_o *)sub_1C713B0(&Method_CStateManager_RecommendSupportSelectControl__getState__);
    byte_4CC32CD = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C71608(this, method);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v29; // x21
  EventUpValSetupInfo_o *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct CStateManager_RecommendSupportSelectControl__o **p_fsm; // x21
  Il2CppObject *v38; // x22
  CStateManager_T__o *v39; // x23
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  CStateManager_T__o *v46; // x22
  Il2CppObject *v47; // x23
  CStateManager_T__o *v48; // x22
  Il2CppObject *v49; // x23
  CStateManager_T__o *v50; // x22
  Il2CppObject *v51; // x23
  CStateManager_T__o *v52; // x21
  Il2CppObject *v53; // x22
  RecommendSupportData_o *v54; // x21
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  System_Action_o *v61; // x21
  const MethodInfo *v62; // x2

  if ( (byte_4CC32CC & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CStateManager_RecommendSupportSelectControl___ctor__);
    sub_1C713B0(&Method_CStateManager_RecommendSupportSelectControl__add__);
    sub_1C713B0(&CStateManager_RecommendSupportSelectControl__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo);
    sub_1C713B0(&EventUpValSetupInfo_TypeInfo);
    sub_1C713B0(&RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo);
    sub_1C713B0(&RecommendSupportData_TypeInfo);
    sub_1C713B0(&RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo);
    sub_1C713B0(&RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_RecommendSupportSelectControl___c__DisplayClass44_0__Init_b__0__);
    sub_1C713B0(&RecommendSupportSelectControl___c__DisplayClass44_0_TypeInfo);
    byte_4CC32CC = 1;
  }
  v7 = sub_1C715FC(RecommendSupportSelectControl___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  this->fields._SceneJumpInfo_k__BackingField = sceneJumpInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int32_t)sceneJumpInfo,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v29 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  v30 = (EventUpValSetupInfo_o *)sub_1C715FC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_42015764(v30, v29, 0, 0, 0, 0);
  this->fields._EventSetupInfo_k__BackingField = v30;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  p_fsm = &this->fields.fsm;
  if ( this->fields.fsm )
    goto LABEL_12;
  v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  v39 = (CStateManager_T__o *)sub_1C715FC(CStateManager_RecommendSupportSelectControl__TypeInfo);
  CStateManager_object____ctor(
    v39,
    v38,
    4,
    (const MethodInfo_3394668 *)Method_CStateManager_RecommendSupportSelectControl___ctor__);
  *p_fsm = (struct CStateManager_RecommendSupportSelectControl__o *)v39;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fsm, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  v46 = (CStateManager_T__o *)*p_fsm;
  v47 = (Il2CppObject *)sub_1C715FC(RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo);
  System_Object___ctor(v47, 0);
  if ( !v46 )
    goto LABEL_14;
  CStateManager_object___add(
    v46,
    0,
    (IState_T__o *)v47,
    (const MethodInfo_3394710 *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v48 = (CStateManager_T__o *)*p_fsm;
  v49 = (Il2CppObject *)sub_1C715FC(RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo);
  System_Object___ctor(v49, 0);
  if ( !v48 )
    goto LABEL_14;
  CStateManager_object___add(
    v48,
    1,
    (IState_T__o *)v49,
    (const MethodInfo_3394710 *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v50 = (CStateManager_T__o *)*p_fsm;
  v51 = (Il2CppObject *)sub_1C715FC(RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo);
  System_Object___ctor(v51, 0);
  if ( !v50
    || (CStateManager_object___add(
          v50,
          2,
          (IState_T__o *)v51,
          (const MethodInfo_3394710 *)Method_CStateManager_RecommendSupportSelectControl__add__),
        v52 = (CStateManager_T__o *)*p_fsm,
        v53 = (Il2CppObject *)sub_1C715FC(RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo),
        System_Object___ctor(v53, 0),
        !v52) )
  {
LABEL_14:
    sub_1C71608(Instance, v9);
  }
  CStateManager_object___add(
    v52,
    3,
    (IState_T__o *)v53,
    (const MethodInfo_3394710 *)Method_CStateManager_RecommendSupportSelectControl__add__);
LABEL_12:
  v54 = (RecommendSupportData_o *)sub_1C715FC(RecommendSupportData_TypeInfo);
  RecommendSupportData___ctor(v54, 0);
  this->fields._RecommendSupportData_k__BackingField = v54;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._RecommendSupportData_k__BackingField,
    (int32_t)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  Instance = (DataManager_o *)this->fields._RecommendSupportData_k__BackingField;
  if ( !Instance )
    goto LABEL_14;
  RecommendSupportData__Init((RecommendSupportData_o *)Instance, this->fields._EventSetupInfo_k__BackingField, 0);
  EventTutorialMaster__CheckTutorial(0, 92, 0, 0, 0, 0, 0, 0);
  this->fields._IsEdit_k__BackingField = 0;
  v61 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v7,
    Method_RecommendSupportSelectControl___c__DisplayClass44_0__Init_b__0__,
    0);
  RecommendSupportSelectControl__GetAssets(this, v61, v62);
}


void RecommendSupportSelectControl__OpenDialog_object_(
        RecommendSupportSelectControl_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        int32_t index,
        const MethodInfo_31E59A8 *method)
{
  const MethodInfo_31E59A8_RGCTXs *rgctx_data; // x8
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
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&RecommendSupportCancelConfirmDialog_var);
    sub_1C713B0(&RecommendSupportMessageSelectDialog_var);
    sub_1C713B0(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C474A0();
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
        sub_1C71608(v17, v16);
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
  GrandQuestFolderBoardItem_o *p_cashedAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *cashedAssetData; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC32CA & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC32CA = 1;
  }
  cashedAssetData = this->fields.cashedAssetData;
  p_cashedAssetData = (GrandQuestFolderBoardItem_o *)&this->fields.cashedAssetData;
  v4 = cashedAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40808072(v4, 0);
  p_cashedAssetData->klass = 0;
  sub_1C71354(p_cashedAssetData, 0, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4CC32D0 & 1) == 0 )
  {
    sub_1C713B0(&Method_RecommendSupportSelectControl_ReturnScene__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC32D0 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22316/*"ng"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( Instance )
    {
      AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( Instance )
      {
        if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 39, 1, 0, 0);
            return;
          }
        }
      }
    }
    sub_1C71608(Instance, v9);
  }
  v5 = Method_RecommendSupportSelectControl_ReturnScene__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectControl_ReturnScene__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C713C8(Method_RecommendSupportSelectControl_ReturnScene__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
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

  if ( (byte_4CC32CE & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_RecommendSupportSelectControl__setState__);
    byte_4CC32CE = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C71608(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_339479C *)Method_CStateManager_RecommendSupportSelectControl__setState__);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportSelectControl__SetState_35126464(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        int32_t index,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4CC32CF & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_RecommendSupportSelectControl__setState__);
    byte_4CC32CF = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  this->fields._SelectIndex_k__BackingField = index;
  this->fields._IsEdit_k__BackingField = 1;
  if ( !fsm )
    sub_1C71608(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_339479C *)Method_CStateManager_RecommendSupportSelectControl__setState__);
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
    sub_1C71608(SelectMessageIds, v4);
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
    sub_1C71608(0, method);
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
    sub_1C71608(0, method);
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
    sub_1C71608(0, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EventSetupInfo_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._RecommendSupportData_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._RecommendSupportData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportSelectControl__set_SceneJumpInfo(
        RecommendSupportSelectControl_o *this,
        SceneJumpInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SceneJumpInfo_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA20F8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA20B0;
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
  if ( (byte_4CC32D2 & 1) == 0 )
  {
    sub_1C713B0(&RecommendSupportSelectControl_DialogState_TypeInfo);
    byte_4CC32D2 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(RecommendSupportSelectControl_DialogState_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void RecommendSupportSelectControl_DialogResultCallBack__EndInvoke(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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

  if ( (byte_4CC32D9 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CC32D9 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_31E56D8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v6);
      return;
    }
LABEL_12:
    sub_1C71608(Instance, v4);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CC32DA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C713B0(&Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__);
    sub_1C713B0(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    byte_4CC32DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_31E56D8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
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
    _9__2_0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v8, Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__, 0);
    static_fields = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !v6 )
LABEL_12:
    sub_1C71608(Instance, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC32DB & 1) == 0 )
  {
    sub_1C713B0(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    byte_4CC32DB = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_EquipSelectMenuState___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4CC32DC & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CC32DC = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_31E56D8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v6);
      return;
    }
LABEL_12:
    sub_1C71608(Instance, v4);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CC32DD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C713B0(&Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__);
    sub_1C713B0(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    byte_4CC32DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_31E56D8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
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
    _9__2_0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v8, Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__, 0);
    static_fields = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !v6 )
LABEL_12:
    sub_1C71608(Instance, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC32DE & 1) == 0 )
  {
    sub_1C713B0(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    byte_4CC32DE = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_QuestSelectMenuState___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4CC32D3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    byte_4CC32D3 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_31E56D8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__ReturnScene(Instance, (System_String_o *)StringLiteral_22486/*"ok"*/, v6);
      return;
    }
LABEL_12:
    sub_1C71608(Instance, v4);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CC32D4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C713B0(&Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__);
    sub_1C713B0(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    byte_4CC32D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_31E56D8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
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
    _9__2_0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2_0,
      v8,
      Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__,
      0);
    static_fields = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !v6 )
LABEL_12:
    sub_1C71608(Instance, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC32D5 & 1) == 0 )
  {
    sub_1C713B0(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    byte_4CC32D5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4CC32D6 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CC32D6 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_31E56D8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v6);
      return;
    }
LABEL_12:
    sub_1C71608(Instance, v4);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CC32D7 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C713B0(&Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__);
    sub_1C713B0(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    byte_4CC32D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_31E56D8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
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
    _9__2_0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v8, Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__, 0);
    static_fields = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !v6 )
LABEL_12:
    sub_1C71608(Instance, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC32D8 & 1) == 0 )
  {
    sub_1C713B0(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    byte_4CC32D8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_ServantSelectMenuState___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  char *_4__this; // x0
  const MethodInfo *v11; // x4
  struct RecommendSupportSelectControl_o *v12; // x8
  struct RecommendSupportSelectControl_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x4
  struct RecommendSupportSelectControl_o *v21; // x8
  struct RecommendSupportSelectControl_o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x4
  struct RecommendSupportSelectControl_o *v30; // x8
  struct RecommendSupportSelectControl_o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  const MethodInfo *v38; // x4
  struct RecommendSupportSelectControl_o *v39; // x8
  struct RecommendSupportSelectControl_o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  const MethodInfo *v47; // x4
  struct RecommendSupportSelectControl_o *v48; // x8
  struct RecommendSupportSelectControl_o *v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  const MethodInfo *v56; // x4
  struct RecommendSupportSelectControl_o *v57; // x8
  struct RecommendSupportSelectControl_o *v58; // x20
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  UnityEngine_GameObject_o *v65; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *v66; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *v67; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v68; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v69; // [xsp+20h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *prefabObject; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4CC32E0 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___);
    sub_1C713B0(&StringLiteral_11230/*"RecommendSupportEquipSelectListMenuPrefab"*/);
    sub_1C713B0(&StringLiteral_11234/*"RecommendSupportSelectMenuPrefab"*/);
    sub_1C713B0(&StringLiteral_11232/*"RecommendSupportMessageSelectDialogPrefab"*/);
    sub_1C713B0(&StringLiteral_11229/*"RecommendSupportCancelConfirmDialogPrefab"*/);
    sub_1C713B0(&StringLiteral_11233/*"RecommendSupportQuestSelectMenuPrefab"*/);
    sub_1C713B0(&StringLiteral_11238/*"RecommendSupportServantSelectMenuPrefab"*/);
    byte_4CC32E0 = 1;
  }
  v69 = 0;
  prefabObject = 0;
  v67 = 0;
  v68 = 0;
  v65 = 0;
  v66 = 0;
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  *((_QWORD *)_4__this + 4) = assetData;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(_4__this + 32), (int32_t)assetData, (int32_t)method, v3, v4, v5, v6, v7);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &prefabObject,
    (System_String_o *)StringLiteral_11234/*"RecommendSupportSelectMenuPrefab"*/,
    v12->fields.cashedAssetData,
    v11);
  _4__this = (char *)prefabObject;
  if ( !prefabObject )
    goto LABEL_23;
  v13 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       prefabObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___);
  if ( !v13 )
    goto LABEL_23;
  v13->fields.mainMenu = (struct RecommendSupportSelectListViewMenu_o *)_4__this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v13->fields.mainMenu, (int32_t)_4__this, v14, v15, v16, v17, v18, v19);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v69,
    (System_String_o *)StringLiteral_11238/*"RecommendSupportServantSelectMenuPrefab"*/,
    v21->fields.cashedAssetData,
    v20);
  _4__this = (char *)v69;
  if ( !v69 )
    goto LABEL_23;
  v22 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v69,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___);
  if ( !v22 )
    goto LABEL_23;
  v22->fields.servantSelectMenu = (struct RecommendSupportServantSelectListMenu_o *)_4__this;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v22->fields.servantSelectMenu,
    (int32_t)_4__this,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v30 = this->fields.__4__this;
  if ( !v30 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v68,
    (System_String_o *)StringLiteral_11230/*"RecommendSupportEquipSelectListMenuPrefab"*/,
    v30->fields.cashedAssetData,
    v29);
  _4__this = (char *)v68;
  if ( !v68 )
    goto LABEL_23;
  v31 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v68,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___);
  if ( !v31 )
    goto LABEL_23;
  v31->fields.equipSelectMenu = (struct RecommendSupportEquipSelectListMenu_o *)_4__this;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v31->fields.equipSelectMenu,
    (int32_t)_4__this,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v39 = this->fields.__4__this;
  if ( !v39 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v67,
    (System_String_o *)StringLiteral_11233/*"RecommendSupportQuestSelectMenuPrefab"*/,
    v39->fields.cashedAssetData,
    v38);
  _4__this = (char *)v67;
  if ( !v67 )
    goto LABEL_23;
  v40 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v67,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___);
  if ( !v40 )
    goto LABEL_23;
  v40->fields.questSelectMenu = (struct RecommendSupportQuestSelectListMenu_o *)_4__this;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v40->fields.questSelectMenu,
    (int32_t)_4__this,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v48 = this->fields.__4__this;
  if ( !v48 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v66,
    (System_String_o *)StringLiteral_11232/*"RecommendSupportMessageSelectDialogPrefab"*/,
    v48->fields.cashedAssetData,
    v47);
  _4__this = (char *)v66;
  if ( !v66 )
    goto LABEL_23;
  v49 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v66,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___);
  if ( !v49
    || (v49->fields.messageSelectDialog = (struct RecommendSupportMessageSelectDialog_o *)_4__this,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v49->fields.messageSelectDialog,
          (int32_t)_4__this,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55),
        (v57 = this->fields.__4__this) == 0)
    || (RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
          this,
          &v65,
          (System_String_o *)StringLiteral_11229/*"RecommendSupportCancelConfirmDialogPrefab"*/,
          v57->fields.cashedAssetData,
          v56),
        (_4__this = (char *)v65) == 0)
    || (v58 = this->fields.__4__this,
        _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                             v65,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___),
        !v58) )
  {
LABEL_23:
    sub_1C71608(_4__this, assetData);
  }
  v58->fields.cancelConfirmDialog = (struct RecommendSupportCancelConfirmDialog_o *)_4__this;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v58->fields.cancelConfirmDialog,
    (int32_t)_4__this,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  v8 = this;
  if ( (byte_4CC32DF & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC32DF = 1;
  }
  if ( !assetData
    || (this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)AssetData__GetObject_object__51560868(
                                                                          assetData,
                                                                          prefabName,
                                                                          (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968),
        (_4__this = v8->fields.__4__this) == 0)
    || (v10 = (Il2CppObject *)this,
        (this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)_4__this->fields.rootObject) == 0) )
  {
    sub_1C71608(this, prefabObject);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object__52264420(
          v10,
          transform,
          (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78725064);
  *prefabObject = (UnityEngine_GameObject_o *)v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)prefabObject, (int32_t)v12, v13, v14, v15, v16, v17, v18);
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
    sub_1C71608(this, method);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}