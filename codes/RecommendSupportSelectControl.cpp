void __fastcall RecommendSupportSelectControl___ctor(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B62D5A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__, method);
    byte_4B62D5A = 1;
  }
  this->fields._SelectIndex_k__BackingField = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38291E0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__);
}


void __fastcall RecommendSupportSelectControl__Awake(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B62D54 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__, method);
    byte_4B62D54 = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38290EC *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__);
}


void __fastcall RecommendSupportSelectControl__GetAssets(
        RecommendSupportSelectControl_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  AssetLoader_LoadEndDataHandler_o *v24; // x19

  if ( (byte_4B62D52 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, finishCallback);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl___c__DisplayClass41_0__GetAssets_b__1__, v6);
    sub_1BE4ACC(&RecommendSupportSelectControl___c__DisplayClass41_0_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_10724/*"PartyOrganization/RecommendSupport"*/, v8);
    byte_4B62D52 = 1;
  }
  v9 = sub_1BE4D18(RecommendSupportSelectControl___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BE4D28(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = finishCallback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)finishCallback, v18, v19, v20, v21, v22, v23);
  if ( GameObjectExtensions__HasChild(this->fields.rootObject, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
  }
  else
  {
    v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v24,
      (Il2CppObject *)v9,
      Method_RecommendSupportSelectControl___c__DisplayClass41_0__GetAssets_b__1__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_10724/*"PartyOrganization/RecommendSupport"*/, v24, 1, 0LL);
  }
}


