void __fastcall GrandServantListRootComponent___ctor(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall GrandServantListRootComponent__DecideActionSendMessageMenuDecide(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4B173EA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B173EA = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  GrandServantListRootComponent__SendMessageMenuDecide(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent__EndShowEquip(
        GrandServantListRootComponent_o *this,
        bool isModify,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B173E6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isModify);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_SendMessageCloseStatus__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B173E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageCloseStatus__, 0LL);
  if ( !Instance )
    sub_1BCB254(v8, v9);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent__EndShowServant(
        GrandServantListRootComponent_o *this,
        bool isModify,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B173E4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isModify);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_SendMessageCloseStatus__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B173E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageCloseStatus__, 0LL);
  if ( !Instance )
    sub_1BCB254(v8, v9);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent__EndShowServantWithQuest(
        GrandServantListRootComponent_o *this,
        bool isModify,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  GrandServantListRootComponent___c_c *v13; // x8
  CommonUI_o *v14; // x19
  System_Action_o *_9__37_0; // x20
  Il2CppObject *v16; // x21
  struct GrandServantListRootComponent___c_StaticFields *static_fields; // x0
  GrandServantListData_o *v18; // x21
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  struct GrandServantListMenu_o *listMenu; // x8

  if ( (byte_4B173E5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isModify);
    sub_1BCAFF8(&GrandServantListData_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BCAFF8(&Method_GrandServantListRootComponent___c__EndShowServantWithQuest_b__37_0__, v9);
    sub_1BCAFF8(&GrandServantListRootComponent___c_TypeInfo, v10);
    byte_4B173E5 = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = GrandServantListRootComponent___c_TypeInfo;
    v14 = (CommonUI_o *)Instance;
    if ( !GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo);
      v13 = GrandServantListRootComponent___c_TypeInfo;
    }
    _9__37_0 = v13->static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = GrandServantListRootComponent___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v13->static_fields->__9;
      _9__37_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        _9__37_0,
        v16,
        Method_GrandServantListRootComponent___c__EndShowServantWithQuest_b__37_0__,
        0LL);
      static_fields = GrandServantListRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__37_0 = _9__37_0;
      Instance = (Il2CppObject *)sub_1BCAF9C(&static_fields->__9__37_0);
    }
    if ( v14 )
    {
      CommonUI__CloseServantStatusDialog(v14, _9__37_0, 0LL);
      return;
    }
LABEL_17:
    sub_1BCB254(Instance, v12);
  }
  if ( isModify )
  {
    v18 = (GrandServantListData_o *)sub_1BCB244(GrandServantListData_TypeInfo);
    GrandServantListData___ctor(v18, v19);
    this->fields.grandServantListData = v18;
    Instance = (Il2CppObject *)sub_1BCAF9C(&this->fields.grandServantListData);
    listMenu = this->fields.listMenu;
    if ( !listMenu )
      goto LABEL_17;
    Instance = (Il2CppObject *)listMenu->fields.menu;
    if ( !Instance )
      goto LABEL_17;
    GrandServantListMenuLayout__UpdateView(
      (GrandServantListMenuLayout_o *)Instance,
      this->fields.grandServantListData,
      v20);
  }
  GrandServantListRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall GrandServantListRootComponent__InstantiateAssetObject___Il2CppFullySharedGenericType_(
        GrandServantListRootComponent_o *this,
        System_String_o *objectName,
        const MethodInfo_30707D4 *method)
{
  __int64 v3; // x3
  __int64 v4; // x20
  __int64 v7; // x8
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x23
  UnityEngine_Transform_o *transform; // x24
  AssetData_o *v18; // x2
  __int64 *v19; // x1
  __int64 v20; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v21; // x0 OVERLAPPED
  void *v22; // x1
  __int64 v23[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v4 = v3;
  v23[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v7 = *(_QWORD *)(v3 + 56);
  if ( !v7 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, objectName);
    sub_1BCAFF8(&AssetManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_7094/*"GrandServantList"*/, v12);
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 )
    {
      sub_1C1B4B8();
      v7 = *(_QWORD *)(v4 + 56);
    }
  }
  v13 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 252LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7094/*"GrandServantList"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_12;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__50315216(
                                  AssetStorage,
                                  objectName,
                                  (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !this->fields.uiRoot )
    goto LABEL_12;
  v16 = (Il2CppObject *)AssetStorage;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.uiRoot, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object__51002592(
                                  v16,
                                  transform,
                                  (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
  if ( !AssetStorage )
LABEL_12:
    sub_1BCB254(AssetStorage, v15);
  v18 = AssetStorage;
  v19 = **(__int64 ***)(v4 + 56);
  v20 = *v19;
  v23[0] = (__int64)v23 - ((v13 + 15) & 0x1FFFFFFF0LL);
  ((void (__fastcall *)(__int64, __int64 *, AssetData_o *, __int64 *, __int64))v19[2])(v20, v19, v18, v23, v23[0]);
  v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    (void *)method,
                                                                    (char *)v23 - ((v13 + 15) & 0x1FFFFFFF0LL),
                                                                    v13);
  result.monitor = v22;
  result.klass = v21;
  return result;
}


Il2CppObject *__fastcall GrandServantListRootComponent__InstantiateAssetObject_object_(
        GrandServantListRootComponent_o *this,
        System_String_o *objectName,
        const MethodInfo_30706BC *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  AssetData_o *AssetStorage; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *uiRoot; // x8
  Il2CppObject *v13; // x20
  UnityEngine_Transform_o *transform; // x21

  if ( !method->rgctx_data )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, objectName);
    sub_1BCAFF8(&AssetManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_7094/*"GrandServantList"*/, v9);
    if ( !method->rgctx_data )
      sub_1C1B4B8();
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7094/*"GrandServantList"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_12;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__50315216(
                                  AssetStorage,
                                  objectName,
                                  (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  uiRoot = (UnityEngine_Component_o *)this->fields.uiRoot;
  if ( !uiRoot )
    goto LABEL_12;
  v13 = (Il2CppObject *)AssetStorage;
  transform = UnityEngine_Component__get_transform(uiRoot, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object__51002592(
                                  v13,
                                  transform,
                                  (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
  if ( !AssetStorage )
LABEL_12:
    sub_1BCB254(AssetStorage, v11);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)AssetStorage,
           (const MethodInfo_306E710 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


void __fastcall GrandServantListRootComponent__OnClickBack(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  struct SceneJumpInfo_o *v12; // x8
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  __int64 v15; // x1
  TerminalPramsManager_c *v16; // x0
  struct SceneJumpInfo_o *v17; // x8

  if ( (byte_4B173D5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_GrandServantListRootComponent_OnClickBack__, method);
    sub_1BCAFF8(&SceneList_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v5);
    byte_4B173D5 = 1;
  }
  v6 = Method_GrandServantListRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnClickBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !sceneJumpInfo
    || (Instance = (Il2CppObject *)System_String__IsNullOrEmpty(sceneJumpInfo->fields.returnSceneName, 0LL),
        ((unsigned __int8)Instance & 1) != 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__popScene((AvalonSceneManager_o *)Instance, 1, 0LL, 0LL) )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( Instance )
      {
        v11 = 39;
LABEL_23:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v11, 1, 0LL, 0LL);
        return;
      }
    }
    goto LABEL_27;
  }
  v12 = this->fields.sceneJumpInfo;
  if ( !v12 )
    goto LABEL_27;
  returnSceneName = v12->fields.returnSceneName;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(34, 0LL);
  if ( System_String__op_Equality(returnSceneName, SceneName, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B16DCD )
    {
      sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v15);
      byte_4B16DCD = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    v16->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      v11 = 34;
      goto LABEL_23;
    }
LABEL_27:
    sub_1BCB254(Instance, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v17 = this->fields.sceneJumpInfo;
  if ( !v17 || !Instance )
    goto LABEL_27;
  AvalonSceneManager__transitionScene_40339144(
    (AvalonSceneManager_o *)Instance,
    v17->fields.returnSceneName,
    1,
    (Il2CppObject *)v17->fields.backSceneJumpInfo,
    0LL);
}


void __fastcall GrandServantListRootComponent__OnClickHelpBtn(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B173EB & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_OnClickHelpBtn__, v3);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_SendMessageMenuCancel__, v4);
    byte_4B173EB = 1;
  }
  v5 = Method_GrandServantListRootComponent_OnClickHelpBtn__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnClickHelpBtn__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnClickHelpBtn__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageMenuCancel__, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 100, v7, 1, 0LL);
}


void __fastcall GrandServantListRootComponent__OnInit(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *MainBgmName; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  GrandServantListMenu_o *listMenu; // x0
  GrandServantListData_o *v10; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  struct GrandServantListMenu_o *v13; // x8

  if ( (byte_4B173D4 & 1) == 0 )
  {
    sub_1BCAFF8(&BgmManager_TypeInfo, method);
    sub_1BCAFF8(&GrandServantListData_TypeInfo, v3);
    sub_1BCAFF8(&SoundManager_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_12220/*"START_FORMATION"*/, v5);
    byte_4B173D4 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  listMenu = this->fields.listMenu;
  if ( !listMenu
    || (GrandServantListMenu__Initialize(listMenu, this->fields.myFSM, v8),
        v10 = (GrandServantListData_o *)sub_1BCB244(GrandServantListData_TypeInfo),
        GrandServantListData___ctor(v10, v11),
        this->fields.grandServantListData = v10,
        listMenu = (GrandServantListMenu_o *)sub_1BCAF9C(&this->fields.grandServantListData),
        (v13 = this->fields.listMenu) == 0LL)
    || (listMenu = (GrandServantListMenu_o *)v13->fields.menu) == 0LL )
  {
    sub_1BCB254(listMenu, v7);
  }
  GrandServantListMenuLayout__UpdateView(
    (GrandServantListMenuLayout_o *)listMenu,
    this->fields.grandServantListData,
    v12);
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12220/*"START_FORMATION"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog(
        GrandServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  BaseDialog_o *confirmGrandServantResetDialog; // x20
  System_Action_o *v11; // x0
  __int64 *v12; // x8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  System_Action_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B173E1 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__, v5);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog_b__33_0__, v6);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog_b__33_1__, v7);
    byte_4B173E1 = 1;
  }
  if ( result == 1 )
  {
    v13 = Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 1, 0, 0LL);
    confirmGrandServantResetDialog = (BaseDialog_o *)this->fields.confirmGrandServantResetDialog;
    v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    v12 = &Method_GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog_b__33_1__;
  }
  else
  {
    if ( result )
      return;
    v8 = Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0LL);
    confirmGrandServantResetDialog = (BaseDialog_o *)this->fields.confirmGrandServantResetDialog;
    v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    v12 = &Method_GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog_b__33_0__;
  }
  v15 = v11;
  System_Action___ctor(v11, (Il2CppObject *)this, *v12, 0LL);
  if ( !confirmGrandServantResetDialog )
    sub_1BCB254(v16, v17);
  BaseDialog__SafeClose(confirmGrandServantResetDialog, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog(
        GrandServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  BaseDialog_o *confirmUseGrandServantResetItemDialog; // x20
  System_Action_o *v11; // x0
  __int64 *v12; // x8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  System_Action_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B173DF & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__, v5);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog_b__31_0__, v6);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog_b__31_1__, v7);
    byte_4B173DF = 1;
  }
  if ( result == 1 )
  {
    v13 = Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 1, 0, 0LL);
    confirmUseGrandServantResetItemDialog = (BaseDialog_o *)this->fields.confirmUseGrandServantResetItemDialog;
    v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    v12 = &Method_GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog_b__31_1__;
  }
  else
  {
    if ( result )
      return;
    v8 = Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
    confirmUseGrandServantResetItemDialog = (BaseDialog_o *)this->fields.confirmUseGrandServantResetItemDialog;
    v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    v12 = &Method_GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog_b__31_0__;
  }
  v15 = v11;
  System_Action___ctor(v11, (Il2CppObject *)this, *v12, 0LL);
  if ( !confirmUseGrandServantResetItemDialog )
    sub_1BCB254(v16, v17);
  BaseDialog__SafeClose(confirmUseGrandServantResetItemDialog, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent__OnSelectEditEquip(
        GrandServantListRootComponent_o *this,
        int32_t parentClassBoardBaseId,
        int32_t equipIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  GrandServantListData_o *grandServantListData; // x0
  GrandServantListSlotData_o *v14; // x21
  UnityEngine_Object_o *grandEquipGraphListMenu; // x23
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  GrandEquipGraphListMenu_o *v18; // x22
  System_Action_bool__o *v19; // x23
  const MethodInfo *v20; // x4
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_4B173E3 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_bool__TypeInfo, *(_QWORD *)&parentClassBoardBaseId);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_InstantiateAssetObject_GrandEquipGraphListMenu___, v7);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_OnSelectEditEquip__, v8);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OnSelectEditEquip_b__35_0__, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_7085/*"GrandEquipGraphListMenu"*/, v11);
    sub_1BCAFF8(&StringLiteral_12234/*"START_SELECT_EQUIP"*/, v12);
    byte_4B173E3 = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_18;
  grandServantListData = (GrandServantListData_o *)GrandServantListData__GetSlotData(
                                                     grandServantListData,
                                                     parentClassBoardBaseId,
                                                     *(const MethodInfo **)&equipIndex);
  if ( !grandServantListData )
    goto LABEL_18;
  v14 = (GrandServantListSlotData_o *)grandServantListData;
  if ( grandServantListData[1].klass )
  {
    SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12234/*"START_SELECT_EQUIP"*/, 0LL);
    grandEquipGraphListMenu = (UnityEngine_Object_o *)this->fields.grandEquipGraphListMenu;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(grandEquipGraphListMenu, 0LL, 0LL) )
    {
      this->fields.grandEquipGraphListMenu = (struct GrandEquipGraphListMenu_o *)GrandServantListRootComponent__InstantiateAssetObject_object_(
                                                                                   this,
                                                                                   (System_String_o *)StringLiteral_7085/*"GrandEquipGraphListMenu"*/,
                                                                                   (const MethodInfo_30706BC *)Method_GrandServantListRootComponent_InstantiateAssetObject_GrandEquipGraphListMenu___);
      sub_1BCAF9C(&this->fields.grandEquipGraphListMenu);
      grandServantListData = (GrandServantListData_o *)this->fields.grandEquipGraphListMenu;
      if ( !grandServantListData )
        goto LABEL_18;
      GrandEquipGraphListMenu__Init(
        (GrandEquipGraphListMenu_o *)grandServantListData,
        *(const MethodInfo **)&parentClassBoardBaseId);
    }
    v16 = Method_GrandServantListRootComponent_OnSelectEditEquip__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditEquip__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectEditEquip__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
    v18 = this->fields.grandEquipGraphListMenu;
    v19 = (System_Action_bool__o *)sub_1BCB244(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v19,
      (Il2CppObject *)this,
      Method_GrandServantListRootComponent__OnSelectEditEquip_b__35_0__,
      0LL);
    if ( v18 )
    {
      GrandEquipGraphListMenu__Open(v18, v14, equipIndex, v19, v20);
      return;
    }
