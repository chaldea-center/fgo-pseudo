void RecommendSupportSelectControl___ctor(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  const MethodInfo_47A2F28 *v3; // x1

  if ( (byte_596C4FD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__);
    byte_596C4FD = 1;
  }
  v3 = (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl___ctor__;
  this->fields._SelectIndex_k__BackingField = -1;
  SingletonMonoBehaviour_object____ctor((SingletonMonoBehaviour_T__o *)this, v3);
}


void RecommendSupportSelectControl__Awake(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  if ( (byte_596C4F7 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__);
    byte_596C4F7 = 1;
  }
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2D54 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__Awake__);
}


void RecommendSupportSelectControl__GetAssets(
        RecommendSupportSelectControl_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
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
  AssetLoader_LoadEndDataHandler_o *v22; // x20

  if ( (byte_596C4F4 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectControl___c__DisplayClass43_0__GetAssets_b__0__);
    sub_2213A60(&RecommendSupportSelectControl___c__DisplayClass43_0_TypeInfo);
    sub_2213A60(&StringLiteral_11004/*"PartyOrganization/RecommendSupport"*/);
    byte_596C4F4 = 1;
  }
  v5 = sub_2213CCC(RecommendSupportSelectControl___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  if ( GameObjectExtensions__HasChild(this->fields.rootObject, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
  }
  else
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20, v21);
    AssetManager__SetAssetBundleUnload((System_String_o *)StringLiteral_11004/*"PartyOrganization/RecommendSupport"*/, 0);
    v22 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v22,
      (Il2CppObject *)v5,
      Method_RecommendSupportSelectControl___c__DisplayClass43_0__GetAssets_b__0__,
      0);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_11004/*"PartyOrganization/RecommendSupport"*/, v22, 1, 0, 0);
  }
}


Il2CppObject *RecommendSupportSelectControl__GetDialog_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_3973E0C *method)
{
  const MethodInfo_3973E0C_RGCTXs *rgctx_data; // x8
  System_RuntimeTypeHandle_o v5; // x21
  System_Type_o *TypeFromHandle; // x22
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x21
  Il2CppType *v9; // x21
  System_Type_o *v10; // x0
  UnityEngine_Object_o **p_messageSelectDialog; // x8
  Il2CppType *v12; // x21
  System_Type_o *v13; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  System_Type_o *Type; // x20
  Il2CppType *_0_T; // x22
  System_Type_o *v19; // x0
  long double v20; // q0
  Il2CppClass *_1_T; // x1

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&RecommendSupportCancelConfirmDialog_var);
    sub_2213A60(&RecommendSupportMessageSelectDialog_var);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964();
      rgctx_data = method->rgctx_data;
    }
  }
  v5.fields.value = (intptr_t)rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, method);
  TypeFromHandle = System_Type__GetTypeFromHandle(v5, 0);
  v8 = 0;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0) == 1 )
  {
    v9 = RecommendSupportMessageSelectDialog_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v7);
    v10 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v9, 0);
    if ( System_Type__op_Equality(TypeFromHandle, v10, 0) )
    {
      p_messageSelectDialog = (UnityEngine_Object_o **)&this->fields.messageSelectDialog;
LABEL_15:
      v8 = *p_messageSelectDialog;
      goto LABEL_16;
    }
    v12 = RecommendSupportCancelConfirmDialog_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v7);
    v13 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v12, 0);
    v8 = 0;
    if ( System_Type__op_Equality(TypeFromHandle, v13, 0) )
    {
      p_messageSelectDialog = (UnityEngine_Object_o **)&this->fields.cancelConfirmDialog;
      goto LABEL_15;
    }
  }
