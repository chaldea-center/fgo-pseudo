void __fastcall RecommendSupportSelectControl___ctor(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5741F & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__);
    byte_4A5741F = 1;
  }
  this->fields._SelectIndex_k__BackingField = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__);
}


void __fastcall RecommendSupportSelectControl__Awake(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A57419 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__);
    byte_4A57419 = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739A3C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__);
}


void __fastcall RecommendSupportSelectControl__GetAssets(
        RecommendSupportSelectControl_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  AssetLoader_LoadEndDataHandler_o *v12; // x19

  if ( (byte_4A57417 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportSelectControl___c__DisplayClass41_0__GetAssets_b__1__);
    sub_1B885B0(&RecommendSupportSelectControl___c__DisplayClass41_0_TypeInfo);
    sub_1B885B0(&StringLiteral_10562/*"PartyOrganization/RecommendSupport"*/);
    byte_4A57417 = 1;
  }
  v5 = sub_1B887FC(RecommendSupportSelectControl___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)finishCallback, v10, v11);
  if ( GameObjectExtensions__HasChild(this->fields.rootObject, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0LL);
  }
  else
  {
    v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v12,
      (Il2CppObject *)v5,
      Method_RecommendSupportSelectControl___c__DisplayClass41_0__GetAssets_b__1__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_10562/*"PartyOrganization/RecommendSupport"*/, v12, 1, 0LL);
  }
}


Il2CppObject *__fastcall RecommendSupportSelectControl__GetDialog_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_2F105F0 *method)
{
  const MethodInfo_2F105F0_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x22
  UnityEngine_Object_o *messageSelectDialog; // x21
  intptr_t v8; // w21
  System_Type_o *v9; // x0
  intptr_t v10; // w21
  System_Type_o *v11; // x0
  __int64 v12; // x1
  bool v13; // w8
  Il2CppObject *result; // x0
  System_Type_o *Type; // x20
  Il2CppType *v16; // x22
  System_Type_o *v17; // x0
  bool v18; // w8
  Il2CppClass *_1_T; // x1
  __int64 v20; // x20
  Il2CppClass *v21; // x19
  System_RuntimeTypeHandle_o v22; // 0:w0.4
  System_RuntimeTypeHandle_o v23; // 0:w0.4
  System_RuntimeTypeHandle_o v24; // 0:w0.4
  System_RuntimeTypeHandle_o v25; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&RecommendSupportCancelConfirmDialog_var);
    sub_1B885B0(&RecommendSupportMessageSelectDialog_var);
    sub_1B885B0(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v22.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v22, 0LL);
  messageSelectDialog = 0LL;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0LL) == 1 )
  {
    v8 = (int)RecommendSupportMessageSelectDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v23.fields.value = v8;
    v9 = System_Type__GetTypeFromHandle(v23, 0LL);
    if ( System_Type__op_Equality(TypeFromHandle, v9, 0LL) )
    {
      messageSelectDialog = (UnityEngine_Object_o *)this->fields.messageSelectDialog;
    }
    else
    {
      v10 = (int)RecommendSupportCancelConfirmDialog_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v24.fields.value = v10;
      v11 = System_Type__GetTypeFromHandle(v24, 0LL);
      messageSelectDialog = 0LL;
      if ( System_Type__op_Equality(TypeFromHandle, v11, 0LL) )
        messageSelectDialog = (UnityEngine_Object_o *)this->fields.cancelConfirmDialog;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Inequality(messageSelectDialog, 0LL, 0LL);
  result = 0LL;
  if ( v13 )
  {
    if ( !messageSelectDialog )
      sub_1B8880C(0LL, v12);
    Type = System_Object__GetType((Il2CppObject *)messageSelectDialog, 0LL);
    v16 = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v25.fields.value = (int)v16;
    v17 = System_Type__GetTypeFromHandle(v25, 0LL);
    v18 = System_Type__op_Equality(Type, v17, 0LL);
    result = 0LL;
    if ( v18 )
    {
      _1_T = method->rgctx_data->_1_T;
      if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_1_T);
      v20 = sub_1B886EC(messageSelectDialog, _1_T);
      v21 = method->rgctx_data->_1_T;
      if ( (BYTE5(v21->vtable[0].methodPtr) & 1) == 0 )
        v21 = (Il2CppClass *)sub_1BDA48C(v21);
      if ( v20 )
      {
        result = (Il2CppObject *)sub_1B886EC(v20, v21);
        if ( result )
          return result;
        sub_1B88ACC(v20);
      }
      return 0LL;
    }
  }
  return result;
}