LABEL_18:
    sub_1BCB254(grandServantListData, *(_QWORD *)&parentClassBoardBaseId);
  }
  v21 = Method_GrandServantListRootComponent_OnSelectEditEquip__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditEquip__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectEditEquip__);
  v22 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0, 0LL);
  GrandServantListRootComponent__SendMessageMenuCancel(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent__OnSelectEditServant(
        GrandServantListRootComponent_o *this,
        int32_t parentClassBoardBaseId,
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
  Il2CppObject *v15; // x21
  GrandServantListData_o *grandServantListData; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  _QWORD *monitor; // x8
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  const MethodInfo *v22; // x1
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  const MethodInfo *v25; // x1
  Il2CppObject *v26; // x20
  void **p_monitor; // x22
  __int64 v28; // x8
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v32; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v34; // x21
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  __int64 v37; // x8
  int32_t v38; // w20
  System_Action_o *v39; // x21
  GrandServantListRootComponent_o *v40; // x0
  const MethodInfo *v41; // x3

  if ( (byte_4B173D8 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&parentClassBoardBaseId);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_InstantiateAssetObject_SelectGrandServantComponent___, v6);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_OnSelectEditServant__, v7);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_SendMessageMenuCancel__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BCAFF8(&GrandServantListRootComponent___c__DisplayClass23_0_TypeInfo, v10);
    sub_1BCAFF8(&Method_GrandServantListRootComponent___c__DisplayClass23_1__OnSelectEditServant_b__2__, v11);
    sub_1BCAFF8(&GrandServantListRootComponent___c__DisplayClass23_1_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_12562/*"SelectGrandServantComponent"*/, v13);
    sub_1BCAFF8(&StringLiteral_12235/*"START_SELECT_GRAND"*/, v14);
    byte_4B173D8 = 1;
  }
  v15 = (Il2CppObject *)sub_1BCB244(GrandServantListRootComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_29;
  v15[1].klass = (Il2CppClass *)this;
  sub_1BCAF9C(&v15[1]);
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_29;
  v15[1].monitor = GrandServantListData__GetSlotData(grandServantListData, parentClassBoardBaseId, v18);
  grandServantListData = (GrandServantListData_o *)sub_1BCAF9C(&v15[1].monitor);
  monitor = v15[1].monitor;
  if ( !monitor )
    goto LABEL_29;
  if ( *((_BYTE *)monitor + 16) )
  {
    if ( monitor[3] )
    {
      v20 = Method_GrandServantListRootComponent_OnSelectEditServant__;
      if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditServant__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectEditServant__);
      v21 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
      this->fields.lastSelectedParentClassBoardBaseId = parentClassBoardBaseId;
      GrandServantListRootComponent__OpenGrandServantListMenuBranchDialog(this, v22);
      return;
    }
    v26 = (Il2CppObject *)sub_1BCB244(GrandServantListRootComponent___c__DisplayClass23_1_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( v26 )
    {
      v26[1].monitor = v15;
      p_monitor = &v26[1].monitor;
      grandServantListData = (GrandServantListData_o *)sub_1BCAF9C(&v26[1].monitor);
      if ( v26[1].monitor )
      {
        v28 = *((_QWORD *)v26[1].monitor + 3);
        if ( v28 )
        {
          if ( *(_BYTE *)(v28 + 17) )
          {
            SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12235/*"START_SELECT_GRAND"*/, 0LL);
            v29 = Method_GrandServantListRootComponent_OnSelectEditServant__;
            if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditServant__ + 83) & 2) != 0 )
              v29 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectEditServant__);
            v30 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v29, v29[4]);
            OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0, 0LL);
            v26[1].klass = (Il2CppClass *)GrandServantListRootComponent__InstantiateAssetObject_object_(
                                            this,
                                            (System_String_o *)StringLiteral_12562/*"SelectGrandServantComponent"*/,
                                            (const MethodInfo_30706BC *)Method_GrandServantListRootComponent_InstantiateAssetObject_SelectGrandServantComponent___);
            sub_1BCAF9C(&v26[1]);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v32 = AvalonSceneManager_TypeInfo;
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v32 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v32->static_fields->DEFAULT_FADE_TIME;
            v34 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
            System_Action___ctor(
              v34,
              v26,
              Method_GrandServantListRootComponent___c__DisplayClass23_1__OnSelectEditServant_b__2__,
              0LL);
            if ( Instance )
            {
              CommonUI__maskFadeout((CommonUI_o *)Instance, 2, DEFAULT_FADE_TIME, v34, 0LL);
              return;
            }
          }
          else
          {
            v35 = Method_GrandServantListRootComponent_OnSelectEditServant__;
            if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditServant__ + 83) & 2) != 0 )
              v35 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectEditServant__);
            v36 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v35, v35[4]);
            OverwriteAssetSoundName__PlaySystemSe(v36, 0, 0, 0LL);
            if ( *p_monitor )
            {
              v37 = *((_QWORD *)*p_monitor + 3);
              if ( v37 )
              {
                v38 = *(_DWORD *)(v37 + 44);
                v39 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                System_Action___ctor(
                  v39,
                  (Il2CppObject *)this,
                  Method_GrandServantListRootComponent_SendMessageMenuCancel__,
                  0LL);
                GrandServantListRootComponent__OpenCannotSelectGrandDialog(v40, v38, v39, v41);
                return;
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_1BCB254(grandServantListData, v17);
  }
  v23 = Method_GrandServantListRootComponent_OnSelectEditServant__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditServant__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectEditServant__);
  v24 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0, 0LL);
  GrandServantListRootComponent__SendMessageMenuCancel(this, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog(
        GrandServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  BaseDialog_o *grandServantListMenuBranchDialog; // x20
  System_Action_o *v13; // x0
  __int64 *v14; // x8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  System_Action_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1

  if ( (byte_4B173DC & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__, v5);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__28_0__, v6);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__28_1__, v7);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__28_2__, v8);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__28_3__, v9);
    byte_4B173DC = 1;
  }
  switch ( result )
  {
    case 0:
      v10 = Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__;
      if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
      v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
      grandServantListMenuBranchDialog = (BaseDialog_o *)this->fields.grandServantListMenuBranchDialog;
      v13 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      v14 = &Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__28_0__;
      goto LABEL_16;
    case 1:
      v15 = Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__;
      if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
      grandServantListMenuBranchDialog = (BaseDialog_o *)this->fields.grandServantListMenuBranchDialog;
      v13 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      v14 = &Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__28_1__;
      goto LABEL_16;
    case 2:
      v17 = Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__;
      if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
      v18 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0LL);
      grandServantListMenuBranchDialog = (BaseDialog_o *)this->fields.grandServantListMenuBranchDialog;
      v13 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      v14 = &Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__28_2__;
      goto LABEL_16;
    case 3:
      v19 = Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__;
      if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
      v20 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 1, 0, 0LL);
      grandServantListMenuBranchDialog = (BaseDialog_o *)this->fields.grandServantListMenuBranchDialog;
      v13 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      v14 = &Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__28_3__;