LABEL_16:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v14 = UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( !v14 )
    return 0;
  if ( !v8 )
    sub_2213CDC(v14, v15);
  Type = System_Object__GetType((Il2CppObject *)v8, 0);
  _0_T = method->rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v16);
  v19 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_0_T, 0);
  if ( !System_Type__op_Equality(Type, v19, 0) )
    return 0;
  _1_T = method->rgctx_data->_1_T;
  if ( (*((_WORD *)&_1_T->_2.bitflags2 + 1) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_224B908(v20);
  return (Il2CppObject *)sub_2213BB4(v8, _1_T);
}


Il2CppObject *RecommendSupportSelectControl__GetMenu_object_(
        RecommendSupportSelectControl_o *this,
        const MethodInfo_3973FF4 *method)
{
  const MethodInfo_3973FF4_RGCTXs *rgctx_data; // x8
  System_RuntimeTypeHandle_o v5; // x21
  System_Type_o *TypeFromHandle; // x21
  __int64 v7; // x1
  Il2CppObject *v8; // x22
  Il2CppType *v9; // x22
  System_Type_o *v10; // x0
  Il2CppObject **p_mainMenu; // x21
  __int64 v12; // x1
  bool v13; // w8
  Il2CppObject *result; // x0
  __int64 v15; // x1
  System_Type_o *Type; // x20
  Il2CppType *_0_T; // x21
  System_Type_o *v18; // x0
  bool v19; // w8
  long double v20; // q0
  Il2CppClass *_1_T; // x1
  Il2CppType *v22; // x22
  System_Type_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *servantSelectMenu; // x22
  Il2CppObject *Component_object; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppType *v33; // x22
  System_Type_o *v34; // x0
  __int64 v35; // x1
  UnityEngine_Object_o *equipSelectMenu; // x22
  Il2CppObject *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppType *v44; // x22
  System_Type_o *v45; // x0
  UnityEngine_Object_o *questSelectMenu; // x22
  Il2CppObject *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  UnityEngine_GameObject_o *v54; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *v55; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_GameObject_o *prefabObject; // [xsp+18h] [xbp-38h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&RecommendSupportEquipSelectListMenu_var);
    sub_2213A60(&RecommendSupportQuestSelectListMenu_var);
    sub_2213A60(&RecommendSupportSelectListViewMenu_var);
    sub_2213A60(&RecommendSupportServantSelectListMenu_var);
    sub_2213A60(&StringLiteral_11714/*"RecommendSupportEquipSelectListMenuPrefab"*/);
    sub_2213A60(&StringLiteral_11717/*"RecommendSupportQuestSelectMenuPrefab"*/);
    sub_2213A60(&StringLiteral_11722/*"RecommendSupportServantSelectMenuPrefab"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964();
      rgctx_data = method->rgctx_data;
    }
  }
  prefabObject = 0;
  v54 = 0;
  v55 = 0;
  v5.fields.value = (intptr_t)rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, method);
  TypeFromHandle = System_Type__GetTypeFromHandle(v5, 0);
  v8 = 0;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0) == 1 )
  {
    v9 = RecommendSupportSelectListViewMenu_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v7);
    v10 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v9, 0);
    if ( System_Type__op_Equality(TypeFromHandle, v10, 0) )
    {
      p_mainMenu = (Il2CppObject **)&this->fields.mainMenu;
LABEL_11:
      v8 = *p_mainMenu;
      goto LABEL_12;
    }
    v22 = RecommendSupportServantSelectListMenu_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v7);
    v23 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v22, 0);
    if ( System_Type__op_Equality(TypeFromHandle, v23, 0) )
    {
      p_mainMenu = (Il2CppObject **)&this->fields.servantSelectMenu;
      servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      if ( UnityEngine_Object__op_Equality(servantSelectMenu, 0, 0) )
      {
        RecommendSupportSelectControl__SetPrefabAndNullCheck(
          this,
          &prefabObject,
          (System_String_o *)StringLiteral_11722/*"RecommendSupportServantSelectMenuPrefab"*/,
          0);
        result = (Il2CppObject *)prefabObject;
        if ( !prefabObject )
          goto LABEL_50;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             prefabObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportServantSelectListMenu___);
        *p_mainMenu = Component_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.servantSelectMenu,
          (int32_t)Component_object,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        result = *p_mainMenu;
        if ( !*p_mainMenu )
          goto LABEL_50;
        RecommendSupportServantSelectListMenu__Init((RecommendSupportServantSelectListMenu_o *)result, 0);
      }
      goto LABEL_11;
    }
    v33 = RecommendSupportEquipSelectListMenu_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v24);
    v34 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v33, 0);
    if ( System_Type__op_Equality(TypeFromHandle, v34, 0) )
    {
      p_mainMenu = (Il2CppObject **)&this->fields.equipSelectMenu;
      equipSelectMenu = (UnityEngine_Object_o *)this->fields.equipSelectMenu;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
      if ( UnityEngine_Object__op_Equality(equipSelectMenu, 0, 0) )
      {
        RecommendSupportSelectControl__SetPrefabAndNullCheck(this, &v55, (System_String_o *)StringLiteral_11714/*"RecommendSupportEquipSelectListMenuPrefab"*/, 0);
        result = (Il2CppObject *)v55;
        if ( !v55 )
          goto LABEL_50;
        v37 = UnityEngine_GameObject__GetComponent_object_(
                v55,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListMenu___);
        *p_mainMenu = v37;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.equipSelectMenu,
          (int32_t)v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        result = *p_mainMenu;
        if ( !*p_mainMenu )
          goto LABEL_50;
        RecommendSupportEquipSelectListMenu__Init((RecommendSupportEquipSelectListMenu_o *)result, 0);
      }
      goto LABEL_11;
    }
    v44 = RecommendSupportQuestSelectListMenu_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v35);
    v45 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v44, 0);
    v8 = 0;
    if ( System_Type__op_Equality(TypeFromHandle, v45, 0) )
    {
      p_mainMenu = (Il2CppObject **)&this->fields.questSelectMenu;
      questSelectMenu = (UnityEngine_Object_o *)this->fields.questSelectMenu;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( UnityEngine_Object__op_Equality(questSelectMenu, 0, 0) )
      {
        RecommendSupportSelectControl__SetPrefabAndNullCheck(this, &v54, (System_String_o *)StringLiteral_11717/*"RecommendSupportQuestSelectMenuPrefab"*/, 0);
        result = (Il2CppObject *)v54;
        if ( !v54 )
          goto LABEL_50;
        v47 = UnityEngine_GameObject__GetComponent_object_(
                v54,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestSelectListMenu___);
        *p_mainMenu = v47;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.questSelectMenu,
          (int32_t)v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        result = *p_mainMenu;
        if ( !*p_mainMenu )
          goto LABEL_50;
        RecommendSupportQuestSelectListMenu__Init((RecommendSupportQuestSelectListMenu_o *)result, 0);
      }
      goto LABEL_11;
    }
  }