Il2CppObject *__fastcall RecommendSupportSelectControl__GetDialog_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_2FEB778 *method)
{
  const MethodInfo_2FEB778_RGCTXs *rgctx_data; // x8
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x22
  UnityEngine_Object_o *messageSelectDialog; // x21
  intptr_t v11; // w21
  System_Type_o *v12; // x0
  intptr_t v13; // w21
  System_Type_o *v14; // x0
  __int64 v15; // x1
  bool v16; // w8
  Il2CppObject *result; // x0
  System_Type_o *Type; // x20
  Il2CppType *v19; // x22
  System_Type_o *v20; // x0
  bool v21; // w8
  long double v22; // q0
  Il2CppClass *_1_T; // x1
  __int64 v24; // x20
  long double v25; // q0
  Il2CppClass *v26; // x19
  System_RuntimeTypeHandle_o v27; // 0:w0.4
  System_RuntimeTypeHandle_o v28; // 0:w0.4
  System_RuntimeTypeHandle_o v29; // 0:w0.4
  System_RuntimeTypeHandle_o v30; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&RecommendSupportCancelConfirmDialog_var, v5);
    sub_1BE4ACC(&RecommendSupportMessageSelectDialog_var, v6);
    sub_1BE4ACC(&System_Type_TypeInfo, v7);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C36A04();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v27.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v27, 0LL);
  messageSelectDialog = 0LL;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0LL) == 1 )
  {
    v11 = (int)RecommendSupportMessageSelectDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v28.fields.value = v11;
    v12 = System_Type__GetTypeFromHandle(v28, 0LL);
    if ( System_Type__op_Equality(TypeFromHandle, v12, 0LL) )
    {
      messageSelectDialog = (UnityEngine_Object_o *)this->fields.messageSelectDialog;
    }
    else
    {
      v13 = (int)RecommendSupportCancelConfirmDialog_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v29.fields.value = v13;
      v14 = System_Type__GetTypeFromHandle(v29, 0LL);
      messageSelectDialog = 0LL;
      if ( System_Type__op_Equality(TypeFromHandle, v14, 0LL) )
        messageSelectDialog = (UnityEngine_Object_o *)this->fields.cancelConfirmDialog;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__op_Inequality(messageSelectDialog, 0LL, 0LL);
  result = 0LL;
  if ( v16 )
  {
    if ( !messageSelectDialog )
      sub_1BE4D28(0LL, v15);
    Type = System_Object__GetType((Il2CppObject *)messageSelectDialog, 0LL);
    v19 = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v30.fields.value = (int)v19;
    v20 = System_Type__GetTypeFromHandle(v30, 0LL);
    v21 = System_Type__op_Equality(Type, v20, 0LL);
    result = 0LL;
    if ( v21 )
    {
      _1_T = method->rgctx_data->_1_T;
      if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1C369A8(v22);
      v24 = sub_1BE4C08(messageSelectDialog, _1_T);
      v26 = method->rgctx_data->_1_T;
      if ( (BYTE5(v26->vtable[0].methodPtr) & 1) == 0 )
        v26 = (Il2CppClass *)sub_1C369A8(v25);
      if ( v24 )
      {
        result = (Il2CppObject *)sub_1BE4C08(v24, v26);
        if ( result )
          return result;
        sub_1BE4FE8(v24);
      }
      return 0LL;
    }
  }
  return result;
}


Il2CppObject *__fastcall RecommendSupportSelectControl__GetMenu_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_2FEB9A8 *method)
{
  const MethodInfo_2FEB9A8_RGCTXs *rgctx_data; // x8
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x21
  UnityEngine_Object_o *mainMenu; // x22
  intptr_t v13; // w22
  System_Type_o *v14; // x0
  intptr_t v15; // w22
  System_Type_o *v16; // x0
  intptr_t v17; // w22
  System_Type_o *v18; // x0
  intptr_t v19; // w22
  System_Type_o *v20; // x0
  __int64 v21; // x1
  bool v22; // w8
  Il2CppObject *result; // x0
  System_Type_o *Type; // x20
  Il2CppType *v25; // x21
  System_Type_o *v26; // x0
  bool v27; // w8
  long double v28; // q0
  Il2CppClass *_1_T; // x1
  __int64 v30; // x20
  long double v31; // q0
  Il2CppClass *v32; // x19
  System_RuntimeTypeHandle_o v33; // 0:w0.4
  System_RuntimeTypeHandle_o v34; // 0:w0.4
  System_RuntimeTypeHandle_o v35; // 0:w0.4
  System_RuntimeTypeHandle_o v36; // 0:w0.4
  System_RuntimeTypeHandle_o v37; // 0:w0.4
  System_RuntimeTypeHandle_o v38; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&RecommendSupportEquipSelectListMenu_var, v5);
    sub_1BE4ACC(&RecommendSupportQuestSelectListMenu_var, v6);
    sub_1BE4ACC(&RecommendSupportSelectListViewMenu_var, v7);
    sub_1BE4ACC(&RecommendSupportServantSelectListMenu_var, v8);
    sub_1BE4ACC(&System_Type_TypeInfo, v9);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C36A04();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v33.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v33, 0LL);
  mainMenu = 0LL;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0LL) == 1 )
  {
    v13 = (int)RecommendSupportSelectListViewMenu_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v34.fields.value = v13;
    v14 = System_Type__GetTypeFromHandle(v34, 0LL);
    if ( System_Type__op_Equality(TypeFromHandle, v14, 0LL) )
    {
      mainMenu = (UnityEngine_Object_o *)this->fields.mainMenu;
    }
    else
    {
      v15 = (int)RecommendSupportServantSelectListMenu_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v35.fields.value = v15;
      v16 = System_Type__GetTypeFromHandle(v35, 0LL);
      if ( System_Type__op_Equality(TypeFromHandle, v16, 0LL) )
      {
        mainMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
      }
      else
      {
        v17 = (int)RecommendSupportEquipSelectListMenu_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v36.fields.value = v17;
        v18 = System_Type__GetTypeFromHandle(v36, 0LL);
        if ( System_Type__op_Equality(TypeFromHandle, v18, 0LL) )
        {
          mainMenu = (UnityEngine_Object_o *)this->fields.equipSelectMenu;
        }
        else
        {
          v19 = (int)RecommendSupportQuestSelectListMenu_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v37.fields.value = v19;
          v20 = System_Type__GetTypeFromHandle(v37, 0LL);
          mainMenu = 0LL;
          if ( System_Type__op_Equality(TypeFromHandle, v20, 0LL) )
            mainMenu = (UnityEngine_Object_o *)this->fields.questSelectMenu;
        }
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = UnityEngine_Object__op_Inequality(mainMenu, 0LL, 0LL);
  result = 0LL;
  if ( v22 )
  {
    if ( !mainMenu )
      sub_1BE4D28(0LL, v21);
    Type = System_Object__GetType((Il2CppObject *)mainMenu, 0LL);
    v25 = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v38.fields.value = (int)v25;
    v26 = System_Type__GetTypeFromHandle(v38, 0LL);
    v27 = System_Type__op_Equality(Type, v26, 0LL);
    result = 0LL;
    if ( v27 )
    {
      _1_T = method->rgctx_data->_1_T;
      if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1C369A8(v28);
      v30 = sub_1BE4C08(mainMenu, _1_T);
      v32 = method->rgctx_data->_1_T;
      if ( (BYTE5(v32->vtable[0].methodPtr) & 1) == 0 )
        v32 = (Il2CppClass *)sub_1C369A8(v31);
      if ( v30 )
      {
        result = (Il2CppObject *)sub_1BE4C08(v30, v32);
        if ( result )
          return result;
        sub_1BE4FE8(v30);
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
  if ( (byte_4B62D56 & 1) == 0 )
  {
    this = (RecommendSupportSelectControl_o *)sub_1BE4ACC(
                                                &Method_CStateManager_RecommendSupportSelectControl__getState__,
                                                method);
    byte_4B62D56 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1BE4D28(this, method);
  return fsm->fields.m_state;
}


void __fastcall RecommendSupportSelectControl__Init(
        RecommendSupportSelectControl_o *this,
        SceneJumpInfo_o *sceneJumpInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x20
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v44; // x21
  EventUpValSetupInfo_o *v45; // x22
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct CStateManager_RecommendSupportSelectControl__o **p_fsm; // x21
  Il2CppObject *v53; // x22
  CStateManager_T__o *v54; // x23
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  CStateManager_T__o *v61; // x22
  Il2CppObject *v62; // x23
  CStateManager_T__o *v63; // x22
  Il2CppObject *v64; // x23
  CStateManager_T__o *v65; // x22
  Il2CppObject *v66; // x23
  CStateManager_T__o *v67; // x21
  Il2CppObject *v68; // x22
  RecommendSupportData_o *v69; // x21
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Action_o *v76; // x21
  const MethodInfo *v77; // x2

  if ( (byte_4B62D55 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, sceneJumpInfo);
    sub_1BE4ACC(&Method_CStateManager_RecommendSupportSelectControl___ctor__, v7);
    sub_1BE4ACC(&Method_CStateManager_RecommendSupportSelectControl__add__, v8);
    sub_1BE4ACC(&CStateManager_RecommendSupportSelectControl__TypeInfo, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v11);
    sub_1BE4ACC(&RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo, v12);
    sub_1BE4ACC(&EventUpValSetupInfo_TypeInfo, v13);
    sub_1BE4ACC(&RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo, v14);
    sub_1BE4ACC(&RecommendSupportData_TypeInfo, v15);
    sub_1BE4ACC(&RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo, v16);
    sub_1BE4ACC(&RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v18);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl___c__DisplayClass44_0__Init_b__0__, v20);
    sub_1BE4ACC(&RecommendSupportSelectControl___c__DisplayClass44_0_TypeInfo, v21);
    byte_4B62D55 = 1;
  }
  v22 = sub_1BE4D18(RecommendSupportSelectControl___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_14;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)callback, v31, v32, v33, v34, v35, v36);
  this->fields._SceneJumpInfo_k__BackingField = sceneJumpInfo;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int64_t)sceneJumpInfo,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
  v44 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
  v45 = (EventUpValSetupInfo_o *)sub_1BE4D18(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_39826336(v45, v44, 0, 0, 0, 0LL);
  this->fields._EventSetupInfo_k__BackingField = v45;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int64_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  p_fsm = &this->fields.fsm;
  if ( this->fields.fsm )
    goto LABEL_12;
  v53 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  v54 = (CStateManager_T__o *)sub_1BE4D18(CStateManager_RecommendSupportSelectControl__TypeInfo);
  CStateManager_object____ctor(
    v54,
    v53,
    4,
    (const MethodInfo_318A548 *)Method_CStateManager_RecommendSupportSelectControl___ctor__);
  *p_fsm = (struct CStateManager_RecommendSupportSelectControl__o *)v54;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v54, v55, v56, v57, v58, v59, v60);
  v61 = (CStateManager_T__o *)*p_fsm;
  v62 = (Il2CppObject *)sub_1BE4D18(RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo);
  System_Object___ctor(v62, 0LL);
  if ( !v61 )
    goto LABEL_14;
  CStateManager_object___add(
    v61,
    0,
    (IState_T__o *)v62,
    (const MethodInfo_318A5F0 *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v63 = (CStateManager_T__o *)*p_fsm;
  v64 = (Il2CppObject *)sub_1BE4D18(RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo);
  System_Object___ctor(v64, 0LL);
  if ( !v63 )
    goto LABEL_14;
  CStateManager_object___add(
    v63,
    1,
    (IState_T__o *)v64,
    (const MethodInfo_318A5F0 *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v65 = (CStateManager_T__o *)*p_fsm;
  v66 = (Il2CppObject *)sub_1BE4D18(RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo);
  System_Object___ctor(v66, 0LL);
  if ( !v65
    || (CStateManager_object___add(
          v65,
          2,
          (IState_T__o *)v66,
          (const MethodInfo_318A5F0 *)Method_CStateManager_RecommendSupportSelectControl__add__),
        v67 = (CStateManager_T__o *)*p_fsm,
        v68 = (Il2CppObject *)sub_1BE4D18(RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo),
        System_Object___ctor(v68, 0LL),
        !v67) )
  {
LABEL_14:
    sub_1BE4D28(Instance, v24);
  }
  CStateManager_object___add(
    v67,
    3,
    (IState_T__o *)v68,
    (const MethodInfo_318A5F0 *)Method_CStateManager_RecommendSupportSelectControl__add__);
LABEL_12:
  v69 = (RecommendSupportData_o *)sub_1BE4D18(RecommendSupportData_TypeInfo);
  RecommendSupportData___ctor(v69, 0LL);
  this->fields._RecommendSupportData_k__BackingField = v69;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._RecommendSupportData_k__BackingField,
    (int64_t)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  Instance = (DataManager_o *)this->fields._RecommendSupportData_k__BackingField;
  if ( !Instance )
    goto LABEL_14;
  RecommendSupportData__Init((RecommendSupportData_o *)Instance, this->fields._EventSetupInfo_k__BackingField, 0LL);
  EventTutorialMaster__CheckTutorial(0, 92, 0LL, 0, 0, 0, 0, 0LL);
  this->fields._IsEdit_k__BackingField = 0;
  v76 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v76,
    (Il2CppObject *)v22,
    Method_RecommendSupportSelectControl___c__DisplayClass44_0__Init_b__0__,
    0LL);
  RecommendSupportSelectControl__GetAssets(this, v76, v77);
}


void __fastcall RecommendSupportSelectControl__OpenDialog_object_(
        RecommendSupportSelectControl_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        int32_t index,
        const MethodInfo_2FEBC78 *method)
{
  const MethodInfo_2FEBC78_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x21
  intptr_t v14; // w22
  System_Type_o *v15; // x0
  UnityEngine_Object_o *messageSelectDialog; // x22
  __int64 v17; // x1
  RecommendSupportMessageSelectDialog_o *v18; // x0
  intptr_t v19; // w22
  System_Type_o *v20; // x0
  UnityEngine_Object_o *cancelConfirmDialog; // x21
  System_RuntimeTypeHandle_o v22; // 0:w0.4
  System_RuntimeTypeHandle_o v23; // 0:w0.4
  System_RuntimeTypeHandle_o v24; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, callback);
    sub_1BE4ACC(&RecommendSupportCancelConfirmDialog_var, v9);
    sub_1BE4ACC(&RecommendSupportMessageSelectDialog_var, v10);
    sub_1BE4ACC(&System_Type_TypeInfo, v11);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C36A04();
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v22.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v22, 0LL);
  this->fields._SelectIndex_k__BackingField = index;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0LL) == 1 )
  {
    v14 = (int)RecommendSupportMessageSelectDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v23.fields.value = v14;
    v15 = System_Type__GetTypeFromHandle(v23, 0LL);
    if ( System_Type__op_Equality(TypeFromHandle, v15, 0LL) )
    {
      messageSelectDialog = (UnityEngine_Object_o *)this->fields.messageSelectDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(messageSelectDialog, 0LL, 0LL) )
      {
        v18 = this->fields.messageSelectDialog;
        this->fields._IsEdit_k__BackingField = 1;
        if ( v18 )
        {
          RecommendSupportMessageSelectDialog__Open(v18, callback, 0LL);
          return;
        }
LABEL_24:
        sub_1BE4D28(v18, v17);
      }
    }
    v19 = (int)RecommendSupportCancelConfirmDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v24.fields.value = v19;
    v20 = System_Type__GetTypeFromHandle(v24, 0LL);
    if ( System_Type__op_Equality(TypeFromHandle, v20, 0LL) )
    {
      cancelConfirmDialog = (UnityEngine_Object_o *)this->fields.cancelConfirmDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(cancelConfirmDialog, 0LL, 0LL) )
      {
        v18 = (RecommendSupportMessageSelectDialog_o *)this->fields.cancelConfirmDialog;
        if ( !v18 )
          goto LABEL_24;
        RecommendSupportCancelConfirmDialog__Open((RecommendSupportCancelConfirmDialog_o *)v18, callback, 0LL);
      }
    }
  }
}


