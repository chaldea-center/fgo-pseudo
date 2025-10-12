void GrandServantListRootComponent___ctor(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void GrandServantListRootComponent__DecideActionSendMessageMenuDecide(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C327DB & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C327DB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  GrandServantListRootComponent__SendMessageMenuDecide(this, v4);
}


void GrandServantListRootComponent__EndShowEquip(
        GrandServantListRootComponent_o *this,
        bool isModify,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4C327D7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_SendMessageCloseStatus__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C327D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageCloseStatus__, 0);
  if ( !Instance )
    sub_1C32E7C(v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void GrandServantListRootComponent__EndShowServant(
        GrandServantListRootComponent_o *this,
        bool isModify,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4C327D5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_SendMessageCloseStatus__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C327D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageCloseStatus__, 0);
  if ( !Instance )
    sub_1C32E7C(v6);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListRootComponent__EndShowServantWithQuest(
        GrandServantListRootComponent_o *this,
        bool isModify,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  GrandServantListRootComponent___c_c *v8; // x8
  CommonUI_o *v9; // x19
  System_Action_o *_9__43_0; // x20
  Il2CppObject *v11; // x21
  struct GrandServantListRootComponent___c_StaticFields *static_fields; // x0
  GrandServantListData_o *v13; // x21
  const MethodInfo *v14; // x1
  struct GrandServantListMenu_o *listMenu; // x8

  if ( (byte_4C327D6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&GrandServantListData_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__EndShowServantWithQuest_b__43_0__);
    sub_1C32C20(&GrandServantListRootComponent___c_TypeInfo);
    byte_4C327D6 = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = GrandServantListRootComponent___c_TypeInfo;
    v9 = (CommonUI_o *)Instance;
    if ( !GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo);
      v8 = GrandServantListRootComponent___c_TypeInfo;
    }
    _9__43_0 = v8->static_fields->__9__43_0;
    if ( !_9__43_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = GrandServantListRootComponent___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v8->static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__43_0,
        v11,
        Method_GrandServantListRootComponent___c__EndShowServantWithQuest_b__43_0__,
        0);
      static_fields = GrandServantListRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_0 = _9__43_0;
      Instance = (Il2CppObject *)sub_1C32BC4(&static_fields->__9__43_0, _9__43_0);
    }
    if ( v9 )
    {
      CommonUI__CloseServantStatusDialog(v9, _9__43_0, 0);
      return;
    }
LABEL_17:
    sub_1C32E7C(Instance);
  }
  if ( isModify )
  {
    v13 = (GrandServantListData_o *)sub_1C32E6C(GrandServantListData_TypeInfo);
    GrandServantListData___ctor(v13, v14);
    this->fields.grandServantListData = v13;
    Instance = (Il2CppObject *)sub_1C32BC4(&this->fields.grandServantListData, v13);
    listMenu = this->fields.listMenu;
    if ( !listMenu )
      goto LABEL_17;
    Instance = (Il2CppObject *)listMenu->fields.menu;
    if ( !Instance )
      goto LABEL_17;
    ((void (__fastcall *)(Il2CppObject *, struct GrandServantListData_o *, const MethodInfo *))Instance->klass->vtable[6].methodPtr)(
      Instance,
      this->fields.grandServantListData,
      Instance->klass->vtable[6].method);
  }
  GrandServantListRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
}


void GrandServantListRootComponent__ForceChangeSceneFromGrandScore(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  SceneJumpInfo_o *v3; // x19
  Il2CppObject *Instance; // x0
  SceneJumpInfo_o *sceneJumpInfo; // x20

  if ( (byte_4C327C3 & 1) == 0 )
  {
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C327C3 = 1;
  }
  v3 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_41379640(v3, (System_String_o *)StringLiteral_1/*""*/, 9, 0);
  if ( !v3 )
    goto LABEL_8;
  SceneJumpInfo__SetReturnNowScene(v3, 0);
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    sceneJumpInfo = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor(sceneJumpInfo, 0);
  }
  v3->fields.backSceneJumpInfo = sceneJumpInfo;
  sub_1C32BC4(&v3->fields.backSceneJumpInfo, sceneJumpInfo);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1C32E7C(Instance);
  AvalonSceneManager__changeScene((AvalonSceneManager_o *)Instance, 91, 1, (Il2CppObject *)v3, 0);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o GrandServantListRootComponent__InstantiateAssetObject___Il2CppFullySharedGenericType_(
        GrandServantListRootComponent_o *this,
        System_String_o *objectName,
        const MethodInfo_3136A34 *method)
{
  __int64 v3; // x3
  __int64 v4; // x20
  __int64 v7; // x8
  size_t v9; // x21
  AssetData_o *AssetStorage; // x0
  Il2CppObject *v11; // x23
  UnityEngine_Transform_o *transform; // x24
  AssetData_o *v13; // x2
  __int64 *v14; // x1
  __int64 v15; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v16; // x0
  void *v17; // x1
  _QWORD v18[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v4 = v3;
  v18[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(_QWORD *)(v3 + 56);
  if ( !v7 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_7159/*"GrandServantList"*/);
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 )
    {
      sub_1C83390();
      v7 = *(_QWORD *)(v4 + 56);
    }
  }
  v9 = *(unsigned int *)(*(_QWORD *)(v7 + 8) + 252LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7159/*"GrandServantList"*/, 0);
  if ( !AssetStorage )
    goto LABEL_12;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__51111776(
                                  AssetStorage,
                                  objectName,
                                  (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !this->fields.uiRoot )
    goto LABEL_12;
  v11 = (Il2CppObject *)AssetStorage;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.uiRoot, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object__51812484(
                                  v11,
                                  transform,
                                  (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
  if ( !AssetStorage )
LABEL_12:
    sub_1C32E7C(AssetStorage);
  v13 = AssetStorage;
  v14 = **(__int64 ***)(v4 + 56);
  v15 = *v14;
  v18[0] = (char *)v18 - ((v9 + 15) & 0x1FFFFFFF0LL);
  ((void (__fastcall *)(__int64, __int64 *, AssetData_o *, _QWORD *, _QWORD))v14[2])(v15, v14, v13, v18, v18[0]);
  v16 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    (void *)method,
                                                                    (char *)v18 - ((v9 + 15) & 0x1FFFFFFF0LL),
                                                                    v9);
  result.monitor = v17;
  result.klass = v16;
  return result;
}


Il2CppObject *GrandServantListRootComponent__InstantiateAssetObject_object_(
        GrandServantListRootComponent_o *this,
        System_String_o *objectName,
        const MethodInfo_313691C *method)
{
  AssetData_o *AssetStorage; // x0
  UnityEngine_Component_o *uiRoot; // x8
  Il2CppObject *v8; // x20
  UnityEngine_Transform_o *transform; // x21

  if ( !method->rgctx_data )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_7159/*"GrandServantList"*/);
    if ( !method->rgctx_data )
      sub_1C83390();
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7159/*"GrandServantList"*/, 0);
  if ( !AssetStorage )
    goto LABEL_12;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__51111776(
                                  AssetStorage,
                                  objectName,
                                  (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  uiRoot = (UnityEngine_Component_o *)this->fields.uiRoot;
  if ( !uiRoot )
    goto LABEL_12;
  v8 = (Il2CppObject *)AssetStorage;
  transform = UnityEngine_Component__get_transform(uiRoot, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object__51812484(
                                  v8,
                                  transform,
                                  (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
  if ( !AssetStorage )
LABEL_12:
    sub_1C32E7C(AssetStorage);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)AssetStorage,
           (const MethodInfo_3134970 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


bool GrandServantListRootComponent__IsForceChangeSceneFromGrandScore(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  ClassBoardRootComponent_c *v2; // x0

  if ( (byte_4C327C2 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardRootComponent_TypeInfo);
    byte_4C327C2 = 1;
  }
  v2 = ClassBoardRootComponent_TypeInfo;
  if ( !ClassBoardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardRootComponent_TypeInfo);
    v2 = ClassBoardRootComponent_TypeInfo;
  }
  return EventTutorialMaster__CheckShouldPlayOpenTypeNoneEventTutorial(
           v2->static_fields->U_MEDAL_CREATE_EVENT_ID,
           96,
           0);
}


void GrandServantListRootComponent__OnClickBack(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  Il2CppObject *IsNullOrEmpty; // x0
  struct SupportInfoJump_o *supportInfoJump; // x0
  Il2CppObject *v8; // x2
  struct SceneJumpInfo_o *v9; // x8
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  TerminalPramsManager_c *v12; // x0
  int32_t v13; // w1
  struct SceneJumpInfo_o *v14; // x8

  if ( (byte_4C327C4 & 1) == 0 )
  {
    sub_1C32C20(&Method_GrandServantListRootComponent_OnClickBack__);
    sub_1C32C20(&SceneList_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C327C4 = 1;
  }
  v3 = Method_GrandServantListRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( sceneJumpInfo )
  {
    IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(sceneJumpInfo->fields.returnSceneName, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      v9 = this->fields.sceneJumpInfo;
      if ( !v9 )
        goto LABEL_32;
      returnSceneName = v9->fields.returnSceneName;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      SceneName = SceneList__getSceneName(34, 0);
      if ( !System_String__op_Equality(returnSceneName, SceneName, 0) )
      {
        IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v14 = this->fields.sceneJumpInfo;
        if ( !v14 || !IsNullOrEmpty )
          goto LABEL_32;
        AvalonSceneManager__transitionScene_41059744(
          (AvalonSceneManager_o *)IsNullOrEmpty,
          v14->fields.returnSceneName,
          1,
          (Il2CppObject *)v14->fields.backSceneJumpInfo,
          0);
        return;
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3219C )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C3219C = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      v12->static_fields->_IsAutoResume_k__BackingField = 1;
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !IsNullOrEmpty )
        goto LABEL_32;
      v13 = 34;
LABEL_31:
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)IsNullOrEmpty, v13, 1, 0, 0);
      return;
    }
  }
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !IsNullOrEmpty )
      goto LABEL_32;
    if ( AvalonSceneManager__popScene((AvalonSceneManager_o *)IsNullOrEmpty, 1, 0, 0) )
      return;
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !IsNullOrEmpty )
      goto LABEL_32;
    v13 = 39;
    goto LABEL_31;
  }
  v8 = (Il2CppObject *)this->fields.supportInfoJump;
  supportInfoJump->fields.selectClassId = -1;
  if ( !SupportInfoJump__ReturnScene(supportInfoJump, 1, v8, 0) )
  {
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( IsNullOrEmpty )
    {
      AvalonSceneManager__popScene(
        (AvalonSceneManager_o *)IsNullOrEmpty,
        1,
        (Il2CppObject *)this->fields.supportInfoJump,
        0);
      return;
    }
LABEL_32:
    sub_1C32E7C(IsNullOrEmpty);
  }
}


void GrandServantListRootComponent__OnClickHelpBtn(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  void *v5; // x0
  GrandServantListRootComponent___c_c *v6; // x8
  System_Action_Action__array *v7; // x20
  System_Action_object__o *_9__49_0; // x21
  Il2CppObject *v9; // x22
  struct GrandServantListRootComponent___c_StaticFields *static_fields; // x0
  System_Action_object__o *v11; // x21
  Il2CppObject *v12; // x22
  struct GrandServantListRootComponent___c_StaticFields *v13; // x0
  ActionChain_o *v14; // x21
  __int64 v15; // x20
  System_Action_o *v16; // x22

  if ( (byte_4C327DC & 1) == 0 )
  {
    sub_1C32C20(&ActionChain_TypeInfo);
    sub_1C32C20(&System_Action___TypeInfo);
    sub_1C32C20(&System_Action_Action____TypeInfo);
    sub_1C32C20(&System_Action_Action__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnClickHelpBtn__);
    sub_1C32C20(&Method_GrandServantListRootComponent_SendMessageMenuCancel__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__OnClickHelpBtn_b__49_0__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__OnClickHelpBtn_b__49_1__);
    sub_1C32C20(&GrandServantListRootComponent___c_TypeInfo);
    byte_4C327DC = 1;
  }
  v3 = Method_GrandServantListRootComponent_OnClickHelpBtn__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnClickHelpBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnClickHelpBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (void *)sub_1C32CC8(System_Action_Action____TypeInfo, 2);
  v6 = GrandServantListRootComponent___c_TypeInfo;
  v7 = (System_Action_Action__array *)v5;
  if ( !GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo);
    v6 = GrandServantListRootComponent___c_TypeInfo;
  }
  _9__49_0 = (System_Action_object__o *)v6->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = GrandServantListRootComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__49_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
    System_Action_object____ctor(_9__49_0, v9, Method_GrandServantListRootComponent___c__OnClickHelpBtn_b__49_0__, 0);
    static_fields = GrandServantListRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Action_Action__o *)_9__49_0;
    v5 = (void *)sub_1C32BC4(&static_fields->__9__49_0, _9__49_0);
  }
  if ( !v7 )
    goto LABEL_25;
  if ( !LODWORD(v7->max_length) )
    goto LABEL_26;
  v7->m_Items[0] = (System_Action_Action__o *)_9__49_0;
  sub_1C32BC4(v7->m_Items, _9__49_0);
  v5 = GrandServantListRootComponent___c_TypeInfo;
  if ( !GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo);
    v5 = GrandServantListRootComponent___c_TypeInfo;
  }
  v11 = *(System_Action_object__o **)(*((_QWORD *)v5 + 23) + 80LL);
  if ( !v11 )
  {
    if ( !*((_DWORD *)v5 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = GrandServantListRootComponent___c_TypeInfo;
    }
    v12 = (Il2CppObject *)**((_QWORD **)v5 + 23);
    v11 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
    System_Action_object____ctor(v11, v12, Method_GrandServantListRootComponent___c__OnClickHelpBtn_b__49_1__, 0);
    v13 = GrandServantListRootComponent___c_TypeInfo->static_fields;
    v13->__9__49_1 = (struct System_Action_Action__o *)v11;
    v5 = (void *)sub_1C32BC4(&v13->__9__49_1, v11);
  }
  if ( LODWORD(v7->max_length) <= 1 )
    goto LABEL_26;
  v7->m_Items[1] = (System_Action_Action__o *)v11;
  sub_1C32BC4(&v7->m_Items[1], v11);
  v14 = (ActionChain_o *)sub_1C32E6C(ActionChain_TypeInfo);
  ActionChain___ctor_48997860(v14, v7, 0);
  v15 = sub_1C32CC8(System_Action___TypeInfo, 1);
  v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageMenuCancel__, 0);
  if ( !v15 )
    goto LABEL_25;
  if ( !*(_DWORD *)(v15 + 24) )
LABEL_26:
    sub_1C32E84(v5);
  *(_QWORD *)(v15 + 32) = v16;
  v5 = (void *)sub_1C32BC4(v15 + 32, v16);
  if ( !v14 || (v5 = ChainableActionBase__Final((ChainableActionBase_o *)v14, (System_Action_array *)v15, 0)) == 0 )
LABEL_25:
    sub_1C32E7C(v5);
  ChainableActionBase__Execute((ChainableActionBase_o *)v5, 0);
}


void GrandServantListRootComponent__OnClickSupportButton(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C327C5 & 1) == 0 )
  {
    sub_1C32C20(&Method_GrandServantListRootComponent_OnClickSupportButton__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C327C5 = 1;
  }
  v3 = Method_GrandServantListRootComponent_OnClickSupportButton__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnClickSupportButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnClickSupportButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( this->fields.supportInfoJump )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    AvalonSceneManager__changeScene(
      (AvalonSceneManager_o *)Instance,
      60,
      1,
      (Il2CppObject *)this->fields.supportInfoJump,
      0);
  }
}