LABEL_12:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  result = 0;
  if ( v13 )
  {
    if ( v8 )
    {
      Type = System_Object__GetType(v8, 0);
      _0_T = method->rgctx_data->_0_T;
      if ( !*(_DWORD *)(qword_59843E0 + 228) )
        j_il2cpp_runtime_class_init_0(qword_59843E0, v15);
      v18 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_0_T, 0);
      v19 = System_Type__op_Equality(Type, v18, 0);
      result = 0;
      if ( v19 )
      {
        _1_T = method->rgctx_data->_1_T;
        if ( (*((_WORD *)&_1_T->_2.bitflags2 + 1) & 1) == 0 )
          _1_T = (Il2CppClass *)sub_224B908(v20);
        return (Il2CppObject *)sub_2213BB4(v8, _1_T);
      }
      return result;
    }
LABEL_50:
    sub_2213CDC(result, v12);
  }
  return result;
}


int32_t RecommendSupportSelectControl__GetState(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  RecommendSupportSelectControl_o *v2; // x19
  struct CStateManager_RecommendSupportSelectControl__o *fsm; // x8

  v2 = this;
  if ( (byte_596C4F9 & 1) == 0 )
  {
    this = (RecommendSupportSelectControl_o *)sub_2213A60(&Method_CStateManager_RecommendSupportSelectControl__getState__);
    byte_596C4F9 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_2213CDC(this, method);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v29; // x21
  EventUpValSetupInfo_o *v30; // x22
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct CStateManager_RecommendSupportSelectControl__o **p_fsm; // x21
  Il2CppObject *v38; // x22
  CStateManager_T__o *v39; // x23
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  CStateManager_T__o *v46; // x22
  Il2CppObject *v47; // x23
  CStateManager_T__o *v48; // x22
  Il2CppObject *v49; // x23
  CStateManager_T__o *v50; // x22
  Il2CppObject *v51; // x23
  CStateManager_T__o *v52; // x21
  Il2CppObject *v53; // x22
  RecommendSupportData_o *v54; // x21
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_Action_c *v61; // x0
  System_Action_o *v62; // x21
  const MethodInfo *v63; // x2

  if ( (byte_596C4F8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CStateManager_RecommendSupportSelectControl___ctor__);
    sub_2213A60(&Method_CStateManager_RecommendSupportSelectControl__add__);
    sub_2213A60(&CStateManager_RecommendSupportSelectControl__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo);
    sub_2213A60(&RecommendSupportData_TypeInfo);
    sub_2213A60(&RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo);
    sub_2213A60(&RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_RecommendSupportSelectControl___c__DisplayClass47_0__Init_b__0__);
    sub_2213A60(&RecommendSupportSelectControl___c__DisplayClass47_0_TypeInfo);
    byte_596C4F8 = 1;
  }
  v7 = sub_2213CCC(RecommendSupportSelectControl___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  this->fields._SceneJumpInfo_k__BackingField = sceneJumpInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int32_t)sceneJumpInfo,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v29 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  v30 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_48741124(v30, v29, 0, 0, 0, 0);
  this->fields._EventSetupInfo_k__BackingField = v30;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventSetupInfo_k__BackingField,
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
  v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  v39 = (CStateManager_T__o *)sub_2213CCC(CStateManager_RecommendSupportSelectControl__TypeInfo);
  CStateManager_object____ctor(
    v39,
    v38,
    4,
    (const MethodInfo_3E83D54 *)Method_CStateManager_RecommendSupportSelectControl___ctor__);
  *p_fsm = (struct CStateManager_RecommendSupportSelectControl__o *)v39;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  v46 = (CStateManager_T__o *)*p_fsm;
  v47 = (Il2CppObject *)sub_2213CCC(RecommendSupportSelectControl_RecommendSupportSelectMenuState_TypeInfo);
  System_Object___ctor(v47, 0);
  if ( !v46 )
    goto LABEL_14;
  CStateManager_object___add(
    v46,
    0,
    (IState_T__o *)v47,
    (const MethodInfo_3E83E04 *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v48 = (CStateManager_T__o *)*p_fsm;
  v49 = (Il2CppObject *)sub_2213CCC(RecommendSupportSelectControl_ServantSelectMenuState_TypeInfo);
  System_Object___ctor(v49, 0);
  if ( !v48 )
    goto LABEL_14;
  CStateManager_object___add(
    v48,
    1,
    (IState_T__o *)v49,
    (const MethodInfo_3E83E04 *)Method_CStateManager_RecommendSupportSelectControl__add__);
  v50 = (CStateManager_T__o *)*p_fsm;
  v51 = (Il2CppObject *)sub_2213CCC(RecommendSupportSelectControl_EquipSelectMenuState_TypeInfo);
  System_Object___ctor(v51, 0);
  if ( !v50
    || (CStateManager_object___add(
          v50,
          2,
          (IState_T__o *)v51,
          (const MethodInfo_3E83E04 *)Method_CStateManager_RecommendSupportSelectControl__add__),
        v52 = (CStateManager_T__o *)*p_fsm,
        v53 = (Il2CppObject *)sub_2213CCC(RecommendSupportSelectControl_QuestSelectMenuState_TypeInfo),
        System_Object___ctor(v53, 0),
        !v52) )
  {
LABEL_14:
    sub_2213CDC(Instance, v9);
  }
  CStateManager_object___add(
    v52,
    3,
    (IState_T__o *)v53,
    (const MethodInfo_3E83E04 *)Method_CStateManager_RecommendSupportSelectControl__add__);
LABEL_12:
  v54 = (RecommendSupportData_o *)sub_2213CCC(RecommendSupportData_TypeInfo);
  RecommendSupportData___ctor(v54, 0);
  this->fields._RecommendSupportData_k__BackingField = v54;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RecommendSupportData_k__BackingField,
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
  v61 = System_Action_TypeInfo;
  this->fields._IsEdit_k__BackingField = 0;
  v62 = (System_Action_o *)sub_2213CCC(v61);
  System_Action___ctor(
    v62,
    (Il2CppObject *)v7,
    Method_RecommendSupportSelectControl___c__DisplayClass47_0__Init_b__0__,
    0);
  RecommendSupportSelectControl__GetAssets(this, v62, v63);
}


void RecommendSupportSelectControl__OpenDialog_object_(
        RecommendSupportSelectControl_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        int32_t index,
        const MethodInfo_3974450 *method)
{
  const MethodInfo_3974450_RGCTXs *rgctx_data; // x8
  System_RuntimeTypeHandle_o v9; // x22
  System_Type_o *TypeFromHandle; // x22
  __int64 v11; // x1
  Il2CppType *v12; // x21
  System_Type_o *v13; // x0
  __int64 v14; // x1
  struct RecommendSupportMessageSelectDialog_o **p_messageSelectDialog; // x21
  UnityEngine_Object_o *messageSelectDialog; // x22
  __int64 v17; // x1
  RecommendSupportMessageSelectDialog_o *v18; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  UnityEngine_Object_o *v27; // x22
  Il2CppType *v28; // x21
  System_Type_o *v29; // x0
  __int64 v30; // x1
  struct RecommendSupportCancelConfirmDialog_o **p_cancelConfirmDialog; // x21
  UnityEngine_Object_o *cancelConfirmDialog; // x22
  Il2CppObject *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x20
  UnityEngine_GameObject_o *v42; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *prefabObject; // [xsp+8h] [xbp-38h] BYREF

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&RecommendSupportCancelConfirmDialog_var);
    sub_2213A60(&RecommendSupportMessageSelectDialog_var);
    sub_2213A60(&StringLiteral_11716/*"RecommendSupportMessageSelectDialogPrefab"*/);
    sub_2213A60(&StringLiteral_11713/*"RecommendSupportCancelConfirmDialogPrefab"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964();
      rgctx_data = method->rgctx_data;
    }
  }
  v42 = 0;
  prefabObject = 0;
  v9.fields.value = (intptr_t)rgctx_data->_0_T;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, callback);
  TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0);
  this->fields._SelectIndex_k__BackingField = index;
  if ( System_Type__GetTypeCode(TypeFromHandle, 0) != 1 )
    return;
  v12 = RecommendSupportMessageSelectDialog_var;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v11);
  v13 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v12, 0);
  if ( System_Type__op_Equality(TypeFromHandle, v13, 0) )
  {
    p_messageSelectDialog = &this->fields.messageSelectDialog;
    messageSelectDialog = (UnityEngine_Object_o *)this->fields.messageSelectDialog;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( !UnityEngine_Object__op_Equality(messageSelectDialog, 0, 0) )
    {
LABEL_19:
      v18 = this->fields.messageSelectDialog;
      this->fields._IsEdit_k__BackingField = 1;
      if ( v18 )
      {
        RecommendSupportMessageSelectDialog__Open(v18, callback, 0);
        return;
      }
LABEL_36:
      sub_2213CDC(v18, v17);
    }
    RecommendSupportSelectControl__SetPrefabAndNullCheck(this, &prefabObject, (System_String_o *)StringLiteral_11716/*"RecommendSupportMessageSelectDialogPrefab"*/, 0);
    v18 = (RecommendSupportMessageSelectDialog_o *)prefabObject;
    if ( !prefabObject )
      goto LABEL_36;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         prefabObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectDialog___);
    *p_messageSelectDialog = (struct RecommendSupportMessageSelectDialog_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.messageSelectDialog,
      (int32_t)Component_object,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v27 = (UnityEngine_Object_o *)*p_messageSelectDialog;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    if ( !UnityEngine_Object__op_Equality(v27, 0, 0) )
    {
      v18 = *p_messageSelectDialog;
      if ( !*p_messageSelectDialog )
        goto LABEL_36;
      RecommendSupportMessageSelectDialog__Init(v18, 0);
      goto LABEL_19;
    }
  }
  else
  {
    v28 = RecommendSupportCancelConfirmDialog_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v14);
    v29 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v28, 0);
    if ( !System_Type__op_Equality(TypeFromHandle, v29, 0) )
      return;
    p_cancelConfirmDialog = &this->fields.cancelConfirmDialog;
    cancelConfirmDialog = (UnityEngine_Object_o *)this->fields.cancelConfirmDialog;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    if ( UnityEngine_Object__op_Equality(cancelConfirmDialog, 0, 0) )
    {
      RecommendSupportSelectControl__SetPrefabAndNullCheck(this, &v42, (System_String_o *)StringLiteral_11713/*"RecommendSupportCancelConfirmDialogPrefab"*/, 0);
      v18 = (RecommendSupportMessageSelectDialog_o *)v42;
      if ( !v42 )
        goto LABEL_36;
      v33 = UnityEngine_GameObject__GetComponent_object_(
              v42,
              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportCancelConfirmDialog___);
      *p_cancelConfirmDialog = (struct RecommendSupportCancelConfirmDialog_o *)v33;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.cancelConfirmDialog,
        (int32_t)v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      v41 = (UnityEngine_Object_o *)*p_cancelConfirmDialog;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
      if ( UnityEngine_Object__op_Equality(v41, 0, 0) )
        return;
      v18 = (RecommendSupportMessageSelectDialog_o *)*p_cancelConfirmDialog;
      if ( !*p_cancelConfirmDialog )
        goto LABEL_36;
      RecommendSupportCancelConfirmDialog__Init((RecommendSupportCancelConfirmDialog_o *)v18, 0);
    }
    v18 = (RecommendSupportMessageSelectDialog_o *)*p_cancelConfirmDialog;
    if ( !*p_cancelConfirmDialog )
      goto LABEL_36;
    RecommendSupportCancelConfirmDialog__Open((RecommendSupportCancelConfirmDialog_o *)v18, callback, 0);
  }
}