LABEL_16:
      v21 = v13;
      System_Action___ctor(v13, (Il2CppObject *)this, *v14, 0LL);
      if ( !grandServantListMenuBranchDialog )
        sub_1BCB254(v22, v23);
      BaseDialog__SafeClose(grandServantListMenuBranchDialog, v21, 0LL);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent__OnSelectOpenEquipStatus(
        GrandServantListRootComponent_o *this,
        int32_t parentClassBoardBaseId,
        int32_t equipIndex,
        bool isLongPress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  GrandServantListData_o *grandServantListData; // x0
  __int64 v14; // x2
  _DWORD *monitor; // x8
  GrandServantListData_o *v16; // x21
  int32_t v17; // w9
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  _QWORD *v20; // x8
  __int64 v21; // x22
  bool v22; // w20
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  __int128 v25; // q1
  CommonUI_o *v26; // x21
  int64_t v27; // x22
  ServantStatusDialog_EndDelegate_o *v28; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-50h]

  if ( (byte_4B173D7 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, *(_QWORD *)&parentClassBoardBaseId);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_EndShowEquip__, v9);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4B173D7 = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_26;
  grandServantListData = (GrandServantListData_o *)GrandServantListData__GetSlotData(
                                                     grandServantListData,
                                                     parentClassBoardBaseId,
                                                     *(const MethodInfo **)&equipIndex);
  if ( !grandServantListData )
    goto LABEL_26;
  monitor = grandServantListData[1].monitor;
  v16 = grandServantListData;
  if ( monitor )
  {
    v17 = monitor[6];
    if ( v17 > equipIndex )
    {
      if ( v17 <= (unsigned int)equipIndex )
        goto LABEL_27;
      if ( *(_QWORD *)&monitor[2 * equipIndex + 8] )
      {
        v18 = Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__;
        if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__ + 83) & 2) != 0 )
          v18 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__);
        v19 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v18, v18[4]);
        OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
        v20 = v16[2].monitor;
        if ( !v20 )
          goto LABEL_26;
        if ( *((_DWORD *)v20 + 6) > (unsigned int)equipIndex )
        {
          v21 = v20[equipIndex + 4];
          v22 = equipIndex == 1 && SHIDWORD(v16[2].fields.slotDataList) > 0;
          grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v21 )
          {
            v25 = *(_OWORD *)(v21 + 32);
            v26 = (CommonUI_o *)grandServantListData;
            *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
            *(_OWORD *)&v30.fields.fakeValue = v25;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v29 = v30;
            v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v29, 0LL);
            v28 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v28,
              (Il2CppObject *)this,
              Method_GrandServantListRootComponent_EndShowEquip__,
              0LL);
            if ( v26 )
            {
              CommonUI__OpenServantEquipStatusDialog(v26, 11, v27, 1, v28, 0LL, v22, 0LL);
              return;
            }
          }
LABEL_26:
          sub_1BCB254(grandServantListData, *(_QWORD *)&parentClassBoardBaseId);
        }
LABEL_27:
        sub_1BCB25C(grandServantListData, *(_QWORD *)&parentClassBoardBaseId, v14);
      }
    }
  }
  if ( !isLongPress )
  {
    v23 = Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__);
    v24 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v23, v23[4]);
    OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0, 0LL);
  }
  GrandServantListRootComponent__SendMessageCloseStatus(this, *(const MethodInfo **)&parentClassBoardBaseId);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent__OnSelectOpenServantStatus(
        GrandServantListRootComponent_o *this,
        int32_t parentClassBoardBaseId,
        bool isLongPress,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  GrandServantListData_o *grandServantListData; // x0
  GrandServantListData_o *v12; // x21
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  GrandServantListData_c *klass; // x8
  Il2CppType byval_arg; // q1
  CommonUI_o *v17; // x20
  int64_t v18; // x21
  ServantStatusDialog_FormationEndDelegate_o *v19; // x22
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-50h]

  if ( (byte_4B173D6 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog_FormationEndDelegate_TypeInfo, *(_QWORD *)&parentClassBoardBaseId);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_EndShowServantWithQuest__, v7);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_OnSelectOpenServantStatus__, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4B173D6 = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_18;
  grandServantListData = (GrandServantListData_o *)GrandServantListData__GetSlotData(
                                                     grandServantListData,
                                                     parentClassBoardBaseId,
                                                     (const MethodInfo *)isLongPress);
  if ( !grandServantListData )
    goto LABEL_18;
  v12 = grandServantListData;
  if ( grandServantListData[1].klass )
  {
    v13 = Method_GrandServantListRootComponent_OnSelectOpenServantStatus__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenServantStatus__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectOpenServantStatus__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
    grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    klass = v12[2].klass;
    if ( klass )
    {
      byval_arg = klass->_1.byval_arg;
      v17 = (CommonUI_o *)grandServantListData;
      *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v23.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v22 = v23;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v22, 0LL);
      v19 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1BCB244(ServantStatusDialog_FormationEndDelegate_TypeInfo);
      ServantStatusDialog_FormationEndDelegate___ctor(
        v19,
        (Il2CppObject *)this,
        Method_GrandServantListRootComponent_EndShowServantWithQuest__,
        0LL);
      if ( v17 )
      {
        CommonUI__OpenServantStatusDialog_30773452(v17, 1, v18, v19, 0LL, 0LL);
        return;
      }
    }
LABEL_18:
    sub_1BCB254(grandServantListData, *(_QWORD *)&parentClassBoardBaseId);
  }
  if ( !isLongPress )
  {
    v20 = Method_GrandServantListRootComponent_OnSelectOpenServantStatus__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenServantStatus__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent_OnSelectOpenServantStatus__);
    v21 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0LL);
  }
  GrandServantListRootComponent__SendMessageCloseStatus(this, *(const MethodInfo **)&parentClassBoardBaseId);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent__OpenCannotSelectGrandDialog(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v15; // x1
  Il2CppObject *Entity; // x21
  System_String_o *v17; // x20
  System_String_o *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  System_String_o *v27; // x21
  Il2CppObject *Instance; // x22
  System_Nullable_float__o messagePosY; // [xsp+38h] [xbp-58h] BYREF
  int monitor; // [xsp+48h] [xbp-48h] BYREF
  int klass_high; // [xsp+4Ch] [xbp-44h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8

  if ( (byte_4B173D9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_GrandGraphMaster___, *(_QWORD *)&grandGraphId);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&int_TypeInfo, v8);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Nullable_float___ctor__, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BCAFF8(&StringLiteral_3260/*"CANNOT_SELECT_GRAND_DIALOG_MESSAGE"*/, v12);
    sub_1BCAFF8(&StringLiteral_3261/*"CANNOT_SELECT_GRAND_DIALOG_TITLE"*/, v13);
    byte_4B173D9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             grandGraphId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3261/*"CANNOT_SELECT_GRAND_DIALOG_TITLE"*/,
                                                                  0LL);
  if ( !Entity )
    goto LABEL_11;
  v17 = System_String__Format((System_String_o *)Master_object, (Il2CppObject *)Entity[2].klass, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"CANNOT_SELECT_GRAND_DIALOG_MESSAGE"*/, 0LL);
  klass_high = HIDWORD(Entity[3].klass);
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high, v19, v20, v21);
  monitor = (int)Entity[3].monitor;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor, v23, v24, v25);
  v27 = System_String__Format_62491716(v18, v22, v26, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 26.0, (const MethodInfo_37DB04C *)Method_System_Nullable_float___ctor__);
  if ( !Instance )
LABEL_11:
    sub_1BCB254(Master_object, v15);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    v17,
    v27,
    func,
    -1,
    0,
    0,
    0,
    0,
    26,
    1,
    0,
    messagePosY,
    0.0,
    1,
    0LL);
}