void GrandServantListRootComponent__OnInit(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  struct SupportInfoJump_o *supportInfoJump; // x8
  FollowerInfo_o *followerInfo; // x21
  bool IsUseGrandSupport_k__BackingField; // w22
  GrandServantListData_o *v6; // x20
  const MethodInfo *v7; // x3
  System_String_o *MainBgmName; // x20
  GrandServantListRootComponent_o *v9; // x0
  const MethodInfo *v10; // x1
  GrandServantListQuestData_o *v11; // x21
  const MethodInfo *v12; // x1
  struct GrandServantListData_o **p_QuestData_k__BackingField; // x20
  OtherUserGameEntity_o *otherUserGameEntity; // x21
  const MethodInfo *v15; // x2
  GrandServantListMenu_o *listMenu; // x0
  struct SupportInfoJump_o *v17; // x8
  struct GrandServantListData_o *grandServantListData; // x20
  EventUpValSetupInfo_o *eventSetupInfo; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  struct GrandServantListData_o *v23; // x8
  struct GrandServantListMenu_o *v24; // x8
  const MethodInfo *v25; // x1
  struct GrandServantListData_o *v26; // x8
  int Kind_k__BackingField; // w8
  const MethodInfo *v28; // x1
  __int64 *v29; // x8

  if ( (byte_4C327C1 & 1) == 0 )
  {
    sub_1C32C20(&BgmManager_TypeInfo);
    sub_1C32C20(&GrandServantListData_TypeInfo);
    sub_1C32C20(&GrandServantListQuestData_TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&StringLiteral_12332/*"START_OTHER_VIEW"*/);
    sub_1C32C20(&StringLiteral_12343/*"START_SUPPORT_SELECT"*/);
    sub_1C32C20(&StringLiteral_12321/*"START_FORMATION"*/);
    byte_4C327C1 = 1;
  }
  supportInfoJump = this->fields.supportInfoJump;
  if ( supportInfoJump )
  {
    if ( supportInfoJump->fields.isSelect )
    {
      followerInfo = supportInfoJump->fields.followerInfo;
      IsUseGrandSupport_k__BackingField = supportInfoJump->fields._IsUseGrandSupport_k__BackingField;
      v6 = (GrandServantListData_o *)sub_1C32E6C(GrandServantListData_TypeInfo);
      GrandServantListData___ctor_32858896(v6, followerInfo, IsUseGrandSupport_k__BackingField, v7);
    }
    else
    {
      otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
      v6 = (GrandServantListData_o *)sub_1C32E6C(GrandServantListData_TypeInfo);
      GrandServantListData___ctor_32859808(v6, otherUserGameEntity, v15);
    }
    this->fields.grandServantListData = v6;
    listMenu = (GrandServantListMenu_o *)sub_1C32BC4(&this->fields.grandServantListData, v6);
    v17 = this->fields.supportInfoJump;
    if ( !v17
      || (grandServantListData = this->fields.grandServantListData,
          eventSetupInfo = v17->fields.eventSetupInfo,
          questRestrictionInfo = v17->fields.questRestrictionInfo,
          v11 = (GrandServantListQuestData_o *)sub_1C32E6C(GrandServantListQuestData_TypeInfo),
          GrandServantListQuestData___ctor(v11, eventSetupInfo, questRestrictionInfo, v21),
          !grandServantListData) )
    {
LABEL_32:
      sub_1C32E7C(listMenu);
    }
    grandServantListData->fields._QuestData_k__BackingField = v11;
    p_QuestData_k__BackingField = (struct GrandServantListData_o **)&grandServantListData->fields._QuestData_k__BackingField;
  }
  else
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    MainBgmName = BgmManager__GetMainBgmName(0, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(MainBgmName, 0);
    if ( !GrandServantListRootComponent__IsForceChangeSceneFromGrandScore(v9, v10) )
      EventTutorialMaster__CheckTutorial(0, 101, 0, 0, 0, 0, 0, 0);
    v11 = (GrandServantListQuestData_o *)sub_1C32E6C(GrandServantListData_TypeInfo);
    GrandServantListData___ctor((GrandServantListData_o *)v11, v12);
    this->fields.grandServantListData = (struct GrandServantListData_o *)v11;
    p_QuestData_k__BackingField = &this->fields.grandServantListData;
  }
  listMenu = (GrandServantListMenu_o *)sub_1C32BC4(p_QuestData_k__BackingField, v11);
  v23 = this->fields.grandServantListData;
  if ( !v23 )
    goto LABEL_32;
  listMenu = this->fields.listMenu;
  if ( !listMenu )
    goto LABEL_32;
  GrandServantListMenu__Initialize(listMenu, this->fields.myFSM, v23->fields._Kind_k__BackingField, v22);
  v24 = this->fields.listMenu;
  if ( !v24 )
    goto LABEL_32;
  listMenu = (GrandServantListMenu_o *)v24->fields.menu;
  if ( !listMenu )
    goto LABEL_32;
  listMenu = (GrandServantListMenu_o *)((__int64 (__fastcall *)(GrandServantListMenu_o *, struct GrandServantListData_o *, _QWORD))listMenu->klass[1]._1.byval_arg.data)(
                                         listMenu,
                                         this->fields.grandServantListData,
                                         *(_QWORD *)&listMenu->klass[1]._1.byval_arg.bits);
  v26 = this->fields.grandServantListData;
  if ( !v26 )
    goto LABEL_32;
  Kind_k__BackingField = v26->fields._Kind_k__BackingField;
  switch ( Kind_k__BackingField )
  {
    case 2:
      v29 = &StringLiteral_12332/*"START_OTHER_VIEW"*/;
LABEL_31:
      SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)*v29, 0);
      return;
    case 1:
      v29 = &StringLiteral_12343/*"START_SUPPORT_SELECT"*/;
      goto LABEL_31;
    case 0:
      if ( GrandServantListRootComponent__IsForceChangeSceneFromGrandScore(
             (GrandServantListRootComponent_o *)listMenu,
             v25) )
      {
        GrandServantListRootComponent__ForceChangeSceneFromGrandScore(this, v28);
        return;
      }
      v29 = &StringLiteral_12321/*"START_FORMATION"*/;
      goto LABEL_31;
  }
}


void GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog(
        GrandServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BaseDialog_o *confirmGrandServantResetDialog; // x20
  System_Action_o *v8; // x0
  intptr_t *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_4C327D2 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__);
    sub_1C32C20(&Method_GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog_b__39_0__);
    sub_1C32C20(&Method_GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog_b__39_1__);
    byte_4C327D2 = 1;
  }
  if ( result == 1 )
  {
    v10 = Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0, 0);
    confirmGrandServantResetDialog = (BaseDialog_o *)this->fields.confirmGrandServantResetDialog;
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    v9 = &Method_GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog_b__39_1__;
  }
  else
  {
    if ( result )
      return;
    v5 = Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
    confirmGrandServantResetDialog = (BaseDialog_o *)this->fields.confirmGrandServantResetDialog;
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    v9 = &Method_GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog_b__39_0__;
  }
  v12 = v8;
  System_Action___ctor(v8, (Il2CppObject *)this, *v9, 0);
  if ( !confirmGrandServantResetDialog )
    sub_1C32E7C(v13);
  BaseDialog__SafeClose(confirmGrandServantResetDialog, v12, 0);
}


void GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog(
        GrandServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BaseDialog_o *confirmUseGrandServantResetItemDialog; // x20
  System_Action_o *v8; // x0
  intptr_t *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_4C327D0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__);
    sub_1C32C20(&Method_GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog_b__37_0__);
    sub_1C32C20(&Method_GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog_b__37_1__);
    byte_4C327D0 = 1;
  }
  if ( result == 1 )
  {
    v10 = Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0, 0);
    confirmUseGrandServantResetItemDialog = (BaseDialog_o *)this->fields.confirmUseGrandServantResetItemDialog;
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    v9 = &Method_GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog_b__37_1__;
  }
  else
  {
    if ( result )
      return;
    v5 = Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    confirmUseGrandServantResetItemDialog = (BaseDialog_o *)this->fields.confirmUseGrandServantResetItemDialog;
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    v9 = &Method_GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog_b__37_0__;
  }
  v12 = v8;
  System_Action___ctor(v8, (Il2CppObject *)this, *v9, 0);
  if ( !confirmUseGrandServantResetItemDialog )
    sub_1C32E7C(v13);
  BaseDialog__SafeClose(confirmUseGrandServantResetItemDialog, v12, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListRootComponent__OnSelectEditEquip(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        int32_t equipIndex,
        const MethodInfo *method)
{
  GrandServantListData_o *grandServantListData; // x0
  GrandServantListSlotData_o *v8; // x21
  UnityEngine_Object_o *grandEquipGraphListMenu; // x23
  Il2CppObject *v10; // x0
  const MethodInfo *v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  GrandEquipGraphListMenu_o *v14; // x22
  System_Action_bool__o *v15; // x23
  const MethodInfo *v16; // x4
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4C327D4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_bool__TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_InstantiateAssetObject_GrandEquipGraphListMenu___);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectEditEquip__);
    sub_1C32C20(&Method_GrandServantListRootComponent__OnSelectEditEquip_b__41_0__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_7148/*"GrandEquipGraphListMenu"*/);
    sub_1C32C20(&StringLiteral_12336/*"START_SELECT_EQUIP"*/);
    byte_4C327D4 = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_18;
  grandServantListData = (GrandServantListData_o *)GrandServantListData__GetSlotData(
                                                     grandServantListData,
                                                     grandGraphId,
                                                     *(const MethodInfo **)&equipIndex);
  if ( !grandServantListData )
    goto LABEL_18;
  v8 = (GrandServantListSlotData_o *)grandServantListData;
  if ( grandServantListData->fields._QuestData_k__BackingField )
  {
    SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12336/*"START_SELECT_EQUIP"*/, 0);
    grandEquipGraphListMenu = (UnityEngine_Object_o *)this->fields.grandEquipGraphListMenu;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(grandEquipGraphListMenu, 0, 0) )
    {
      v10 = GrandServantListRootComponent__InstantiateAssetObject_object_(
              this,
              (System_String_o *)StringLiteral_7148/*"GrandEquipGraphListMenu"*/,
              (const MethodInfo_313691C *)Method_GrandServantListRootComponent_InstantiateAssetObject_GrandEquipGraphListMenu___);
      this->fields.grandEquipGraphListMenu = (struct GrandEquipGraphListMenu_o *)v10;
      sub_1C32BC4(&this->fields.grandEquipGraphListMenu, v10);
      grandServantListData = (GrandServantListData_o *)this->fields.grandEquipGraphListMenu;
      if ( !grandServantListData )
        goto LABEL_18;
      GrandEquipGraphListMenu__Init((GrandEquipGraphListMenu_o *)grandServantListData, v11);
    }
    v12 = Method_GrandServantListRootComponent_OnSelectEditEquip__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditEquip__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectEditEquip__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C32C04(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
    v14 = this->fields.grandEquipGraphListMenu;
    v15 = (System_Action_bool__o *)sub_1C32E6C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v15,
      (Il2CppObject *)this,
      Method_GrandServantListRootComponent__OnSelectEditEquip_b__41_0__,
      0);
    if ( v14 )
    {
      GrandEquipGraphListMenu__Open(v14, v8, equipIndex, v15, v16);
      return;
    }
LABEL_18:
    sub_1C32E7C(grandServantListData);
  }
  v17 = Method_GrandServantListRootComponent_OnSelectEditEquip__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditEquip__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectEditEquip__);
  v18 = (System_Reflection_MethodBase_o *)sub_1C32C04(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0, 0);
  GrandServantListRootComponent__SendMessageMenuCancel(this, v19);
}