void RecommendSupportSelectControl__ReleaseAsset(RecommendSupportSelectControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct RecommendSupportSelectListViewMenu_o **p_mainMenu; // x20
  UnityEngine_Object_o *mainMenu; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct RecommendSupportServantSelectListMenu_o **p_servantSelectMenu; // x20
  UnityEngine_Object_o *servantSelectMenu; // x21
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct RecommendSupportEquipSelectListMenu_o **p_equipSelectMenu; // x20
  UnityEngine_Object_o *equipSelectMenu; // x21
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *v35; // x21
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct RecommendSupportQuestSelectListMenu_o **p_questSelectMenu; // x20
  UnityEngine_Object_o *questSelectMenu; // x21
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Object_o *v47; // x21
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct RecommendSupportMessageSelectDialog_o **p_messageSelectDialog; // x20
  UnityEngine_Object_o *messageSelectDialog; // x21
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  UnityEngine_Object_o *v59; // x21
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct RecommendSupportCancelConfirmDialog_o **p_cancelConfirmDialog; // x20
  UnityEngine_Object_o *cancelConfirmDialog; // x21
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  UnityEngine_Object_o *v71; // x21
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  MissionNaviTransitionBoardItem_o *p_cashedAssetData; // x19
  AssetData_o *v79; // x20
  struct AssetData_o *cashedAssetData; // t1
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7

  if ( (byte_596C4F6 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C4F6 = 1;
  }
  p_mainMenu = &this->fields.mainMenu;
  mainMenu = (UnityEngine_Object_o *)this->fields.mainMenu;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(mainMenu, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_mainMenu;
    if ( !*p_mainMenu )
      goto LABEL_48;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_mainMenu = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainMenu, 0, v12, v13, v14, v15, v16, v17);
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(servantSelectMenu, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_servantSelectMenu;
    if ( !*p_servantSelectMenu )
      goto LABEL_48;
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
    UnityEngine_Object__Destroy_83459800(v23, 0);
    *p_servantSelectMenu = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.servantSelectMenu, 0, v24, v25, v26, v27, v28, v29);
  }
  p_equipSelectMenu = &this->fields.equipSelectMenu;
  equipSelectMenu = (UnityEngine_Object_o *)this->fields.equipSelectMenu;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v20);
  if ( UnityEngine_Object__op_Inequality(equipSelectMenu, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_equipSelectMenu;
    if ( !*p_equipSelectMenu )
      goto LABEL_48;
    v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
    UnityEngine_Object__Destroy_83459800(v35, 0);
    *p_equipSelectMenu = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipSelectMenu, 0, v36, v37, v38, v39, v40, v41);
  }
  p_questSelectMenu = &this->fields.questSelectMenu;
  questSelectMenu = (UnityEngine_Object_o *)this->fields.questSelectMenu;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v32);
  if ( UnityEngine_Object__op_Inequality(questSelectMenu, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_questSelectMenu;
    if ( !*p_questSelectMenu )
      goto LABEL_48;
    v47 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45, v46);
    UnityEngine_Object__Destroy_83459800(v47, 0);
    *p_questSelectMenu = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.questSelectMenu, 0, v48, v49, v50, v51, v52, v53);
  }
  p_messageSelectDialog = &this->fields.messageSelectDialog;
  messageSelectDialog = (UnityEngine_Object_o *)this->fields.messageSelectDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v44);
  if ( UnityEngine_Object__op_Inequality(messageSelectDialog, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_messageSelectDialog;
    if ( !*p_messageSelectDialog )
      goto LABEL_48;
    v59 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57, v58);
    UnityEngine_Object__Destroy_83459800(v59, 0);
    *p_messageSelectDialog = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.messageSelectDialog, 0, v60, v61, v62, v63, v64, v65);
  }
  p_cancelConfirmDialog = &this->fields.cancelConfirmDialog;
  cancelConfirmDialog = (UnityEngine_Object_o *)this->fields.cancelConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v56);
  if ( UnityEngine_Object__op_Inequality(cancelConfirmDialog, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_cancelConfirmDialog;
    if ( *p_cancelConfirmDialog )
    {
      v71 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v69, v70);
      UnityEngine_Object__Destroy_83459800(v71, 0);
      *p_cancelConfirmDialog = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.cancelConfirmDialog,
        0,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
      goto LABEL_45;
    }
LABEL_48:
    sub_2213CDC(v8, v6);
  }