void __fastcall GrandServantListRootComponent__OpenChangeGrandSameServantListMenu(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *changeGrandSameServantListMenu; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  GrandServantListData_o *grandServantListData; // x0
  GrandServantListSlotData_o *SlotData; // x0
  ChangeGrandSameServantListMenu_o *v12; // x20
  GrandServantListSlotData_o *v13; // x21
  System_Action_bool__o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4B173DE & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_bool__TypeInfo, method);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_InstantiateAssetObject_ChangeGrandSameServantListMenu___, v3);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OpenChangeGrandSameServantListMenu_b__30_0__, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_4328/*"ChangeGrandSameServantListMenu"*/, v6);
    byte_4B173DE = 1;
  }
  changeGrandSameServantListMenu = (UnityEngine_Object_o *)this->fields.changeGrandSameServantListMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(changeGrandSameServantListMenu, 0LL, 0LL) )
  {
    this->fields.changeGrandSameServantListMenu = (struct ChangeGrandSameServantListMenu_o *)GrandServantListRootComponent__InstantiateAssetObject_object_(
                                                                                               this,
                                                                                               (System_String_o *)StringLiteral_4328/*"ChangeGrandSameServantListMenu"*/,
                                                                                               (const MethodInfo_30706BC *)Method_GrandServantListRootComponent_InstantiateAssetObject_ChangeGrandSameServantListMenu___);
    sub_1BCAF9C(&this->fields.changeGrandSameServantListMenu);
    grandServantListData = (GrandServantListData_o *)this->fields.changeGrandSameServantListMenu;
    if ( !grandServantListData )
      goto LABEL_11;
    ((void (__fastcall *)(GrandServantListData_o *, _QWORD, void *))grandServantListData->klass[1]._1.namespaze)(
      grandServantListData,
      0LL,
      grandServantListData->klass[1]._1.byval_arg.data);
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData
    || (SlotData = GrandServantListData__GetSlotData(
                     grandServantListData,
                     this->fields.lastSelectedParentClassBoardBaseId,
                     v9),
        v12 = this->fields.changeGrandSameServantListMenu,
        v13 = SlotData,
        v14 = (System_Action_bool__o *)sub_1BCB244(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(
          v14,
          (Il2CppObject *)this,
          Method_GrandServantListRootComponent__OpenChangeGrandSameServantListMenu_b__30_0__,
          0LL),
        !v12) )
  {
LABEL_11:
    sub_1BCB254(grandServantListData, v8);
  }
  ChangeGrandSameServantListMenu__Open(v12, v13, v14, v15);
}


void __fastcall GrandServantListRootComponent__OpenConfirmGrandServantResetDialog(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ConfirmGrandServantResetDialog_o **p_confirmGrandServantResetDialog; // x20
  UnityEngine_Object_o *confirmGrandServantResetDialog; // x21
  const MethodInfo *v9; // x1
  ConfirmGrandServantResetDialog_o *grandServantListData; // x0
  const MethodInfo *v11; // x2
  UserServantEntity_o *baseWindow; // x21
  ConfirmGrandServantResetDialog_o *v13; // x20
  ConfirmGrandServantResetDialog_CallbackFunc_o *v14; // x22
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4B173E0 & 1) == 0 )
  {
    sub_1BCAFF8(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmGrandServantResetDialog___, v3);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_4607/*"ConfirmGrandServantResetDialog"*/, v6);
    byte_4B173E0 = 1;
  }
  p_confirmGrandServantResetDialog = &this->fields.confirmGrandServantResetDialog;
  confirmGrandServantResetDialog = (UnityEngine_Object_o *)this->fields.confirmGrandServantResetDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(confirmGrandServantResetDialog, 0LL, 0LL) )
  {
    this->fields.confirmGrandServantResetDialog = (struct ConfirmGrandServantResetDialog_o *)GrandServantListRootComponent__InstantiateAssetObject_object_(
                                                                                               this,
                                                                                               (System_String_o *)StringLiteral_4607/*"ConfirmGrandServantResetDialog"*/,
                                                                                               (const MethodInfo_30706BC *)Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmGrandServantResetDialog___);
    sub_1BCAF9C(&this->fields.confirmGrandServantResetDialog);
  }
  grandServantListData = *p_confirmGrandServantResetDialog;
  if ( !*p_confirmGrandServantResetDialog
    || (ConfirmGrandServantResetDialog__Init(grandServantListData, v9),
        (grandServantListData = (ConfirmGrandServantResetDialog_o *)this->fields.grandServantListData) == 0LL)
    || (grandServantListData = (ConfirmGrandServantResetDialog_o *)GrandServantListData__GetSlotData(
                                                                     (GrandServantListData_o *)grandServantListData,
                                                                     this->fields.lastSelectedParentClassBoardBaseId,
                                                                     v11)) == 0LL
    || (baseWindow = (UserServantEntity_o *)grandServantListData->fields.baseWindow,
        v13 = this->fields.confirmGrandServantResetDialog,
        v14 = (ConfirmGrandServantResetDialog_CallbackFunc_o *)sub_1BCB244(ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo),
        ConfirmGrandServantResetDialog_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__,
          v15),
        !v13) )
  {
    sub_1BCB254(grandServantListData, v9);
  }
  ConfirmGrandServantResetDialog__Open(v13, baseWindow, v14, v16);
}


void __fastcall GrandServantListRootComponent__OpenConfirmUseGrandServantResetItemDialog(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ConfirmUseGrandServantResetItemDialog_o **p_confirmUseGrandServantResetItemDialog; // x20
  UnityEngine_Object_o *confirmUseGrandServantResetItemDialog; // x21
  __int64 v9; // x1
  BaseDialog_o *grandServantListData; // x0
  const MethodInfo *v11; // x2
  UserServantEntity_o *baseWindow; // x21
  ConfirmUseGrandServantResetItemDialog_o *v13; // x20
  ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *v14; // x22
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4B173DD & 1) == 0 )
  {
    sub_1BCAFF8(&ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(
      &Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmUseGrandServantResetItemDialog___,
      v3);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_4608/*"ConfirmUseGrandServantResetItemDialog"*/, v6);
    byte_4B173DD = 1;
  }
  p_confirmUseGrandServantResetItemDialog = &this->fields.confirmUseGrandServantResetItemDialog;
  confirmUseGrandServantResetItemDialog = (UnityEngine_Object_o *)this->fields.confirmUseGrandServantResetItemDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(confirmUseGrandServantResetItemDialog, 0LL, 0LL) )
  {
    this->fields.confirmUseGrandServantResetItemDialog = (struct ConfirmUseGrandServantResetItemDialog_o *)GrandServantListRootComponent__InstantiateAssetObject_object_(this, (System_String_o *)StringLiteral_4608/*"ConfirmUseGrandServantResetItemDialog"*/, (const MethodInfo_30706BC *)Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmUseGrandServantResetItemDialog___);
    sub_1BCAF9C(&this->fields.confirmUseGrandServantResetItemDialog);
  }
  grandServantListData = (BaseDialog_o *)*p_confirmUseGrandServantResetItemDialog;
  if ( !*p_confirmUseGrandServantResetItemDialog
    || (BaseDialog__Init(grandServantListData, 0LL),
        (grandServantListData = (BaseDialog_o *)this->fields.grandServantListData) == 0LL)
    || (grandServantListData = (BaseDialog_o *)GrandServantListData__GetSlotData(
                                                 (GrandServantListData_o *)grandServantListData,
                                                 this->fields.lastSelectedParentClassBoardBaseId,
                                                 v11)) == 0LL
    || (baseWindow = (UserServantEntity_o *)grandServantListData->fields.baseWindow,
        v13 = this->fields.confirmUseGrandServantResetItemDialog,
        v14 = (ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *)sub_1BCB244(ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo),
        ConfirmUseGrandServantResetItemDialog_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__,
          v15),
        !v13) )
  {
    sub_1BCB254(grandServantListData, v9);
  }
  ConfirmUseGrandServantResetItemDialog__Open(v13, baseWindow, v14, v16);
}


void __fastcall GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog(
        GrandServantListRootComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ConfirmedGrandServantSelectDialog_o **p_confirmedGrandServantSelectDialog; // x21
  UnityEngine_Object_o *confirmedGrandServantSelectDialog; // x22
  __int64 v11; // x1
  BaseDialog_o *v12; // x0
  ConfirmedGrandServantSelectDialog_o *v13; // x21
  ConfirmedGrandServantSelectDialog_CallbackFunc_o *v14; // x22
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4B173DA & 1) == 0 )
  {
    sub_1BCAFF8(&ConfirmedGrandServantSelectDialog_CallbackFunc_TypeInfo, userServantEntity);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmedGrandServantSelectDialog___, v5);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__25_0__, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_4618/*"ConfirmedGrandServantSelectDialog"*/, v8);
    byte_4B173DA = 1;
  }
  p_confirmedGrandServantSelectDialog = &this->fields.confirmedGrandServantSelectDialog;
  confirmedGrandServantSelectDialog = (UnityEngine_Object_o *)this->fields.confirmedGrandServantSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(confirmedGrandServantSelectDialog, 0LL, 0LL) )
  {
    this->fields.confirmedGrandServantSelectDialog = (struct ConfirmedGrandServantSelectDialog_o *)GrandServantListRootComponent__InstantiateAssetObject_object_(
                                                                                                     this,
                                                                                                     (System_String_o *)StringLiteral_4618/*"ConfirmedGrandServantSelectDialog"*/,
                                                                                                     (const MethodInfo_30706BC *)Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmedGrandServantSelectDialog___);
    sub_1BCAF9C(&this->fields.confirmedGrandServantSelectDialog);
  }
  v12 = (BaseDialog_o *)*p_confirmedGrandServantSelectDialog;
  if ( !*p_confirmedGrandServantSelectDialog
    || (BaseDialog__Init(v12, 0LL),
        v13 = this->fields.confirmedGrandServantSelectDialog,
        v14 = (ConfirmedGrandServantSelectDialog_CallbackFunc_o *)sub_1BCB244(ConfirmedGrandServantSelectDialog_CallbackFunc_TypeInfo),
        ConfirmedGrandServantSelectDialog_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__25_0__,
          v15),
        !v13) )
  {
    sub_1BCB254(v12, v11);
  }
  ConfirmedGrandServantSelectDialog__Open(v13, userServantEntity, v14, v16);
}


