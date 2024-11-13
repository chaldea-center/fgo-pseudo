void __fastcall RecommendSupportSelectControl___ctor(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B123FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__, method, v2);
    byte_4B123FD = 1;
  }
  this->fields._SelectIndex_k__BackingField = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__);
}


void __fastcall RecommendSupportSelectControl__Awake(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B123F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__, method, v2);
    byte_4B123F7 = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEE38 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__);
}


void __fastcall RecommendSupportSelectControl__GetAssets(
        RecommendSupportSelectControl_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  AssetLoader_LoadEndDataHandler_o *v32; // x19
  __int64 v33; // x1

  if ( (byte_4B123F5 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, finishCallback, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl___c__DisplayClass41_0__GetAssets_b__1__, v8, v9);
    sub_1BCA7E0(&RecommendSupportSelectControl___c__DisplayClass41_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_10696/*"PartyOrganization/RecommendSupport"*/, v12, v13);
    byte_4B123F5 = 1;
  }
  v14 = sub_1BCAA2C(RecommendSupportSelectControl___c__DisplayClass41_0_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)finishCallback, v23, v24, v25, v26, v27, v28);
  if ( GameObjectExtensions__HasChild(this->fields.rootObject, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v14 + 24), 0LL);
  }
  else
  {
    v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30, v31);
    AssetLoader_LoadEndDataHandler___ctor(
      v32,
      (Il2CppObject *)v14,
      Method_RecommendSupportSelectControl___c__DisplayClass41_0__GetAssets_b__1__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v33);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_10696/*"PartyOrganization/RecommendSupport"*/, v32, 1, 0LL);
  }
}


Il2CppObject *__fastcall RecommendSupportSelectControl__GetDialog_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_2FA4530 *method)
{
  __int64 v2; // x2
  const MethodInfo_2FA4530_RGCTXs *rgctx_data; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x22
  __int64 v14; // x1
  UnityEngine_Object_o *messageSelectDialog; // x21
  intptr_t v16; // w21
  System_Type_o *v17; // x0
  intptr_t v18; // w21
  System_Type_o *v19; // x0
  __int64 v20; // x1
  bool v21; // w8
  Il2CppObject *result; // x0
  __int64 v23; // x1
  System_Type_o *Type; // x20
  Il2CppType *v25; // x22
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

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&RecommendSupportCancelConfirmDialog_var, v6, v7);
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog_var, v8, v9);
    sub_1BCA7E0(&System_Type_TypeInfo, v10, v11);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, method);
  v33.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v33, 0LL);
  messageSelectDialog = 0LL;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0LL) == 1 )
  {
    v16 = (int)RecommendSupportMessageSelectDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v14);
    v34.fields.value = v16;
    v17 = System_Type__GetTypeFromHandle(v34, 0LL);
    if ( System_Type__op_Equality(TypeFromHandle, v17, 0LL) )
    {
      messageSelectDialog = (UnityEngine_Object_o *)this->fields.messageSelectDialog;
    }
    else
    {
      v18 = (int)RecommendSupportCancelConfirmDialog_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v14);
      v35.fields.value = v18;
      v19 = System_Type__GetTypeFromHandle(v35, 0LL);
      messageSelectDialog = 0LL;
      if ( System_Type__op_Equality(TypeFromHandle, v19, 0LL) )
        messageSelectDialog = (UnityEngine_Object_o *)this->fields.cancelConfirmDialog;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v21 = UnityEngine_Object__op_Inequality(messageSelectDialog, 0LL, 0LL);
  result = 0LL;
  if ( v21 )
  {
    if ( !messageSelectDialog )
      sub_1BCAA3C(0LL, v20);
    Type = System_Object__GetType((Il2CppObject *)messageSelectDialog, 0LL);
    v25 = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v23);
    v36.fields.value = (int)v25;
    v26 = System_Type__GetTypeFromHandle(v36, 0LL);
    v27 = System_Type__op_Equality(Type, v26, 0LL);
    result = 0LL;
    if ( v27 )
    {
      _1_T = method->rgctx_data->_1_T;
      if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1C1C6BC(v28);
      v30 = sub_1BCA91C(messageSelectDialog, _1_T);
      v32 = method->rgctx_data->_1_T;
      if ( (BYTE5(v32->vtable[0].methodPtr) & 1) == 0 )
        v32 = (Il2CppClass *)sub_1C1C6BC(v31);
      if ( v30 )
      {
        result = (Il2CppObject *)sub_1BCA91C(v30, v32);
        if ( result )
          return result;
        sub_1BCACFC(v30);
      }
      return 0LL;
    }
  }
  return result;
}