LABEL_45:
  cashedAssetData = this->fields.cashedAssetData;
  p_cashedAssetData = (MissionNaviTransitionBoardItem_o *)&this->fields.cashedAssetData;
  v79 = cashedAssetData;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v68);
  AssetManager__releaseAsset_47496972(v79, 0);
  p_cashedAssetData->klass = 0;
  sub_2213A04(p_cashedAssetData, 0, v81, v82, v83, v84, v85, v86);
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

  if ( (byte_596C4FC & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportSelectControl_ReturnScene__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596C4FC = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( Instance )
    {
      AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( Instance )
      {
        if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 39, 1, 0, 0);
            return;
          }
        }
      }
    }
    sub_2213CDC(Instance, v9);
  }
  v5 = Method_RecommendSupportSelectControl_ReturnScene__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectControl_ReturnScene__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_RecommendSupportSelectControl_ReturnScene__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  RecommendSupportSelectControl__SetState(this, 0, v7);
}


void RecommendSupportSelectControl__SetPrefabAndNullCheck(
        RecommendSupportSelectControl_o *this,
        UnityEngine_GameObject_o **prefabObject,
        System_String_o *prefabName,
        const MethodInfo *method)
{
  AssetData_o *cashedAssetData; // x0
  UnityEngine_GameObject_o *rootObject; // x8
  Il2CppObject *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596C4F5 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C4F5 = 1;
  }
  cashedAssetData = this->fields.cashedAssetData;
  if ( !cashedAssetData
    || (cashedAssetData = (AssetData_o *)AssetData__GetObject_object__58532980(
                                           cashedAssetData,
                                           prefabName,
                                           (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320),
        (rootObject = this->fields.rootObject) == 0) )
  {
    sub_2213CDC(cashedAssetData, prefabObject);
  }
  v9 = (Il2CppObject *)cashedAssetData;
  transform = UnityEngine_GameObject__get_transform(rootObject, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  v13 = UnityEngine_Object__Instantiate_object__59717116(
          v9,
          transform,
          (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  *prefabObject = (UnityEngine_GameObject_o *)v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)prefabObject, (int32_t)v13, v14, v15, v16, v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportSelectControl__SetState(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_596C4FA & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_RecommendSupportSelectControl__setState__);
    byte_596C4FA = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_RecommendSupportSelectControl__setState__);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportSelectControl__SetState_41626680(
        RecommendSupportSelectControl_o *this,
        int32_t state,
        int32_t index,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_596C4FB & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_RecommendSupportSelectControl__setState__);
    byte_596C4FB = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  this->fields._SelectIndex_k__BackingField = index;
  this->fields._IsEdit_k__BackingField = 1;
  if ( !fsm )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_RecommendSupportSelectControl__setState__);
}