void __fastcall GrandServantListRootComponent__OpenGrandServantListMenuBranchDialog(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct GrandServantListMenuBranchDialog_o **p_grandServantListMenuBranchDialog; // x20
  UnityEngine_Object_o *grandServantListMenuBranchDialog; // x21
  __int64 v9; // x1
  BaseDialog_o *grandServantListData; // x0
  const MethodInfo *v11; // x2
  UserServantEntity_o *baseWindow; // x21
  GrandServantListMenuBranchDialog_o *v13; // x20
  GrandServantListMenuBranchDialog_CallbackFunc_o *v14; // x22
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4B173DB & 1) == 0 )
  {
    sub_1BCAFF8(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantListMenuBranchDialog___, v3);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_7095/*"GrandServantListMenuBranchDialog"*/, v6);
    byte_4B173DB = 1;
  }
  p_grandServantListMenuBranchDialog = &this->fields.grandServantListMenuBranchDialog;
  grandServantListMenuBranchDialog = (UnityEngine_Object_o *)this->fields.grandServantListMenuBranchDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(grandServantListMenuBranchDialog, 0LL, 0LL) )
  {
    this->fields.grandServantListMenuBranchDialog = (struct GrandServantListMenuBranchDialog_o *)GrandServantListRootComponent__InstantiateAssetObject_object_(
                                                                                                   this,
                                                                                                   (System_String_o *)StringLiteral_7095/*"GrandServantListMenuBranchDialog"*/,
                                                                                                   (const MethodInfo_30706BC *)Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantListMenuBranchDialog___);
    sub_1BCAF9C(&this->fields.grandServantListMenuBranchDialog);
  }
  grandServantListData = (BaseDialog_o *)*p_grandServantListMenuBranchDialog;
  if ( !*p_grandServantListMenuBranchDialog
    || (BaseDialog__Init(grandServantListData, 0LL),
        (grandServantListData = (BaseDialog_o *)this->fields.grandServantListData) == 0LL)
    || (grandServantListData = (BaseDialog_o *)GrandServantListData__GetSlotData(
                                                 (GrandServantListData_o *)grandServantListData,
                                                 this->fields.lastSelectedParentClassBoardBaseId,
                                                 v11)) == 0LL
    || (baseWindow = (UserServantEntity_o *)grandServantListData->fields.baseWindow,
        v13 = this->fields.grandServantListMenuBranchDialog,
        v14 = (GrandServantListMenuBranchDialog_CallbackFunc_o *)sub_1BCB244(GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo),
        GrandServantListMenuBranchDialog_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__,
          v15),
        !v13) )
  {
    sub_1BCB254(grandServantListData, v9);
  }
  GrandServantListMenuBranchDialog__Open(v13, baseWindow, v14, v16);
}


void __fastcall GrandServantListRootComponent__OpenGrandServantResetDialog(
        GrandServantListRootComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct GrandServantResetDialog_o **p_grandServantResetDialog; // x21
  UnityEngine_Object_o *grandServantResetDialog; // x22
  __int64 v11; // x1
  BaseDialog_o *v12; // x0
  GrandServantResetDialog_o *v13; // x21
  GrandServantResetDialog_CallbackFunc_o *v14; // x22
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4B173E2 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandServantResetDialog_CallbackFunc_TypeInfo, userServantEntity);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantResetDialog___, v5);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__34_0__, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_7098/*"GrandServantResetDialog"*/, v8);
    byte_4B173E2 = 1;
  }
  p_grandServantResetDialog = &this->fields.grandServantResetDialog;
  grandServantResetDialog = (UnityEngine_Object_o *)this->fields.grandServantResetDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(grandServantResetDialog, 0LL, 0LL) )
  {
    this->fields.grandServantResetDialog = (struct GrandServantResetDialog_o *)GrandServantListRootComponent__InstantiateAssetObject_object_(
                                                                                 this,
                                                                                 (System_String_o *)StringLiteral_7098/*"GrandServantResetDialog"*/,
                                                                                 (const MethodInfo_30706BC *)Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantResetDialog___);
    sub_1BCAF9C(&this->fields.grandServantResetDialog);
  }
  v12 = (BaseDialog_o *)*p_grandServantResetDialog;
  if ( !*p_grandServantResetDialog
    || (BaseDialog__Init(v12, 0LL),
        v13 = this->fields.grandServantResetDialog,
        v14 = (GrandServantResetDialog_CallbackFunc_o *)sub_1BCB244(GrandServantResetDialog_CallbackFunc_TypeInfo),
        GrandServantResetDialog_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__34_0__,
          v15),
        !v13) )
  {
    sub_1BCB254(v12, v11);
  }
  GrandServantResetDialog__Open(v13, userServantEntity, v14, v16);
}


void __fastcall GrandServantListRootComponent__SendMessageCloseStatus(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B173E7 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3486/*"CLOSE_STATUS"*/, method);
    byte_4B173E7 = 1;
  }
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_3486/*"CLOSE_STATUS"*/, 0LL);
}


void __fastcall GrandServantListRootComponent__SendMessageMenuCancel(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B173E8 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8571/*"MENU_CANCEL"*/, method);
    byte_4B173E8 = 1;
  }
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_8571/*"MENU_CANCEL"*/, 0LL);
}


void __fastcall GrandServantListRootComponent__SendMessageMenuDecide(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B173E9 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8572/*"MENU_DECIDE"*/, method);
    byte_4B173E9 = 1;
  }
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_8572/*"MENU_DECIDE"*/, 0LL);
}


void __fastcall GrandServantListRootComponent___OnSelectConfirmGrandServantResetDialog_b__33_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  GrandServantListData_o *grandServantListData; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x19
  NetworkManager_ResultCallbackFunc_o *v12; // x21

  if ( (byte_4B173F4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_NetworkManager_getRequest_SetupGrandServantRequest___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BCAFF8(
      &Method_GrandServantListRootComponent___c__DisplayClass33_0__OnSelectConfirmGrandServantResetDialog_b__2__,
      v5);
    sub_1BCAFF8(&GrandServantListRootComponent___c__DisplayClass33_0_TypeInfo, v6);
    byte_4B173F4 = 1;
  }
  v7 = (Il2CppObject *)sub_1BCB244(GrandServantListRootComponent___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  v7[1].monitor = this;
  sub_1BCAF9C(&v7[1].monitor);
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_10;
  v7[1].klass = (Il2CppClass *)GrandServantListData__GetSlotData(
                                 grandServantListData,
                                 this->fields.lastSelectedParentClassBoardBaseId,
                                 v10);
  v11 = v7 + 1;
  sub_1BCAF9C(&v7[1]);
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    v7,
    Method_GrandServantListRootComponent___c__DisplayClass33_0__OnSelectConfirmGrandServantResetDialog_b__2__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  grandServantListData = (GrandServantListData_o *)NetworkManager__getRequest_object_(
                                                     v12,
                                                     (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_SetupGrandServantRequest___);
  if ( !v11->klass || !grandServantListData )
LABEL_10:
    sub_1BCB254(grandServantListData, v9);
  SetupGrandServantRequest__beginRequest(
    (SetupGrandServantRequest_o *)grandServantListData,
    *(&v11->klass->_1.byval_arg.bits + 1),
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent___OnSelectEditEquip_b__35_0(
        GrandServantListRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  GrandServantListData_o *v5; // x21
  const MethodInfo *v6; // x1
  GrandServantListMenuLayout_o *menu; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct GrandServantListMenu_o *listMenu; // x8

  if ( (byte_4B173F6 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandServantListData_TypeInfo, isDecide);
    byte_4B173F6 = 1;
  }
  if ( isDecide )
  {
    v5 = (GrandServantListData_o *)sub_1BCB244(GrandServantListData_TypeInfo);
    GrandServantListData___ctor(v5, v6);
    this->fields.grandServantListData = v5;
    menu = (GrandServantListMenuLayout_o *)sub_1BCAF9C(&this->fields.grandServantListData);
    listMenu = this->fields.listMenu;
    if ( !listMenu || (menu = listMenu->fields.menu) == 0LL )
      sub_1BCB254(menu, v8);
    GrandServantListMenuLayout__UpdateView(menu, this->fields.grandServantListData, v9);
  }
  GrandServantListRootComponent__SendMessageMenuDecide(this, (const MethodInfo *)isDecide);
}


void __fastcall GrandServantListRootComponent___OnSelectGrandServantListMenuBranchDialog_b__28_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4B173F0 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_12232/*"START_RESET_GRAND"*/, method);
    byte_4B173F0 = 1;
  }
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12232/*"START_RESET_GRAND"*/, 0LL);
  GrandServantListRootComponent__OpenConfirmUseGrandServantResetItemDialog(this, v3);
}


void __fastcall GrandServantListRootComponent___OnSelectGrandServantListMenuBranchDialog_b__28_1(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B173F1 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_12236/*"START_SELECT_SERVANT"*/, method);
    byte_4B173F1 = 1;
  }
  GrandServantListRootComponent__OpenChangeGrandSameServantListMenu(this, method);
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12236/*"START_SELECT_SERVANT"*/, 0LL);
}