Il2CppObject *__fastcall RecommendSupportSelectControl__GetMenu_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_2FA4760 *method)
{
  __int64 v2; // x2
  const MethodInfo_2FA4760_RGCTXs *rgctx_data; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x21
  __int64 v18; // x1
  UnityEngine_Object_o *mainMenu; // x22
  intptr_t v20; // w22
  System_Type_o *v21; // x0
  intptr_t v22; // w22
  System_Type_o *v23; // x0
  intptr_t v24; // w22
  System_Type_o *v25; // x0
  intptr_t v26; // w22
  System_Type_o *v27; // x0
  __int64 v28; // x1
  bool v29; // w8
  Il2CppObject *result; // x0
  __int64 v31; // x1
  System_Type_o *Type; // x20
  Il2CppType *v33; // x21
  System_Type_o *v34; // x0
  bool v35; // w8
  long double v36; // q0
  Il2CppClass *_1_T; // x1
  __int64 v38; // x20
  long double v39; // q0
  Il2CppClass *v40; // x19
  System_RuntimeTypeHandle_o v41; // 0:w0.4
  System_RuntimeTypeHandle_o v42; // 0:w0.4
  System_RuntimeTypeHandle_o v43; // 0:w0.4
  System_RuntimeTypeHandle_o v44; // 0:w0.4
  System_RuntimeTypeHandle_o v45; // 0:w0.4
  System_RuntimeTypeHandle_o v46; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&RecommendSupportEquipSelectListMenu_var, v6, v7);
    sub_1BCA7E0(&RecommendSupportQuestSelectListMenu_var, v8, v9);
    sub_1BCA7E0(&RecommendSupportSelectListViewMenu_var, v10, v11);
    sub_1BCA7E0(&RecommendSupportServantSelectListMenu_var, v12, v13);
    sub_1BCA7E0(&System_Type_TypeInfo, v14, v15);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, method);
  v41.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v41, 0LL);
  mainMenu = 0LL;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0LL) == 1 )
  {
    v20 = (int)RecommendSupportSelectListViewMenu_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v18);
    v42.fields.value = v20;
    v21 = System_Type__GetTypeFromHandle(v42, 0LL);
    if ( System_Type__op_Equality(TypeFromHandle, v21, 0LL) )
    {
      mainMenu = (UnityEngine_Object_o *)this->fields.mainMenu;
    }
    else
    {
      v22 = (int)RecommendSupportServantSelectListMenu_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v18);
      v43.fields.value = v22;
      v23 = System_Type__GetTypeFromHandle(v43, 0LL);
      if ( System_Type__op_Equality(TypeFromHandle, v23, 0LL) )
      {
        mainMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
      }
      else
      {
        v24 = (int)RecommendSupportEquipSelectListMenu_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v18);
        v44.fields.value = v24;
        v25 = System_Type__GetTypeFromHandle(v44, 0LL);
        if ( System_Type__op_Equality(TypeFromHandle, v25, 0LL) )
        {
          mainMenu = (UnityEngine_Object_o *)this->fields.equipSelectMenu;
        }
        else
        {
          v26 = (int)RecommendSupportQuestSelectListMenu_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v18);
          v45.fields.value = v26;
          v27 = System_Type__GetTypeFromHandle(v45, 0LL);
          mainMenu = 0LL;
          if ( System_Type__op_Equality(TypeFromHandle, v27, 0LL) )
            mainMenu = (UnityEngine_Object_o *)this->fields.questSelectMenu;
        }
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  v29 = UnityEngine_Object__op_Inequality(mainMenu, 0LL, 0LL);
  result = 0LL;
  if ( v29 )
  {
    if ( !mainMenu )
      sub_1BCAA3C(0LL, v28);
    Type = System_Object__GetType((Il2CppObject *)mainMenu, 0LL);
    v33 = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v31);
    v46.fields.value = (int)v33;
    v34 = System_Type__GetTypeFromHandle(v46, 0LL);
    v35 = System_Type__op_Equality(Type, v34, 0LL);
    result = 0LL;
    if ( v35 )
    {
      _1_T = method->rgctx_data->_1_T;
      if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1C1C6BC(v36);
      v38 = sub_1BCA91C(mainMenu, _1_T);
      v40 = method->rgctx_data->_1_T;
      if ( (BYTE5(v40->vtable[0].methodPtr) & 1) == 0 )
        v40 = (Il2CppClass *)sub_1C1C6BC(v39);
      if ( v38 )
      {
        result = (Il2CppObject *)sub_1BCA91C(v38, v40);
        if ( result )
          return result;
        sub_1BCACFC(v38);
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
  __int64 v2; // x2
  RecommendSupportSelectControl_o *v3; // x19
  struct CStateManager_RecommendSupportSelectControl__o *fsm; // x8

  v3 = this;
  if ( (byte_4B123F9 & 1) == 0 )
  {
    this = (RecommendSupportSelectControl_o *)sub_1BCA7E0(
                                                &Method_CStateManager_RecommendSupportSelectControl__getState__,
                                                method,
                                                v2);
    byte_4B123F9 = 1;
  }
  fsm = v3->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(this, method);
  return fsm->fields.m_state;
}


void __fastcall RecommendSupportSelectControl__Init(
        RecommendSupportSelectControl_o *this,
        SceneJumpInfo_o *sceneJumpInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x20
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v59; // x21
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  EventUpValSetupInfo_o *v63; // x22
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  struct CStateManager_RecommendSupportSelectControl__o **p_fsm; // x21
  Il2CppObject *v74; // x22
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  CStateManager_T__o *v78; // x23
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  CStateManager_T__o *v85; // x22
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  Il2CppObject *v89; // x23
  CStateManager_T__o *v90; // x22
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  Il2CppObject *v94; // x23
  CStateManager_T__o *v95; // x22
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  Il2CppObject *v99; // x23
  CStateManager_T__o *v100; // x21
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  Il2CppObject *v104; // x22
  RecommendSupportData_o *v105; // x21
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  System_Action_o *v115; // x21
  const MethodInfo *v116; // x2

  if ( (byte_4B123F8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, sceneJumpInfo, callback);
    sub_1BCA7E0(&Method_CStateManager_RecommendSupportSelectControl___ctor__, v7, v8);
    sub_1BCA7E0(&Method_CStateManager_RecommendSupportSelectControl__add__, v9, v10);
    sub_1BCA7E0(&CStateManager_RecommendSupportSelectControl__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v15, v16);
    sub_1BCA7E0(&RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo, v17, v18);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v19, v20);
    sub_1BCA7E0(&RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo, v21, v22);
    sub_1BCA7E0(&RecommendSupportData_TypeInfo, v23, v24);
    sub_1BCA7E0(&RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo, v25, v26);
    sub_1BCA7E0(&RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl___c__DisplayClass44_0__Init_b__0__, v33, v34);
    sub_1BCA7E0(&RecommendSupportSelectControl___c__DisplayClass44_0_TypeInfo, v35, v36);
    byte_4B123F8 = 1;
  }
  v37 = sub_1BCAA2C(RecommendSupportSelectControl___c__DisplayClass44_0_TypeInfo, sceneJumpInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_14;
  *(_QWORD *)(v37 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)this, v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(v37 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 24), (int64_t)callback, v46, v47, v48, v49, v50, v51);
  this->fields._SceneJumpInfo_k__BackingField = sceneJumpInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int64_t)sceneJumpInfo,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
  v59 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v63 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v60, v61, v62);
  EventUpValSetupInfo___ctor_39629568(v63, v59, 0, 0, 0, 0LL);
  this->fields._EventSetupInfo_k__BackingField = v63;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int64_t)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  p_fsm = &this->fields.fsm;
  if ( this->fields.fsm )
    goto LABEL_12;
  v74 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  v78 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_RecommendSupportSelectControl__TypeInfo, v75, v76, v77);
  CStateManager_object____ctor(
    v78,
    v74,
    4,
    (const MethodInfo_313FBC4 *)Method_CStateManager_RecommendSupportSelectControl___ctor__);
  *p_fsm = (struct CStateManager_RecommendSupportSelectControl__o *)v78;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v78, v79, v80, v81, v82, v83, v84);
  v85 = (CStateManager_T__o *)*p_fsm;
  v89 = (Il2CppObject *)sub_1BCAA2C(
                          RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo,
                          v86,
                          v87,
                          v88);
  System_Object___ctor(v89, 0LL);
  if ( !v85 )
    goto LABEL_14;
  CStateManager_object___add(
    v85,
    0,
    (IState_T__o *)v89,
    (const MethodInfo_313FC6C *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v90 = (CStateManager_T__o *)*p_fsm;
  v94 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo, v91, v92, v93);
  System_Object___ctor(v94, 0LL);
  if ( !v90 )
    goto LABEL_14;
  CStateManager_object___add(
    v90,
    1,
    (IState_T__o *)v94,
    (const MethodInfo_313FC6C *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v95 = (CStateManager_T__o *)*p_fsm;
  v99 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo, v96, v97, v98);
  System_Object___ctor(v99, 0LL);
  if ( !v95
    || (CStateManager_object___add(
          v95,
          2,
          (IState_T__o *)v99,
          (const MethodInfo_313FC6C *)Method_CStateManager_RecommendSupportSelectControl__add__),
        v100 = (CStateManager_T__o *)*p_fsm,
        v104 = (Il2CppObject *)sub_1BCAA2C(
                                 RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo,
                                 v101,
                                 v102,
                                 v103),
        System_Object___ctor(v104, 0LL),
        !v100) )
  {
LABEL_14:
    sub_1BCAA3C(Instance, v39);
  }
  CStateManager_object___add(
    v100,
    3,
    (IState_T__o *)v104,
    (const MethodInfo_313FC6C *)Method_CStateManager_RecommendSupportSelectControl__add__);
LABEL_12:
  v105 = (RecommendSupportData_o *)sub_1BCAA2C(RecommendSupportData_TypeInfo, v70, v71, v72);
  RecommendSupportData___ctor(v105, 0LL);
  this->fields._RecommendSupportData_k__BackingField = v105;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._RecommendSupportData_k__BackingField,
    (int64_t)v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  Instance = (DataManager_o *)this->fields._RecommendSupportData_k__BackingField;
  if ( !Instance )
    goto LABEL_14;
  RecommendSupportData__Init((RecommendSupportData_o *)Instance, this->fields._EventSetupInfo_k__BackingField, 0LL);
  EventTutorialMaster__CheckTutorial(0, 92, 0LL, 0, 0, 0, 0, 0LL);
  this->fields._IsEdit_k__BackingField = 0;
  v115 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v112, v113, v114);
  System_Action___ctor(
    v115,
    (Il2CppObject *)v37,
    Method_RecommendSupportSelectControl___c__DisplayClass44_0__Init_b__0__,
    0LL);
  RecommendSupportSelectControl__GetAssets(this, v115, v116);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectControl__OpenDialog_object_(
        RecommendSupportSelectControl_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        int32_t index,
        const MethodInfo_2FA4A30 *method)
{
  const MethodInfo_2FA4A30_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x21
  __int64 v17; // x1
  intptr_t v18; // w22
  System_Type_o *v19; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *messageSelectDialog; // x22
  RecommendSupportMessageSelectDialog_o *v22; // x0
  intptr_t v23; // w22
  System_Type_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *cancelConfirmDialog; // x21
  System_RuntimeTypeHandle_o v27; // 0:w0.4
  System_RuntimeTypeHandle_o v28; // 0:w0.4
  System_RuntimeTypeHandle_o v29; // 0:w0.4

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callback, *(_QWORD *)&index);
    sub_1BCA7E0(&RecommendSupportCancelConfirmDialog_var, v9, v10);
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog_var, v11, v12);
    sub_1BCA7E0(&System_Type_TypeInfo, v13, v14);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method);
      rgctx_data = method->rgctx_data;
    }
  }
  _0_T = rgctx_data->_0_T;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, callback);
  v27.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v27, 0LL);
  this->fields._SelectIndex_k__BackingField = index;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0LL) == 1 )
  {
    v18 = (int)RecommendSupportMessageSelectDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v17);
    v28.fields.value = v18;
    v19 = System_Type__GetTypeFromHandle(v28, 0LL);
    if ( System_Type__op_Equality(TypeFromHandle, v19, 0LL) )
    {
      messageSelectDialog = (UnityEngine_Object_o *)this->fields.messageSelectDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      if ( UnityEngine_Object__op_Inequality(messageSelectDialog, 0LL, 0LL) )
      {
        v22 = this->fields.messageSelectDialog;
        this->fields._IsEdit_k__BackingField = 1;
        if ( v22 )
        {
          RecommendSupportMessageSelectDialog__Open(v22, callback, 0LL);
          return;
        }
LABEL_24:
        sub_1BCAA3C(v22, v20);
      }
    }
    v23 = (int)RecommendSupportCancelConfirmDialog_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v20);
    v29.fields.value = v23;
    v24 = System_Type__GetTypeFromHandle(v29, 0LL);
    if ( System_Type__op_Equality(TypeFromHandle, v24, 0LL) )
    {
      cancelConfirmDialog = (UnityEngine_Object_o *)this->fields.cancelConfirmDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      if ( UnityEngine_Object__op_Inequality(cancelConfirmDialog, 0LL, 0LL) )
      {
        v22 = (RecommendSupportMessageSelectDialog_o *)this->fields.cancelConfirmDialog;
        if ( !v22 )
          goto LABEL_24;
        RecommendSupportCancelConfirmDialog__Open((RecommendSupportCancelConfirmDialog_o *)v22, callback, 0LL);
      }
    }
  }
}