void __fastcall RecommendSupportSelectControl__ReleaseAsset(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_cashedAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *cashedAssetData; // t1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B62D53 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    byte_4B62D53 = 1;
  }
  cashedAssetData = this->fields.cashedAssetData;
  p_cashedAssetData = (PartyOrganizationUtility_o *)&this->fields.cashedAssetData;
  v4 = cashedAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_38697776(v4, 0LL);
  p_cashedAssetData->klass = 0LL;
  sub_1BE4A70(p_cashedAssetData, 0LL, v6, v7, v8, v9, v10, v11);
}


void __fastcall RecommendSupportSelectControl__ReturnScene(
        RecommendSupportSelectControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x0

  if ( (byte_4B62D59 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_ReturnScene__, result);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v6);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v7);
    byte_4B62D59 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22370/*"ng"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( Instance )
    {
      AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( Instance )
      {
        if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 39, 1, 0LL, 0LL);
            return;
          }
        }
      }
    }
    sub_1BE4D28(Instance, v12);
  }
  v8 = Method_RecommendSupportSelectControl_ReturnScene__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectControl_ReturnScene__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BE4AE4(Method_RecommendSupportSelectControl_ReturnScene__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
  RecommendSupportSelectControl__SetState(this, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectControl__SetState(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B62D57 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CStateManager_RecommendSupportSelectControl__setState__, *(_QWORD *)&state);
    byte_4B62D57 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BE4D28(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_318A67C *)Method_CStateManager_RecommendSupportSelectControl__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectControl__SetState_33296808(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        int32_t index,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B62D58 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CStateManager_RecommendSupportSelectControl__setState__, *(_QWORD *)&state);
    byte_4B62D58 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  this->fields._SelectIndex_k__BackingField = index;
  this->fields._IsEdit_k__BackingField = 1;
  if ( !fsm )
    sub_1BE4D28(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_318A67C *)Method_CStateManager_RecommendSupportSelectControl__setState__);
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
    sub_1BE4D28(SelectMessageIds, v4);
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
    sub_1BE4D28(0LL, method);
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
    sub_1BE4D28(0LL, method);
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
    sub_1BE4D28(0LL, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EventSetupInfo_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._RecommendSupportData_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._RecommendSupportData_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecommendSupportSelectControl__set_SceneJumpInfo(
        RecommendSupportSelectControl_o *this,
        SceneJumpInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SceneJumpInfo_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A21F50;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A21F08;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B62D5B & 1) == 0 )
  {
    sub_1BE4ACC(&RecommendSupportSelectControl_DialogState_TypeInfo, *(_QWORD *)&result);
    byte_4B62D5B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(RecommendSupportSelectControl_DialogState_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall RecommendSupportSelectControl_DialogResultCallBack__EndInvoke(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  if ( (byte_4B62D62 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, that);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    byte_4B62D62 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_2FEB9A8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v8);
      return;
    }
LABEL_12:
    sub_1BE4D28(Instance, v6);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0LL);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  RecommendSupportEquipSelectListMenu__Open((RecommendSupportEquipSelectListMenu_o *)Menu_object, v9);
}


void __fastcall RecommendSupportSelectControl_EquipSelectMenuState__end(
        RecommendSupportSelectControl_EquipSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  RecommendSupportSelectControl_EquipSelectMenuState___c_c *v9; // x8
  BaseMenu_o *v10; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v12; // x21
  struct RecommendSupportSelectControl_EquipSelectMenuState___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B62D63 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, that);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__, v5);
    sub_1BE4ACC(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo, v6);
    byte_4B62D63 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2FEB9A8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  v9 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
  v10 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    v9 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v9->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v12, Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__, 0LL);
    static_fields = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v14, v15, v16, v17, v18, v19);
  }
  if ( !v10 )
LABEL_12:
    sub_1BE4D28(Instance, v8);
  BaseMenu__Close(v10, _9__2_0, 0LL);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B62D64 & 1) == 0 )
  {
    sub_1BE4ACC(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo, v1);
    byte_4B62D64 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_EquipSelectMenuState___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v3; // x1
  __int64 v4; // x1
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  if ( (byte_4B62D65 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, that);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    byte_4B62D65 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_2FEB9A8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v8);
      return;
    }
LABEL_12:
    sub_1BE4D28(Instance, v6);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0LL);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  RecommendSupportQuestSelectListMenu__Open((RecommendSupportQuestSelectListMenu_o *)Menu_object, v9);
}


void __fastcall RecommendSupportSelectControl_QuestSelectMenuState__end(
        RecommendSupportSelectControl_QuestSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  RecommendSupportSelectControl_QuestSelectMenuState___c_c *v9; // x8
  BaseMenu_o *v10; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v12; // x21
  struct RecommendSupportSelectControl_QuestSelectMenuState___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B62D66 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, that);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__, v5);
    sub_1BE4ACC(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo, v6);
    byte_4B62D66 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2FEB9A8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
  v9 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
  v10 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    v9 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v9->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v12, Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__, 0LL);
    static_fields = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v14, v15, v16, v17, v18, v19);
  }
  if ( !v10 )
LABEL_12:
    sub_1BE4D28(Instance, v8);
  BaseMenu__Close(v10, _9__2_0, 0LL);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B62D67 & 1) == 0 )
  {
    sub_1BE4ACC(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo, v1);
    byte_4B62D67 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_QuestSelectMenuState___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v9; // x2

  if ( (byte_4B62D5C & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, that);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    sub_1BE4ACC(&StringLiteral_22543/*"ok"*/, v5);
    byte_4B62D5C = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_2FEB9A8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__ReturnScene(Instance, (System_String_o *)StringLiteral_22543/*"ok"*/, v9);
      return;
    }