void GrandServantListRootComponent__OnSelectEditServant(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 grandServantListData; // x0
  const MethodInfo *v7; // x2
  GrandServantListSlotData_o *SlotData; // x0
  Il2CppObject *v9; // x20
  Il2CppClass *klass; // x8
  _QWORD *v11; // x0
  const char *namespaze; // x23
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x22
  System_Func_object__object__o *v19; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  GrandServantListRootComponent___c_c *v21; // x8
  System_Func_object__bool__o *_9__28_1; // x23
  Il2CppObject *v23; // x24
  struct GrandServantListRootComponent___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_List_TSource__o *v26; // x0
  GrandServantListRootComponent___c_c *v27; // x8
  System_Collections_Generic_List_T__o *v28; // x22
  System_Func_object__bool__o *_9__28_2; // x23
  Il2CppObject *v30; // x24
  struct GrandServantListRootComponent___c_StaticFields *v31; // x0
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x20
  GrandServantListRootComponent___c_c *v34; // x0
  System_Func_object__int__o *_9__28_3; // x21
  Il2CppObject *v36; // x23
  struct GrandServantListRootComponent___c_StaticFields *v37; // x0
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v38; // x0
  GrandServantListRootComponent___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x21
  System_Func_object__int__o *_9__28_4; // x22
  Il2CppObject *v42; // x23
  struct GrandServantListRootComponent___c_StaticFields *v43; // x0
  System_Func_object__object__o *_9__28_5; // x23
  Il2CppObject *v45; // x24
  struct GrandServantListRootComponent___c_StaticFields *v46; // x0
  System_Collections_Generic_Dictionary_int__object__o *v47; // x21
  Il2CppObject *Item; // x1
  int32_t bits; // w20
  System_Action_o *v50; // x21
  GrandServantListRootComponent_o *v51; // x0
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x1
  System_Collections_Generic_List_T__o *monitor; // x21
  GrandServantListRootComponent___c_c *v55; // x0
  System_Func_object__bool__o *_9__28_6; // x23
  Il2CppObject *v57; // x24
  struct GrandServantListRootComponent___c_StaticFields *v58; // x0
  Il2CppClass *v59; // x22
  GrandServantListRootComponent___c_c *v60; // x0
  System_Func_object__bool__o *_9__28_7; // x23
  Il2CppObject *v62; // x24
  struct GrandServantListRootComponent___c_StaticFields *v63; // x0
  Il2CppObject *v64; // x0
  GrandServantExtraBranchDialog_o *v65; // x19
  GrandServantExtraBranchDialog_CallbackFunc_o *v66; // x23
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x4

  if ( (byte_4C327C8 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_Any_SelectGrandServantInfo___);
    sub_1C32C20(&GrandServantExtraBranchDialog_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_SelectGrandServantInfo___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_SelectGrandServantInfo___get_Item__);
    sub_1C32C20(&Method_System_Linq_Enumerable_GroupBy_SelectGrandServantInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_UserServantEntity__SelectGrandServantInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__SelectGrandServantInfo___int__List_SelectGrandServantInfo____);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_SelectGrandServantInfo___);
    sub_1C32C20(&System_Func_IGrouping_int__SelectGrandServantInfo___int__TypeInfo);
    sub_1C32C20(&System_Func_UserServantEntity__SelectGrandServantInfo__TypeInfo);
    sub_1C32C20(&System_Func_SelectGrandServantInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_IGrouping_int__SelectGrandServantInfo___List_SelectGrandServantInfo___TypeInfo);
    sub_1C32C20(&System_Func_SelectGrandServantInfo__int__TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantExtraBranchDialog___);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectEditServant__);
    sub_1C32C20(&Method_GrandServantListRootComponent_SendMessageMenuCancel__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Item__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_1__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_2__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_3__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_4__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_5__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_6__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_7__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass28_0__OnSelectEditServant_b__0__);
    sub_1C32C20(&GrandServantListRootComponent___c__DisplayClass28_0_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__8__);
    sub_1C32C20(&GrandServantListRootComponent___c__DisplayClass28_1_TypeInfo);
    sub_1C32C20(&GrandServantListRootComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_7158/*"GrandServantExtraBranchDialog"*/);
    byte_4C327C8 = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(GrandServantListRootComponent___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_82;
  v5[1].monitor = this;
  sub_1C32BC4(&v5[1].monitor, this);
  grandServantListData = (__int64)this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_82;
  SlotData = GrandServantListData__GetSlotData((GrandServantListData_o *)grandServantListData, grandGraphId, v7);
  v5[1].klass = (Il2CppClass *)SlotData;
  v9 = v5 + 1;
  grandServantListData = sub_1C32BC4(&v5[1], SlotData);
  klass = v5[1].klass;
  if ( !klass )
    goto LABEL_82;
  if ( LOBYTE(klass->_1.name) )
  {
    v11 = Method_GrandServantListRootComponent_OnSelectEditServant__;
    namespaze = klass->_1.namespaze;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditServant__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectEditServant__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C32C04(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
    if ( namespaze )
    {
      this->fields.lastSelectedGrandGraphId = grandGraphId;
      GrandServantListRootComponent__OpenGrandServantListMenuBranchDialog(this, v14);
      return;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    grandServantListData = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( grandServantListData )
    {
      OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                (UserServantMaster_o *)grandServantListData,
                                                                                0);
      v19 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_UserServantEntity__SelectGrandServantInfo__TypeInfo);
      System_Func_object__object____ctor(
        v19,
        v5,
        Method_GrandServantListRootComponent___c__DisplayClass28_0__OnSelectEditServant_b__0__,
        0);
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   OrganizationList,
                                                                   (System_Func_TSource__TResult__o *)v19,
                                                                   (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_UserServantEntity__SelectGrandServantInfo___);
      v21 = GrandServantListRootComponent___c_TypeInfo;
      if ( !GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo);
        v21 = GrandServantListRootComponent___c_TypeInfo;
      }
      _9__28_1 = (System_Func_object__bool__o *)v21->static_fields->__9__28_1;
      if ( !_9__28_1 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = GrandServantListRootComponent___c_TypeInfo;
        }
        v23 = (Il2CppObject *)v21->static_fields->__9;
        _9__28_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_SelectGrandServantInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__28_1,
          v23,
          Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_1__,
          0);
        static_fields = GrandServantListRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__28_1 = (struct System_Func_SelectGrandServantInfo__bool__o *)_9__28_1;
        sub_1C32BC4(&static_fields->__9__28_1, _9__28_1);
      }
      v25 = System_Linq_Enumerable__Where_object_(
              v20,
              (System_Func_TSource__bool__o *)_9__28_1,
              (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_SelectGrandServantInfo___);
      v26 = System_Linq_Enumerable__ToList_object_(
              v25,
              (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
      v27 = GrandServantListRootComponent___c_TypeInfo;
      v28 = (System_Collections_Generic_List_T__o *)v26;
      if ( !GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo);
        v27 = GrandServantListRootComponent___c_TypeInfo;
      }
      _9__28_2 = (System_Func_object__bool__o *)v27->static_fields->__9__28_2;
      if ( !_9__28_2 )
      {
        if ( !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          v27 = GrandServantListRootComponent___c_TypeInfo;
        }
        v30 = (Il2CppObject *)v27->static_fields->__9;
        _9__28_2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_SelectGrandServantInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__28_2,
          v30,
          Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_2__,
          0);
        v31 = GrandServantListRootComponent___c_TypeInfo->static_fields;
        v31->__9__28_2 = (struct System_Func_SelectGrandServantInfo__bool__o *)_9__28_2;
        sub_1C32BC4(&v31->__9__28_2, _9__28_2);
      }
      grandServantListData = BasicHelper__Any_object_(
                               v28,
                               (System_Func_T__bool__o *)_9__28_2,
                               (const MethodInfo_30C6790 *)Method_BasicHelper_Any_SelectGrandServantInfo___);
      if ( (grandServantListData & 1) != 0 )
      {
        if ( v28 )
        {
          grandServantListData = (__int64)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v28,
                                            0,
                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Item__);
          if ( grandServantListData )
          {
            if ( *(_DWORD *)(grandServantListData + 32) )
            {
              v33 = (Il2CppObject *)sub_1C32E6C(GrandServantListRootComponent___c__DisplayClass28_1_TypeInfo);
              System_Object___ctor(v33, 0);
              if ( v33 )
              {
                v33[2].monitor = v5;
                sub_1C32BC4(&v33[2].monitor, v5);
                v34 = GrandServantListRootComponent___c_TypeInfo;
                if ( !GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo);
                  v34 = GrandServantListRootComponent___c_TypeInfo;
                }
                _9__28_3 = (System_Func_object__int__o *)v34->static_fields->__9__28_3;
                if ( !_9__28_3 )
                {
                  if ( !v34->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v34);
                    v34 = GrandServantListRootComponent___c_TypeInfo;
                  }
                  v36 = (Il2CppObject *)v34->static_fields->__9;
                  _9__28_3 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_SelectGrandServantInfo__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__28_3,
                    v36,
                    Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_3__,
                    0);
                  v37 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                  v37->__9__28_3 = (struct System_Func_SelectGrandServantInfo__int__o *)_9__28_3;
                  sub_1C32BC4(&v37->__9__28_3, _9__28_3);
                }
                v38 = System_Linq_Enumerable__GroupBy_object__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                        (System_Func_TSource__TKey__o *)_9__28_3,
                        (const MethodInfo_31077C8 *)Method_System_Linq_Enumerable_GroupBy_SelectGrandServantInfo__int___);
                v39 = GrandServantListRootComponent___c_TypeInfo;
                v40 = (System_Collections_Generic_IEnumerable_TSource__o *)v38;
                if ( !GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo);
                  v39 = GrandServantListRootComponent___c_TypeInfo;
                }
                _9__28_4 = (System_Func_object__int__o *)v39->static_fields->__9__28_4;
                if ( !_9__28_4 )
                {
                  if ( !v39->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v39);
                    v39 = GrandServantListRootComponent___c_TypeInfo;
                  }
                  v42 = (Il2CppObject *)v39->static_fields->__9;
                  _9__28_4 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_IGrouping_int__SelectGrandServantInfo___int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__28_4,
                    v42,
                    Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_4__,
                    0);
                  v43 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                  v43->__9__28_4 = (struct System_Func_IGrouping_int__SelectGrandServantInfo___int__o *)_9__28_4;
                  sub_1C32BC4(&v43->__9__28_4, _9__28_4);
                  v39 = GrandServantListRootComponent___c_TypeInfo;
                }
                if ( !v39->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v39);
                  v39 = GrandServantListRootComponent___c_TypeInfo;
                }
                _9__28_5 = (System_Func_object__object__o *)v39->static_fields->__9__28_5;
                if ( !_9__28_5 )
                {
                  if ( !v39->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v39);
                    v39 = GrandServantListRootComponent___c_TypeInfo;
                  }
                  v45 = (Il2CppObject *)v39->static_fields->__9;
                  _9__28_5 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_IGrouping_int__SelectGrandServantInfo___List_SelectGrandServantInfo___TypeInfo);
                  System_Func_object__object____ctor(
                    _9__28_5,
                    v45,
                    Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_5__,
                    0);
                  v46 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                  v46->__9__28_5 = (struct System_Func_IGrouping_int__SelectGrandServantInfo___List_SelectGrandServantInfo___o *)_9__28_5;
                  sub_1C32BC4(&v46->__9__28_5, _9__28_5);
                }
                grandServantListData = (__int64)System_Linq_Enumerable__ToDictionary_object__int__object_(
                                                  v40,
                                                  (System_Func_TSource__TKey__o *)_9__28_4,
                                                  (System_Func_TSource__TElement__o *)_9__28_5,
                                                  (const MethodInfo_311D3A4 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__SelectGrandServantInfo___int__List_SelectGrandServantInfo____);
                if ( grandServantListData )
                {
                  v47 = (System_Collections_Generic_Dictionary_int__object__o *)grandServantListData;
                  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
                         (System_Collections_Generic_Dictionary_int__object__o *)grandServantListData,
                         1,
                         (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__List_SelectGrandServantInfo___ContainsKey__) )
                  {
                    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                             v47,
                             1,
                             (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_SelectGrandServantInfo___get_Item__);
                  }
                  else
                  {
                    Item = 0;
                  }
                  v33[1].monitor = Item;
                  sub_1C32BC4(&v33[1].monitor, Item);
                  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
                         v47,
                         2,
                         (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__List_SelectGrandServantInfo___ContainsKey__) )
                  {
                    v53 = System_Collections_Generic_Dictionary_int__object___get_Item(
                            v47,
                            2,
                            (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_SelectGrandServantInfo___get_Item__);
                  }
                  else
                  {
                    v53 = 0;
                  }
                  v33[2].klass = (Il2CppClass *)v53;
                  sub_1C32BC4(&v33[2], v53);
                  monitor = (System_Collections_Generic_List_T__o *)v33[1].monitor;
                  if ( monitor )
                  {
                    v55 = GrandServantListRootComponent___c_TypeInfo;
                    if ( !GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo);
                      v55 = GrandServantListRootComponent___c_TypeInfo;
                    }
                    _9__28_6 = (System_Func_object__bool__o *)v55->static_fields->__9__28_6;
                    if ( !_9__28_6 )
                    {
                      if ( !v55->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v55);
                        v55 = GrandServantListRootComponent___c_TypeInfo;
                      }
                      v57 = (Il2CppObject *)v55->static_fields->__9;
                      _9__28_6 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_SelectGrandServantInfo__bool__TypeInfo);
                      System_Func_object__bool____ctor(
                        _9__28_6,
                        v57,
                        Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_6__,
                        0);
                      v58 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                      v58->__9__28_6 = (struct System_Func_SelectGrandServantInfo__bool__o *)_9__28_6;
                      sub_1C32BC4(&v58->__9__28_6, _9__28_6);
                    }
                    LOBYTE(monitor) = BasicHelper__Any_object_(
                                        monitor,
                                        (System_Func_T__bool__o *)_9__28_6,
                                        (const MethodInfo_30C6790 *)Method_BasicHelper_Any_SelectGrandServantInfo___);
                  }
                  v59 = v33[2].klass;
                  if ( v59 )
                  {
                    v60 = GrandServantListRootComponent___c_TypeInfo;
                    if ( !GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo);
                      v60 = GrandServantListRootComponent___c_TypeInfo;
                    }
                    _9__28_7 = (System_Func_object__bool__o *)v60->static_fields->__9__28_7;
                    if ( !_9__28_7 )
                    {
                      if ( !v60->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v60);
                        v60 = GrandServantListRootComponent___c_TypeInfo;
                      }
                      v62 = (Il2CppObject *)v60->static_fields->__9;
                      _9__28_7 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_SelectGrandServantInfo__bool__TypeInfo);
                      System_Func_object__bool____ctor(
                        _9__28_7,
                        v62,
                        Method_GrandServantListRootComponent___c__OnSelectEditServant_b__28_7__,
                        0);
                      v63 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                      v63->__9__28_7 = (struct System_Func_SelectGrandServantInfo__bool__o *)_9__28_7;
                      sub_1C32BC4(&v63->__9__28_7, _9__28_7);
                    }
                    LOBYTE(v59) = BasicHelper__Any_object_(
                                    (System_Collections_Generic_List_T__o *)v59,
                                    (System_Func_T__bool__o *)_9__28_7,
                                    (const MethodInfo_30C6790 *)Method_BasicHelper_Any_SelectGrandServantInfo___);
                  }
                  v64 = GrandServantListRootComponent__InstantiateAssetObject_object_(
                          this,
                          (System_String_o *)StringLiteral_7158/*"GrandServantExtraBranchDialog"*/,
                          (const MethodInfo_313691C *)Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantExtraBranchDialog___);
                  v33[1].klass = (Il2CppClass *)v64;
                  sub_1C32BC4(&v33[1], v64);
                  grandServantListData = (__int64)v33[1].klass;
                  if ( grandServantListData )
                  {
                    BaseDialog__Init((BaseDialog_o *)grandServantListData, 0);
                    v65 = (GrandServantExtraBranchDialog_o *)v33[1].klass;
                    v66 = (GrandServantExtraBranchDialog_CallbackFunc_o *)sub_1C32E6C(GrandServantExtraBranchDialog_CallbackFunc_TypeInfo);
                    GrandServantExtraBranchDialog_CallbackFunc___ctor(
                      v66,
                      v33,
                      (intptr_t)Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__8__,
                      v67);
                    if ( v65 )
                    {
                      GrandServantExtraBranchDialog__Open(
                        v65,
                        (unsigned __int8)monitor & 1,
                        (unsigned __int8)v59 & 1,
                        v66,
                        v68);
                      return;
                    }
                  }
                }
              }
            }
            else if ( v9->klass )
            {
              GrandServantListRootComponent__StartSelectGrandServant(
                this,
                (GrandGraphEntity_o *)v9->klass->_1.this_arg.data,
                (System_Collections_Generic_List_SelectGrandServantInfo__o *)v28,
                v32);
              return;
            }
          }
        }
      }
      else if ( v9->klass )
      {
        bits = v9->klass->_1.byval_arg.bits;
        v50 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(v50, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageMenuCancel__, 0);
        GrandServantListRootComponent__OpenCannotSelectGrandDialog(v51, bits, v50, v52);
        return;
      }
    }
LABEL_82:
    sub_1C32E7C(grandServantListData);
  }
  v15 = Method_GrandServantListRootComponent_OnSelectEditServant__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditServant__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectEditServant__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C32C04(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0);
  GrandServantListRootComponent__SendMessageMenuCancel(this, v17);
}


void GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog(
        GrandServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BaseDialog_o *grandServantListMenuBranchDialog; // x20
  System_Action_o *v8; // x0
  intptr_t *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  System_Action_o *v16; // x21
  __int64 v17; // x0

  if ( (byte_4C327CD & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
    sub_1C32C20(&Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__34_0__);
    sub_1C32C20(&Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__34_1__);
    sub_1C32C20(&Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__34_2__);
    sub_1C32C20(&Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__34_3__);
    byte_4C327CD = 1;
  }
  switch ( result )
  {
    case 0:
      v5 = Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__;
      if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      grandServantListMenuBranchDialog = (BaseDialog_o *)this->fields.grandServantListMenuBranchDialog;
      v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      v9 = &Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__34_0__;
      goto LABEL_16;
    case 1:
      v10 = Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__;
      if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
      grandServantListMenuBranchDialog = (BaseDialog_o *)this->fields.grandServantListMenuBranchDialog;
      v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      v9 = &Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__34_1__;
      goto LABEL_16;
    case 2:
      v12 = Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__;
      if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C32C04(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
      grandServantListMenuBranchDialog = (BaseDialog_o *)this->fields.grandServantListMenuBranchDialog;
      v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      v9 = &Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__34_2__;
      goto LABEL_16;
    case 3:
      v14 = Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__;
      if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C32C04(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 1, 0, 0);
      grandServantListMenuBranchDialog = (BaseDialog_o *)this->fields.grandServantListMenuBranchDialog;
      v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      v9 = &Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__34_3__;
LABEL_16:
      v16 = v8;
      System_Action___ctor(v8, (Il2CppObject *)this, *v9, 0);
      if ( !grandServantListMenuBranchDialog )
        sub_1C32E7C(v17);
      BaseDialog__SafeClose(grandServantListMenuBranchDialog, v16, 0);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListRootComponent__OnSelectOpenEquipStatus(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        int32_t equipIndex,
        bool isLongPress,
        const MethodInfo *method)
{
  GrandServantListData_o *grandServantListData; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x8
  GrandServantListData_o *v12; // x21
  int32_t v13; // w9
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  struct GrandServantListQuestData_o *QuestData_k__BackingField; // x8
  __int64 v17; // x22
  bool v18; // w20
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  __int128 v21; // q1
  CommonUI_o *v22; // x21
  int64_t v23; // x22
  ServantStatusDialog_EndDelegate_o *v24; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-50h]

  if ( (byte_4C327C7 & 1) == 0 )
  {
    sub_1C32C20(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_EndShowEquip__);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C327C7 = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_26;
  grandServantListData = (GrandServantListData_o *)GrandServantListData__GetSlotData(
                                                     grandServantListData,
                                                     grandGraphId,
                                                     *(const MethodInfo **)&equipIndex);
  if ( !grandServantListData )
    goto LABEL_26;
  v11 = *(_QWORD *)&grandServantListData->fields._IsOtherUserData_k__BackingField;
  v12 = grandServantListData;
  if ( v11 )
  {
    v13 = *(_DWORD *)(v11 + 24);
    if ( v13 > equipIndex )
    {
      if ( v13 <= (unsigned int)equipIndex )
        goto LABEL_27;
      if ( *(_QWORD *)(v11 + 8LL * equipIndex + 32) )
      {
        v14 = Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__;
        if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C32C04(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
        QuestData_k__BackingField = v12[1].fields._QuestData_k__BackingField;
        if ( !QuestData_k__BackingField )
          goto LABEL_26;
        if ( LODWORD(QuestData_k__BackingField->fields._QuestRestriction_k__BackingField) > equipIndex )
        {
          v17 = *((_QWORD *)&QuestData_k__BackingField[1].klass + equipIndex);
          v18 = equipIndex == 1 && *(_DWORD *)(&v12[1].fields._Kind_k__BackingField + 3) > 0;
          grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v17 )
          {
            v21 = *(_OWORD *)(v17 + 32);
            v22 = (CommonUI_o *)grandServantListData;
            *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
            *(_OWORD *)&v26.fields.fakeValue = v21;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v25 = v26;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v25, 0);
            v24 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v24,
              (Il2CppObject *)this,
              Method_GrandServantListRootComponent_EndShowEquip__,
              0);
            if ( v22 )
            {
              CommonUI__OpenServantEquipStatusDialog(v22, 11, v23, 1, v24, 0, v18, 0);
              return;
            }
          }
LABEL_26:
          sub_1C32E7C(grandServantListData);
        }
LABEL_27:
        sub_1C32E84(grandServantListData);
      }
    }
  }
  if ( !isLongPress )
  {
    v19 = Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__);
    v20 = (System_Reflection_MethodBase_o *)sub_1C32C04(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
  }
  GrandServantListRootComponent__SendMessageCloseStatus(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListRootComponent__OnSelectOpenEquipStatusForSupportOrOther(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        int32_t equipIndex,
        bool isLongPress,
        const MethodInfo *method)
{
  GrandServantListData_o *grandServantListData; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x8
  GrandServantListData_o *v12; // x21
  int32_t v13; // w9
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  int32_t v17; // w22
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  ServantLeaderInfo_o *klass; // x8
  CommonUI_o *v21; // x21
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x20
  ServantStatusDialog_EndDelegate_o *v23; // x23

  if ( (byte_4C327DF & 1) == 0 )
  {
    sub_1C32C20(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_EndShowEquip__);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C327DF = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_24;
  grandServantListData = (GrandServantListData_o *)GrandServantListData__GetSlotData(
                                                     grandServantListData,
                                                     grandGraphId,
                                                     *(const MethodInfo **)&equipIndex);
  if ( !grandServantListData )
    goto LABEL_24;
  v11 = *(_QWORD *)&grandServantListData->fields._IsOtherUserData_k__BackingField;
  v12 = grandServantListData;
  if ( v11 )
  {
    v13 = *(_DWORD *)(v11 + 24);
    if ( v13 > equipIndex )
    {
      if ( v13 <= (unsigned int)equipIndex )
        sub_1C32E84(grandServantListData);
      if ( *(_QWORD *)(v11 + 8LL * equipIndex + 32) )
      {
        v14 = Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__;
        if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C32C04(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
        supportInfoJump = this->fields.supportInfoJump;
        if ( supportInfoJump && supportInfoJump->fields.kind == 3 )
          v17 = 13;
        else
          v17 = 14;
        grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        klass = (ServantLeaderInfo_o *)v12[2].klass;
        if ( klass )
        {
          v21 = (CommonUI_o *)grandServantListData;
          EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(klass, equipIndex, 0);
          v23 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v23,
            (Il2CppObject *)this,
            Method_GrandServantListRootComponent_EndShowEquip__,
            0);
          if ( v21 )
          {
            CommonUI__OpenServantEquipStatusDialog_31206252(v21, v17, EquipTargetInfoByEquipIdx, v23, 0, 0);
            return;
          }
        }
LABEL_24:
        sub_1C32E7C(grandServantListData);
      }
    }
  }
  if ( !isLongPress )
  {
    v18 = Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C32C04(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0);
  }
  GrandServantListRootComponent__SendMessageCloseStatus(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListRootComponent__OnSelectOpenServantStatus(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        bool isLongPress,
        const MethodInfo *method)
{
  GrandServantListData_o *grandServantListData; // x0
  const MethodInfo *v8; // x1
  GrandServantListData_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  struct System_Collections_Generic_List_GrandServantListSlotData__o *slotDataList; // x8
  __int128 v13; // q1
  CommonUI_o *v14; // x20
  int64_t v15; // x21
  ServantStatusDialog_FormationEndDelegate_o *v16; // x22
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-50h]

  if ( (byte_4C327C6 & 1) == 0 )
  {
    sub_1C32C20(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_EndShowServantWithQuest__);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectOpenServantStatus__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C327C6 = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_18;
  grandServantListData = (GrandServantListData_o *)GrandServantListData__GetSlotData(
                                                     grandServantListData,
                                                     grandGraphId,
                                                     (const MethodInfo *)isLongPress);
  if ( !grandServantListData )
    goto LABEL_18;
  v9 = grandServantListData;
  if ( grandServantListData->fields._QuestData_k__BackingField )
  {
    v10 = Method_GrandServantListRootComponent_OnSelectOpenServantStatus__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenServantStatus__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectOpenServantStatus__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
    grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    slotDataList = v9[1].fields.slotDataList;
    if ( slotDataList )
    {
      v13 = *(_OWORD *)&slotDataList->fields._syncRoot;
      v14 = (CommonUI_o *)grandServantListData;
      *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&slotDataList->fields._items;
      *(_OWORD *)&v20.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v19 = v20;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v19, 0);
      v16 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1C32E6C(ServantStatusDialog_FormationEndDelegate_TypeInfo);
      ServantStatusDialog_FormationEndDelegate___ctor(
        v16,
        (Il2CppObject *)this,
        Method_GrandServantListRootComponent_EndShowServantWithQuest__,
        0);
      if ( v14 )
      {
        CommonUI__OpenServantStatusDialog_31200452(v14, 1, v15, v16, 0, 0);
        return;
      }
    }
LABEL_18:
    sub_1C32E7C(grandServantListData);
  }
  if ( !isLongPress )
  {
    v17 = Method_GrandServantListRootComponent_OnSelectOpenServantStatus__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenServantStatus__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectOpenServantStatus__);
    v18 = (System_Reflection_MethodBase_o *)sub_1C32C04(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0, 0);
  }
  GrandServantListRootComponent__SendMessageCloseStatus(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListRootComponent__OnSelectOpenServantStatusForSupportOrOther(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        bool isLongPress,
        const MethodInfo *method)
{
  GrandServantListData_o *grandServantListData; // x0
  const MethodInfo *v8; // x1
  GrandServantListData_o *v9; // x20
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  int32_t v13; // w21
  Il2CppObject *Instance; // x0
  ServantLeaderInfo_o *klass; // x20
  CommonUI_o *v16; // x22
  ServantStatusDialog_EndDelegate_o *v17; // x23
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0

  if ( (byte_4C327DE & 1) == 0 )
  {
    sub_1C32C20(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_EndShowServant__);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C327DE = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_19;
  grandServantListData = (GrandServantListData_o *)GrandServantListData__GetSlotData(
                                                     grandServantListData,
                                                     grandGraphId,
                                                     (const MethodInfo *)isLongPress);
  if ( !grandServantListData )
    goto LABEL_19;
  v9 = grandServantListData;
  if ( grandServantListData->fields._QuestData_k__BackingField )
  {
    v10 = Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
    supportInfoJump = this->fields.supportInfoJump;
    if ( supportInfoJump && supportInfoJump->fields.kind == 3 )
      v13 = 4;
    else
      v13 = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    klass = (ServantLeaderInfo_o *)v9[2].klass;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v17,
      (Il2CppObject *)this,
      Method_GrandServantListRootComponent_EndShowServant__,
      0);
    if ( v16 )
    {
      CommonUI__OpenServantStatusDialog_31203144(v16, v13, klass, v17, 0);
      return;
    }
LABEL_19:
    sub_1C32E7C(grandServantListData);
  }
  if ( !isLongPress )
  {
    v18 = Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C32C04(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0);
  }
  GrandServantListRootComponent__SendMessageCloseStatus(this, v8);
}


void GrandServantListRootComponent__OnSelectSupportServant(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  void *grandServantListData; // x0
  struct GrandServantListData_o *v6; // x8
  struct GrandServantListQuestData_o *QuestData_k__BackingField; // x8
  __int64 v8; // x20
  QuestRestrictionInfo_o *QuestRestriction_k__BackingField; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  int v12; // w22
  int32_t v13; // w22
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t v16; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  int32_t DispLimitCount; // w0
  Il2CppObject *Instance; // x21
  System_Action_o *v21; // x22
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  struct SupportInfoJump_o *supportInfoJump; // x2
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  const MethodInfo *v27; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4C327DD & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectSupportServant__);
    sub_1C32C20(&Method_GrandServantListRootComponent_SendMessageMenuCancel__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C327DD = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_40;
  grandServantListData = GrandServantListData__GetSlotData(
                           (GrandServantListData_o *)grandServantListData,
                           grandGraphId,
                           method);
  v6 = this->fields.grandServantListData;
  if ( !v6 )
    goto LABEL_40;
  if ( v6->fields._Kind_k__BackingField == 1 && v6->fields._IsOtherUserData_k__BackingField )
  {
    if ( !grandServantListData )
      goto LABEL_40;
    if ( *((_QWORD *)grandServantListData + 3) )
    {
      QuestData_k__BackingField = v6->fields._QuestData_k__BackingField;
      if ( !QuestData_k__BackingField )
        goto LABEL_40;
      v8 = *((_QWORD *)grandServantListData + 10);
      if ( v8 )
      {
        QuestRestriction_k__BackingField = QuestData_k__BackingField->fields._QuestRestriction_k__BackingField;
        v11 = *(_QWORD *)(v8 + 48);
        v10 = *(_QWORD *)(v8 + 56);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v28.fields.currentCryptoKey = v11;
        *(_QWORD *)&v28.fields.fakeValue = v10;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v28, 0) )
        {
          if ( !ServantLeaderInfo__getQuestRestriction((ServantLeaderInfo_o *)v8, QuestRestriction_k__BackingField, 0)
            && !ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v8, QuestRestriction_k__BackingField, 0) )
          {
            grandServantListData = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !grandServantListData )
              goto LABEL_40;
            v12 = *((_DWORD *)grandServantListData + 14);
            grandServantListData = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !grandServantListData )
              goto LABEL_40;
            if ( v12 < 1 )
              goto LABEL_43;
            if ( !QuestRestriction_k__BackingField )
              goto LABEL_40;
            v13 = *((_DWORD *)grandServantListData + 15);
            if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43340352(QuestRestriction_k__BackingField, v13, 0) )
              goto LABEL_43;
            v15 = *(_QWORD *)(v8 + 48);
            v14 = *(_QWORD *)(v8 + 56);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v29.fields.currentCryptoKey = v15;
            *(_QWORD *)&v29.fields.fakeValue = v14;
            v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v29, 0);
            v17 = *(_DWORD *)(v8 + 64);
            v18 = v16;
            DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)v8, 0);
            if ( !QuestRestrictionInfo__IsRestrictionServantIndividuality(
                    QuestRestriction_k__BackingField,
                    v18,
                    v17,
                    DispLimitCount,
                    v13,
                    1,
                    0) )
            {
LABEL_43:
              if ( this->fields.supportInfoJump )
              {
                Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v21 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                System_Action___ctor(
                  v21,
                  (Il2CppObject *)this,
                  Method_GrandServantListRootComponent_SendMessageMenuCancel__,
                  0);
                if ( Instance )
                {
                  if ( PartyOrganizationUtility__OpenQuestUseItemExpiredDialog(
                         (PartyOrganizationUtility_o *)Instance,
                         v21,
                         0) )
                  {
                    return;
                  }
                  v22 = Method_GrandServantListRootComponent_OnSelectSupportServant__;
                  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectSupportServant__ + 83) & 2) != 0 )
                    v22 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectSupportServant__);
                  v23 = (System_Reflection_MethodBase_o *)sub_1C32C04(v22, v22[4]);
                  OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  grandServantListData = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantClassMaster___);
                  if ( grandServantListData )
                  {
                    grandServantListData = (void *)ServantClassMaster__GetSupportGroupByGrandGraphId(
                                                     (ServantClassMaster_o *)grandServantListData,
                                                     *(_DWORD *)(v8 + 268),
                                                     0);
                    supportInfoJump = this->fields.supportInfoJump;
                    if ( supportInfoJump )
                    {
                      supportInfoJump->fields.selectClassId = (int)grandServantListData;
                      supportInfoJump->fields._SelectGrandGraphId_k__BackingField = *(_DWORD *)(v8 + 268);
                      supportInfoJump->fields.selectDeckId = *(_DWORD *)(v8 + 16);
                      if ( SupportInfoJump__ReturnScene(supportInfoJump, 1, (Il2CppObject *)supportInfoJump, 0) )
                        return;
                      grandServantListData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                      if ( grandServantListData )
                      {
                        AvalonSceneManager__popScene(
                          (AvalonSceneManager_o *)grandServantListData,
                          1,
                          (Il2CppObject *)this->fields.supportInfoJump,
                          0);
                        return;
                      }
                    }
                  }
                }
LABEL_40:
                sub_1C32E7C(grandServantListData);
              }
            }
          }
        }
      }
    }
    v25 = Method_GrandServantListRootComponent_OnSelectSupportServant__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectSupportServant__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent_OnSelectSupportServant__);
    v26 = (System_Reflection_MethodBase_o *)sub_1C32C04(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0, 0);
    GrandServantListRootComponent__SendMessageMenuCancel(this, v27);
  }
}


void GrandServantListRootComponent__OpenCannotSelectGrandDialog(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        System_Action_o *func,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x21
  System_String_o *v8; // x20
  System_String_o *v9; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x23
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  System_String_o *v24; // x21
  Il2CppObject *Instance; // x22
  System_Nullable_float__o p_messagePosY; // x0
  System_Nullable_float__o messagePosY; // [xsp+38h] [xbp-58h] BYREF
  int monitor; // [xsp+48h] [xbp-48h] BYREF
  int klass_high; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4C327C9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_float___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_3286/*"CANNOT_SELECT_GRAND_DIALOG_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_3287/*"CANNOT_SELECT_GRAND_DIALOG_TITLE"*/);
    byte_4C327C9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             grandGraphId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3287/*"CANNOT_SELECT_GRAND_DIALOG_TITLE"*/,
                                                                  0);
  if ( !Entity )
    goto LABEL_11;
  v8 = System_String__Format((System_String_o *)Master_object, (Il2CppObject *)Entity[2].klass, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3286/*"CANNOT_SELECT_GRAND_DIALOG_MESSAGE"*/, 0);
  klass_high = HIDWORD(Entity[3].klass);
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high, v10, v11, v12, v13, v14, v15);
  monitor = (int)Entity[3].monitor;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor, v17, v18, v19, v20, v21, v22);
  v24 = System_String__Format_63559836(v9, v16, v23, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0;
  System_Nullable_float____ctor(p_messagePosY, 26.0, (const MethodInfo_38C063C *)Method_System_Nullable_float___ctor__);
  if ( !Instance )
LABEL_11:
    sub_1C32E7C(Master_object);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    v8,
    v24,
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
    0);
}