void __fastcall RecommendSupportSelectControl__ReleaseAsset(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_cashedAssetData; // x19
  AssetData_o *v5; // x20
  struct AssetData_o *cashedAssetData; // t1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B123F6 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B123F6 = 1;
  }
  cashedAssetData = this->fields.cashedAssetData;
  p_cashedAssetData = (PartyOrganizationUtility_o *)&this->fields.cashedAssetData;
  v5 = cashedAssetData;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetManager__releaseAsset_38505704(v5, 0LL);
  p_cashedAssetData->klass = 0LL;
  sub_1BCA784(p_cashedAssetData, 0LL, v7, v8, v9, v10, v11, v12);
}


void __fastcall RecommendSupportSelectControl__ReturnScene(
        RecommendSupportSelectControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x2
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x0

  if ( (byte_4B123FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_ReturnScene__, result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v9, v10);
    byte_4B123FC = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( Instance )
    {
      AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( Instance )
      {
        if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 39, 1, 0LL, 0LL);
            return;
          }
        }
      }
    }
    sub_1BCAA3C(Instance, v15);
  }
  v11 = Method_RecommendSupportSelectControl_ReturnScene__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectControl_ReturnScene__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportSelectControl_ReturnScene__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
  RecommendSupportSelectControl__SetState(this, 0, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectControl__SetState(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B123FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_RecommendSupportSelectControl__setState__, *(_QWORD *)&state, method);
    byte_4B123FA = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_RecommendSupportSelectControl__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectControl__SetState_33161256(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        int32_t index,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B123FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_RecommendSupportSelectControl__setState__, *(_QWORD *)&state, *(_QWORD *)&index);
    byte_4B123FB = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  this->fields._SelectIndex_k__BackingField = index;
  this->fields._IsEdit_k__BackingField = 1;
  if ( !fsm )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_RecommendSupportSelectControl__setState__);
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
    sub_1BCAA3C(SelectMessageIds, v4);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A08180;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A08138;
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
  if ( (byte_4B123FE & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportSelectControl_DialogState_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B123FE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(RecommendSupportSelectControl_DialogState_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall RecommendSupportSelectControl_DialogResultCallBack__EndInvoke(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( (byte_4B12405 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5, v6);
    byte_4B12405 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v11);
      return;
    }
LABEL_12:
    sub_1BCAA3C(Instance, v8);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0LL);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  RecommendSupportEquipSelectListMenu__Open((RecommendSupportEquipSelectListMenu_o *)Menu_object, v12);
}


void __fastcall RecommendSupportSelectControl_EquipSelectMenuState__end(
        RecommendSupportSelectControl_EquipSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  RecommendSupportSelectControl_EquipSelectMenuState___c_c *v15; // x8
  BaseMenu_o *v16; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v18; // x21
  struct RecommendSupportSelectControl_EquipSelectMenuState___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B12406 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__, v7, v8);
    sub_1BCA7E0(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo, v9, v10);
    byte_4B12406 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  v15 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
  v16 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo, v12);
    v15 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v15->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, v12);
      v15 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(_9__2_0, v18, Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__, 0LL);
    static_fields = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v20, v21, v22, v23, v24, v25);
  }
  if ( !v16 )