LABEL_12:
    sub_1BE4D28(Instance, v7);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0LL);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  RecommendSupportSelectListViewMenu__Open((RecommendSupportSelectListViewMenu_o *)Menu_object, 0LL);
}


void __fastcall RecommendSupportSelectControl_RecommendSupportSelectMenuState__end(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_c *v9; // x8
  BaseMenu_o *v10; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v12; // x21
  struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B62D5D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, that);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__, v5);
    sub_1BE4ACC(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo, v6);
    byte_4B62D5D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2FEB9A8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  v9 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
  v10 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    v9 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v9->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2_0,
      v12,
      Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__,
      0LL);
    static_fields = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v14, v15, v16, v17, v18, v19);
  }
  if ( !v10 )
LABEL_12:
    sub_1BE4D28(Instance, v8);
  BaseMenu__Close(v10, _9__2_0, 0LL);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B62D5E & 1) == 0 )
  {
    sub_1BE4ACC(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo, v1);
    byte_4B62D5E = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v3; // x1
  __int64 v4; // x1
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v8; // x2

  if ( (byte_4B62D5F & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, that);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    byte_4B62D5F = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_2FEB9A8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v8);
      return;
    }
LABEL_12:
    sub_1BE4D28(Instance, v6);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  RecommendSupportSelectControl_ServantSelectMenuState___c_c *v9; // x8
  BaseMenu_o *v10; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v12; // x21
  struct RecommendSupportSelectControl_ServantSelectMenuState___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B62D60 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, that);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    sub_1BE4ACC(&Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__, v5);
    sub_1BE4ACC(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo, v6);
    byte_4B62D60 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2FEB9A8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  v9 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
  v10 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    v9 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v9->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2_0,
      v12,
      Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__,
      0LL);
    static_fields = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v14, v15, v16, v17, v18, v19);
  }
  if ( !v10 )