EventUpValSetupInfo_o *RecommendSupportSelectControl__get_EventSetupInfo(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  return this->fields._EventSetupInfo_k__BackingField;
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(0, method);
  return RecommendSupportData__GetMessage(
           RecommendSupportData_k__BackingField,
           this->fields._SelectIndex_k__BackingField,
           0);
}


int32_t RecommendSupportSelectControl__get_SelectQuestId(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x0
  int32_t questPhase; // [xsp+8h] [xbp-8h] BYREF
  int32_t questId; // [xsp+Ch] [xbp-4h] BYREF

  RecommendSupportData_k__BackingField = this->fields._RecommendSupportData_k__BackingField;
  if ( !RecommendSupportData_k__BackingField )
    sub_2213CDC(0, method);
  RecommendSupportData__TryGetQuest(
    RecommendSupportData_k__BackingField,
    this->fields._SelectIndex_k__BackingField,
    &questId,
    &questPhase,
    0);
  return questId;
}


int32_t RecommendSupportSelectControl__get_SelectQuestPhase(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x0
  int32_t questId; // [xsp+8h] [xbp-8h] BYREF
  int32_t questPhase; // [xsp+Ch] [xbp-4h] BYREF

  RecommendSupportData_k__BackingField = this->fields._RecommendSupportData_k__BackingField;
  if ( !RecommendSupportData_k__BackingField )
    sub_2213CDC(0, method);
  RecommendSupportData__TryGetQuest(
    RecommendSupportData_k__BackingField,
    this->fields._SelectIndex_k__BackingField,
    &questId,
    &questPhase,
    0);
  return questPhase;
}