LABEL_12:
    sub_1BCAA3C(Instance, v12);
  BaseMenu__Close(v16, _9__2_0, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12407 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo, v1, v2);
    byte_4B12407 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_EquipSelectMenuState___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( (byte_4B12408 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5, v6);
    byte_4B12408 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v11);
      return;
    }
LABEL_12:
    sub_1BCAA3C(Instance, v8);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0LL);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  RecommendSupportQuestSelectListMenu__Open((RecommendSupportQuestSelectListMenu_o *)Menu_object, v12);
}


void __fastcall RecommendSupportSelectControl_QuestSelectMenuState__end(
        RecommendSupportSelectControl_QuestSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  RecommendSupportSelectControl_QuestSelectMenuState___c_c *v15; // x8
  BaseMenu_o *v16; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v18; // x21
  struct RecommendSupportSelectControl_QuestSelectMenuState___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B12409 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__, v7, v8);
    sub_1BCA7E0(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo, v9, v10);
    byte_4B12409 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
  v15 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
  v16 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo, v12);
    v15 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v15->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, v12);
      v15 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(_9__2_0, v18, Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__, 0LL);
    static_fields = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v20, v21, v22, v23, v24, v25);
  }
  if ( !v16 )
LABEL_12:
    sub_1BCAA3C(Instance, v12);
  BaseMenu__Close(v16, _9__2_0, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1240A & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo, v1, v2);
    byte_4B1240A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_QuestSelectMenuState___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v13; // x2

  if ( (byte_4B123FF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v7, v8);
    byte_4B123FF = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__ReturnScene(Instance, (System_String_o *)StringLiteral_22465/*"ok"*/, v13);
      return;
    }