void GrandServantListRootComponent__OpenChangeGrandSameServantListMenu(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *changeGrandSameServantListMenu; // x21
  const MethodInfo *v4; // x2
  Il2CppObject *v5; // x0
  GrandServantListData_o *grandServantListData; // x0
  GrandServantListSlotData_o *SlotData; // x0
  ChangeGrandSameServantListMenu_o *v8; // x20
  GrandServantListSlotData_o *v9; // x21
  System_Action_bool__o *v10; // x22
  const MethodInfo *v11; // x3

  if ( (byte_4C327CF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_bool__TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_InstantiateAssetObject_ChangeGrandSameServantListMenu___);
    sub_1C32C20(&Method_GrandServantListRootComponent__OpenChangeGrandSameServantListMenu_b__36_0__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_4364/*"ChangeGrandSameServantListMenu"*/);
    byte_4C327CF = 1;
  }
  changeGrandSameServantListMenu = (UnityEngine_Object_o *)this->fields.changeGrandSameServantListMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(changeGrandSameServantListMenu, 0, 0) )
  {
    v5 = GrandServantListRootComponent__InstantiateAssetObject_object_(
           this,
           (System_String_o *)StringLiteral_4364/*"ChangeGrandSameServantListMenu"*/,
           (const MethodInfo_313691C *)Method_GrandServantListRootComponent_InstantiateAssetObject_ChangeGrandSameServantListMenu___);
    this->fields.changeGrandSameServantListMenu = (struct ChangeGrandSameServantListMenu_o *)v5;
    sub_1C32BC4(&this->fields.changeGrandSameServantListMenu, v5);
    grandServantListData = (GrandServantListData_o *)this->fields.changeGrandSameServantListMenu;
    if ( !grandServantListData )
      goto LABEL_11;
    ((void (__fastcall *)(GrandServantListData_o *, _QWORD, const char *))grandServantListData->klass[1]._1.name)(
      grandServantListData,
      0,
      grandServantListData->klass[1]._1.namespaze);
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData
    || (SlotData = GrandServantListData__GetSlotData(grandServantListData, this->fields.lastSelectedGrandGraphId, v4),
        v8 = this->fields.changeGrandSameServantListMenu,
        v9 = SlotData,
        v10 = (System_Action_bool__o *)sub_1C32E6C(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(
          v10,
          (Il2CppObject *)this,
          Method_GrandServantListRootComponent__OpenChangeGrandSameServantListMenu_b__36_0__,
          0),
        !v8) )
  {
LABEL_11:
    sub_1C32E7C(grandServantListData);
  }
  ChangeGrandSameServantListMenu__Open(v8, v9, v10, v11);
}


void GrandServantListRootComponent__OpenConfirmGrandServantResetDialog(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  struct ConfirmGrandServantResetDialog_o **p_confirmGrandServantResetDialog; // x20
  UnityEngine_Object_o *confirmGrandServantResetDialog; // x21
  const MethodInfo *v5; // x1
  Il2CppObject *v6; // x0
  ConfirmGrandServantResetDialog_o *grandServantListData; // x0
  const MethodInfo *v8; // x2
  GrandGraphEntity_o *baseWindow; // x21
  UserServantEntity_o *maskSprite; // x22
  ConfirmGrandServantResetDialog_o *v11; // x20
  ConfirmGrandServantResetDialog_CallbackFunc_o *v12; // x23
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4

  if ( (byte_4C327D1 & 1) == 0 )
  {
    sub_1C32C20(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmGrandServantResetDialog___);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_4645/*"ConfirmGrandServantResetDialog"*/);
    byte_4C327D1 = 1;
  }
  p_confirmGrandServantResetDialog = &this->fields.confirmGrandServantResetDialog;
  confirmGrandServantResetDialog = (UnityEngine_Object_o *)this->fields.confirmGrandServantResetDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(confirmGrandServantResetDialog, 0, 0) )
  {
    v6 = GrandServantListRootComponent__InstantiateAssetObject_object_(
           this,
           (System_String_o *)StringLiteral_4645/*"ConfirmGrandServantResetDialog"*/,
           (const MethodInfo_313691C *)Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmGrandServantResetDialog___);
    this->fields.confirmGrandServantResetDialog = (struct ConfirmGrandServantResetDialog_o *)v6;
    sub_1C32BC4(&this->fields.confirmGrandServantResetDialog, v6);
  }
  grandServantListData = *p_confirmGrandServantResetDialog;
  if ( !*p_confirmGrandServantResetDialog )
    goto LABEL_12;
  ConfirmGrandServantResetDialog__Init(grandServantListData, v5);
  grandServantListData = (ConfirmGrandServantResetDialog_o *)this->fields.grandServantListData;
  if ( !grandServantListData
    || (grandServantListData = (ConfirmGrandServantResetDialog_o *)GrandServantListData__GetSlotData(
                                                                     (GrandServantListData_o *)grandServantListData,
                                                                     this->fields.lastSelectedGrandGraphId,
                                                                     v8)) == 0
    || (baseWindow = (GrandGraphEntity_o *)grandServantListData->fields.baseWindow,
        maskSprite = (UserServantEntity_o *)grandServantListData->fields.maskSprite,
        v11 = this->fields.confirmGrandServantResetDialog,
        v12 = (ConfirmGrandServantResetDialog_CallbackFunc_o *)sub_1C32E6C(ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo),
        ConfirmGrandServantResetDialog_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__,
          v13),
        !v11) )
  {
LABEL_12:
    sub_1C32E7C(grandServantListData);
  }
  ConfirmGrandServantResetDialog__Open(v11, baseWindow, maskSprite, v12, v14);
}


void GrandServantListRootComponent__OpenConfirmUseGrandServantResetItemDialog(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  struct ConfirmUseGrandServantResetItemDialog_o **p_confirmUseGrandServantResetItemDialog; // x20
  UnityEngine_Object_o *confirmUseGrandServantResetItemDialog; // x21
  Il2CppObject *v5; // x0
  BaseDialog_o *grandServantListData; // x0
  const MethodInfo *v7; // x2
  GrandGraphEntity_o *baseWindow; // x21
  UserServantEntity_o *maskSprite; // x22
  ConfirmUseGrandServantResetItemDialog_o *v10; // x20
  ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *v11; // x23
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x4

  if ( (byte_4C327CE & 1) == 0 )
  {
    sub_1C32C20(&ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmUseGrandServantResetItemDialog___);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_4646/*"ConfirmUseGrandServantResetItemDialog"*/);
    byte_4C327CE = 1;
  }
  p_confirmUseGrandServantResetItemDialog = &this->fields.confirmUseGrandServantResetItemDialog;
  confirmUseGrandServantResetItemDialog = (UnityEngine_Object_o *)this->fields.confirmUseGrandServantResetItemDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(confirmUseGrandServantResetItemDialog, 0, 0) )
  {
    v5 = GrandServantListRootComponent__InstantiateAssetObject_object_(
           this,
           (System_String_o *)StringLiteral_4646/*"ConfirmUseGrandServantResetItemDialog"*/,
           (const MethodInfo_313691C *)Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmUseGrandServantResetItemDialog___);
    this->fields.confirmUseGrandServantResetItemDialog = (struct ConfirmUseGrandServantResetItemDialog_o *)v5;
    sub_1C32BC4(&this->fields.confirmUseGrandServantResetItemDialog, v5);
  }
  grandServantListData = (BaseDialog_o *)*p_confirmUseGrandServantResetItemDialog;
  if ( !*p_confirmUseGrandServantResetItemDialog )
    goto LABEL_12;
  BaseDialog__Init(grandServantListData, 0);
  grandServantListData = (BaseDialog_o *)this->fields.grandServantListData;
  if ( !grandServantListData
    || (grandServantListData = (BaseDialog_o *)GrandServantListData__GetSlotData(
                                                 (GrandServantListData_o *)grandServantListData,
                                                 this->fields.lastSelectedGrandGraphId,
                                                 v7)) == 0
    || (baseWindow = (GrandGraphEntity_o *)grandServantListData->fields.baseWindow,
        maskSprite = (UserServantEntity_o *)grandServantListData->fields.maskSprite,
        v10 = this->fields.confirmUseGrandServantResetItemDialog,
        v11 = (ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *)sub_1C32E6C(ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo),
        ConfirmUseGrandServantResetItemDialog_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__,
          v12),
        !v10) )
  {
LABEL_12:
    sub_1C32E7C(grandServantListData);
  }
  ConfirmUseGrandServantResetItemDialog__Open(v10, baseWindow, maskSprite, v11, v13);
}


void GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog(
        GrandServantListRootComponent_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  struct ConfirmedGrandServantSelectDialog_o **p_confirmedGrandServantSelectDialog; // x22
  UnityEngine_Object_o *confirmedGrandServantSelectDialog; // x23
  Il2CppObject *v9; // x0
  BaseDialog_o *v10; // x0
  ConfirmedGrandServantSelectDialog_o *v11; // x22
  ConfirmedGrandServantSelectDialog_CallbackFunc_o *v12; // x23
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4

  if ( (byte_4C327CB & 1) == 0 )
  {
    sub_1C32C20(&ConfirmedGrandServantSelectDialog_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmedGrandServantSelectDialog___);
    sub_1C32C20(&Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__31_0__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_4656/*"ConfirmedGrandServantSelectDialog"*/);
    byte_4C327CB = 1;
  }
  p_confirmedGrandServantSelectDialog = &this->fields.confirmedGrandServantSelectDialog;
  confirmedGrandServantSelectDialog = (UnityEngine_Object_o *)this->fields.confirmedGrandServantSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(confirmedGrandServantSelectDialog, 0, 0) )
  {
    v9 = GrandServantListRootComponent__InstantiateAssetObject_object_(
           this,
           (System_String_o *)StringLiteral_4656/*"ConfirmedGrandServantSelectDialog"*/,
           (const MethodInfo_313691C *)Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmedGrandServantSelectDialog___);
    this->fields.confirmedGrandServantSelectDialog = (struct ConfirmedGrandServantSelectDialog_o *)v9;
    sub_1C32BC4(&this->fields.confirmedGrandServantSelectDialog, v9);
  }
  v10 = (BaseDialog_o *)*p_confirmedGrandServantSelectDialog;
  if ( !*p_confirmedGrandServantSelectDialog
    || (BaseDialog__Init(v10, 0),
        v11 = this->fields.confirmedGrandServantSelectDialog,
        v12 = (ConfirmedGrandServantSelectDialog_CallbackFunc_o *)sub_1C32E6C(ConfirmedGrandServantSelectDialog_CallbackFunc_TypeInfo),
        ConfirmedGrandServantSelectDialog_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__31_0__,
          v13),
        !v11) )
  {
    sub_1C32E7C(v10);
  }
  ConfirmedGrandServantSelectDialog__Open(v11, grandGraphEntity, userServantEntity, v12, v14);
}


void GrandServantListRootComponent__OpenGrandServantListMenuBranchDialog(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  struct GrandServantListMenuBranchDialog_o **p_grandServantListMenuBranchDialog; // x20
  UnityEngine_Object_o *grandServantListMenuBranchDialog; // x21
  Il2CppObject *v5; // x0
  BaseDialog_o *grandServantListData; // x0
  const MethodInfo *v7; // x2
  GrandGraphEntity_o *baseWindow; // x21
  UserServantEntity_o *maskSprite; // x22
  GrandServantListMenuBranchDialog_o *v10; // x20
  GrandServantListMenuBranchDialog_CallbackFunc_o *v11; // x23
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x4

  if ( (byte_4C327CC & 1) == 0 )
  {
    sub_1C32C20(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantListMenuBranchDialog___);
    sub_1C32C20(&Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_7160/*"GrandServantListMenuBranchDialog"*/);
    byte_4C327CC = 1;
  }
  p_grandServantListMenuBranchDialog = &this->fields.grandServantListMenuBranchDialog;
  grandServantListMenuBranchDialog = (UnityEngine_Object_o *)this->fields.grandServantListMenuBranchDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(grandServantListMenuBranchDialog, 0, 0) )
  {
    v5 = GrandServantListRootComponent__InstantiateAssetObject_object_(
           this,
           (System_String_o *)StringLiteral_7160/*"GrandServantListMenuBranchDialog"*/,
           (const MethodInfo_313691C *)Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantListMenuBranchDialog___);
    this->fields.grandServantListMenuBranchDialog = (struct GrandServantListMenuBranchDialog_o *)v5;
    sub_1C32BC4(&this->fields.grandServantListMenuBranchDialog, v5);
  }
  grandServantListData = (BaseDialog_o *)*p_grandServantListMenuBranchDialog;
  if ( !*p_grandServantListMenuBranchDialog )
    goto LABEL_12;
  BaseDialog__Init(grandServantListData, 0);
  grandServantListData = (BaseDialog_o *)this->fields.grandServantListData;
  if ( !grandServantListData
    || (grandServantListData = (BaseDialog_o *)GrandServantListData__GetSlotData(
                                                 (GrandServantListData_o *)grandServantListData,
                                                 this->fields.lastSelectedGrandGraphId,
                                                 v7)) == 0
    || (baseWindow = (GrandGraphEntity_o *)grandServantListData->fields.baseWindow,
        maskSprite = (UserServantEntity_o *)grandServantListData->fields.maskSprite,
        v10 = this->fields.grandServantListMenuBranchDialog,
        v11 = (GrandServantListMenuBranchDialog_CallbackFunc_o *)sub_1C32E6C(GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo),
        GrandServantListMenuBranchDialog_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__,
          v12),
        !v10) )
  {
LABEL_12:
    sub_1C32E7C(grandServantListData);
  }
  GrandServantListMenuBranchDialog__Open(v10, baseWindow, maskSprite, v11, v13);
}


void GrandServantListRootComponent__OpenGrandServantResetDialog(
        GrandServantListRootComponent_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  struct GrandServantResetDialog_o **p_grandServantResetDialog; // x22
  UnityEngine_Object_o *grandServantResetDialog; // x23
  Il2CppObject *v9; // x0
  BaseDialog_o *v10; // x0
  GrandServantResetDialog_o *v11; // x22
  GrandServantResetDialog_CallbackFunc_o *v12; // x23
  const MethodInfo *v13; // x4

  if ( (byte_4C327D3 & 1) == 0 )
  {
    sub_1C32C20(&GrandServantResetDialog_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantResetDialog___);
    sub_1C32C20(&Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__40_0__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_7164/*"GrandServantResetDialog"*/);
    byte_4C327D3 = 1;
  }
  p_grandServantResetDialog = &this->fields.grandServantResetDialog;
  grandServantResetDialog = (UnityEngine_Object_o *)this->fields.grandServantResetDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(grandServantResetDialog, 0, 0) )
  {
    v9 = GrandServantListRootComponent__InstantiateAssetObject_object_(
           this,
           (System_String_o *)StringLiteral_7164/*"GrandServantResetDialog"*/,
           (const MethodInfo_313691C *)Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantResetDialog___);
    this->fields.grandServantResetDialog = (struct GrandServantResetDialog_o *)v9;
    sub_1C32BC4(&this->fields.grandServantResetDialog, v9);
  }
  v10 = (BaseDialog_o *)*p_grandServantResetDialog;
  if ( !*p_grandServantResetDialog
    || (BaseDialog__Init(v10, 0),
        v11 = this->fields.grandServantResetDialog,
        v12 = (GrandServantResetDialog_CallbackFunc_o *)sub_1C32E6C(GrandServantResetDialog_CallbackFunc_TypeInfo),
        GrandServantResetDialog_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__40_0__,
          0),
        !v11) )
  {
    sub_1C32E7C(v10);
  }
  GrandServantResetDialog__Open(v11, grandGraphEntity, userServantEntity, v12, v13);
}