void __fastcall GrandServantListRootComponent___OnSelectGrandServantListMenuBranchDialog_b__28_2(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  GrandServantListData_o *grandServantListData; // x0
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  GrandServantListData_o *v8; // x20
  System_String_o *returnSceneName; // x21
  System_String_o *SceneName; // x0
  struct SceneJumpInfo_o *v11; // x8
  struct SceneJumpInfo_o *backSceneJumpInfo; // x19
  Il2CppObject *v13; // x3
  int32_t slotDataList; // w21
  SceneJumpInfo_o *v15; // x20
  struct SceneJumpInfo_o *v16; // x19

  if ( (byte_4B173F2 & 1) == 0 )
  {
    sub_1BCAFF8(&SceneJumpInfo_TypeInfo, method);
    sub_1BCAFF8(&SceneList_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_4B173F2 = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_20;
  grandServantListData = (GrandServantListData_o *)GrandServantListData__GetSlotData(
                                                     grandServantListData,
                                                     this->fields.lastSelectedParentClassBoardBaseId,
                                                     v2);
  sceneJumpInfo = this->fields.sceneJumpInfo;
  v8 = grandServantListData;
  if ( !sceneJumpInfo )
    goto LABEL_23;
  returnSceneName = sceneJumpInfo->fields.returnSceneName;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(91, 0LL);
  grandServantListData = (GrandServantListData_o *)System_String__op_Equality(returnSceneName, SceneName, 0LL);
  if ( ((unsigned __int8)grandServantListData & 1) == 0 )
  {
LABEL_23:
    if ( v8 )
    {
      slotDataList = (int32_t)v8[1].fields.slotDataList;
      v15 = (SceneJumpInfo_o *)sub_1BCB244(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40654588(v15, slotDataList, 0LL);
      if ( v15 )
      {
        SceneJumpInfo__SetReturnNowScene(v15, 0LL);
        v16 = this->fields.sceneJumpInfo;
        if ( v16
          || (v16 = (struct SceneJumpInfo_o *)sub_1BCB244(SceneJumpInfo_TypeInfo), SceneJumpInfo___ctor(v16, 0LL), v16) )
        {
          v16->fields.id = 0;
          v15->fields.backSceneJumpInfo = v16;
          sub_1BCAF9C(&v15->fields.backSceneJumpInfo);
          grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( grandServantListData )
          {
            v13 = (Il2CppObject *)v15;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_20:
    sub_1BCB254(grandServantListData, method);
  }
  v11 = this->fields.sceneJumpInfo;
  if ( !v11 )
    goto LABEL_20;
  if ( !v8 )
    goto LABEL_20;
  backSceneJumpInfo = v11->fields.backSceneJumpInfo;
  if ( !backSceneJumpInfo )
    goto LABEL_20;
  backSceneJumpInfo->fields.id = (int32_t)v8[1].fields.slotDataList;
  grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !grandServantListData )
    goto LABEL_20;
  v13 = (Il2CppObject *)backSceneJumpInfo;
LABEL_19:
  AvalonSceneManager__changeScene((AvalonSceneManager_o *)grandServantListData, 91, 1, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListRootComponent___OpenChangeGrandSameServantListMenu_b__30_0(
        GrandServantListRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  GrandServantListData_o *v4; // x21
  const MethodInfo *v5; // x1
  GrandServantListMenuLayout_o *menu; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct GrandServantListMenu_o *listMenu; // x8
  const MethodInfo *v10; // x1

  if ( (byte_4B173F3 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandServantListData_TypeInfo, isDecide);
    byte_4B173F3 = 1;
  }
  v4 = (GrandServantListData_o *)sub_1BCB244(GrandServantListData_TypeInfo);
  GrandServantListData___ctor(v4, v5);
  this->fields.grandServantListData = v4;
  menu = (GrandServantListMenuLayout_o *)sub_1BCAF9C(&this->fields.grandServantListData);
  listMenu = this->fields.listMenu;
  if ( !listMenu || (menu = listMenu->fields.menu) == 0LL )
    sub_1BCB254(menu, v7);
  GrandServantListMenuLayout__UpdateView(menu, this->fields.grandServantListData, v8);
  GrandServantListRootComponent__SendMessageMenuDecide(this, v10);
}


void __fastcall GrandServantListRootComponent___OpenConfirmedGrandServantSelectDialog_b__25_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BaseDialog_o *confirmedGrandServantSelectDialog; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B173EF & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_DecideActionSendMessageMenuDecide__, v3);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__25_0__, v4);
    byte_4B173EF = 1;
  }
  v5 = Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__25_0__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__25_0__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__25_0__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  confirmedGrandServantSelectDialog = (BaseDialog_o *)this->fields.confirmedGrandServantSelectDialog;
  v8 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_GrandServantListRootComponent_DecideActionSendMessageMenuDecide__,
    0LL);
  if ( !confirmedGrandServantSelectDialog )
    sub_1BCB254(v9, v10);
  BaseDialog__SafeClose(confirmedGrandServantSelectDialog, v8, 0LL);
}


void __fastcall GrandServantListRootComponent___OpenGrandServantResetDialog_b__34_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BaseDialog_o *grandServantResetDialog; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B173F5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_SendMessageMenuDecide__, v3);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__34_0__, v4);
    byte_4B173F5 = 1;
  }
  v5 = Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__34_0__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__34_0__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCB010(Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__34_0__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  grandServantResetDialog = (BaseDialog_o *)this->fields.grandServantResetDialog;
  v8 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageMenuDecide__, 0LL);
  if ( !grandServantResetDialog )
    sub_1BCB254(v9, v10);
  BaseDialog__SafeClose(grandServantResetDialog, v8, 0LL);
}


void __fastcall GrandServantListRootComponent___beginStartUp_b__17_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4B173EC & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__beginStartUp_b__17_1__, v4);
    byte_4B173EC = 1;
  }
  v5 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_GrandServantListRootComponent__beginStartUp_b__17_1__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v5, 1, 1, 0LL);
}


void __fastcall GrandServantListRootComponent___beginStartUp_b__17_1(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_4B173ED & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__beginStartUp_b__17_2__, v3);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_7094/*"GrandServantList"*/, v5);
    byte_4B173ED = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_GrandServantListRootComponent__beginStartUp_b__17_2__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_7094/*"GrandServantList"*/, v6, 1, 0LL);
}


void __fastcall GrandServantListRootComponent___beginStartUp_b__17_2(
        GrandServantListRootComponent_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4B173EE & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, _);
    sub_1BCAFF8(&StringLiteral_20229/*"img_grand_servant_list_bg01"*/, v4);
    byte_4B173EE = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__CacheGrandServantListAtlas(0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setTitleInfo_39037524(titleInfo, this->fields.myFSM, 2, 96, 1, 0LL),
        (titleInfo = this->fields.titleInfo) == 0LL)
    || (titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)titleInfo,
                                            0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL),
        (titleInfo = this->fields.titleInfo) == 0LL) )
  {
    sub_1BCB254(titleInfo, v5);
  }
  TitleInfoControl__SetHelpBtn(titleInfo, 1, 0LL);
  AtlasManager__SetGrandServantListImage(this->fields.backgroundSprite, (System_String_o *)StringLiteral_20229/*"img_grand_servant_list_bg01"*/, 0LL);
  SceneRootComponent__beginStartUp_40656696((SceneRootComponent_o *)this, 0LL);
}


void __fastcall GrandServantListRootComponent__beginFinish(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  GrandServantListMenu_o *listMenu; // x0
  struct GrandServantListMenuBranchDialog_o **p_grandServantListMenuBranchDialog; // x20
  UnityEngine_Object_o *grandServantListMenuBranchDialog; // x21
  UnityEngine_Object_o *gameObject; // x21
  struct ConfirmUseGrandServantResetItemDialog_o **p_confirmUseGrandServantResetItemDialog; // x20
  UnityEngine_Object_o *confirmUseGrandServantResetItemDialog; // x21
  UnityEngine_Object_o *v13; // x21
  struct ConfirmedGrandServantSelectDialog_o **p_confirmedGrandServantSelectDialog; // x20
  UnityEngine_Object_o *confirmedGrandServantSelectDialog; // x21
  UnityEngine_Object_o *v16; // x21
  struct ConfirmGrandServantResetDialog_o **p_confirmGrandServantResetDialog; // x20
  UnityEngine_Object_o *confirmGrandServantResetDialog; // x21
  UnityEngine_Object_o *v19; // x21
  struct GrandServantResetDialog_o **p_grandServantResetDialog; // x20
  UnityEngine_Object_o *grandServantResetDialog; // x21
  UnityEngine_Object_o *v22; // x21
  struct GrandEquipGraphListMenu_o **p_grandEquipGraphListMenu; // x20
  UnityEngine_Object_o *grandEquipGraphListMenu; // x21
  UnityEngine_Object_o *v25; // x21
  struct ChangeGrandSameServantListMenu_o **p_changeGrandSameServantListMenu; // x20
  UnityEngine_Object_o *changeGrandSameServantListMenu; // x21
  UnityEngine_Object_o *v28; // x21
  struct SelectGrandServantComponent_o **p_selectGrandServantComponent; // x19
  UnityEngine_Object_o *v30; // x20
  struct SelectGrandServantComponent_o *selectGrandServantComponent; // t1
  UnityEngine_Object_o *v32; // x20

  if ( (byte_4B173D3 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v5);
    sub_1BCAFF8(&StringLiteral_7094/*"GrandServantList"*/, v6);
    byte_4B173D3 = 1;
  }
  listMenu = this->fields.listMenu;
  if ( !listMenu )
    goto LABEL_66;
  GrandServantListMenu__Release(listMenu, method);
  p_grandServantListMenuBranchDialog = &this->fields.grandServantListMenuBranchDialog;
  grandServantListMenuBranchDialog = (UnityEngine_Object_o *)this->fields.grandServantListMenuBranchDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandServantListMenuBranchDialog, 0LL, 0LL) )
  {
    listMenu = (GrandServantListMenu_o *)*p_grandServantListMenuBranchDialog;
    if ( !*p_grandServantListMenuBranchDialog )
      goto LABEL_66;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
    *p_grandServantListMenuBranchDialog = 0LL;
    sub_1BCAF9C(&this->fields.grandServantListMenuBranchDialog);
  }
  p_confirmUseGrandServantResetItemDialog = &this->fields.confirmUseGrandServantResetItemDialog;
  confirmUseGrandServantResetItemDialog = (UnityEngine_Object_o *)this->fields.confirmUseGrandServantResetItemDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmUseGrandServantResetItemDialog, 0LL, 0LL) )
  {
    listMenu = (GrandServantListMenu_o *)*p_confirmUseGrandServantResetItemDialog;
    if ( !*p_confirmUseGrandServantResetItemDialog )
      goto LABEL_66;
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v13, 0LL);
    *p_confirmUseGrandServantResetItemDialog = 0LL;
    sub_1BCAF9C(&this->fields.confirmUseGrandServantResetItemDialog);
  }
  p_confirmedGrandServantSelectDialog = &this->fields.confirmedGrandServantSelectDialog;
  confirmedGrandServantSelectDialog = (UnityEngine_Object_o *)this->fields.confirmedGrandServantSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmedGrandServantSelectDialog, 0LL, 0LL) )
  {
    listMenu = (GrandServantListMenu_o *)*p_confirmedGrandServantSelectDialog;
    if ( !*p_confirmedGrandServantSelectDialog )
      goto LABEL_66;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v16, 0LL);
    *p_confirmedGrandServantSelectDialog = 0LL;
    sub_1BCAF9C(&this->fields.confirmedGrandServantSelectDialog);
  }
  p_confirmGrandServantResetDialog = &this->fields.confirmGrandServantResetDialog;
  confirmGrandServantResetDialog = (UnityEngine_Object_o *)this->fields.confirmGrandServantResetDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmGrandServantResetDialog, 0LL, 0LL) )
  {
    listMenu = (GrandServantListMenu_o *)*p_confirmGrandServantResetDialog;
    if ( !*p_confirmGrandServantResetDialog )
      goto LABEL_66;
    v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v19, 0LL);
    *p_confirmGrandServantResetDialog = 0LL;
    sub_1BCAF9C(&this->fields.confirmGrandServantResetDialog);
  }
  p_grandServantResetDialog = &this->fields.grandServantResetDialog;
  grandServantResetDialog = (UnityEngine_Object_o *)this->fields.grandServantResetDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandServantResetDialog, 0LL, 0LL) )
  {
    listMenu = (GrandServantListMenu_o *)*p_grandServantResetDialog;
    if ( !*p_grandServantResetDialog )
      goto LABEL_66;
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v22, 0LL);
    *p_grandServantResetDialog = 0LL;
    sub_1BCAF9C(&this->fields.grandServantResetDialog);
  }
  p_grandEquipGraphListMenu = &this->fields.grandEquipGraphListMenu;
  grandEquipGraphListMenu = (UnityEngine_Object_o *)this->fields.grandEquipGraphListMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandEquipGraphListMenu, 0LL, 0LL) )
  {
    listMenu = (GrandServantListMenu_o *)*p_grandEquipGraphListMenu;
    if ( !*p_grandEquipGraphListMenu )
      goto LABEL_66;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v25, 0LL);
    *p_grandEquipGraphListMenu = 0LL;
    sub_1BCAF9C(&this->fields.grandEquipGraphListMenu);
  }
  p_changeGrandSameServantListMenu = &this->fields.changeGrandSameServantListMenu;
  changeGrandSameServantListMenu = (UnityEngine_Object_o *)this->fields.changeGrandSameServantListMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(changeGrandSameServantListMenu, 0LL, 0LL) )
  {
    listMenu = (GrandServantListMenu_o *)*p_changeGrandSameServantListMenu;
    if ( !*p_changeGrandSameServantListMenu )
      goto LABEL_66;
    v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v28, 0LL);
    *p_changeGrandSameServantListMenu = 0LL;
    sub_1BCAF9C(&this->fields.changeGrandSameServantListMenu);
  }
  selectGrandServantComponent = this->fields.selectGrandServantComponent;
  p_selectGrandServantComponent = &this->fields.selectGrandServantComponent;
  v30 = (UnityEngine_Object_o *)selectGrandServantComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
  {
    listMenu = (GrandServantListMenu_o *)*p_selectGrandServantComponent;
    if ( !*p_selectGrandServantComponent )
      goto LABEL_66;
    v32 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v32, 0LL);
    *p_selectGrandServantComponent = 0LL;
    sub_1BCAF9C(p_selectGrandServantComponent);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ClearCachedGrandServantListAtlas(0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_7094/*"GrandServantList"*/, 0LL);
  listMenu = (GrandServantListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !listMenu )