Il2CppObject *__fastcall RecommendSupportSelectControl__GetMenu_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_2F10820 *method)
{
  const MethodInfo_2F10820_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x21
  UnityEngine_Object_o *mainMenu; // x22
  intptr_t v8; // w22
  System_Type_o *v9; // x0
  intptr_t v10; // w22
  System_Type_o *v11; // x0
  intptr_t v12; // w22
  System_Type_o *v13; // x0
  intptr_t v14; // w22
  System_Type_o *v15; // x0
  __int64 v16; // x1
  bool v17; // w8
  Il2CppObject *result; // x0
  System_Type_o *Type; // x20
  Il2CppType *v20; // x21
  System_Type_o *v21; // x0
  bool v22; // w8
  Il2CppClass *_1_T; // x1
  __int64 v24; // x20
  Il2CppClass *v25; // x19
  System_RuntimeTypeHandle_o v26; // 0:w0.4
  System_RuntimeTypeHandle_o v27; // 0:w0.4
  System_RuntimeTypeHandle_o v28; // 0:w0.4
  System_RuntimeTypeHandle_o v29; // 0:w0.4
  System_RuntimeTypeHandle_o v30; // 0:w0.4
  System_RuntimeTypeHandle_o v31; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&RecommendSupportEquipSelectListMenu_var);
    sub_1B885B0(&RecommendSupportQuestSelectListMenu_var);
    sub_1B885B0(&RecommendSupportSelectListViewMenu_var);
    sub_1B885B0(&RecommendSupportServantSelectListMenu_var);
    sub_1B885B0(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v26.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v26, 0LL);
  mainMenu = 0LL;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0LL) == 1 )
  {
    v8 = (int)RecommendSupportSelectListViewMenu_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v27.fields.value = v8;
    v9 = System_Type__GetTypeFromHandle(v27, 0LL);
    if ( System_Type__op_Equality(TypeFromHandle, v9, 0LL) )
    {
      mainMenu = (UnityEngine_Object_o *)this->fields.mainMenu;
    }
    else
    {
      v10 = (int)RecommendSupportServantSelectListMenu_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v28.fields.value = v10;
      v11 = System_Type__GetTypeFromHandle(v28, 0LL);
      if ( System_Type__op_Equality(TypeFromHandle, v11, 0LL) )
      {
        mainMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
      }
      else
      {
        v12 = (int)RecommendSupportEquipSelectListMenu_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v29.fields.value = v12;
        v13 = System_Type__GetTypeFromHandle(v29, 0LL);
        if ( System_Type__op_Equality(TypeFromHandle, v13, 0LL) )
        {
          mainMenu = (UnityEngine_Object_o *)this->fields.equipSelectMenu;
        }
        else
        {
          v14 = (int)RecommendSupportQuestSelectListMenu_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v30.fields.value = v14;
          v15 = System_Type__GetTypeFromHandle(v30, 0LL);
          mainMenu = 0LL;
          if ( System_Type__op_Equality(TypeFromHandle, v15, 0LL) )
            mainMenu = (UnityEngine_Object_o *)this->fields.questSelectMenu;
        }
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Inequality(mainMenu, 0LL, 0LL);
  result = 0LL;
  if ( v17 )
  {
    if ( !mainMenu )
      sub_1B8880C(0LL, v16);
    Type = System_Object__GetType((Il2CppObject *)mainMenu, 0LL);
    v20 = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v31.fields.value = (int)v20;
    v21 = System_Type__GetTypeFromHandle(v31, 0LL);
    v22 = System_Type__op_Equality(Type, v21, 0LL);
    result = 0LL;
    if ( v22 )
    {
      _1_T = method->rgctx_data->_1_T;
      if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_1_T);
      v24 = sub_1B886EC(mainMenu, _1_T);
      v25 = method->rgctx_data->_1_T;
      if ( (BYTE5(v25->vtable[0].methodPtr) & 1) == 0 )
        v25 = (Il2CppClass *)sub_1BDA48C(v25);
      if ( v24 )
      {
        result = (Il2CppObject *)sub_1B886EC(v24, v25);
        if ( result )
          return result;
        sub_1B88ACC(v24);
      }
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall RecommendSupportSelectControl__GetState(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  RecommendSupportSelectControl_o *v2; // x19
  struct CStateManager_RecommendSupportSelectControl__o *fsm; // x8

  v2 = this;
  if ( (byte_4A5741B & 1) == 0 )
  {
    this = (RecommendSupportSelectControl_o *)sub_1B885B0(&Method_CStateManager_RecommendSupportSelectControl__getState__);
    byte_4A5741B = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1B8880C(this, method);
  return fsm->fields.m_state;
}


void __fastcall RecommendSupportSelectControl__Init(
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v17; // x21
  EventUpValSetupInfo_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  struct CStateManager_RecommendSupportSelectControl__o **p_fsm; // x21
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
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
  int32_t v36; // w3
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x2

  if ( (byte_4A5741A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CStateManager_RecommendSupportSelectControl___ctor__);
    sub_1B885B0(&Method_CStateManager_RecommendSupportSelectControl__add__);
    sub_1B885B0(&CStateManager_RecommendSupportSelectControl__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo);
    sub_1B885B0(&RecommendSupportData_TypeInfo);
    sub_1B885B0(&RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo);
    sub_1B885B0(&RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_RecommendSupportSelectControl___c__DisplayClass44_0__Init_b__0__);
    sub_1B885B0(&RecommendSupportSelectControl___c__DisplayClass44_0_TypeInfo);
    byte_4A5741A = 1;
  }
  v7 = sub_1B887FC(RecommendSupportSelectControl___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  this->fields._SceneJumpInfo_k__BackingField = sceneJumpInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int32_t)sceneJumpInfo,
    v14,
    v15);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
  v17 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  v18 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38910068(v18, v17, 0, 0, 0, 0LL);
  this->fields._EventSetupInfo_k__BackingField = v18;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)v18,
    v19,
    v20);
  p_fsm = &this->fields.fsm;
  if ( this->fields.fsm )
    goto LABEL_12;
  v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  v23 = (CStateManager_T__o *)sub_1B887FC(CStateManager_RecommendSupportSelectControl__TypeInfo);
  CStateManager_object____ctor(
    v23,
    v22,
    4,
    (const MethodInfo_30AAD34 *)Method_CStateManager_RecommendSupportSelectControl___ctor__);
  *p_fsm = (struct CStateManager_RecommendSupportSelectControl__o *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)v23, v24, v25);
  v26 = (CStateManager_T__o *)*p_fsm;
  v27 = (Il2CppObject *)sub_1B887FC(RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo);
  System_Object___ctor(v27, 0LL);
  if ( !v26 )
    goto LABEL_14;
  CStateManager_object___add(
    v26,
    0,
    (IState_T__o *)v27,
    (const MethodInfo_30AADDC *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v28 = (CStateManager_T__o *)*p_fsm;
  v29 = (Il2CppObject *)sub_1B887FC(RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo);
  System_Object___ctor(v29, 0LL);
  if ( !v28 )
    goto LABEL_14;
  CStateManager_object___add(
    v28,
    1,
    (IState_T__o *)v29,
    (const MethodInfo_30AADDC *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v30 = (CStateManager_T__o *)*p_fsm;
  v31 = (Il2CppObject *)sub_1B887FC(RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo);
  System_Object___ctor(v31, 0LL);
  if ( !v30
    || (CStateManager_object___add(
          v30,
          2,
          (IState_T__o *)v31,
          (const MethodInfo_30AADDC *)Method_CStateManager_RecommendSupportSelectControl__add__),
        v32 = (CStateManager_T__o *)*p_fsm,
        v33 = (Il2CppObject *)sub_1B887FC(RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo),
        System_Object___ctor(v33, 0LL),
        !v32) )
  {
LABEL_14:
    sub_1B8880C(Instance, v9);
  }
  CStateManager_object___add(
    v32,
    3,
    (IState_T__o *)v33,
    (const MethodInfo_30AADDC *)Method_CStateManager_RecommendSupportSelectControl__add__);
LABEL_12:
  v34 = (RecommendSupportData_o *)sub_1B887FC(RecommendSupportData_TypeInfo);
  RecommendSupportData___ctor(v34, 0LL);
  this->fields._RecommendSupportData_k__BackingField = v34;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._RecommendSupportData_k__BackingField,
    (int32_t)v34,
    v35,
    v36);
  Instance = (DataManager_o *)this->fields._RecommendSupportData_k__BackingField;
  if ( !Instance )
    goto LABEL_14;
  RecommendSupportData__Init((RecommendSupportData_o *)Instance, this->fields._EventSetupInfo_k__BackingField, 0LL);
  EventTutorialMaster__CheckTutorial(0, 92, 0LL, 0, 0, 0, 0, 0LL);
  this->fields._IsEdit_k__BackingField = 0;
  v37 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_RecommendSupportSelectControl___c__DisplayClass44_0__Init_b__0__,
    0LL);
  RecommendSupportSelectControl__GetAssets(this, v37, v38);
}


void __fastcall RecommendSupportSelectControl__OpenDialog_object_(
        RecommendSupportSelectControl_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        int32_t index,
        const MethodInfo_2F10AF0 *method)
{
  const MethodInfo_2F10AF0_RGCTXs *rgctx_data; // x8
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x21
  intptr_t v11; // w22
  System_Type_o *v12; // x0
  UnityEngine_Object_o *messageSelectDialog; // x22
  __int64 v14; // x1
  RecommendSupportMessageSelectDialog_o *v15; // x0
  intptr_t v16; // w22
  System_Type_o *v17; // x0
  UnityEngine_Object_o *cancelConfirmDialog; // x21
  System_RuntimeTypeHandle_o v19; // 0:w0.4
  System_RuntimeTypeHandle_o v20; // 0:w0.4
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&RecommendSupportCancelConfirmDialog_var);
    sub_1B885B0(&RecommendSupportMessageSelectDialog_var);
    sub_1B885B0(&System_Type_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v19.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v19, 0LL);
  this->fields._SelectIndex_k__BackingField = index;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0LL) == 1 )
  {
    v11 = (int)RecommendSupportMessageSelectDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v20.fields.value = v11;
    v12 = System_Type__GetTypeFromHandle(v20, 0LL);
    if ( System_Type__op_Equality(TypeFromHandle, v12, 0LL) )
    {
      messageSelectDialog = (UnityEngine_Object_o *)this->fields.messageSelectDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(messageSelectDialog, 0LL, 0LL) )
      {
        v15 = this->fields.messageSelectDialog;
        this->fields._IsEdit_k__BackingField = 1;
        if ( v15 )
        {
          RecommendSupportMessageSelectDialog__Open(v15, callback, 0LL);
          return;
        }
LABEL_24:
        sub_1B8880C(v15, v14);
      }
    }
    v16 = (int)RecommendSupportCancelConfirmDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v21.fields.value = v16;
    v17 = System_Type__GetTypeFromHandle(v21, 0LL);
    if ( System_Type__op_Equality(TypeFromHandle, v17, 0LL) )
    {
      cancelConfirmDialog = (UnityEngine_Object_o *)this->fields.cancelConfirmDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(cancelConfirmDialog, 0LL, 0LL) )
      {
        v15 = (RecommendSupportMessageSelectDialog_o *)this->fields.cancelConfirmDialog;
        if ( !v15 )
          goto LABEL_24;
        RecommendSupportCancelConfirmDialog__Open((RecommendSupportCancelConfirmDialog_o *)v15, callback, 0LL);
      }
    }
  }
}