void GrandServantListRootComponent__SendMessageCloseStatus(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C327D8 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3521/*"CLOSE_STATUS"*/);
    byte_4C327D8 = 1;
  }
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_3521/*"CLOSE_STATUS"*/, 0);
}


void GrandServantListRootComponent__SendMessageMenuCancel(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C327D9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8641/*"MENU_CANCEL"*/);
    byte_4C327D9 = 1;
  }
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_8641/*"MENU_CANCEL"*/, 0);
}


void GrandServantListRootComponent__SendMessageMenuDecide(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C327DA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8642/*"MENU_DECIDE"*/);
    byte_4C327DA = 1;
  }
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_8642/*"MENU_DECIDE"*/, 0);
}


void GrandServantListRootComponent__StartSelectGrandServant(
        GrandServantListRootComponent_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        System_Collections_Generic_List_SelectGrandServantInfo__o *servantInfos,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x20
  __int64 v8; // x0
  Il2CppObject *v9; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4C327CA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_InstantiateAssetObject_SelectGrandServantComponent___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass30_0__StartSelectGrandServant_b__2__);
    sub_1C32C20(&GrandServantListRootComponent___c__DisplayClass30_0_TypeInfo);
    sub_1C32C20(&StringLiteral_12675/*"SelectGrandServantComponent"*/);
    sub_1C32C20(&StringLiteral_12337/*"START_SELECT_GRAND"*/);
    byte_4C327CA = 1;
  }
  v7 = (Il2CppObject *)sub_1C32E6C(GrandServantListRootComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_8;
  v7[1].klass = (Il2CppClass *)this;
  sub_1C32BC4(&v7[1], this);
  v7[1].monitor = grandGraphEntity;
  sub_1C32BC4(&v7[1].monitor, grandGraphEntity);
  v7[2].monitor = servantInfos;
  sub_1C32BC4(&v7[2].monitor, servantInfos);
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12337/*"START_SELECT_GRAND"*/, 0);
  v9 = GrandServantListRootComponent__InstantiateAssetObject_object_(
         this,
         (System_String_o *)StringLiteral_12675/*"SelectGrandServantComponent"*/,
         (const MethodInfo_313691C *)Method_GrandServantListRootComponent_InstantiateAssetObject_SelectGrandServantComponent___);
  v7[2].klass = (Il2CppClass *)v9;
  sub_1C32BC4(&v7[2], v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    v7,
    Method_GrandServantListRootComponent___c__DisplayClass30_0__StartSelectGrandServant_b__2__,
    0);
  if ( !v12 )
LABEL_8:
    sub_1C32E7C(v8);
  CommonUI__maskFadeout(v12, 2, DEFAULT_FADE_TIME, v14, 0);
}


void GrandServantListRootComponent___OnSelectConfirmGrandServantResetDialog_b__39_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  GrandServantListData_o *grandServantListData; // x0
  const MethodInfo *v5; // x2
  GrandServantListSlotData_o *SlotData; // x0
  Il2CppObject *v7; // x19
  NetworkManager_ResultCallbackFunc_o *v8; // x21

  if ( (byte_4C327E8 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_SetupGrandServantRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass39_0__OnSelectConfirmGrandServantResetDialog_b__2__);
    sub_1C32C20(&GrandServantListRootComponent___c__DisplayClass39_0_TypeInfo);
    byte_4C327E8 = 1;
  }
  v3 = (Il2CppObject *)sub_1C32E6C(GrandServantListRootComponent___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_10;
  v3[1].monitor = this;
  sub_1C32BC4(&v3[1].monitor, this);
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_10;
  SlotData = GrandServantListData__GetSlotData(grandServantListData, this->fields.lastSelectedGrandGraphId, v5);
  v3[1].klass = (Il2CppClass *)SlotData;
  v7 = v3 + 1;
  sub_1C32BC4(&v3[1], SlotData);
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    v3,
    Method_GrandServantListRootComponent___c__DisplayClass39_0__OnSelectConfirmGrandServantResetDialog_b__2__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  grandServantListData = (GrandServantListData_o *)NetworkManager__getRequest_object_(
                                                     v8,
                                                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_SetupGrandServantRequest___);
  if ( !v7->klass || !grandServantListData )
LABEL_10:
    sub_1C32E7C(grandServantListData);
  SetupGrandServantRequest__beginRequest(
    (SetupGrandServantRequest_o *)grandServantListData,
    v7->klass->_1.byval_arg.bits,
    0,
    0);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListRootComponent___OnSelectEditEquip_b__41_0(
        GrandServantListRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  GrandServantListData_o *v5; // x21
  const MethodInfo *v6; // x1
  __int64 menu; // x0
  struct GrandServantListMenu_o *listMenu; // x8

  if ( (byte_4C327EA & 1) == 0 )
  {
    sub_1C32C20(&GrandServantListData_TypeInfo);
    byte_4C327EA = 1;
  }
  if ( isDecide )
  {
    v5 = (GrandServantListData_o *)sub_1C32E6C(GrandServantListData_TypeInfo);
    GrandServantListData___ctor(v5, v6);
    this->fields.grandServantListData = v5;
    menu = sub_1C32BC4(&this->fields.grandServantListData, v5);
    listMenu = this->fields.listMenu;
    if ( !listMenu || (menu = (__int64)listMenu->fields.menu) == 0 )
      sub_1C32E7C(menu);
    (*(void (__fastcall **)(__int64, struct GrandServantListData_o *, _QWORD))(*(_QWORD *)menu + 408LL))(
      menu,
      this->fields.grandServantListData,
      *(_QWORD *)(*(_QWORD *)menu + 416LL));
  }
  GrandServantListRootComponent__SendMessageMenuDecide(this, (const MethodInfo *)isDecide);
}


void GrandServantListRootComponent___OnSelectGrandServantListMenuBranchDialog_b__34_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4C327E4 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_12334/*"START_RESET_GRAND"*/);
    byte_4C327E4 = 1;
  }
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12334/*"START_RESET_GRAND"*/, 0);
  GrandServantListRootComponent__OpenConfirmUseGrandServantResetItemDialog(this, v3);
}


void GrandServantListRootComponent___OnSelectGrandServantListMenuBranchDialog_b__34_1(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C327E5 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_12338/*"START_SELECT_SERVANT"*/);
    byte_4C327E5 = 1;
  }
  GrandServantListRootComponent__OpenChangeGrandSameServantListMenu(this, method);
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12338/*"START_SELECT_SERVANT"*/, 0);
}


void GrandServantListRootComponent___OnSelectGrandServantListMenuBranchDialog_b__34_2(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandServantListData_o *grandServantListData; // x0
  const MethodInfo *v5; // x1
  int32_t ParentClassBoardBaseId; // w0
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  int32_t v8; // w21
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  struct SceneJumpInfo_o *v11; // x8
  struct SceneJumpInfo_o *backSceneJumpInfo; // x19
  Il2CppObject *v13; // x3
  SceneJumpInfo_o *v14; // x20
  SceneJumpInfo_o *v15; // x19

  if ( (byte_4C327E6 & 1) == 0 )
  {
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&SceneList_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C327E6 = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_19;
  grandServantListData = (GrandServantListData_o *)GrandServantListData__GetSlotData(
                                                     grandServantListData,
                                                     this->fields.lastSelectedGrandGraphId,
                                                     v2);
  if ( !grandServantListData )
    goto LABEL_19;
  ParentClassBoardBaseId = GrandServantListSlotData__GetParentClassBoardBaseId(
                             (GrandServantListSlotData_o *)grandServantListData,
                             v5);
  sceneJumpInfo = this->fields.sceneJumpInfo;
  v8 = ParentClassBoardBaseId;
  if ( !sceneJumpInfo )
    goto LABEL_13;
  returnSceneName = sceneJumpInfo->fields.returnSceneName;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(91, 0);
  grandServantListData = (GrandServantListData_o *)System_String__op_Equality(returnSceneName, SceneName, 0);
  if ( ((unsigned __int8)grandServantListData & 1) == 0 )
  {
LABEL_13:
    v14 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_41379600(v14, v8, 0);
    if ( v14 )
    {
      SceneJumpInfo__SetReturnNowScene(v14, 0);
      v15 = this->fields.sceneJumpInfo;
      if ( !v15 )
      {
        v15 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor(v15, 0);
      }
      v14->fields.backSceneJumpInfo = v15;
      sub_1C32BC4(&v14->fields.backSceneJumpInfo, v15);
      grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( grandServantListData )
      {
        v13 = (Il2CppObject *)v14;
        goto LABEL_18;
      }
    }
LABEL_19:
    sub_1C32E7C(grandServantListData);
  }
  v11 = this->fields.sceneJumpInfo;
  if ( !v11 )
    goto LABEL_19;
  backSceneJumpInfo = v11->fields.backSceneJumpInfo;
  if ( !backSceneJumpInfo )
    goto LABEL_19;
  backSceneJumpInfo->fields.id = v8;
  grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !grandServantListData )
    goto LABEL_19;
  v13 = (Il2CppObject *)backSceneJumpInfo;
LABEL_18:
  AvalonSceneManager__changeScene((AvalonSceneManager_o *)grandServantListData, 91, 1, v13, 0);
}


void GrandServantListRootComponent___OpenChangeGrandSameServantListMenu_b__36_0(
        GrandServantListRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  GrandServantListData_o *v4; // x21
  const MethodInfo *v5; // x1
  __int64 menu; // x0
  struct GrandServantListMenu_o *listMenu; // x8
  const MethodInfo *v8; // x1

  if ( (byte_4C327E7 & 1) == 0 )
  {
    sub_1C32C20(&GrandServantListData_TypeInfo);
    byte_4C327E7 = 1;
  }
  v4 = (GrandServantListData_o *)sub_1C32E6C(GrandServantListData_TypeInfo);
  GrandServantListData___ctor(v4, v5);
  this->fields.grandServantListData = v4;
  menu = sub_1C32BC4(&this->fields.grandServantListData, v4);
  listMenu = this->fields.listMenu;
  if ( !listMenu || (menu = (__int64)listMenu->fields.menu) == 0 )
    sub_1C32E7C(menu);
  (*(void (__fastcall **)(__int64, struct GrandServantListData_o *, _QWORD))(*(_QWORD *)menu + 408LL))(
    menu,
    this->fields.grandServantListData,
    *(_QWORD *)(*(_QWORD *)menu + 416LL));
  GrandServantListRootComponent__SendMessageMenuDecide(this, v8);
}


void GrandServantListRootComponent___OpenConfirmedGrandServantSelectDialog_b__31_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BaseDialog_o *confirmedGrandServantSelectDialog; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4C327E3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_DecideActionSendMessageMenuDecide__);
    sub_1C32C20(&Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__31_0__);
    byte_4C327E3 = 1;
  }
  v3 = Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__31_0__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__31_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__31_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  confirmedGrandServantSelectDialog = (BaseDialog_o *)this->fields.confirmedGrandServantSelectDialog;
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_GrandServantListRootComponent_DecideActionSendMessageMenuDecide__,
    0);
  if ( !confirmedGrandServantSelectDialog )
    sub_1C32E7C(v7);
  BaseDialog__SafeClose(confirmedGrandServantSelectDialog, v6, 0);
}


void GrandServantListRootComponent___OpenGrandServantResetDialog_b__40_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BaseDialog_o *grandServantResetDialog; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4C327E9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_SendMessageMenuDecide__);
    sub_1C32C20(&Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__40_0__);
    byte_4C327E9 = 1;
  }
  v3 = Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__40_0__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__40_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__40_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  grandServantResetDialog = (BaseDialog_o *)this->fields.grandServantResetDialog;
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageMenuDecide__, 0);
  if ( !grandServantResetDialog )
    sub_1C32E7C(v7);
  BaseDialog__SafeClose(grandServantResetDialog, v6, 0);
}


void GrandServantListRootComponent___beginStartUp_b__19_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C327E0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent__beginStartUp_b__19_1__);
    byte_4C327E0 = 1;
  }
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_GrandServantListRootComponent__beginStartUp_b__19_1__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v3, 1, 1, 0);
}


void GrandServantListRootComponent___beginStartUp_b__19_1(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4C327E1 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent__beginStartUp_b__19_2__);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&StringLiteral_7159/*"GrandServantList"*/);
    byte_4C327E1 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__SetAssetBundleUnload((System_String_o *)StringLiteral_7159/*"GrandServantList"*/, 0);
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_GrandServantListRootComponent__beginStartUp_b__19_2__,
    0);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_7159/*"GrandServantList"*/, v3, 1, 0);
}


void GrandServantListRootComponent___beginStartUp_b__19_2(
        GrandServantListRootComponent_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  PlayMakerFSM_o *myFSM; // x1
  bool v6; // w1
  UISprite_o *backgroundSprite; // x20

  if ( (byte_4C327E2 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&StringLiteral_20412/*"img_grand_servant_list_bg01"*/);
    byte_4C327E2 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__CacheGrandServantListAtlas(0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_18;
  myFSM = this->fields.myFSM;
  if ( this->fields.supportInfoJump )
  {
    TitleInfoControl__setTitleInfo_39746856(titleInfo, myFSM, 2, 98, 1, 0);
    titleInfo = this->fields.titleInfo;
    if ( titleInfo )
    {
      titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0);
      if ( titleInfo )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0);
        titleInfo = this->fields.titleInfo;
        if ( titleInfo )
        {
          v6 = 0;
          goto LABEL_15;
        }
      }
    }
LABEL_18:
    sub_1C32E7C(titleInfo);
  }
  TitleInfoControl__setTitleInfo_39746856(titleInfo, myFSM, 2, 96, 1, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_18;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0);
  if ( !titleInfo )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_18;
  v6 = 1;
LABEL_15:
  TitleInfoControl__SetHelpBtn(titleInfo, v6, 0);
  backgroundSprite = this->fields.backgroundSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(backgroundSprite, (System_String_o *)StringLiteral_20412/*"img_grand_servant_list_bg01"*/, 0);
  SceneRootComponent__beginStartUp_41381708((SceneRootComponent_o *)this, 0);
}