LABEL_66:
    sub_1BCB254(listMenu, method);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)listMenu, 2, 0, 0LL);
}


void __fastcall GrandServantListRootComponent__beginInitialize(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B173D1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B173D1 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL),
        (Instance = (AvalonSceneManager_o *)this->fields.titleInfo) == 0LL) )
  {
    sub_1BCB254(Instance, v4);
  }
  v5.fields.y = -511.0;
  v5.fields.x = -14.0;
  v5.fields.z = 0.0;
  TitleInfoControl__SetHelpBtnPos((TitleInfoControl_o *)Instance, v5, 0LL);
}


void __fastcall GrandServantListRootComponent__beginStartUp(
        GrandServantListRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 methodPtr_low; // x9
  Il2CppObject *v9; // x10
  struct SceneJumpInfo_o **p_sceneJumpInfo; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *titleInfo; // x0
  System_Action_o *v13; // x20

  if ( (byte_4B173D2 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, data);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_GrandServantListRootComponent__beginStartUp_b__17_0__, v6);
    sub_1BCAFF8(&SceneJumpInfo_TypeInfo, v7);
    byte_4B173D2 = 1;
  }
  if ( data )
  {
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
        v9 = data;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v9;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
  }
  else
  {
    this->fields.sceneJumpInfo = 0LL;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
  }
  sub_1BCAF9C(p_sceneJumpInfo);
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_1BCB254(titleInfo, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v13 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_GrandServantListRootComponent__beginStartUp_b__17_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v13, 2, 1, 0LL);
}


void __fastcall GrandServantListRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B173F7 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandServantListRootComponent___c_TypeInfo, v1);
    byte_4B173F7 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(GrandServantListRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GrandServantListRootComponent___c_TypeInfo->static_fields->__9 = (struct GrandServantListRootComponent___c_o *)v2;
  sub_1BCAF9C(GrandServantListRootComponent___c_TypeInfo->static_fields);
}


void __fastcall GrandServantListRootComponent___c___ctor(
        GrandServantListRootComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandServantListRootComponent___c___EndShowServantWithQuest_b__37_0(
        GrandServantListRootComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B173F8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B173F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall GrandServantListRootComponent___c__DisplayClass23_0___ctor(
        GrandServantListRootComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandServantListRootComponent___c__DisplayClass23_0___OnSelectEditServant_b__3(
        GrandServantListRootComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandServantListRootComponent___c__DisplayClass23_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct GrandServantListRootComponent_o *_4__this; // x8
  struct GrandServantListMenu_o *listMenu; // x8
  struct GrandServantListRootComponent_o *v10; // x8
  UnityEngine_Object_o *gameObject; // x20
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x20
  Il2CppObject *v15; // x22
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  struct GrandServantListRootComponent_o *v18; // x8

  v3 = this;
  if ( (byte_4B173FA & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_GrandServantListRootComponent_SendMessageMenuDecide__, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    this = (GrandServantListRootComponent___c__DisplayClass23_0_o *)sub_1BCAFF8(
                                                                      &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                      v7);
    byte_4B173FA = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  listMenu = _4__this->fields.listMenu;
  if ( !listMenu )
    goto LABEL_17;
  this = (GrandServantListRootComponent___c__DisplayClass23_0_o *)listMenu->fields.menu;
  if ( !this )
    goto LABEL_17;
  GrandServantListMenuLayout__SetItemSlotActive((GrandServantListMenuLayout_o *)this, 1, v2);
  v10 = v3->fields.__4__this;
  if ( !v10 )
    goto LABEL_17;
  this = (GrandServantListRootComponent___c__DisplayClass23_0_o *)v10->fields.selectGrandServantComponent;
  if ( !this )
    goto LABEL_17;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
  this = (GrandServantListRootComponent___c__DisplayClass23_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_17;
  this[5].monitor = 0LL;
  sub_1BCAF9C(&this[5].monitor);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  v15 = (Il2CppObject *)v3->fields.__4__this;
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v17, v15, Method_GrandServantListRootComponent_SendMessageMenuDecide__, 0LL);
  if ( !v14
    || (this = (GrandServantListRootComponent___c__DisplayClass23_0_o *)CommonUI__maskFadein(
                                                                          v14,
                                                                          DEFAULT_FADE_TIME,
                                                                          v17,
                                                                          0LL),
        (v18 = v3->fields.__4__this) == 0LL)
    || (this = (GrandServantListRootComponent___c__DisplayClass23_0_o *)v18->fields.titleInfo) == 0LL )
  {
LABEL_17:
    sub_1BCB254(this, method);
  }
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)this, 1, 0LL);
}


void __fastcall GrandServantListRootComponent___c__DisplayClass23_0___OnSelectEditServant_g__BackAction_0(
        GrandServantListRootComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B173F9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&Method_GrandServantListRootComponent___c__DisplayClass23_0__OnSelectEditServant_b__3__, v5);
    byte_4B173F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_GrandServantListRootComponent___c__DisplayClass23_0__OnSelectEditServant_b__3__,
    0LL);
  if ( !v8 )
    sub_1BCB254(v11, v12);
  CommonUI__maskFadeout(v8, 2, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall GrandServantListRootComponent___c__DisplayClass23_0___OnSelectEditServant_g__DecideAction_1(
        GrandServantListRootComponent___c__DisplayClass23_0_o *this,
        UserServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4B173FB & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, servantEntity);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&Method_GrandServantListRootComponent___c__DisplayClass23_2__OnSelectEditServant_b__4__, v7);
    sub_1BCAFF8(&GrandServantListRootComponent___c__DisplayClass23_2_TypeInfo, v8);
    byte_4B173FB = 1;
  }
  v9 = (Il2CppObject *)sub_1BCB244(GrandServantListRootComponent___c__DisplayClass23_2_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  v9[1].monitor = this;
  sub_1BCAF9C(&v9[1].monitor);
  v9[1].klass = (Il2CppClass *)servantEntity;
  sub_1BCAF9C(&v9[1]);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    v9,
    Method_GrandServantListRootComponent___c__DisplayClass23_2__OnSelectEditServant_b__4__,
    0LL);
  if ( !v14 )
LABEL_8:
    sub_1BCB254(v10, v11);
  CommonUI__maskFadeout(v14, 2, DEFAULT_FADE_TIME, v16, 0LL);
}