LABEL_12:
    sub_1BCAA3C(Instance, v10);
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
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_c *v15; // x8
  BaseMenu_o *v16; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v18; // x21
  struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B12400 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__, v7, v8);
    sub_1BCA7E0(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo, v9, v10);
    byte_4B12400 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  v15 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
  v16 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo, v12);
    v15 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v15->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, v12);
      v15 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(
      _9__2_0,
      v18,
      Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__,
      0LL);
    static_fields = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v20, v21, v22, v23, v24, v25);
  }
  if ( !v16 )
LABEL_12:
    sub_1BCAA3C(Instance, v12);
  BaseMenu__Close(v16, _9__2_0, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12401 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo, v1, v2);
    byte_4B12401 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(
                         RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo,
                         v1,
                         v2,
                         v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v11; // x2

  if ( (byte_4B12402 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5, v6);
    byte_4B12402 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v11);
      return;
    }
LABEL_12:
    sub_1BCAA3C(Instance, v8);
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
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  RecommendSupportSelectControl_ServantSelectMenuState___c_c *v15; // x8
  BaseMenu_o *v16; // x19
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v18; // x21
  struct RecommendSupportSelectControl_ServantSelectMenuState___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B12403 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__, v7, v8);
    sub_1BCA7E0(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo, v9, v10);
    byte_4B12403 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  v15 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
  v16 = (BaseMenu_o *)Instance;
  if ( !RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo, v12);
    v15 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
  }
  _9__2_0 = v15->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, v12);
      v15 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(
      _9__2_0,
      v18,
      Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__,
      0LL);
    static_fields = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v20, v21, v22, v23, v24, v25);
  }
  if ( !v16 )