void GrandServantListRootComponent__beginFinish(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  GrandServantListMenu_o *listMenu; // x0
  struct GrandServantListMenuBranchDialog_o **p_grandServantListMenuBranchDialog; // x20
  UnityEngine_Object_o *grandServantListMenuBranchDialog; // x21
  UnityEngine_Object_o *gameObject; // x21
  struct ConfirmUseGrandServantResetItemDialog_o **p_confirmUseGrandServantResetItemDialog; // x20
  UnityEngine_Object_o *confirmUseGrandServantResetItemDialog; // x21
  UnityEngine_Object_o *v9; // x21
  struct ConfirmedGrandServantSelectDialog_o **p_confirmedGrandServantSelectDialog; // x20
  UnityEngine_Object_o *confirmedGrandServantSelectDialog; // x21
  UnityEngine_Object_o *v12; // x21
  struct ConfirmGrandServantResetDialog_o **p_confirmGrandServantResetDialog; // x20
  UnityEngine_Object_o *confirmGrandServantResetDialog; // x21
  UnityEngine_Object_o *v15; // x21
  struct GrandServantResetDialog_o **p_grandServantResetDialog; // x20
  UnityEngine_Object_o *grandServantResetDialog; // x21
  UnityEngine_Object_o *v18; // x21
  struct GrandEquipGraphListMenu_o **p_grandEquipGraphListMenu; // x20
  UnityEngine_Object_o *grandEquipGraphListMenu; // x21
  UnityEngine_Object_o *v21; // x21
  struct ChangeGrandSameServantListMenu_o **p_changeGrandSameServantListMenu; // x20
  UnityEngine_Object_o *changeGrandSameServantListMenu; // x21
  UnityEngine_Object_o *v24; // x21
  struct SelectGrandServantComponent_o **p_selectGrandServantComponent; // x19
  UnityEngine_Object_o *v26; // x20
  struct SelectGrandServantComponent_o *selectGrandServantComponent; // t1
  UnityEngine_Object_o *v28; // x20

  if ( (byte_4C327C0 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C32C20(&StringLiteral_7159/*"GrandServantList"*/);
    byte_4C327C0 = 1;
  }
  listMenu = this->fields.listMenu;
  if ( !listMenu )
    goto LABEL_66;
  GrandServantListMenu__Release(listMenu, method);
  p_grandServantListMenuBranchDialog = &this->fields.grandServantListMenuBranchDialog;
  grandServantListMenuBranchDialog = (UnityEngine_Object_o *)this->fields.grandServantListMenuBranchDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandServantListMenuBranchDialog, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_grandServantListMenuBranchDialog;
    if ( !*p_grandServantListMenuBranchDialog )
      goto LABEL_66;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_grandServantListMenuBranchDialog = 0;
    sub_1C32BC4(&this->fields.grandServantListMenuBranchDialog, 0);
  }
  p_confirmUseGrandServantResetItemDialog = &this->fields.confirmUseGrandServantResetItemDialog;
  confirmUseGrandServantResetItemDialog = (UnityEngine_Object_o *)this->fields.confirmUseGrandServantResetItemDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmUseGrandServantResetItemDialog, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_confirmUseGrandServantResetItemDialog;
    if ( !*p_confirmUseGrandServantResetItemDialog )
      goto LABEL_66;
    v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v9, 0);
    *p_confirmUseGrandServantResetItemDialog = 0;
    sub_1C32BC4(&this->fields.confirmUseGrandServantResetItemDialog, 0);
  }
  p_confirmedGrandServantSelectDialog = &this->fields.confirmedGrandServantSelectDialog;
  confirmedGrandServantSelectDialog = (UnityEngine_Object_o *)this->fields.confirmedGrandServantSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmedGrandServantSelectDialog, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_confirmedGrandServantSelectDialog;
    if ( !*p_confirmedGrandServantSelectDialog )
      goto LABEL_66;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v12, 0);
    *p_confirmedGrandServantSelectDialog = 0;
    sub_1C32BC4(&this->fields.confirmedGrandServantSelectDialog, 0);
  }
  p_confirmGrandServantResetDialog = &this->fields.confirmGrandServantResetDialog;
  confirmGrandServantResetDialog = (UnityEngine_Object_o *)this->fields.confirmGrandServantResetDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmGrandServantResetDialog, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_confirmGrandServantResetDialog;
    if ( !*p_confirmGrandServantResetDialog )
      goto LABEL_66;
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v15, 0);
    *p_confirmGrandServantResetDialog = 0;
    sub_1C32BC4(&this->fields.confirmGrandServantResetDialog, 0);
  }
  p_grandServantResetDialog = &this->fields.grandServantResetDialog;
  grandServantResetDialog = (UnityEngine_Object_o *)this->fields.grandServantResetDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandServantResetDialog, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_grandServantResetDialog;
    if ( !*p_grandServantResetDialog )
      goto LABEL_66;
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v18, 0);
    *p_grandServantResetDialog = 0;
    sub_1C32BC4(&this->fields.grandServantResetDialog, 0);
  }
  p_grandEquipGraphListMenu = &this->fields.grandEquipGraphListMenu;
  grandEquipGraphListMenu = (UnityEngine_Object_o *)this->fields.grandEquipGraphListMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandEquipGraphListMenu, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_grandEquipGraphListMenu;
    if ( !*p_grandEquipGraphListMenu )
      goto LABEL_66;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v21, 0);
    *p_grandEquipGraphListMenu = 0;
    sub_1C32BC4(&this->fields.grandEquipGraphListMenu, 0);
  }
  p_changeGrandSameServantListMenu = &this->fields.changeGrandSameServantListMenu;
  changeGrandSameServantListMenu = (UnityEngine_Object_o *)this->fields.changeGrandSameServantListMenu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(changeGrandSameServantListMenu, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_changeGrandSameServantListMenu;
    if ( !*p_changeGrandSameServantListMenu )
      goto LABEL_66;
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v24, 0);
    *p_changeGrandSameServantListMenu = 0;
    sub_1C32BC4(&this->fields.changeGrandSameServantListMenu, 0);
  }
  selectGrandServantComponent = this->fields.selectGrandServantComponent;
  p_selectGrandServantComponent = &this->fields.selectGrandServantComponent;
  v26 = (UnityEngine_Object_o *)selectGrandServantComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_selectGrandServantComponent;
    if ( !*p_selectGrandServantComponent )
      goto LABEL_66;
    v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v28, 0);
    *p_selectGrandServantComponent = 0;
    sub_1C32BC4(p_selectGrandServantComponent, 0);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ClearCachedGrandServantListAtlas(0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_7159/*"GrandServantList"*/, 0);
  listMenu = (GrandServantListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !listMenu )
LABEL_66:
    sub_1C32E7C(listMenu);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)listMenu, 2, 0, 0);
}


void GrandServantListRootComponent__beginInitialize(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C327BE & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C327BE = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0),
        (Instance = (AvalonSceneManager_o *)this->fields.titleInfo) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  v4.fields.y = -511.0;
  v4.fields.x = -14.0;
  v4.fields.z = 0.0;
  TitleInfoControl__SetHelpBtnPos((TitleInfoControl_o *)Instance, v4, 0);
}


void GrandServantListRootComponent__beginStartUp(
        GrandServantListRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppClass *v5; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v7; // x10
  Il2CppObject *v8; // x1
  struct SupportInfoJump_o **p_supportInfoJump; // x0
  Il2CppObject *v10; // x1
  Il2CppClass *v11; // x8
  __int64 v12; // x9
  Il2CppObject *v13; // x10
  UnityEngine_Component_o *titleInfo; // x0
  System_Action_o *v15; // x20

  if ( (byte_4C327BF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent__beginStartUp_b__19_0__);
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&SupportInfoJump_TypeInfo);
    byte_4C327BF = 1;
  }
  if ( data )
  {
    v5 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SceneJumpInfo_TypeInfo )
        v7 = data;
      else
        v7 = 0;
    }
    else
    {
      v7 = 0;
    }
    this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v7;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v5 )
        v10 = data;
      else
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
    sub_1C32BC4(&this->fields.sceneJumpInfo, v10);
    v11 = (Il2CppClass *)SupportInfoJump_TypeInfo;
    v12 = SupportInfoJump_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v12 )
    {
      if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v12 - 1] == SupportInfoJump_TypeInfo )
        v13 = data;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
    this->fields.supportInfoJump = (struct SupportInfoJump_o *)v13;
    p_supportInfoJump = &this->fields.supportInfoJump;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v12 )
    {
      if ( data->klass->_2.typeHierarchy[v12 - 1] == v11 )
        v8 = data;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    this->fields.sceneJumpInfo = 0;
    sub_1C32BC4(&this->fields.sceneJumpInfo, 0);
    v8 = 0;
    this->fields.supportInfoJump = 0;
    p_supportInfoJump = &this->fields.supportInfoJump;
  }
  sub_1C32BC4(p_supportInfoJump, v8);
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0)) == 0 )
    sub_1C32E7C(titleInfo);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0);
  v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_GrandServantListRootComponent__beginStartUp_b__19_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v15, 2, 1, 0);
}


void GrandServantListRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C327EB & 1) == 0 )
  {
    sub_1C32C20(&GrandServantListRootComponent___c_TypeInfo);
    byte_4C327EB = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(GrandServantListRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantListRootComponent___c_TypeInfo->static_fields->__9 = (struct GrandServantListRootComponent___c_o *)v1;
  sub_1C32BC4(GrandServantListRootComponent___c_TypeInfo->static_fields, v1);
}


void GrandServantListRootComponent___c___ctor(GrandServantListRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListRootComponent___c___EndShowServantWithQuest_b__43_0(
        GrandServantListRootComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C327EE & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C327EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void GrandServantListRootComponent___c___OnClickHelpBtn_b__49_0(
        GrandServantListRootComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 100, action, 1, 0);
}


void GrandServantListRootComponent___c___OnClickHelpBtn_b__49_1(
        GrandServantListRootComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialMaster__ShowTutorialWithoutCheck_42071324(-1, 101, action, 0, 0, 0, 0, 0);
}


bool GrandServantListRootComponent___c___OnSelectEditServant_b__28_1(
        GrandServantListRootComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields._IsValid_k__BackingField;
}


bool GrandServantListRootComponent___c___OnSelectEditServant_b__28_2(
        GrandServantListRootComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields._CanSelectToGrand_k__BackingField;
}


int32_t GrandServantListRootComponent___c___OnSelectEditServant_b__28_3(
        GrandServantListRootComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields._ExtraGroupNo_k__BackingField;
}


int32_t GrandServantListRootComponent___c___OnSelectEditServant_b__28_4(
        GrandServantListRootComponent___c_o *this,
        System_Linq_IGrouping_int__SelectGrandServantInfo__o *g,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__SelectGrandServantInfo__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C327EC & 1) == 0 )
  {
    this = (GrandServantListRootComponent___c_o *)sub_1C32C20(&System_Linq_IGrouping_int__SelectGrandServantInfo__TypeInfo);
    byte_4C327EC = 1;
  }
  if ( !g )
    sub_1C32E7C(this);
  klass = g->klass;
  v5 = *(unsigned __int16 *)&g->klass->_2.rank;
  if ( *(_WORD *)&g->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__SelectGrandServantInfo__c **)p_offset - 1) != System_Linq_IGrouping_int__SelectGrandServantInfo__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(g, System_Linq_IGrouping_int__SelectGrandServantInfo__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__SelectGrandServantInfo__o *, _QWORD))v7)(
           g,
           *(_QWORD *)(v7 + 8));
}


System_Collections_Generic_List_SelectGrandServantInfo__o *GrandServantListRootComponent___c___OnSelectEditServant_b__28_5(
        GrandServantListRootComponent___c_o *this,
        System_Linq_IGrouping_int__SelectGrandServantInfo__o *g,
        const MethodInfo *method)
{
  if ( (byte_4C327ED & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
    byte_4C327ED = 1;
  }
  return (System_Collections_Generic_List_SelectGrandServantInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)g,
                                                                        (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
}


bool GrandServantListRootComponent___c___OnSelectEditServant_b__28_6(
        GrandServantListRootComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields._CanSelectToGrand_k__BackingField;
}


bool GrandServantListRootComponent___c___OnSelectEditServant_b__28_7(
        GrandServantListRootComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields._CanSelectToGrand_k__BackingField;
}


void GrandServantListRootComponent___c__DisplayClass28_0___ctor(
        GrandServantListRootComponent___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


SelectGrandServantInfo_o *GrandServantListRootComponent___c__DisplayClass28_0___OnSelectEditServant_b__0(
        GrandServantListRootComponent___c__DisplayClass28_0_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  GrandServantListRootComponent___c__DisplayClass28_0_o *v4; // x20
  struct GrandServantListSlotData_o *slotData; // x8
  GrandGraphEntity_o *GrandGraphEntity_k__BackingField; // x20
  SelectGrandServantInfo_o *v7; // x21

  v4 = this;
  if ( (byte_4C327EF & 1) == 0 )
  {
    this = (GrandServantListRootComponent___c__DisplayClass28_0_o *)sub_1C32C20(&SelectGrandServantInfo_TypeInfo);
    byte_4C327EF = 1;
  }
  slotData = v4->fields.slotData;
  if ( !slotData )
    sub_1C32E7C(this);
  GrandGraphEntity_k__BackingField = slotData->fields._GrandGraphEntity_k__BackingField;
  v7 = (SelectGrandServantInfo_o *)sub_1C32E6C(SelectGrandServantInfo_TypeInfo);
  SelectGrandServantInfo___ctor(v7, GrandGraphEntity_k__BackingField, e, 0);
  return v7;
}


void GrandServantListRootComponent___c__DisplayClass28_1___ctor(
        GrandServantListRootComponent___c__DisplayClass28_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListRootComponent___c__DisplayClass28_1___OnSelectEditServant_b__10(
        GrandServantListRootComponent___c__DisplayClass28_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dialog; // x20
  GrandServantListRootComponent_o *_4__this; // x0
  const MethodInfo *v5; // x3
  struct GrandServantListRootComponent___c__DisplayClass28_0_o *CS___8__locals1; // x9
  struct GrandServantListSlotData_o *slotData; // x8

  if ( (byte_4C327F2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C327F2 = 1;
  }
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(dialog, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (slotData = CS___8__locals1->fields.slotData) == 0
    || (_4__this = CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_1C32E7C(_4__this);
  }
  GrandServantListRootComponent__StartSelectGrandServant(
    _4__this,
    slotData->fields._GrandGraphEntity_k__BackingField,
    this->fields.ex2ServantInfos,
    v5);
}


void GrandServantListRootComponent___c__DisplayClass28_1___OnSelectEditServant_b__11(
        GrandServantListRootComponent___c__DisplayClass28_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dialog; // x20
  GrandServantListRootComponent_o *_4__this; // x0
  const MethodInfo *v5; // x1
  struct GrandServantListRootComponent___c__DisplayClass28_0_o *CS___8__locals1; // x8

  if ( (byte_4C327F3 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C327F3 = 1;
  }
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(dialog, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (_4__this = CS___8__locals1->fields.__4__this) == 0 )
    sub_1C32E7C(_4__this);
  GrandServantListRootComponent__SendMessageMenuCancel(_4__this, v5);
}


void GrandServantListRootComponent___c__DisplayClass28_1___OnSelectEditServant_b__8(
        GrandServantListRootComponent___c__DisplayClass28_1_o *this,
        int32_t res,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  System_Action_o *_9__11; // x21
  struct System_Action_o **p__9__11; // x22
  BaseDialog_o *dialog; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4C327F0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__10__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__11__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__8__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__9__);
    byte_4C327F0 = 1;
  }
  if ( res == 2 )
  {
    v11 = Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__8__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__8__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__8__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C32C04(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 1, 0, 0);
    p__9__11 = &this->fields.__9__11;
    _9__11 = this->fields.__9__11;
    dialog = (BaseDialog_o *)this->fields.dialog;
    if ( _9__11 )
      goto LABEL_19;
    _9__11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)this,
      Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__11__,
      0);
    this->fields.__9__11 = _9__11;
    goto LABEL_18;
  }
  if ( res == 1 )
  {
    v13 = Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__8__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__8__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__8__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C32C04(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
    p__9__11 = &this->fields.__9__10;
    _9__11 = this->fields.__9__10;
    dialog = (BaseDialog_o *)this->fields.dialog;
    if ( _9__11 )
      goto LABEL_19;
    _9__11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)this,
      Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__10__,
      0);
    this->fields.__9__10 = _9__11;
    goto LABEL_18;
  }
  if ( res )
    return;
  v5 = Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__8__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__8__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__8__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  p__9__11 = &this->fields.__9__9;
  _9__11 = this->fields.__9__9;
  dialog = (BaseDialog_o *)this->fields.dialog;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)this,
      Method_GrandServantListRootComponent___c__DisplayClass28_1__OnSelectEditServant_b__9__,
      0);
    this->fields.__9__9 = _9__11;
LABEL_18:
    v7 = sub_1C32BC4(p__9__11, _9__11);
  }