void __fastcall GrandServantListRootComponent___c__DisplayClass23_1___ctor(
        GrandServantListRootComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandServantListRootComponent___c__DisplayClass23_1___OnSelectEditServant_b__2(
        GrandServantListRootComponent___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandServantListRootComponent___c__DisplayClass23_1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct GrandServantListRootComponent___c__DisplayClass23_0_o *CS___8__locals1; // x8
  struct GrandServantListRootComponent_o *_4__this; // x8
  struct GrandServantListMenu_o *listMenu; // x8
  struct GrandServantListRootComponent___c__DisplayClass23_0_o *v11; // x8
  struct GrandServantListRootComponent_o *v12; // x20
  Il2CppObject *v13; // x23
  Il2CppClass *klass; // x8
  _DWORD *monitor; // x9
  SelectGrandServantComponent_o *implementedInterfaces; // x20
  int32_t v17; // w21
  System_Action_o *v18; // x22
  Il2CppObject *v19; // x24
  System_Action_object__o *v20; // x23
  struct GrandServantListRootComponent___c__DisplayClass23_0_o *v21; // x8
  struct GrandServantListRootComponent_o *v22; // x8
  struct GrandServantListRootComponent___c__DisplayClass23_0_o *v23; // x8
  struct GrandServantListRootComponent_o *v24; // x8

  v3 = this;
  if ( (byte_4B173FC & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_UserServantEntity__TypeInfo, method);
    sub_1BCAFF8(&System_Action_TypeInfo, v4);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_SelectGrandServantComponent___, v5);
    sub_1BCAFF8(&Method_GrandServantListRootComponent___c__DisplayClass23_0__OnSelectEditServant_g__BackAction_0__, v6);
    this = (GrandServantListRootComponent___c__DisplayClass23_1_o *)sub_1BCAFF8(
                                                                      &Method_GrandServantListRootComponent___c__DisplayClass23_0__OnSelectEditServant_g__DecideAction_1__,
                                                                      v7);
    byte_4B173FC = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_20;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  listMenu = _4__this->fields.listMenu;
  if ( !listMenu )
    goto LABEL_20;
  this = (GrandServantListRootComponent___c__DisplayClass23_1_o *)listMenu->fields.menu;
  if ( !this )
    goto LABEL_20;
  GrandServantListMenuLayout__SetItemSlotActive((GrandServantListMenuLayout_o *)this, 0, v2);
  v11 = v3->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_20;
  this = (GrandServantListRootComponent___c__DisplayClass23_1_o *)v3->fields.selectGrandServant;
  if ( !this )
    goto LABEL_20;
  v12 = v11->fields.__4__this;
  this = (GrandServantListRootComponent___c__DisplayClass23_1_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)this,
                                                                    (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_SelectGrandServantComponent___);
  if ( !v12 )
    goto LABEL_20;
  v12->fields.selectGrandServantComponent = (struct SelectGrandServantComponent_o *)this;
  this = (GrandServantListRootComponent___c__DisplayClass23_1_o *)sub_1BCAF9C(&v12->fields.selectGrandServantComponent);
  v13 = (Il2CppObject *)v3->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_20;
  klass = v13[1].klass;
  if ( !klass )
    goto LABEL_20;
  monitor = v13[1].monitor;
  if ( !monitor )
    goto LABEL_20;
  implementedInterfaces = (SelectGrandServantComponent_o *)klass->_1.implementedInterfaces;
  v17 = monitor[11];
  v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    v13,
    Method_GrandServantListRootComponent___c__DisplayClass23_0__OnSelectEditServant_g__BackAction_0__,
    0LL);
  v19 = (Il2CppObject *)v3->fields.CS___8__locals1;
  v20 = (System_Action_object__o *)sub_1BCB244(System_Action_UserServantEntity__TypeInfo);
  System_Action_object____ctor(
    v20,
    v19,
    Method_GrandServantListRootComponent___c__DisplayClass23_0__OnSelectEditServant_g__DecideAction_1__,
    0LL);
  if ( !implementedInterfaces
    || (SelectGrandServantComponent__SetUp(
          implementedInterfaces,
          v17,
          v18,
          (System_Action_UserServantEntity__o *)v20,
          0LL),
        (v21 = v3->fields.CS___8__locals1) == 0LL)
    || (v22 = v21->fields.__4__this) == 0LL
    || (BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v22->fields.selectGrandServantComponent, 1, 0LL),
        (v23 = v3->fields.CS___8__locals1) == 0LL)
    || (v24 = v23->fields.__4__this) == 0LL
    || (this = (GrandServantListRootComponent___c__DisplayClass23_1_o *)v24->fields.titleInfo) == 0LL )
  {
LABEL_20:
    sub_1BCB254(this, method);
  }
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)this, 0, 0LL);
}


void __fastcall GrandServantListRootComponent___c__DisplayClass23_2___ctor(
        GrandServantListRootComponent___c__DisplayClass23_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandServantListRootComponent___c__DisplayClass23_2___OnSelectEditServant_b__4(
        GrandServantListRootComponent___c__DisplayClass23_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *monitor; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x8
  __int64 v12; // x8
  UnityEngine_Object_o *gameObject; // x20
  void *v14; // x8
  _QWORD *v15; // x8
  __int64 v16; // x20
  GrandServantListData_o *v17; // x21
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  _QWORD *v20; // x8
  __int64 v21; // x8
  __int64 v22; // x9
  _QWORD *v23; // x8
  __int64 v24; // x8
  System_Action_o *klass; // x21
  CommonUI_o *v26; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4B173FD & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&GrandServantListData_TypeInfo, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (GrandServantListRootComponent___c__DisplayClass23_2_o *)sub_1BCAFF8(
                                                                      &Method_GrandServantListRootComponent___c__DisplayClass23_2__OnSelectEditServant_b__5__,
                                                                      v7);
    byte_4B173FD = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_27;
  v9 = monitor[2];
  if ( !v9 )
    goto LABEL_27;
  v10 = *(_QWORD *)(v9 + 80);
  if ( !v10 )
    goto LABEL_27;
  this = *(GrandServantListRootComponent___c__DisplayClass23_2_o **)(v10 + 40);
  if ( !this )
    goto LABEL_27;
  GrandServantListMenuLayout__SetItemSlotActive((GrandServantListMenuLayout_o *)this, 1, v2);
  v11 = v3[1].monitor;
  if ( !v11 )
    goto LABEL_27;
  v12 = v11[2];
  if ( !v12 )
    goto LABEL_27;
  this = *(GrandServantListRootComponent___c__DisplayClass23_2_o **)(v12 + 168);
  if ( !this )
    goto LABEL_27;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
  v14 = v3[1].monitor;
  if ( !v14 )
    goto LABEL_27;
  this = (GrandServantListRootComponent___c__DisplayClass23_2_o *)*((_QWORD *)v14 + 2);
  if ( !this )
    goto LABEL_27;
  this[4].monitor = 0LL;
  this = (GrandServantListRootComponent___c__DisplayClass23_2_o *)sub_1BCAF9C(&this[4].monitor);
  v15 = v3[1].monitor;
  if ( !v15 )
    goto LABEL_27;
  v16 = v15[2];
  v17 = (GrandServantListData_o *)sub_1BCB244(GrandServantListData_TypeInfo);
  GrandServantListData___ctor(v17, v18);
  if ( !v16 )
    goto LABEL_27;
  *(_QWORD *)(v16 + 144) = v17;
  this = (GrandServantListRootComponent___c__DisplayClass23_2_o *)sub_1BCAF9C(v16 + 144);
  v20 = v3[1].monitor;
  if ( !v20 )
    goto LABEL_27;
  v21 = v20[2];
  if ( !v21 )
    goto LABEL_27;
  v22 = *(_QWORD *)(v21 + 80);
  if ( !v22 )
    goto LABEL_27;
  this = *(GrandServantListRootComponent___c__DisplayClass23_2_o **)(v22 + 40);
  if ( !this )
    goto LABEL_27;
  GrandServantListMenuLayout__UpdateView(
    (GrandServantListMenuLayout_o *)this,
    *(GrandServantListData_o **)(v21 + 144),
    v19);
  v23 = v3[1].monitor;
  if ( !v23 )
    goto LABEL_27;
  v24 = v23[2];
  if ( !v24 )
    goto LABEL_27;
  this = *(GrandServantListRootComponent___c__DisplayClass23_2_o **)(v24 + 64);
  if ( !this )
    goto LABEL_27;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)this, 1, 0LL);
  this = (GrandServantListRootComponent___c__DisplayClass23_2_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  klass = (System_Action_o *)v3[2].klass;
  v26 = (CommonUI_o *)this;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandServantListRootComponent___c__DisplayClass23_2__OnSelectEditServant_b__5__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandServantListRootComponent___c__DisplayClass23_2_o *)sub_1BCAF9C(&v3[2]);
  }
  if ( !v26 )
LABEL_27:
    sub_1BCB254(this, method);
  CommonUI__maskFadein(v26, 1.0, klass, 0LL);
}


void __fastcall GrandServantListRootComponent___c__DisplayClass23_2___OnSelectEditServant_b__5(
        GrandServantListRootComponent___c__DisplayClass23_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct GrandServantListRootComponent___c__DisplayClass23_0_o *CS___8__locals2; // x8
  GrandServantListRootComponent_o *_4__this; // x8

  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 || (_4__this = CS___8__locals2->fields.__4__this) == 0LL )
    sub_1BCB254(this, method);
  GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog(_4__this, this->fields.servantEntity, v2);
}


void __fastcall GrandServantListRootComponent___c__DisplayClass33_0___ctor(
        GrandServantListRootComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandServantListRootComponent___c__DisplayClass33_0___OnSelectConfirmGrandServantResetDialog_b__2(
        GrandServantListRootComponent___c__DisplayClass33_0_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct GrandServantListRootComponent_o *_4__this; // x20
  GrandServantListData_o *v7; // x21
  const MethodInfo *v8; // x1
  GrandServantListMenuLayout_o *menu; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct GrandServantListRootComponent_o *v12; // x8
  struct GrandServantListMenu_o *listMenu; // x9
  const MethodInfo *v14; // x2
  struct GrandServantListSlotData_o *slotData; // x8

  if ( (byte_4B173FE & 1) == 0 )
  {
    sub_1BCAFF8(&GrandServantListData_TypeInfo, res);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v5);
    byte_4B173FE = 1;
  }
  if ( !System_String__op_Equality(res, (System_String_o *)StringLiteral_22015/*"ng"*/, 0LL) )
  {
    _4__this = this->fields.__4__this;
    v7 = (GrandServantListData_o *)sub_1BCB244(GrandServantListData_TypeInfo);
    GrandServantListData___ctor(v7, v8);
    if ( !_4__this )
      goto LABEL_11;
    _4__this->fields.grandServantListData = v7;
    menu = (GrandServantListMenuLayout_o *)sub_1BCAF9C(&_4__this->fields.grandServantListData);
    v12 = this->fields.__4__this;
    if ( !v12
      || (listMenu = v12->fields.listMenu) == 0LL
      || (menu = listMenu->fields.menu) == 0LL
      || (GrandServantListMenuLayout__UpdateView(menu, v12->fields.grandServantListData, v11),
          (slotData = this->fields.slotData) == 0LL)
      || (menu = (GrandServantListMenuLayout_o *)this->fields.__4__this) == 0LL )
    {
LABEL_11:
      sub_1BCB254(menu, v10);
    }
    GrandServantListRootComponent__OpenGrandServantResetDialog(
      (GrandServantListRootComponent_o *)menu,
      slotData->fields._UserServantEntity_k__BackingField,
      v14);
  }
}