LABEL_12:
    sub_1BCAA3C(Instance, v12);
  BaseMenu__Close(v16, _9__2_0, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12404 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo, v1, v2);
    byte_4B12404 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_ServantSelectMenuState___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  char *_4__this; // x0
  const MethodInfo *v33; // x4
  struct RecommendSupportSelectControl_o *v34; // x8
  struct RecommendSupportSelectControl_o *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x4
  struct RecommendSupportSelectControl_o *v43; // x8
  struct RecommendSupportSelectControl_o *v44; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  const MethodInfo *v51; // x4
  struct RecommendSupportSelectControl_o *v52; // x8
  struct RecommendSupportSelectControl_o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  const MethodInfo *v60; // x4
  struct RecommendSupportSelectControl_o *v61; // x8
  struct RecommendSupportSelectControl_o *v62; // x20
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  const MethodInfo *v69; // x4
  struct RecommendSupportSelectControl_o *v70; // x8
  struct RecommendSupportSelectControl_o *v71; // x20
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  const MethodInfo *v78; // x4
  struct RecommendSupportSelectControl_o *v79; // x8
  struct RecommendSupportSelectControl_o *v80; // x20
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  UnityEngine_GameObject_o *v87; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *v88; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *v89; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *v90; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_GameObject_o *v91; // [xsp+20h] [xbp-30h] BYREF
  UnityEngine_GameObject_o *prefabObject; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4B1240C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___, v18, v19);
    sub_1BCA7E0(&StringLiteral_11334/*"RecommendSupportEquipSelectListMenuPrefab"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_11338/*"RecommendSupportSelectMenuPrefab"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_11336/*"RecommendSupportMessageSelectDialogPrefab"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_11333/*"RecommendSupportCancelConfirmDialogPrefab"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_11337/*"RecommendSupportQuestSelectMenuPrefab"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_11342/*"RecommendSupportServantSelectMenuPrefab"*/, v30, v31);
    byte_4B1240C = 1;
  }
  v91 = 0LL;
  prefabObject = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  *((_QWORD *)_4__this + 4) = assetData;
  sub_1BCA784((PartyOrganizationUtility_o *)(_4__this + 32), (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
  v34 = this->fields.__4__this;
  if ( !v34 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &prefabObject,
    (System_String_o *)StringLiteral_11338/*"RecommendSupportSelectMenuPrefab"*/,
    v34->fields.cashedAssetData,
    v33);
  _4__this = (char *)prefabObject;
  if ( !prefabObject )
    goto LABEL_23;
  v35 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       prefabObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___);
  if ( !v35 )
    goto LABEL_23;
  v35->fields.mainMenu = (struct RecommendSupportSelectListViewMenu_o *)_4__this;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->fields.mainMenu, (int64_t)_4__this, v36, v37, v38, v39, v40, v41);
  v43 = this->fields.__4__this;
  if ( !v43 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v91,
    (System_String_o *)StringLiteral_11342/*"RecommendSupportServantSelectMenuPrefab"*/,
    v43->fields.cashedAssetData,
    v42);
  _4__this = (char *)v91;
  if ( !v91 )
    goto LABEL_23;
  v44 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v91,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___);
  if ( !v44 )
    goto LABEL_23;
  v44->fields.servantSelectMenu = (struct RecommendSupportServantSelectListMenu_o *)_4__this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v44->fields.servantSelectMenu,
    (int64_t)_4__this,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v52 = this->fields.__4__this;
  if ( !v52 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v90,
    (System_String_o *)StringLiteral_11334/*"RecommendSupportEquipSelectListMenuPrefab"*/,
    v52->fields.cashedAssetData,
    v51);
  _4__this = (char *)v90;
  if ( !v90 )
    goto LABEL_23;
  v53 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v90,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___);
  if ( !v53 )
    goto LABEL_23;
  v53->fields.equipSelectMenu = (struct RecommendSupportEquipSelectListMenu_o *)_4__this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v53->fields.equipSelectMenu,
    (int64_t)_4__this,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v61 = this->fields.__4__this;
  if ( !v61 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v89,
    (System_String_o *)StringLiteral_11337/*"RecommendSupportQuestSelectMenuPrefab"*/,
    v61->fields.cashedAssetData,
    v60);
  _4__this = (char *)v89;
  if ( !v89 )
    goto LABEL_23;
  v62 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v89,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___);
  if ( !v62 )
    goto LABEL_23;
  v62->fields.questSelectMenu = (struct RecommendSupportQuestSelectListMenu_o *)_4__this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v62->fields.questSelectMenu,
    (int64_t)_4__this,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v70 = this->fields.__4__this;
  if ( !v70 )
    goto LABEL_23;
  RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
    this,
    &v88,
    (System_String_o *)StringLiteral_11336/*"RecommendSupportMessageSelectDialogPrefab"*/,
    v70->fields.cashedAssetData,
    v69);
  _4__this = (char *)v88;
  if ( !v88 )
    goto LABEL_23;
  v71 = this->fields.__4__this;
  _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                       v88,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___);
  if ( !v71
    || (v71->fields.messageSelectDialog = (struct RecommendSupportMessageSelectDialog_o *)_4__this,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v71->fields.messageSelectDialog,
          (int64_t)_4__this,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77),
        (v79 = this->fields.__4__this) == 0LL)
    || (RecommendSupportSelectControl___c__DisplayClass41_0___GetAssets_g__SetPrefabAndNullCheck_0(
          this,
          &v87,
          (System_String_o *)StringLiteral_11333/*"RecommendSupportCancelConfirmDialogPrefab"*/,
          v79->fields.cashedAssetData,
          v78),
        (_4__this = (char *)v87) == 0LL)
    || (v80 = this->fields.__4__this,
        _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                             v87,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___),
        !v80) )
  {
LABEL_23:
    sub_1BCAA3C(_4__this, assetData);
  }
  v80->fields.cancelConfirmDialog = (struct RecommendSupportCancelConfirmDialog_o *)_4__this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v80->fields.cancelConfirmDialog,
    (int64_t)_4__this,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct RecommendSupportSelectControl_o *_4__this; // x8
  Il2CppObject *v14; // x20
  __int64 v15; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  v8 = this;
  if ( (byte_4B1240B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, prefabObject, prefabName);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v9, v10);
    this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1240B = 1;
  }
  if ( !assetData
    || (this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)AssetData__GetObject_object__49237568(
                                                                          assetData,
                                                                          prefabName,
                                                                          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696),
        (_4__this = v8->fields.__4__this) == 0LL)
    || (v14 = (Il2CppObject *)this,
        (this = (RecommendSupportSelectControl___c__DisplayClass41_0_o *)_4__this->fields.rootObject) == 0LL) )
  {
    sub_1BCAA3C(this, prefabObject);
  }
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v17 = UnityEngine_Object__Instantiate_object__49903816(
          v14,
          transform,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  *prefabObject = (UnityEngine_GameObject_o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)prefabObject, (int64_t)v17, v18, v19, v20, v21, v22, v23);
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
    sub_1BCAA3C(this, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}