LABEL_19:
  if ( !dialog )
    sub_1C32E7C(v7);
  BaseDialog__SafeClose(dialog, _9__11, 0);
}


void GrandServantListRootComponent___c__DisplayClass28_1___OnSelectEditServant_b__9(
        GrandServantListRootComponent___c__DisplayClass28_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dialog; // x20
  GrandServantListRootComponent_o *_4__this; // x0
  const MethodInfo *v5; // x3
  struct GrandServantListRootComponent___c__DisplayClass28_0_o *CS___8__locals1; // x9
  struct GrandServantListSlotData_o *slotData; // x8

  if ( (byte_4C327F1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C327F1 = 1;
  }
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(dialog, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (slotData = CS___8__locals1->fields.slotData) == 0
    || (_4__this = CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_1C32E7C(_4__this);
  }
  GrandServantListRootComponent__StartSelectGrandServant(
    _4__this,
    slotData->fields._GrandGraphEntity_k__BackingField,
    this->fields.ex1ServantInfos,
    v5);
}


void GrandServantListRootComponent___c__DisplayClass30_0___ctor(
        GrandServantListRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListRootComponent___c__DisplayClass30_0___StartSelectGrandServant_b__2(
        GrandServantListRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandServantListRootComponent___c__DisplayClass30_0_o *v3; // x19
  struct GrandServantListRootComponent_o *_4__this; // x8
  struct GrandServantListMenu_o *listMenu; // x8
  struct GrandServantListRootComponent_o *v6; // x20
  struct GrandServantListRootComponent_o *v7; // x8
  SelectGrandServantComponent_o *selectGrandServantComponent; // x20
  GrandGraphEntity_o *grandGraphEntity; // x21
  System_Collections_Generic_List_SelectGrandServantInfo__o *servantInfos; // x22
  System_Action_o *v11; // x23
  System_Action_object__o *v12; // x24
  struct GrandServantListRootComponent_o *v13; // x8
  struct GrandServantListRootComponent_o *v14; // x8

  v3 = this;
  if ( (byte_4C327F7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SelectGrandServantComponent___);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass30_0__StartSelectGrandServant_g__BackAction_0__);
    this = (GrandServantListRootComponent___c__DisplayClass30_0_o *)sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass30_0__StartSelectGrandServant_g__DecideAction_1__);
    byte_4C327F7 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  listMenu = _4__this->fields.listMenu;
  if ( !listMenu )
    goto LABEL_14;
  this = (GrandServantListRootComponent___c__DisplayClass30_0_o *)listMenu->fields.menu;
  if ( !this )
    goto LABEL_14;
  GrandServantListMenuLayout__SetItemSlotActive((GrandServantListMenuLayout_o *)this, 0, v2);
  this = (GrandServantListRootComponent___c__DisplayClass30_0_o *)v3->fields.selectGrandServant;
  if ( !this )
    goto LABEL_14;
  v6 = v3->fields.__4__this;
  this = (GrandServantListRootComponent___c__DisplayClass30_0_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)this,
                                                                    (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SelectGrandServantComponent___);
  if ( !v6 )
    goto LABEL_14;
  v6->fields.selectGrandServantComponent = (struct SelectGrandServantComponent_o *)this;
  this = (GrandServantListRootComponent___c__DisplayClass30_0_o *)sub_1C32BC4(
                                                                    &v6->fields.selectGrandServantComponent,
                                                                    this);
  v7 = v3->fields.__4__this;
  if ( !v7 )
    goto LABEL_14;
  selectGrandServantComponent = v7->fields.selectGrandServantComponent;
  grandGraphEntity = v3->fields.grandGraphEntity;
  servantInfos = v3->fields.servantInfos;
  v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v3,
    Method_GrandServantListRootComponent___c__DisplayClass30_0__StartSelectGrandServant_g__BackAction_0__,
    0);
  v12 = (System_Action_object__o *)sub_1C32E6C(System_Action_UserServantEntity__TypeInfo);
  System_Action_object____ctor(
    v12,
    (Il2CppObject *)v3,
    Method_GrandServantListRootComponent___c__DisplayClass30_0__StartSelectGrandServant_g__DecideAction_1__,
    0);
  if ( !selectGrandServantComponent
    || (SelectGrandServantComponent__SetUp(
          selectGrandServantComponent,
          grandGraphEntity,
          servantInfos,
          v11,
          (System_Action_UserServantEntity__o *)v12,
          0),
        (v13 = v3->fields.__4__this) == 0)
    || (BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v13->fields.selectGrandServantComponent, 1, 0),
        (v14 = v3->fields.__4__this) == 0)
    || (this = (GrandServantListRootComponent___c__DisplayClass30_0_o *)v14->fields.titleInfo) == 0 )
  {
LABEL_14:
    sub_1C32E7C(this);
  }
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)this, 0, 0);
}


void GrandServantListRootComponent___c__DisplayClass30_0___StartSelectGrandServant_b__3(
        GrandServantListRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandServantListRootComponent___c__DisplayClass30_0_o *v3; // x19
  struct GrandServantListRootComponent_o *_4__this; // x8
  struct GrandServantListMenu_o *listMenu; // x8
  struct GrandServantListRootComponent_o *v6; // x8
  UnityEngine_Object_o *gameObject; // x20
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  Il2CppObject *v11; // x22
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  struct GrandServantListRootComponent_o *v14; // x8

  v3 = this;
  if ( (byte_4C327F5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_GrandServantListRootComponent_SendMessageMenuDecide__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (GrandServantListRootComponent___c__DisplayClass30_0_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C327F5 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  listMenu = _4__this->fields.listMenu;
  if ( !listMenu )
    goto LABEL_17;
  this = (GrandServantListRootComponent___c__DisplayClass30_0_o *)listMenu->fields.menu;
  if ( !this )
    goto LABEL_17;
  GrandServantListMenuLayout__SetItemSlotActive((GrandServantListMenuLayout_o *)this, 1, v2);
  v6 = v3->fields.__4__this;
  if ( !v6 )
    goto LABEL_17;
  this = (GrandServantListRootComponent___c__DisplayClass30_0_o *)v6->fields.selectGrandServantComponent;
  if ( !this )
    goto LABEL_17;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(gameObject, 0);
  this = (GrandServantListRootComponent___c__DisplayClass30_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_17;
  this[3].fields.selectGrandServant = 0;
  sub_1C32BC4(&this[3].fields.selectGrandServant, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  v11 = (Il2CppObject *)v3->fields.__4__this;
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v13, v11, Method_GrandServantListRootComponent_SendMessageMenuDecide__, 0);
  if ( !v10
    || (this = (GrandServantListRootComponent___c__DisplayClass30_0_o *)CommonUI__maskFadein(
                                                                          v10,
                                                                          DEFAULT_FADE_TIME,
                                                                          v13,
                                                                          0),
        (v14 = v3->fields.__4__this) == 0)
    || (this = (GrandServantListRootComponent___c__DisplayClass30_0_o *)v14->fields.titleInfo) == 0 )
  {
LABEL_17:
    sub_1C32E7C(this);
  }
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)this, 1, 0);
}


void GrandServantListRootComponent___c__DisplayClass30_0___StartSelectGrandServant_g__BackAction_0(
        GrandServantListRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4C327F4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass30_0__StartSelectGrandServant_b__3__);
    byte_4C327F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_GrandServantListRootComponent___c__DisplayClass30_0__StartSelectGrandServant_b__3__,
    0);
  if ( !v5 )
    sub_1C32E7C(v8);
  CommonUI__maskFadeout(v5, 2, DEFAULT_FADE_TIME, v7, 0);
}


void GrandServantListRootComponent___c__DisplayClass30_0___StartSelectGrandServant_g__DecideAction_1(
        GrandServantListRootComponent___c__DisplayClass30_0_o *this,
        UserServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  __int64 v6; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21

  if ( (byte_4C327F6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass30_1__StartSelectGrandServant_b__4__);
    sub_1C32C20(&GrandServantListRootComponent___c__DisplayClass30_1_TypeInfo);
    byte_4C327F6 = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(GrandServantListRootComponent___c__DisplayClass30_1_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_8;
  v5[1].monitor = this;
  sub_1C32BC4(&v5[1].monitor, this);
  v5[1].klass = (Il2CppClass *)servantEntity;
  sub_1C32BC4(&v5[1], servantEntity);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    v5,
    Method_GrandServantListRootComponent___c__DisplayClass30_1__StartSelectGrandServant_b__4__,
    0);
  if ( !v9 )
LABEL_8:
    sub_1C32E7C(v6);
  CommonUI__maskFadeout(v9, 2, DEFAULT_FADE_TIME, v11, 0);
}


void GrandServantListRootComponent___c__DisplayClass30_1___ctor(
        GrandServantListRootComponent___c__DisplayClass30_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListRootComponent___c__DisplayClass30_1___StartSelectGrandServant_b__4(
        GrandServantListRootComponent___c__DisplayClass30_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *v3; // x19
  _QWORD *monitor; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x8
  __int64 v8; // x8
  UnityEngine_Object_o *gameObject; // x20
  void *v10; // x8
  _QWORD *v11; // x8
  __int64 v12; // x20
  GrandServantListData_o *v13; // x21
  const MethodInfo *v14; // x1
  _QWORD *v15; // x8
  __int64 v16; // x8
  __int64 v17; // x9
  _QWORD *v18; // x8
  __int64 v19; // x8
  System_Action_o *klass; // x21
  CommonUI_o *v21; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4C327F8 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&GrandServantListData_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (GrandServantListRootComponent___c__DisplayClass30_1_o *)sub_1C32C20(&Method_GrandServantListRootComponent___c__DisplayClass30_1__StartSelectGrandServant_b__5__);
    byte_4C327F8 = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_27;
  v5 = monitor[2];
  if ( !v5 )
    goto LABEL_27;
  v6 = *(_QWORD *)(v5 + 80);
  if ( !v6 )
    goto LABEL_27;
  this = *(GrandServantListRootComponent___c__DisplayClass30_1_o **)(v6 + 40);
  if ( !this )
    goto LABEL_27;
  GrandServantListMenuLayout__SetItemSlotActive((GrandServantListMenuLayout_o *)this, 1, v2);
  v7 = v3[1].monitor;
  if ( !v7 )
    goto LABEL_27;
  v8 = v7[2];
  if ( !v8 )
    goto LABEL_27;
  this = *(GrandServantListRootComponent___c__DisplayClass30_1_o **)(v8 + 176);
  if ( !this )
    goto LABEL_27;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(gameObject, 0);
  v10 = v3[1].monitor;
  if ( !v10 )
    goto LABEL_27;
  this = (GrandServantListRootComponent___c__DisplayClass30_1_o *)*((_QWORD *)v10 + 2);
  if ( !this )
    goto LABEL_27;
  this[4].fields.servantEntity = 0;
  this = (GrandServantListRootComponent___c__DisplayClass30_1_o *)sub_1C32BC4(&this[4].fields, 0);
  v11 = v3[1].monitor;
  if ( !v11 )
    goto LABEL_27;
  v12 = v11[2];
  v13 = (GrandServantListData_o *)sub_1C32E6C(GrandServantListData_TypeInfo);
  GrandServantListData___ctor(v13, v14);
  if ( !v12 )
    goto LABEL_27;
  *(_QWORD *)(v12 + 152) = v13;
  this = (GrandServantListRootComponent___c__DisplayClass30_1_o *)sub_1C32BC4(v12 + 152, v13);
  v15 = v3[1].monitor;
  if ( !v15 )
    goto LABEL_27;
  v16 = v15[2];
  if ( !v16 )
    goto LABEL_27;
  v17 = *(_QWORD *)(v16 + 80);
  if ( !v17 )
    goto LABEL_27;
  this = *(GrandServantListRootComponent___c__DisplayClass30_1_o **)(v17 + 40);
  if ( !this )
    goto LABEL_27;
  this = (GrandServantListRootComponent___c__DisplayClass30_1_o *)((__int64 (__fastcall *)(GrandServantListRootComponent___c__DisplayClass30_1_o *, _QWORD, _QWORD))this->klass[1]._1.byval_arg.data)(
                                                                    this,
                                                                    *(_QWORD *)(v16 + 152),
                                                                    *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
  v18 = v3[1].monitor;
  if ( !v18 )
    goto LABEL_27;
  v19 = v18[2];
  if ( !v19 )
    goto LABEL_27;
  this = *(GrandServantListRootComponent___c__DisplayClass30_1_o **)(v19 + 64);
  if ( !this )
    goto LABEL_27;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)this, 1, 0);
  this = (GrandServantListRootComponent___c__DisplayClass30_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  klass = (System_Action_o *)v3[2].klass;
  v21 = (CommonUI_o *)this;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandServantListRootComponent___c__DisplayClass30_1__StartSelectGrandServant_b__5__,
      0);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandServantListRootComponent___c__DisplayClass30_1_o *)sub_1C32BC4(&v3[2], klass);
  }
  if ( !v21 )
LABEL_27:
    sub_1C32E7C(this);
  CommonUI__maskFadein(v21, 1.0, klass, 0);
}


void GrandServantListRootComponent___c__DisplayClass30_1___StartSelectGrandServant_b__5(
        GrandServantListRootComponent___c__DisplayClass30_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct GrandServantListRootComponent___c__DisplayClass30_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_1C32E7C(this);
  GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog(
    CS___8__locals1->fields.__4__this,
    CS___8__locals1->fields.grandGraphEntity,
    this->fields.servantEntity,
    v2);
}


void GrandServantListRootComponent___c__DisplayClass39_0___ctor(
        GrandServantListRootComponent___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListRootComponent___c__DisplayClass39_0___OnSelectConfirmGrandServantResetDialog_b__2(
        GrandServantListRootComponent___c__DisplayClass39_0_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  struct GrandServantListRootComponent_o *_4__this; // x20
  GrandServantListData_o *v6; // x21
  const MethodInfo *v7; // x1
  GrandServantListRootComponent_o *menu; // x0
  struct GrandServantListRootComponent_o *v9; // x8
  struct GrandServantListMenu_o *listMenu; // x9
  const MethodInfo *v11; // x3
  struct GrandServantListSlotData_o *slotData; // x8

  if ( (byte_4C327F9 & 1) == 0 )
  {
    sub_1C32C20(&GrandServantListData_TypeInfo);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C327F9 = 1;
  }
  if ( !System_String__op_Equality(res, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
  {
    _4__this = this->fields.__4__this;
    v6 = (GrandServantListData_o *)sub_1C32E6C(GrandServantListData_TypeInfo);
    GrandServantListData___ctor(v6, v7);
    if ( !_4__this )
      goto LABEL_11;
    _4__this->fields.grandServantListData = v6;
    menu = (GrandServantListRootComponent_o *)sub_1C32BC4(&_4__this->fields.grandServantListData, v6);
    v9 = this->fields.__4__this;
    if ( !v9
      || (listMenu = v9->fields.listMenu) == 0
      || (menu = (GrandServantListRootComponent_o *)listMenu->fields.menu) == 0
      || (menu = (GrandServantListRootComponent_o *)((__int64 (__fastcall *)(GrandServantListRootComponent_o *, struct GrandServantListData_o *, const MethodInfo *))menu->klass->vtable._6_beginStartUp.methodPtr)(
                                                      menu,
                                                      v9->fields.grandServantListData,
                                                      menu->klass->vtable._6_beginStartUp.method),
          (slotData = this->fields.slotData) == 0)
      || (menu = this->fields.__4__this) == 0 )
    {
LABEL_11:
      sub_1C32E7C(menu);
    }
    GrandServantListRootComponent__OpenGrandServantResetDialog(
      menu,
      slotData->fields._GrandGraphEntity_k__BackingField,
      slotData->fields._UserServantEntity_k__BackingField,
      v11);
  }
}