LABEL_12:
    sub_1BE4D28(Instance, v8);
  BaseMenu__Close(v10, _9__2_0, 0LL);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B62D61 & 1) == 0 )
  {
    sub_1BE4ACC(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo, v1);
    byte_4B62D61 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_ServantSelectMenuState___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  char *_4__this; // x0
  const MethodInfo *v22; // x4
  struct RecommendSupportSelectControl_o *v23; // x8
  struct RecommendSupportSelectControl_o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x4
  struct RecommendSupportSelectControl_o *v32; // x8
  struct RecommendSupportSelectControl_o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  const MethodInfo *v40; // x4
  struct RecommendSupportSelectControl_o *v41; // x8
  struct RecommendSupportSelectControl_o *v42; // x20
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  const MethodInfo *v49; // x4
  struct RecommendSupportSelectControl_o *v50; // x8
  struct RecommendSupportSelectControl_o *v51; // x20
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  const MethodInfo *v58; // x4
  struct RecommendSupportSelectControl_o *v59; // x8
  struct RecommendSupportSelectControl_o *v60; // x20
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  const MethodInfo *v67; // x4
  struct RecommendSupportSelectControl_o *v68; // x8
  struct RecommendSupportSelectControl_o *v69; // x20
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  UnityEngine_GameObject_o *v76; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *v77; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *v78; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v79; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v80; // [xsp+20h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *prefabObject; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4B62D69 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___, assetData);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___, v10);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___, v11);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___, v12);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___, v13);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___, v14);
    sub_1BE4ACC(&StringLiteral_11365/*"RecommendSupportEquipSelectListMenuPrefab"*/, v15);
    sub_1BE4ACC(&StringLiteral_11369/*"RecommendSupportSelectMenuPrefab"*/, v16);
    sub_1BE4ACC(&StringLiteral_11367/*"RecommendSupportMessageSelectDialogPrefab"*/, v17);
    sub_1BE4ACC(&StringLiteral_11364/*"RecommendSupportCancelConfirmDialogPrefab"*/, v18);
    sub_1BE4ACC(&StringLiteral_11368/*"RecommendSupportQuestSelectMenuPrefab"*/, v19);
    sub_1BE4ACC(&StringLiteral_11373/*"RecommendSupportServantSelectMenuPrefab"*/, v20);
    byte_4B62D69 = 1;
  }
  v80 = 0LL;
  prefabObject = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  *((_QWORD *)_4__this + 4) = assetData;
  sub_1BE4A70((PartyOrganizationUtility_o *)(_4__this + 32), (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &prefabObject,
    (System_String_o *)StringLiteral_11369/*"RecommendSupportSelectMenuPrefab"*/,
    v23->fields.cashedAssetData,
    v22);
  _4__this = (char *)prefabObject;
  if ( !prefabObject )
    goto LABEL_23;
  v24 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       prefabObject,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___);
  if ( !v24 )
    goto LABEL_23;
  v24->fields.mainMenu = (struct RecommendSupportSelectListViewMenu_o *)_4__this;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v24->fields.mainMenu, (int64_t)_4__this, v25, v26, v27, v28, v29, v30);
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v80,
    (System_String_o *)StringLiteral_11373/*"RecommendSupportServantSelectMenuPrefab"*/,
    v32->fields.cashedAssetData,
    v31);
  _4__this = (char *)v80;
  if ( !v80 )
    goto LABEL_23;
  v33 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v80,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___);
  if ( !v33 )
    goto LABEL_23;
  v33->fields.servantSelectMenu = (struct RecommendSupportServantSelectListMenu_o *)_4__this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v33->fields.servantSelectMenu,
    (int64_t)_4__this,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v41 = this->fields.__4__this;
  if ( !v41 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v79,
    (System_String_o *)StringLiteral_11365/*"RecommendSupportEquipSelectListMenuPrefab"*/,
    v41->fields.cashedAssetData,
    v40);
  _4__this = (char *)v79;
  if ( !v79 )
    goto LABEL_23;
  v42 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v79,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___);
  if ( !v42 )
    goto LABEL_23;
  v42->fields.equipSelectMenu = (struct RecommendSupportEquipSelectListMenu_o *)_4__this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v42->fields.equipSelectMenu,
    (int64_t)_4__this,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v50 = this->fields.__4__this;
  if ( !v50 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v78,
    (System_String_o *)StringLiteral_11368/*"RecommendSupportQuestSelectMenuPrefab"*/,
    v50->fields.cashedAssetData,
    v49);
  _4__this = (char *)v78;
  if ( !v78 )
    goto LABEL_23;
  v51 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v78,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___);
  if ( !v51 )
    goto LABEL_23;
  v51->fields.questSelectMenu = (struct RecommendSupportQuestSelectListMenu_o *)_4__this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v51->fields.questSelectMenu,
    (int64_t)_4__this,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v59 = this->fields.__4__this;
  if ( !v59 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v77,
    (System_String_o *)StringLiteral_11367/*"RecommendSupportMessageSelectDialogPrefab"*/,
    v59->fields.cashedAssetData,
    v58);
  _4__this = (char *)v77;
  if ( !v77 )
    goto LABEL_23;
  v60 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v77,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___);
  if ( !v60
    || (v60->fields.messageSelectDialog = (struct RecommendSupportMessageSelectDialog_o *)_4__this,
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v60->fields.messageSelectDialog,
          (int64_t)_4__this,
          v61,
          v62,
          v63,
          v64,
          v65,
          v66),
        (v68 = this->fields.__4__this) == 0LL)
    || (RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
          this,
          &v76,
          (System_String_o *)StringLiteral_11364/*"RecommendSupportCancelConfirmDialogPrefab"*/,
          v68->fields.cashedAssetData,
          v67),
        (_4__this = (char *)v76) == 0LL)
    || (v69 = this->fields.__4__this,
        _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                             v76,
                             (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___),
        !v69) )
  {
LABEL_23:
    sub_1BE4D28(_4__this, assetData);
  }
  v69->fields.cancelConfirmDialog = (struct RecommendSupportCancelConfirmDialog_o *)_4__this;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v69->fields.cancelConfirmDialog,
    (int64_t)_4__this,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
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
  __int64 v9; // x1
  __int64 v10; // x1
  struct RecommendSupportSelectControl_o *_4__this; // x8
  Il2CppObject *v12; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  v8 = this;
  if ( (byte_4B62D68 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_GameObject____77158408, prefabObject);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject____77247160, v9);
    this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B62D68 = 1;
  }
  if ( !assetData
    || (this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)AssetData__GetObject_object__49525204(
                                                                          assetData,
                                                                          prefabName,
                                                                          (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408),
        (_4__this = v8->fields.__4__this) == 0LL)
    || (v12 = (Il2CppObject *)this,
        (this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)_4__this->fields.rootObject) == 0LL) )
  {
    sub_1BE4D28(this, prefabObject);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__Instantiate_object__50195216(
          v12,
          transform,
          (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_GameObject____77247160);
  *prefabObject = (UnityEngine_GameObject_o *)v14;
  sub_1BE4A70((PartyOrganizationUtility_o *)prefabObject, (int64_t)v14, v15, v16, v17, v18, v19, v20);
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
  RecommendSupportSelectListViewMenu__Init((RecommendSupportSelectListViewMenu_o *)this, 0LL);
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
  RecommendSupportEquipSelectListMenu__Init((RecommendSupportEquipSelectListMenu_o *)this, method);
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
    sub_1BE4D28(this, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}