void __fastcall RecommendSupportSelectControl__ReleaseAsset(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_cashedAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *cashedAssetData; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A57418 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A57418 = 1;
  }
  cashedAssetData = this->fields.cashedAssetData;
  p_cashedAssetData = (ServantStatusBattleListViewItem_o *)&this->fields.cashedAssetData;
  v4 = cashedAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_37790656(v4, 0LL);
  p_cashedAssetData->klass = 0LL;
  sub_1B88554(p_cashedAssetData, 0, v6, v7);
}


void __fastcall RecommendSupportSelectControl__ReturnScene(
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

  if ( (byte_4A5741E & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportSelectControl_ReturnScene__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5741E = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( Instance )
    {
      AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( Instance )
      {
        if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__popScene((AvalonSceneManager_o *)Instance, 1, 0LL, 0LL);
            return;
          }
        }
        else
        {
          SceneJumpInfo_k__BackingField = this->fields._SceneJumpInfo_k__BackingField;
          if ( SceneJumpInfo_k__BackingField && SceneJumpInfo__ReturnScene(SceneJumpInfo_k__BackingField, 0LL) )
            return;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 39, 1, 0LL, 0LL);
            return;
          }
        }
      }
    }
    sub_1B8880C(Instance, v9);
  }
  v5 = Method_RecommendSupportSelectControl_ReturnScene__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectControl_ReturnScene__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_RecommendSupportSelectControl_ReturnScene__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  RecommendSupportSelectControl__SetState(this, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectControl__SetState(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4A5741C & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_RecommendSupportSelectControl__setState__);
    byte_4A5741C = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_RecommendSupportSelectControl__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectControl__SetState_32502888(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        int32_t index,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4A5741D & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_RecommendSupportSelectControl__setState__);
    byte_4A5741D = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  this->fields._SelectIndex_k__BackingField = index;
  this->fields._IsEdit_k__BackingField = 1;
  if ( !fsm )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_RecommendSupportSelectControl__setState__);
}