int64_t RecommendSupportSelectControl__get_SelectServantId(
        RecommendSupportSelectControl_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x0

  RecommendSupportData_k__BackingField = this->fields._RecommendSupportData_k__BackingField;
  if ( !RecommendSupportData_k__BackingField )
    sub_2213CDC(0, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EventSetupInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventSetupInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RecommendSupportData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RecommendSupportData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SceneJumpInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SceneJumpInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20056C8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2005680;
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
  if ( (byte_596C4FE & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportSelectControl_DialogState_TypeInfo);
    byte_596C4FE = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(RecommendSupportSelectControl_DialogState_TypeInfo, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void RecommendSupportSelectControl_DialogResultCallBack__EndInvoke(
        RecommendSupportSelectControl_DialogResultCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v8; // x2

  if ( (byte_596C505 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C505 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportEquipSelectListMenu___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v8);
      return;
    }
LABEL_12:
    sub_2213CDC(Instance, v4);
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
  __int64 v5; // x2
  RecommendSupportSelectControl_EquipSelectMenuState___c_c *v6; // x8
  BaseMenu_o *v7; // x19
  struct RecommendSupportSelectControl_EquipSelectMenuState___c_StaticFields *static_fields; // x9
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v10; // x21
  struct RecommendSupportSelectControl_EquipSelectMenuState___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596C506 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__);
    sub_2213A60(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    byte_596C506 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  v6 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
  v7 = (BaseMenu_o *)Instance;
  if ( !*(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo, v4, v5);
    v6 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v10, Method_RecommendSupportSelectControl_EquipSelectMenuState___c__end_b__2_0__, 0);
    v11 = RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields;
    v11->__9__2_0 = _9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__2_0, (int32_t)_9__2_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !v7 )
LABEL_12:
    sub_2213CDC(Instance, v4);
  BaseMenu__Close(v7, _9__2_0, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C507 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
    byte_596C507 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_EquipSelectMenuState___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportSelectControl_EquipSelectMenuState___c_TypeInfo->static_fields,
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  if ( (byte_596C508 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C508 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v8);
      return;
    }
LABEL_12:
    sub_2213CDC(Instance, v4);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  RecommendSupportQuestSelectListMenu__Open((RecommendSupportQuestSelectListMenu_o *)Menu_object, v9);
}


void RecommendSupportSelectControl_QuestSelectMenuState__end(
        RecommendSupportSelectControl_QuestSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  RecommendSupportSelectControl_QuestSelectMenuState___c_c *v6; // x8
  BaseMenu_o *v7; // x19
  struct RecommendSupportSelectControl_QuestSelectMenuState___c_StaticFields *static_fields; // x9
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v10; // x21
  struct RecommendSupportSelectControl_QuestSelectMenuState___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596C509 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__);
    sub_2213A60(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    byte_596C509 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportQuestSelectListMenu___);
  v6 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
  v7 = (BaseMenu_o *)Instance;
  if ( !*(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo, v4, v5);
    v6 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v10, Method_RecommendSupportSelectControl_QuestSelectMenuState___c__end_b__2_0__, 0);
    v11 = RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields;
    v11->__9__2_0 = _9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__2_0, (int32_t)_9__2_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !v7 )
LABEL_12:
    sub_2213CDC(Instance, v4);
  BaseMenu__Close(v7, _9__2_0, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C50A & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
    byte_596C50A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_QuestSelectMenuState___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportSelectControl_QuestSelectMenuState___c_TypeInfo->static_fields,
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  if ( (byte_596C4FF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596C4FF = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__ReturnScene(Instance, (System_String_o *)StringLiteral_23515/*"ok"*/, v8);
      return;
    }
LABEL_12:
    sub_2213CDC(Instance, v4);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  RecommendSupportSelectListViewMenu__Open((RecommendSupportSelectListViewMenu_o *)Menu_object, v9);
}


void RecommendSupportSelectControl_RecommendSupportSelectMenuState__end(
        RecommendSupportSelectControl_RecommendSupportSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_c *v6; // x8
  BaseMenu_o *v7; // x19
  struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_StaticFields *static_fields; // x9
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v10; // x21
  struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596C500 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__);
    sub_2213A60(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    byte_596C500 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
  v6 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
  v7 = (BaseMenu_o *)Instance;
  if ( !*(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo, v4, v5);
    v6 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2_0,
      v10,
      Method_RecommendSupportSelectControl_RecommendSupportSelectMenuState___c__end_b__2_0__,
      0);
    v11 = RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields;
    v11->__9__2_0 = _9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__2_0, (int32_t)_9__2_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !v7 )
LABEL_12:
    sub_2213CDC(Instance, v4);
  BaseMenu__Close(v7, _9__2_0, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C501 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
    byte_596C501 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportSelectControl_RecommendSupportSelectMenuState___c_TypeInfo->static_fields,
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v8; // x2

  if ( (byte_596C502 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C502 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                  Instance,
                  (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Menu_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      RecommendSupportSelectControl__SetState(Instance, 0, v8);
      return;
    }
LABEL_12:
    sub_2213CDC(Instance, v4);
  }
  if ( !Menu_object )
    goto LABEL_12;
  Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Menu_object,
                                                  0);
  if ( !Instance )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  RecommendSupportServantSelectListMenu__Open((RecommendSupportServantSelectListMenu_o *)Menu_object, 0);
}


void RecommendSupportSelectControl_ServantSelectMenuState__end(
        RecommendSupportSelectControl_ServantSelectMenuState_o *this,
        RecommendSupportSelectControl_o *that,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  RecommendSupportSelectControl_ServantSelectMenuState___c_c *v6; // x8
  BaseMenu_o *v7; // x19
  struct RecommendSupportSelectControl_ServantSelectMenuState___c_StaticFields *static_fields; // x9
  System_Action_o *_9__2_0; // x20
  Il2CppObject *v10; // x21
  struct RecommendSupportSelectControl_ServantSelectMenuState___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596C503 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__);
    sub_2213A60(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    byte_596C503 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = RecommendSupportSelectControl__GetMenu_object_(
               (RecommendSupportSelectControl_o *)Instance,
               (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportServantSelectListMenu___);
  v6 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
  v7 = (BaseMenu_o *)Instance;
  if ( !*(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo, v4, v5);
    v6 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__2_0, v10, Method_RecommendSupportSelectControl_ServantSelectMenuState___c__end_b__2_0__, 0);
    v11 = RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields;
    v11->__9__2_0 = _9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__2_0, (int32_t)_9__2_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !v7 )
LABEL_12:
    sub_2213CDC(Instance, v4);
  BaseMenu__Close(v7, _9__2_0, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C504 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
    byte_596C504 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectControl_ServantSelectMenuState___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportSelectControl_ServantSelectMenuState___c_TypeInfo->static_fields,
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


void RecommendSupportSelectControl___c__DisplayClass43_0___ctor(
        RecommendSupportSelectControl___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectControl___c__DisplayClass43_0___GetAssets_b__0(
        RecommendSupportSelectControl___c__DisplayClass43_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  char *_4__this; // x0
  const MethodInfo *v11; // x3
  struct RecommendSupportSelectControl_o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_GameObject_o *prefabObject; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596C50B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___);
    sub_2213A60(&StringLiteral_11718/*"RecommendSupportSelectMenuPrefab"*/);
    byte_596C50B = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  prefabObject = 0;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 4) = assetData,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(_4__this + 32),
          (int32_t)assetData,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (_4__this = (char *)this->fields.__4__this) == 0)
    || (RecommendSupportSelectControl__SetPrefabAndNullCheck(
          (RecommendSupportSelectControl_o *)_4__this,
          &prefabObject,
          (System_String_o *)StringLiteral_11718/*"RecommendSupportSelectMenuPrefab"*/,
          v11),
        (_4__this = (char *)prefabObject) == 0)
    || (v12 = this->fields.__4__this,
        _4__this = (char *)UnityEngine_GameObject__GetComponent_object_(
                             prefabObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportSelectListViewMenu___),
        !v12) )
  {
    sub_2213CDC(_4__this, assetData);
  }
  v12->fields.mainMenu = (struct RecommendSupportSelectListViewMenu_o *)_4__this;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.mainMenu,
    (int32_t)_4__this,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void RecommendSupportSelectControl___c__DisplayClass47_0___ctor(
        RecommendSupportSelectControl___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectControl___c__DisplayClass47_0___Init_b__0(
        RecommendSupportSelectControl___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportSelectControl_o *_4__this; // x8
  RecommendSupportSelectControl___c__DisplayClass47_0_o *v3; // x19
  const MethodInfo *v4; // x2
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (RecommendSupportSelectControl___c__DisplayClass47_0_o *)_4__this->fields.mainMenu) == 0)
    || (RecommendSupportSelectListViewMenu__Init((RecommendSupportSelectListViewMenu_o *)this, method),
        (this = (RecommendSupportSelectControl___c__DisplayClass47_0_o *)v3->fields.__4__this) == 0)
    || (RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)this, 0, v4),
        (callback = v3->fields.callback) == 0) )
  {
    sub_2213CDC(this, method);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}