EventUpValSetupInfo_o *__fastcall RecommendSupportSelectControl__get_EventSetupInfo(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._EventSetupInfo_k__BackingField;
}


System_String_o *__fastcall RecommendSupportSelectControl__get_GetMessageSentence(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x19
  System_Int32_array *SelectMessageIds; // x0
  __int64 v4; // x1

  RecommendSupportData_k__BackingField = this->fields._RecommendSupportData_k__BackingField;
  SelectMessageIds = RecommendSupportSelectControl__get_SelectMessageIds(this, method);
  if ( !RecommendSupportData_k__BackingField )
    sub_1B8880C(SelectMessageIds, v4);
  return RecommendSupportData__GetMessageSentence(RecommendSupportData_k__BackingField, SelectMessageIds, 0LL);
}


bool __fastcall RecommendSupportSelectControl__get_IsEdit(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEdit_k__BackingField;
}


RecommendSupportData_o *__fastcall RecommendSupportSelectControl__get_RecommendSupportData(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._RecommendSupportData_k__BackingField;
}


SceneJumpInfo_o *__fastcall RecommendSupportSelectControl__get_SceneJumpInfo(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._SceneJumpInfo_k__BackingField;
}


int64_t __fastcall RecommendSupportSelectControl__get_SelectEquipId(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x0

  RecommendSupportData_k__BackingField = this->fields._RecommendSupportData_k__BackingField;
  if ( !RecommendSupportData_k__BackingField )
    sub_1B8880C(0LL, method);
  return RecommendSupportData__GetEquip(
           RecommendSupportData_k__BackingField,
           this->fields._SelectIndex_k__BackingField,
           0LL);
}


int32_t __fastcall RecommendSupportSelectControl__get_SelectIndex(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectIndex_k__BackingField;
}


System_Int32_array *__fastcall RecommendSupportSelectControl__get_SelectMessageIds(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x0

  RecommendSupportData_k__BackingField = this->fields._RecommendSupportData_k__BackingField;
  if ( !RecommendSupportData_k__BackingField )
    sub_1B8880C(0LL, method);
  return RecommendSupportData__GetMessage(
           RecommendSupportData_k__BackingField,
           this->fields._SelectIndex_k__BackingField,
           0LL);
}


int64_t __fastcall RecommendSupportSelectControl__get_SelectServantId(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x0

  RecommendSupportData_k__BackingField = this->fields._RecommendSupportData_k__BackingField;
  if ( !RecommendSupportData_k__BackingField )
    sub_1B8880C(0LL, method);
  return RecommendSupportData__GetServant(
           RecommendSupportData_k__BackingField,
           this->fields._SelectIndex_k__BackingField,
           0LL);
}


void __fastcall RecommendSupportSelectControl__set_EventSetupInfo(
        RecommendSupportSelectControl_o *this,
        EventUpValSetupInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._EventSetupInfo_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecommendSupportSelectControl__set_IsEdit(
        RecommendSupportSelectControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEdit_k__BackingField = value;
}


void __fastcall RecommendSupportSelectControl__set_RecommendSupportData(
        RecommendSupportSelectControl_o *this,
        RecommendSupportData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._RecommendSupportData_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._RecommendSupportData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecommendSupportSelectControl__set_SceneJumpInfo(
        RecommendSupportSelectControl_o *this,
        SceneJumpInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SceneJumpInfo_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecommendSupportSelectControl__set_SelectIndex(
        RecommendSupportSelectControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectIndex_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectControl_DialogResultCallBack___ctor(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C9C18;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9BD0;
}


System_IAsyncResult_o *__fastcall RecommendSupportSelectControl_DialogResultCallBack__BeginInvoke(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4A57420 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportSelectControl_DialogState_TypeInfo);
    byte_4A57420 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(RecommendSupportSelectControl_DialogState_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall RecommendSupportSelectControl_DialogResultCallBack__EndInvoke(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall RecommendSupportSelectControl_DialogResultCallBack__Invoke(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall RecommendSupportSelectControl_EquipSelectMenuState___ctor(
        RecommendSupportSelectControl_EquipSelectMenuState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectControl_EquipSelectMenuState__begin(
        RecommendSupportSelectControl_EquipSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A57427 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A57427 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_2F10820 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v6);
      return;
    }
LABEL_12:
    sub_1B8880C(Instance, v4);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0LL);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  RecommendSupportEquipSelectListMenu__Open((RecommendSupportEquipSelectListMenu_o *)Menu_object, 0LL);
}


void __fastcall RecommendSupportSelectControl_EquipSelectMenuState__end(
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

  if ( (byte_4A57428 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__);
    sub_1B885B0(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    byte_4A57428 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2F10820 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
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
    _9__2_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v8, Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__, 0LL);
    static_fields = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11);
  }
  if ( !v6 )
LABEL_12:
    sub_1B8880C(Instance, v4);
  BaseMenu__Close(v6, _9__2_0, 0LL);
}


void __fastcall RecommendSupportSelectControl_EquipSelectMenuState__update(
        RecommendSupportSelectControl_EquipSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportSelectControl_EquipSelectMenuState___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57429 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    byte_4A57429 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_EquipSelectMenuState___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall RecommendSupportSelectControl_EquipSelectMenuState___c___ctor(
        RecommendSupportSelectControl_EquipSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectControl_EquipSelectMenuState___c___end_b__2_0(
        RecommendSupportSelectControl_EquipSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportSelectControl_QuestSelectMenuState___ctor(
        RecommendSupportSelectControl_QuestSelectMenuState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectControl_QuestSelectMenuState__begin(
        RecommendSupportSelectControl_QuestSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  if ( (byte_4A5742A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A5742A = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_2F10820 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v6);
      return;
    }
LABEL_12:
    sub_1B8880C(Instance, v4);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0LL);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  RecommendSupportQuestSelectListMenu__Open((RecommendSupportQuestSelectListMenu_o *)Menu_object, v7);
}


void __fastcall RecommendSupportSelectControl_QuestSelectMenuState__end(
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

  if ( (byte_4A5742B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__);
    sub_1B885B0(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    byte_4A5742B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2F10820 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
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
    _9__2_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v8, Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__, 0LL);
    static_fields = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11);
  }
  if ( !v6 )
LABEL_12:
    sub_1B8880C(Instance, v4);
  BaseMenu__Close(v6, _9__2_0, 0LL);
}


void __fastcall RecommendSupportSelectControl_QuestSelectMenuState__update(
        RecommendSupportSelectControl_QuestSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportSelectControl_QuestSelectMenuState___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5742C & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    byte_4A5742C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_QuestSelectMenuState___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall RecommendSupportSelectControl_QuestSelectMenuState___c___ctor(
        RecommendSupportSelectControl_QuestSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectControl_QuestSelectMenuState___c___end_b__2_0(
        RecommendSupportSelectControl_QuestSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportSelectControl_RecommendSupportSelectMenuState___ctor(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectControl_RecommendSupportSelectMenuState__begin(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  if ( (byte_4A57421 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A57421 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_2F10820 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__ReturnScene(Instance, (System_String_o *)StringLiteral_22225/*"ok"*/, v6);
      return;
    }
LABEL_12:
    sub_1B8880C(Instance, v4);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0LL);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  RecommendSupportSelectListViewMenu__Open((RecommendSupportSelectListViewMenu_o *)Menu_object, v7);
}


void __fastcall RecommendSupportSelectControl_RecommendSupportSelectMenuState__end(
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

  if ( (byte_4A57422 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__);
    sub_1B885B0(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    byte_4A57422 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2F10820 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
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
    _9__2_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2_0,
      v8,
      Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__,
      0LL);
    static_fields = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11);
  }
  if ( !v6 )
LABEL_12:
    sub_1B8880C(Instance, v4);
  BaseMenu__Close(v6, _9__2_0, 0LL);
}


void __fastcall RecommendSupportSelectControl_RecommendSupportSelectMenuState__update(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportSelectControl_RecommendSupportSelectMenuState___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57423 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    byte_4A57423 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall RecommendSupportSelectControl_RecommendSupportSelectMenuState___c___ctor(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectControl_RecommendSupportSelectMenuState___c___end_b__2_0(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportSelectControl_ServantSelectMenuState___ctor(
        RecommendSupportSelectControl_ServantSelectMenuState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectControl_ServantSelectMenuState__begin(
        RecommendSupportSelectControl_ServantSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A57424 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A57424 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_2F10820 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v6);
      return;
    }
LABEL_12:
    sub_1B8880C(Instance, v4);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0LL);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  RecommendSupportServantSelectListMenu__Open((RecommendSupportServantSelectListMenu_o *)Menu_object, 0LL);
}


void __fastcall RecommendSupportSelectControl_ServantSelectMenuState__end(
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

  if ( (byte_4A57425 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__);
    sub_1B885B0(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    byte_4A57425 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2F10820 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
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
    _9__2_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2_0,
      v8,
      Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__,
      0LL);
    static_fields = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v10, v11);
  }
  if ( !v6 )
LABEL_12:
    sub_1B8880C(Instance, v4);
  BaseMenu__Close(v6, _9__2_0, 0LL);
}


void __fastcall RecommendSupportSelectControl_ServantSelectMenuState__update(
        RecommendSupportSelectControl_ServantSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportSelectControl_ServantSelectMenuState___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57426 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    byte_4A57426 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_ServantSelectMenuState___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall RecommendSupportSelectControl_ServantSelectMenuState___c___ctor(
        RecommendSupportSelectControl_ServantSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectControl_ServantSelectMenuState___c___end_b__2_0(
        RecommendSupportSelectControl_ServantSelectMenuState___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportSelectControl___c__DisplayClass41_0___ctor(
        RecommendSupportSelectControl___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_b__1(
        RecommendSupportSelectControl___c__DisplayClass41_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  char *_4__this; // x0
  const MethodInfo *v7; // x4
  struct RecommendSupportSelectControl_o *v8; // x8
  struct RecommendSupportSelectControl_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x4
  struct RecommendSupportSelectControl_o *v13; // x8
  struct RecommendSupportSelectControl_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x4
  struct RecommendSupportSelectControl_o *v18; // x8
  struct RecommendSupportSelectControl_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x4
  struct RecommendSupportSelectControl_o *v23; // x8
  struct RecommendSupportSelectControl_o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x4
  struct RecommendSupportSelectControl_o *v28; // x8
  struct RecommendSupportSelectControl_o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x4
  struct RecommendSupportSelectControl_o *v33; // x8
  struct RecommendSupportSelectControl_o *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  UnityEngine_GameObject_o *v37; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *v38; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *v39; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v40; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v41; // [xsp+20h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *prefabObject; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4A5742E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___);
    sub_1B885B0(&StringLiteral_11197/*"RecommendSupportEquipSelectListMenuPrefab"*/);
    sub_1B885B0(&StringLiteral_11201/*"RecommendSupportSelectMenuPrefab"*/);
    sub_1B885B0(&StringLiteral_11199/*"RecommendSupportMessageSelectDialogPrefab"*/);
    sub_1B885B0(&StringLiteral_11196/*"RecommendSupportCancelConfirmDialogPrefab"*/);
    sub_1B885B0(&StringLiteral_11200/*"RecommendSupportQuestSelectMenuPrefab"*/);
    sub_1B885B0(&StringLiteral_11205/*"RecommendSupportServantSelectMenuPrefab"*/);
    byte_4A5742E = 1;
  }
  v41 = 0LL;
  prefabObject = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  *((_QWORD *)_4__this + 4) = assetData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(_4__this + 32), (int32_t)assetData, (int32_t)method, v3);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &prefabObject,
    (System_String_o *)StringLiteral_11201/*"RecommendSupportSelectMenuPrefab"*/,
    v8->fields.cashedAssetData,
    v7);
  _4__this = (char *)prefabObject;
  if ( !prefabObject )
    goto LABEL_23;
  v9 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       prefabObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___);
  if ( !v9 )
    goto LABEL_23;
  v9->fields.mainMenu = (struct RecommendSupportSelectListViewMenu_o *)_4__this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->fields.mainMenu, (int32_t)_4__this, v10, v11);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v41,
    (System_String_o *)StringLiteral_11205/*"RecommendSupportServantSelectMenuPrefab"*/,
    v13->fields.cashedAssetData,
    v12);
  _4__this = (char *)v41;
  if ( !v41 )
    goto LABEL_23;
  v14 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v41,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___);
  if ( !v14 )
    goto LABEL_23;
  v14->fields.servantSelectMenu = (struct RecommendSupportServantSelectListMenu_o *)_4__this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.servantSelectMenu, (int32_t)_4__this, v15, v16);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v40,
    (System_String_o *)StringLiteral_11197/*"RecommendSupportEquipSelectListMenuPrefab"*/,
    v18->fields.cashedAssetData,
    v17);
  _4__this = (char *)v40;
  if ( !v40 )
    goto LABEL_23;
  v19 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v40,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___);
  if ( !v19 )
    goto LABEL_23;
  v19->fields.equipSelectMenu = (struct RecommendSupportEquipSelectListMenu_o *)_4__this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->fields.equipSelectMenu, (int32_t)_4__this, v20, v21);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v39,
    (System_String_o *)StringLiteral_11200/*"RecommendSupportQuestSelectMenuPrefab"*/,
    v23->fields.cashedAssetData,
    v22);
  _4__this = (char *)v39;
  if ( !v39 )
    goto LABEL_23;
  v24 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v39,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___);
  if ( !v24 )
    goto LABEL_23;
  v24->fields.questSelectMenu = (struct RecommendSupportQuestSelectListMenu_o *)_4__this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->fields.questSelectMenu, (int32_t)_4__this, v25, v26);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v38,
    (System_String_o *)StringLiteral_11199/*"RecommendSupportMessageSelectDialogPrefab"*/,
    v28->fields.cashedAssetData,
    v27);
  _4__this = (char *)v38;
  if ( !v38 )
    goto LABEL_23;
  v29 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v38,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___);
  if ( !v29
    || (v29->fields.messageSelectDialog = (struct RecommendSupportMessageSelectDialog_o *)_4__this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->fields.messageSelectDialog, (int32_t)_4__this, v30, v31),
        (v33 = this->fields.__4__this) == 0LL)
    || (RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
          this,
          &v37,
          (System_String_o *)StringLiteral_11196/*"RecommendSupportCancelConfirmDialogPrefab"*/,
          v33->fields.cashedAssetData,
          v32),
        (_4__this = (char *)v37) == 0LL)
    || (v34 = this->fields.__4__this,
        _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                             v37,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___),
        !v34) )
  {
LABEL_23:
    sub_1B8880C(_4__this, assetData);
  }
  v34->fields.cancelConfirmDialog = (struct RecommendSupportCancelConfirmDialog_o *)_4__this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->fields.cancelConfirmDialog, (int32_t)_4__this, v35, v36);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
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

  v8 = this;
  if ( (byte_4A5742D & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5742D = 1;
  }
  if ( !assetData
    || (this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)AssetData__GetObject_object__48635516(
                                                                          assetData,
                                                                          prefabName,
                                                                          (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352),
        (_4__this = v8->fields.__4__this) == 0LL)
    || (v10 = (Il2CppObject *)this,
        (this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)_4__this->fields.rootObject) == 0LL) )
  {
    sub_1B8880C(this, prefabObject);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object__49297800(
          v10,
          transform,
          (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
  *prefabObject = (UnityEngine_GameObject_o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)prefabObject, (int32_t)v12, v13, v14);
}


void __fastcall RecommendSupportSelectControl___c__DisplayClass44_0___ctor(
        RecommendSupportSelectControl___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectControl___c__DisplayClass44_0___Init_b__0(
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
  RecommendSupportServantSelectListMenu__Init((RecommendSupportServantSelectListMenu_o *)this, 0LL);
  v5 = v3->fields.__4__this;
  if ( !v5 )
    goto LABEL_16;
  this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v5->fields.equipSelectMenu;
  if ( !this )
    goto LABEL_16;
  RecommendSupportEquipSelectListMenu__Init((RecommendSupportEquipSelectListMenu_o *)this, 0LL);
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
        (v8 = v3->fields.__4__this) == 0LL)
    || (this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v8->fields.cancelConfirmDialog) == 0LL
    || (RecommendSupportCancelConfirmDialog__Init((RecommendSupportCancelConfirmDialog_o *)this, 0LL),
        (this = (RecommendSupportSelectControl___c__DisplayClass44_0_o *)v3->fields.__4__this) == 0LL)
    || (RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)this, 0, v9),
        (callback = v3->fields.callback) == 0LL) )
  {
LABEL_16:
    sub_1B8880C(this, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}