void GrandServantListRootComponent___ctor(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void GrandServantListRootComponent__DecideActionSendMessageMenuDecide(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_593325F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_593325F = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  GrandServantListRootComponent__SendMessageMenuDecide(this, v5);
}


void GrandServantListRootComponent__EndShowEquip(
        GrandServantListRootComponent_o *this,
        bool isModify,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_593325B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_SendMessageCloseStatus__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593325B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageCloseStatus__, 0);
  if ( !Instance )
    sub_21FFECC(v6, v7);
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
  __int64 v7; // x1

  if ( (byte_5933259 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_SendMessageCloseStatus__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5933259 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageCloseStatus__, 0);
  if ( !Instance )
    sub_21FFECC(v6, v7);
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
  __int64 v8; // x1
  __int64 v9; // x2
  GrandServantListRootComponent___c_c *v10; // x8
  CommonUI_o *v11; // x19
  struct GrandServantListRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__44_0; // x20
  Il2CppObject *v14; // x21
  struct GrandServantListRootComponent___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  GrandServantListData_o *v22; // x21
  const MethodInfo *v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct GrandServantListMenu_o *listMenu; // x8

  if ( (byte_593325A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&GrandServantListData_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__EndShowServantWithQuest_b__44_0__);
    sub_21FFC50(&GrandServantListRootComponent___c_TypeInfo);
    byte_593325A = 1;
  }
  if ( questId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = GrandServantListRootComponent___c_TypeInfo;
    v11 = (CommonUI_o *)Instance;
    if ( !*(&GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo, v8, v9);
      v10 = GrandServantListRootComponent___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__44_0 = static_fields->__9__44_0;
    if ( !_9__44_0 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v8, v9);
        static_fields = GrandServantListRootComponent___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__44_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__44_0,
        v14,
        Method_GrandServantListRootComponent___c__EndShowServantWithQuest_b__44_0__,
        0);
      v15 = GrandServantListRootComponent___c_TypeInfo->static_fields;
      v15->__9__44_0 = _9__44_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->__9__44_0, (int32_t)_9__44_0, v16, v17, v18, v19, v20, v21);
    }
    if ( v11 )
    {
      CommonUI__CloseServantStatusDialog(v11, _9__44_0, 0);
      return;
    }
LABEL_17:
    sub_21FFECC(Instance, v8);
  }
  if ( isModify )
  {
    v22 = (GrandServantListData_o *)sub_21FFEBC(GrandServantListData_TypeInfo);
    GrandServantListData___ctor(v22, v23);
    this->fields.grandServantListData = v22;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantListData,
      (int32_t)v22,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
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
  __int64 v3; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  SceneJumpInfo_o *sceneJumpInfo; // x20

  if ( (byte_5933247 & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933247 = 1;
  }
  v3 = sub_21FFEBC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_48427172((SceneJumpInfo_o *)v3, (System_String_o *)StringLiteral_1/*""*/, 9, 0);
  if ( !v3 )
    goto LABEL_8;
  SceneJumpInfo__SetReturnNowScene((SceneJumpInfo_o *)v3, 0);
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    sceneJumpInfo = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor(sceneJumpInfo, 0);
  }
  *(_QWORD *)(v3 + 56) = sceneJumpInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 56), (int32_t)sceneJumpInfo, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_21FFECC(Instance, v5);
  AvalonSceneManager__changeScene((AvalonSceneManager_o *)Instance, 91, 1, (Il2CppObject *)v3, 0);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o GrandServantListRootComponent__InstantiateAssetObject___Il2CppFullySharedGenericType_(
        GrandServantListRootComponent_o *this,
        System_String_o *objectName,
        const MethodInfo_388589C *method)
{
  __int64 v3; // x3
  __int64 v4; // x20
  __int64 v8; // x8
  size_t v9; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x23
  __int64 v13; // x1
  UnityEngine_Transform_o *transform; // x24
  AssetData_o *v15; // x2
  __int64 *v16; // x1
  __int64 v17; // x0
  void (__fastcall *v18)(__int64, __int64 *, AssetData_o *, _QWORD *, _QWORD); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v19; // x0
  void *v20; // x1
  _QWORD v21[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v4 = v3;
  v21[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *(_QWORD *)(v3 + 56);
  if ( !v8 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_7445/*"GrandServantList"*/);
    v8 = *(_QWORD *)(v4 + 56);
    if ( !v8 )
    {
      sub_2237B54();
      v8 = *(_QWORD *)(v4 + 56);
    }
  }
  v9 = *(unsigned int *)(*(_QWORD *)(v8 + 8) + 252LL);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, objectName);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7445/*"GrandServantList"*/, 0);
  if ( !AssetStorage )
    goto LABEL_12;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__58323140(
                                  AssetStorage,
                                  objectName,
                                  (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !this->fields.uiRoot )
    goto LABEL_12;
  v12 = (Il2CppObject *)AssetStorage;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.uiRoot, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object__59506996(
                                  v12,
                                  transform,
                                  (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
  if ( !AssetStorage )
LABEL_12:
    sub_21FFECC(AssetStorage, v11);
  v15 = AssetStorage;
  v16 = **(__int64 ***)(v4 + 56);
  v17 = *v16;
  v18 = (void (__fastcall *)(__int64, __int64 *, AssetData_o *, _QWORD *, _QWORD))v16[2];
  v21[0] = (char *)v21 - ((v9 + 15) & 0x1FFFFFFF0LL);
  v18(v17, v16, v15, v21, v21[0]);
  v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    (void *)method,
                                                                    (char *)v21 - ((v9 + 15) & 0x1FFFFFFF0LL),
                                                                    v9);
  result.monitor = v20;
  result.klass = v19;
  return result;
}


Il2CppObject *GrandServantListRootComponent__InstantiateAssetObject_object_(
        GrandServantListRootComponent_o *this,
        System_String_o *objectName,
        const MethodInfo_3885784 *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *uiRoot; // x8
  Il2CppObject *v9; // x20
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x21

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_7445/*"GrandServantList"*/);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, objectName);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7445/*"GrandServantList"*/, 0);
  if ( !AssetStorage )
    goto LABEL_12;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__58323140(
                                  AssetStorage,
                                  objectName,
                                  (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  uiRoot = (UnityEngine_Component_o *)this->fields.uiRoot;
  if ( !uiRoot )
    goto LABEL_12;
  v9 = (Il2CppObject *)AssetStorage;
  transform = UnityEngine_Component__get_transform(uiRoot, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object__59506996(
                                  v9,
                                  transform,
                                  (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
  if ( !AssetStorage )
LABEL_12:
    sub_21FFECC(AssetStorage, v7);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)AssetStorage,
           (const MethodInfo_3883A78 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


bool GrandServantListRootComponent__IsForceChangeSceneFromGrandScore(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardRootComponent_c *v3; // x0

  if ( (byte_5933246 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardRootComponent_TypeInfo);
    byte_5933246 = 1;
  }
  v3 = ClassBoardRootComponent_TypeInfo;
  if ( !*(&ClassBoardRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardRootComponent_TypeInfo, method, v2);
    v3 = ClassBoardRootComponent_TypeInfo;
  }
  return EventTutorialMaster__CheckShouldPlayOpenTypeNoneEventTutorial(
           v3->static_fields->U_MEDAL_CREATE_EVENT_ID,
           96,
           0);
}


void GrandServantListRootComponent__OnClickBack(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct SupportInfoJump_o *supportInfoJump; // x0
  Il2CppObject *v10; // x2
  struct SceneJumpInfo_o *v11; // x8
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  TerminalPramsManager_c *v16; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  const MethodInfo_476E8C0 *v18; // x0
  int32_t v19; // w1
  struct SceneJumpInfo_o *v20; // x8

  if ( (byte_5933248 & 1) == 0 )
  {
    sub_21FFC50(&Method_GrandServantListRootComponent_OnClickBack__);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5933248 = 1;
  }
  v3 = Method_GrandServantListRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( sceneJumpInfo )
  {
    IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(sceneJumpInfo->fields.returnSceneName, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      v11 = this->fields.sceneJumpInfo;
      if ( !v11 )
        goto LABEL_32;
      returnSceneName = v11->fields.returnSceneName;
      if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v7, v8);
      SceneName = SceneList__getSceneName(34, 0);
      if ( !System_String__op_Equality(returnSceneName, SceneName, 0) )
      {
        IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v20 = this->fields.sceneJumpInfo;
        if ( !v20 || !IsNullOrEmpty )
          goto LABEL_32;
        AvalonSceneManager__transitionScene_48092832(
          (AvalonSceneManager_o *)IsNullOrEmpty,
          v20->fields.returnSceneName,
          1,
          (Il2CppObject *)v20->fields.backSceneJumpInfo,
          0);
        return;
      }
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14, v15);
      if ( !byte_5932ADC )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5932ADC = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14, v15);
        v16 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v16->static_fields;
      v18 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
      static_fields->_IsAutoResume_k__BackingField = 1;
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance(v18);
      if ( !IsNullOrEmpty )
        goto LABEL_32;
      v19 = 34;
LABEL_31:
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)IsNullOrEmpty, v19, 1, 0, 0);
      return;
    }
  }
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !IsNullOrEmpty )
      goto LABEL_32;
    if ( AvalonSceneManager__popScene((AvalonSceneManager_o *)IsNullOrEmpty, 1, 0, 0) )
      return;
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !IsNullOrEmpty )
      goto LABEL_32;
    v19 = 39;
    goto LABEL_31;
  }
  v10 = (Il2CppObject *)this->fields.supportInfoJump;
  supportInfoJump->fields.selectClassId = -1;
  if ( !SupportInfoJump__ReturnScene(supportInfoJump, 1, v10, 0) )
  {
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_21FFECC(IsNullOrEmpty, v7);
  }
}


void GrandServantListRootComponent__OnClickHelpBtn(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  char *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  GrandServantListRootComponent___c_c *v13; // x8
  char *v14; // x20
  struct GrandServantListRootComponent___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__50_0; // x21
  Il2CppObject *v17; // x22
  struct GrandServantListRootComponent___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct GrandServantListRootComponent___c_StaticFields *v32; // x8
  System_Action_object__o *_9__50_1; // x21
  Il2CppObject *v34; // x22
  struct GrandServantListRootComponent___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  ActionChain_o *v42; // x21
  __int64 v43; // x20
  System_Action_o *v44; // x22
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7

  if ( (byte_5933260 & 1) == 0 )
  {
    sub_21FFC50(&ActionChain_TypeInfo);
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&System_Action_Action____TypeInfo);
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnClickHelpBtn__);
    sub_21FFC50(&Method_GrandServantListRootComponent_SendMessageMenuCancel__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__OnClickHelpBtn_b__50_0__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__OnClickHelpBtn_b__50_1__);
    sub_21FFC50(&GrandServantListRootComponent___c_TypeInfo);
    byte_5933260 = 1;
  }
  v3 = Method_GrandServantListRootComponent_OnClickHelpBtn__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnClickHelpBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnClickHelpBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (char *)sub_21FFD10(System_Action_Action____TypeInfo, 2);
  v13 = GrandServantListRootComponent___c_TypeInfo;
  v14 = v5;
  if ( !*(&GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo, v6, v7);
    v13 = GrandServantListRootComponent___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__50_0 = (System_Action_object__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v6, v7);
      static_fields = GrandServantListRootComponent___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
    System_Action_object____ctor(_9__50_0, v17, Method_GrandServantListRootComponent___c__OnClickHelpBtn_b__50_0__, 0);
    v18 = GrandServantListRootComponent___c_TypeInfo->static_fields;
    v18->__9__50_0 = (struct System_Action_Action__o *)_9__50_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->__9__50_0, (int32_t)_9__50_0, v19, v20, v21, v22, v23, v24);
  }
  if ( !v14 )
    goto LABEL_25;
  if ( !*((_DWORD *)v14 + 6) )
    goto LABEL_26;
  *((_QWORD *)v14 + 4) = _9__50_0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v14 + 32), (int32_t)_9__50_0, v7, v8, v9, v10, v11, v12);
  v5 = (char *)GrandServantListRootComponent___c_TypeInfo;
  if ( !*(&GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo, v25, v26);
    v5 = (char *)GrandServantListRootComponent___c_TypeInfo;
  }
  v32 = (struct GrandServantListRootComponent___c_StaticFields *)*((_QWORD *)v5 + 23);
  _9__50_1 = (System_Action_object__o *)v32->__9__50_1;
  if ( !_9__50_1 )
  {
    if ( !*((_DWORD *)v5 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v5, v25, v26);
      v32 = GrandServantListRootComponent___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__50_1 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
    System_Action_object____ctor(_9__50_1, v34, Method_GrandServantListRootComponent___c__OnClickHelpBtn_b__50_1__, 0);
    v35 = GrandServantListRootComponent___c_TypeInfo->static_fields;
    v35->__9__50_1 = (struct System_Action_Action__o *)_9__50_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v35->__9__50_1, (int32_t)_9__50_1, v36, v37, v38, v39, v40, v41);
  }
  if ( (*((_DWORD *)v14 + 6) & 0xFFFFFFFE) == 0 )
    goto LABEL_26;
  *((_QWORD *)v14 + 5) = _9__50_1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v14 + 40), (int32_t)_9__50_1, v26, v27, v28, v29, v30, v31);
  v42 = (ActionChain_o *)sub_21FFEBC(ActionChain_TypeInfo);
  ActionChain___ctor_55902484(v42, (System_Action_Action__array *)v14, 0);
  v43 = sub_21FFD10(System_Action___TypeInfo, 1);
  v44 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageMenuCancel__, 0);
  if ( !v43 )
    goto LABEL_25;
  if ( !*(_DWORD *)(v43 + 24) )
LABEL_26:
    sub_21FFED4(v5);
  *(_QWORD *)(v43 + 32) = v44;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 32), (int32_t)v44, v45, v46, v47, v48, v49, v50);
  if ( !v42
    || (v5 = (char *)ChainableActionBase__Final((ChainableActionBase_o *)v42, (System_Action_array *)v43, 0)) == 0 )
  {
LABEL_25:
    sub_21FFECC(v5, v6);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)v5, 0);
}


void GrandServantListRootComponent__OnClickSupportButton(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5933249 & 1) == 0 )
  {
    sub_21FFC50(&Method_GrandServantListRootComponent_OnClickSupportButton__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5933249 = 1;
  }
  v3 = Method_GrandServantListRootComponent_OnClickSupportButton__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnClickSupportButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnClickSupportButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( this->fields.supportInfoJump )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v6);
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
  __int64 v2; // x2
  struct SupportInfoJump_o *supportInfoJump; // x8
  FollowerInfo_o *followerInfo; // x21
  bool IsUseGrandSupport_k__BackingField; // w22
  bool v7; // w23
  GrandServantListData_o *v8; // x20
  const MethodInfo *v9; // x4
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_o *MainBgmName; // x20
  GrandServantListRootComponent_o *v19; // x0
  const MethodInfo *v20; // x1
  GrandServantListData_o *v21; // x20
  const MethodInfo *v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w1
  struct GrandServantListData_o **p_QuestData_k__BackingField; // x0
  OtherUserGameEntity_o *otherUserGameEntity; // x21
  const MethodInfo *v32; // x2
  GrandServantListMenu_o *listMenu; // x0
  const MethodInfo *v34; // x1
  struct SupportInfoJump_o *v35; // x8
  EventUpValSetupInfo_o *eventSetupInfo; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  struct GrandServantListData_o *grandServantListData; // x20
  GrandServantListQuestData_o *v39; // x21
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  struct GrandServantListData_o *v42; // x8
  struct GrandServantListMenu_o *v43; // x8
  struct GrandServantListData_o *v44; // x8
  int Kind_k__BackingField; // w8
  const MethodInfo *v46; // x1
  __int64 *v47; // x8

  if ( (byte_5933245 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&GrandServantListData_TypeInfo);
    sub_21FFC50(&GrandServantListQuestData_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12828/*"START_OTHER_VIEW"*/);
    sub_21FFC50(&StringLiteral_12839/*"START_SUPPORT_SELECT"*/);
    sub_21FFC50(&StringLiteral_12817/*"START_FORMATION"*/);
    byte_5933245 = 1;
  }
  supportInfoJump = this->fields.supportInfoJump;
  if ( supportInfoJump )
  {
    if ( supportInfoJump->fields.isSelect )
    {
      followerInfo = supportInfoJump->fields.followerInfo;
      IsUseGrandSupport_k__BackingField = supportInfoJump->fields._IsUseGrandSupport_k__BackingField;
      v7 = !supportInfoJump->fields._IsGrandRestriction_k__BackingField;
      v8 = (GrandServantListData_o *)sub_21FFEBC(GrandServantListData_TypeInfo);
      GrandServantListData___ctor_39649836(v8, followerInfo, IsUseGrandSupport_k__BackingField, v7, v9);
    }
    else
    {
      otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
      v8 = (GrandServantListData_o *)sub_21FFEBC(GrandServantListData_TypeInfo);
      GrandServantListData___ctor_39650760(v8, otherUserGameEntity, v32);
    }
    this->fields.grandServantListData = v8;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantListData,
      (int32_t)v8,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v35 = this->fields.supportInfoJump;
    if ( !v35
      || (eventSetupInfo = v35->fields.eventSetupInfo,
          questRestrictionInfo = v35->fields.questRestrictionInfo,
          grandServantListData = this->fields.grandServantListData,
          v39 = (GrandServantListQuestData_o *)sub_21FFEBC(GrandServantListQuestData_TypeInfo),
          GrandServantListQuestData___ctor(v39, eventSetupInfo, questRestrictionInfo, v40),
          !grandServantListData) )
    {
LABEL_32:
      sub_21FFECC(listMenu, v34);
    }
    grandServantListData->fields._QuestData_k__BackingField = v39;
    p_QuestData_k__BackingField = (struct GrandServantListData_o **)&grandServantListData->fields._QuestData_k__BackingField;
    v29 = (int)v39;
  }
  else
  {
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v2);
    MainBgmName = BgmManager__GetMainBgmName(0, 0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v16, v17);
    SoundManager__playBgm(MainBgmName, 0);
    if ( !GrandServantListRootComponent__IsForceChangeSceneFromGrandScore(v19, v20) )
      EventTutorialMaster__CheckTutorial(0, 101, 0, 0, 0, 0, 0, 0);
    v21 = (GrandServantListData_o *)sub_21FFEBC(GrandServantListData_TypeInfo);
    GrandServantListData___ctor(v21, v22);
    v29 = (int)v21;
    this->fields.grandServantListData = v21;
    p_QuestData_k__BackingField = &this->fields.grandServantListData;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_QuestData_k__BackingField, v29, v23, v24, v25, v26, v27, v28);
  v42 = this->fields.grandServantListData;
  if ( !v42 )
    goto LABEL_32;
  listMenu = this->fields.listMenu;
  if ( !listMenu )
    goto LABEL_32;
  GrandServantListMenu__Initialize(listMenu, this->fields.myFSM, v42->fields._Kind_k__BackingField, v41);
  v43 = this->fields.listMenu;
  if ( !v43 )
    goto LABEL_32;
  listMenu = (GrandServantListMenu_o *)v43->fields.menu;
  if ( !listMenu )
    goto LABEL_32;
  listMenu = (GrandServantListMenu_o *)((__int64 (__fastcall *)(GrandServantListMenu_o *, struct GrandServantListData_o *, _QWORD))listMenu->klass[1]._1.byval_arg.data)(
                                         listMenu,
                                         this->fields.grandServantListData,
                                         *(_QWORD *)&listMenu->klass[1]._1.byval_arg.bits);
  v44 = this->fields.grandServantListData;
  if ( !v44 )
    goto LABEL_32;
  Kind_k__BackingField = v44->fields._Kind_k__BackingField;
  switch ( Kind_k__BackingField )
  {
    case 2:
      v47 = &StringLiteral_12828/*"START_OTHER_VIEW"*/;
      goto LABEL_31;
    case 1:
      v47 = &StringLiteral_12839/*"START_SUPPORT_SELECT"*/;
LABEL_31:
      SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)*v47, 0);
      return;
    case 0:
      if ( GrandServantListRootComponent__IsForceChangeSceneFromGrandScore(
             (GrandServantListRootComponent_o *)listMenu,
             v34) )
      {
        GrandServantListRootComponent__ForceChangeSceneFromGrandScore(this, v46);
        return;
      }
      v47 = &StringLiteral_12817/*"START_FORMATION"*/;
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
  ConfirmGrandServantResetDialog_o *confirmGrandServantResetDialog; // x20
  System_Action_o *v8; // x0
  intptr_t *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_5933256 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__);
    sub_21FFC50(&Method_GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog_b__40_0__);
    sub_21FFC50(&Method_GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog_b__40_1__);
    byte_5933256 = 1;
  }
  if ( result == 1 )
  {
    v10 = Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__);
    v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0, 0);
    confirmGrandServantResetDialog = this->fields.confirmGrandServantResetDialog;
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v9 = &Method_GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog_b__40_1__;
  }
  else
  {
    if ( result )
      return;
    v5 = Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
    confirmGrandServantResetDialog = this->fields.confirmGrandServantResetDialog;
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v9 = &Method_GrandServantListRootComponent__OnSelectConfirmGrandServantResetDialog_b__40_0__;
  }
  v12 = v8;
  System_Action___ctor(v8, (Il2CppObject *)this, *v9, 0);
  if ( !confirmGrandServantResetDialog )
    sub_21FFECC(v13, v14);
  ConfirmGrandServantResetDialog__Close(confirmGrandServantResetDialog, v12, 0);
}


void GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog(
        GrandServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  ConfirmUseGrandServantResetItemDialog_o *confirmUseGrandServantResetItemDialog; // x20
  System_Action_o *v8; // x0
  intptr_t *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_5933254 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__);
    sub_21FFC50(&Method_GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog_b__38_0__);
    sub_21FFC50(&Method_GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog_b__38_1__);
    byte_5933254 = 1;
  }
  if ( result == 1 )
  {
    v10 = Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__);
    v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0, 0);
    confirmUseGrandServantResetItemDialog = this->fields.confirmUseGrandServantResetItemDialog;
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v9 = &Method_GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog_b__38_1__;
  }
  else
  {
    if ( result )
      return;
    v5 = Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    confirmUseGrandServantResetItemDialog = this->fields.confirmUseGrandServantResetItemDialog;
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v9 = &Method_GrandServantListRootComponent__OnSelectConfirmUseGrandServantResetItemDialog_b__38_0__;
  }
  v12 = v8;
  System_Action___ctor(v8, (Il2CppObject *)this, *v9, 0);
  if ( !confirmUseGrandServantResetItemDialog )
    sub_21FFECC(v13, v14);
  ConfirmUseGrandServantResetItemDialog__Close(confirmUseGrandServantResetItemDialog, v12, 0);
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
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *grandEquipGraphListMenu; // x23
  Il2CppObject *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  bool IsParticleActive; // w8
  GrandEquipGraphListMenu_o *v22; // x22
  System_Action_bool__o *v23; // x23
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_5933258 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_InstantiateAssetObject_GrandEquipGraphListMenu___);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectEditEquip__);
    sub_21FFC50(&Method_GrandServantListRootComponent__OnSelectEditEquip_b__42_0__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_7434/*"GrandEquipGraphListMenu"*/);
    sub_21FFC50(&StringLiteral_12832/*"START_SELECT_EQUIP"*/);
    byte_5933258 = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_20;
  grandServantListData = (GrandServantListData_o *)GrandServantListData__GetSlotData(
                                                     grandServantListData,
                                                     grandGraphId,
                                                     *(const MethodInfo **)&equipIndex);
  if ( !grandServantListData )
    goto LABEL_20;
  v8 = (GrandServantListSlotData_o *)grandServantListData;
  if ( grandServantListData->fields._QuestData_k__BackingField )
  {
    SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12832/*"START_SELECT_EQUIP"*/, 0);
    grandEquipGraphListMenu = (UnityEngine_Object_o *)this->fields.grandEquipGraphListMenu;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    if ( UnityEngine_Object__op_Equality(grandEquipGraphListMenu, 0, 0) )
    {
      v12 = GrandServantListRootComponent__InstantiateAssetObject_object_(
              this,
              (System_String_o *)StringLiteral_7434/*"GrandEquipGraphListMenu"*/,
              (const MethodInfo_3885784 *)Method_GrandServantListRootComponent_InstantiateAssetObject_GrandEquipGraphListMenu___);
      this->fields.grandEquipGraphListMenu = (struct GrandEquipGraphListMenu_o *)v12;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.grandEquipGraphListMenu,
        (int32_t)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      grandServantListData = (GrandServantListData_o *)this->fields.grandEquipGraphListMenu;
      if ( !grandServantListData )
        goto LABEL_20;
      GrandEquipGraphListMenu__Init((GrandEquipGraphListMenu_o *)grandServantListData, 0);
    }
    v19 = Method_GrandServantListRootComponent_OnSelectEditEquip__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditEquip__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectEditEquip__);
    v20 = (System_Reflection_MethodBase_o *)sub_21FFC34(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0, 0);
    grandServantListData = (GrandServantListData_o *)this->fields.titleInfo;
    if ( grandServantListData )
    {
      IsParticleActive = TitleInfoControl__get_IsParticleActive((TitleInfoControl_o *)grandServantListData, 0);
      grandServantListData = (GrandServantListData_o *)this->fields.titleInfo;
      this->fields.isParticleActive = IsParticleActive;
      if ( grandServantListData )
      {
        TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)grandServantListData, 0, 0);
        v22 = this->fields.grandEquipGraphListMenu;
        v23 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v23,
          (Il2CppObject *)this,
          Method_GrandServantListRootComponent__OnSelectEditEquip_b__42_0__,
          0);
        if ( v22 )
        {
          GrandEquipGraphListMenu__Open(v22, v8, equipIndex, v23, 0);
          return;
        }
      }
    }
LABEL_20:
    sub_21FFECC(grandServantListData, *(_QWORD *)&grandGraphId);
  }
  v24 = Method_GrandServantListRootComponent_OnSelectEditEquip__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditEquip__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectEditEquip__);
  v25 = (System_Reflection_MethodBase_o *)sub_21FFC34(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0, 0);
  GrandServantListRootComponent__SendMessageMenuCancel(this, v26);
}


void GrandServantListRootComponent__OnSelectEditServant(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  GrandServantListData_o *grandServantListData; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  GrandServantListSlotData_o *SlotData; // x0
  __int64 v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x8
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  const MethodInfo *v26; // x1
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  const MethodInfo *v29; // x1
  System_Reflection_MethodBase_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x22
  System_Func_object__object__o *v34; // x23
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x22
  GrandServantListRootComponent___c_c *v38; // x8
  struct GrandServantListRootComponent___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__29_1; // x23
  Il2CppObject *v41; // x24
  struct GrandServantListRootComponent___c_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Collections_Generic_List_TSource__o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  GrandServantListRootComponent___c_c *v53; // x8
  System_Collections_Generic_List_T__o *v54; // x22
  struct GrandServantListRootComponent___c_StaticFields *v55; // x9
  System_Func_object__bool__o *_9__29_2; // x23
  Il2CppObject *v57; // x24
  struct GrandServantListRootComponent___c_StaticFields *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  const MethodInfo *v65; // x3
  __int64 v66; // x20
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  __int64 v73; // x1
  __int64 v74; // x2
  GrandServantListRootComponent___c_c *v75; // x0
  struct GrandServantListRootComponent___c_StaticFields *v76; // x8
  System_Func_object__int__o *_9__29_3; // x21
  Il2CppObject *v78; // x23
  struct GrandServantListRootComponent___c_StaticFields *v79; // x0
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v86; // x0
  __int64 v87; // x1
  __int64 v88; // x2
  GrandServantListRootComponent___c_c *v89; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x21
  struct GrandServantListRootComponent___c_StaticFields *v91; // x9
  System_Func_object__int__o *_9__29_4; // x22
  Il2CppObject *v93; // x23
  struct GrandServantListRootComponent___c_StaticFields *v94; // x0
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  struct GrandServantListRootComponent___c_StaticFields *v101; // x9
  System_Func_object__object__o *_9__29_5; // x23
  Il2CppObject *v103; // x24
  struct GrandServantListRootComponent___c_StaticFields *v104; // x0
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  System_Collections_Generic_Dictionary_int__object__o *v111; // x21
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  Il2CppObject *Item; // x1
  int32_t v119; // w20
  System_Action_o *v120; // x21
  GrandServantListRootComponent_o *v121; // x0
  const MethodInfo *v122; // x3
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  Il2CppObject *v129; // x1
  __int64 v130; // x1
  __int64 v131; // x2
  System_Collections_Generic_List_T__o *v132; // x21
  GrandServantListRootComponent___c_c *v133; // x0
  struct GrandServantListRootComponent___c_StaticFields *v134; // x8
  System_Func_object__bool__o *_9__29_6; // x23
  Il2CppObject *v136; // x24
  struct GrandServantListRootComponent___c_StaticFields *v137; // x0
  System_String_o *v138; // x2
  System_String_o *v139; // x3
  int32_t v140; // w4
  int32_t v141; // w5
  bool v142; // w6
  bool v143; // w7
  System_Collections_Generic_List_T__o *v144; // x22
  GrandServantListRootComponent___c_c *v145; // x0
  struct GrandServantListRootComponent___c_StaticFields *v146; // x8
  System_Func_object__bool__o *_9__29_7; // x23
  Il2CppObject *v148; // x24
  struct GrandServantListRootComponent___c_StaticFields *v149; // x0
  System_String_o *v150; // x2
  System_String_o *v151; // x3
  int32_t v152; // w4
  int32_t v153; // w5
  bool v154; // w6
  bool v155; // w7
  Il2CppObject *v156; // x0
  System_String_o *v157; // x2
  System_String_o *v158; // x3
  int32_t v159; // w4
  int32_t v160; // w5
  bool v161; // w6
  bool v162; // w7
  GrandServantExtraBranchDialog_o *v163; // x19
  GrandServantExtraBranchDialog_CallbackFunc_o *v164; // x23
  const MethodInfo *v165; // x3
  const MethodInfo *v166; // x4

  if ( (byte_593324C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_SelectGrandServantInfo___);
    sub_21FFC50(&GrandServantExtraBranchDialog_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_SelectGrandServantInfo___ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_SelectGrandServantInfo___get_Item__);
    sub_21FFC50(&Method_System_Linq_Enumerable_GroupBy_SelectGrandServantInfo__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_UserServantEntity__SelectGrandServantInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__SelectGrandServantInfo___int__List_SelectGrandServantInfo____);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_SelectGrandServantInfo___);
    sub_21FFC50(&System_Func_IGrouping_int__SelectGrandServantInfo___int__TypeInfo);
    sub_21FFC50(&System_Func_UserServantEntity__SelectGrandServantInfo__TypeInfo);
    sub_21FFC50(&System_Func_SelectGrandServantInfo__bool__TypeInfo);
    sub_21FFC50(&System_Func_IGrouping_int__SelectGrandServantInfo___List_SelectGrandServantInfo___TypeInfo);
    sub_21FFC50(&System_Func_SelectGrandServantInfo__int__TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantExtraBranchDialog___);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectEditServant__);
    sub_21FFC50(&Method_GrandServantListRootComponent_SendMessageMenuCancel__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Item__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_1__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_2__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_3__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_4__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_5__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_6__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_7__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass29_0__OnSelectEditServant_b__0__);
    sub_21FFC50(&GrandServantListRootComponent___c__DisplayClass29_0_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__8__);
    sub_21FFC50(&GrandServantListRootComponent___c__DisplayClass29_1_TypeInfo);
    sub_21FFC50(&GrandServantListRootComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_7444/*"GrandServantExtraBranchDialog"*/);
    byte_593324C = 1;
  }
  v5 = sub_21FFEBC(GrandServantListRootComponent___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_84;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_84;
  SlotData = GrandServantListData__GetSlotData(grandServantListData, grandGraphId, v14);
  *(_QWORD *)(v5 + 16) = SlotData;
  v16 = v5 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)SlotData, v17, v18, v19, v20, v21, v22);
  v23 = *(_QWORD *)(v5 + 16);
  if ( !v23 )
    goto LABEL_84;
  if ( *(_BYTE *)(v23 + 16) )
  {
    v24 = Method_GrandServantListRootComponent_OnSelectEditServant__;
    if ( *(_QWORD *)(v23 + 24) )
    {
      if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditServant__ + 83) & 2) != 0 )
        v24 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectEditServant__);
      v25 = (System_Reflection_MethodBase_o *)sub_21FFC34(v24, v24[4]);
      OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
      this->fields.lastSelectedGrandGraphId = grandGraphId;
      GrandServantListRootComponent__OpenGrandServantListMenuBranchDialog(this, v26);
      return;
    }
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditServant__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectEditServant__);
    v30 = (System_Reflection_MethodBase_o *)sub_21FFC34(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31, v32);
    grandServantListData = (GrandServantListData_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( grandServantListData )
    {
      OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                (UserServantMaster_o *)grandServantListData,
                                                                                0);
      v34 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_UserServantEntity__SelectGrandServantInfo__TypeInfo);
      System_Func_object__object____ctor(
        v34,
        (Il2CppObject *)v5,
        Method_GrandServantListRootComponent___c__DisplayClass29_0__OnSelectEditServant_b__0__,
        0);
      v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   OrganizationList,
                                                                   (System_Func_TSource__TResult__o *)v34,
                                                                   (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_UserServantEntity__SelectGrandServantInfo___);
      v38 = GrandServantListRootComponent___c_TypeInfo;
      if ( !*(&GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo, v35, v36);
        v38 = GrandServantListRootComponent___c_TypeInfo;
      }
      static_fields = v38->static_fields;
      _9__29_1 = (System_Func_object__bool__o *)static_fields->__9__29_1;
      if ( !_9__29_1 )
      {
        if ( !*(&v38->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v38, v35, v36);
          static_fields = GrandServantListRootComponent___c_TypeInfo->static_fields;
        }
        v41 = (Il2CppObject *)static_fields->__9;
        _9__29_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_SelectGrandServantInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__29_1,
          v41,
          Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_1__,
          0);
        v42 = GrandServantListRootComponent___c_TypeInfo->static_fields;
        v42->__9__29_1 = (struct System_Func_SelectGrandServantInfo__bool__o *)_9__29_1;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v42->__9__29_1,
          (int32_t)_9__29_1,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
      }
      v49 = System_Linq_Enumerable__Where_object_(
              v37,
              (System_Func_TSource__bool__o *)_9__29_1,
              (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_SelectGrandServantInfo___);
      v50 = System_Linq_Enumerable__ToList_object_(
              v49,
              (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
      v53 = GrandServantListRootComponent___c_TypeInfo;
      v54 = (System_Collections_Generic_List_T__o *)v50;
      if ( !*(&GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo, v51, v52);
        v53 = GrandServantListRootComponent___c_TypeInfo;
      }
      v55 = v53->static_fields;
      _9__29_2 = (System_Func_object__bool__o *)v55->__9__29_2;
      if ( !_9__29_2 )
      {
        if ( !*(&v53->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v53, v51, v52);
          v55 = GrandServantListRootComponent___c_TypeInfo->static_fields;
        }
        v57 = (Il2CppObject *)v55->__9;
        _9__29_2 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_SelectGrandServantInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__29_2,
          v57,
          Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_2__,
          0);
        v58 = GrandServantListRootComponent___c_TypeInfo->static_fields;
        v58->__9__29_2 = (struct System_Func_SelectGrandServantInfo__bool__o *)_9__29_2;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v58->__9__29_2,
          (int32_t)_9__29_2,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
      }
      grandServantListData = (GrandServantListData_o *)BasicHelper__Any_object_(
                                                         v54,
                                                         (System_Func_T__bool__o *)_9__29_2,
                                                         (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_SelectGrandServantInfo___);
      if ( ((unsigned __int8)grandServantListData & 1) != 0 )
      {
        if ( v54 )
        {
          grandServantListData = (GrandServantListData_o *)System_Collections_Generic_List_object___get_Item(
                                                             (System_Collections_Generic_List_object__o *)v54,
                                                             0,
                                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Item__);
          if ( grandServantListData )
          {
            if ( *(_DWORD *)&grandServantListData->fields._IsOtherUserData_k__BackingField )
            {
              v66 = sub_21FFEBC(GrandServantListRootComponent___c__DisplayClass29_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v66, 0);
              if ( v66 )
              {
                *(_QWORD *)(v66 + 40) = v5;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v66 + 40), v5, v67, v68, v69, v70, v71, v72);
                v75 = GrandServantListRootComponent___c_TypeInfo;
                if ( !*(&GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo, v73, v74);
                  v75 = GrandServantListRootComponent___c_TypeInfo;
                }
                v76 = v75->static_fields;
                _9__29_3 = (System_Func_object__int__o *)v76->__9__29_3;
                if ( !_9__29_3 )
                {
                  if ( !*(&v75->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(v75, v73, v74);
                    v76 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                  }
                  v78 = (Il2CppObject *)v76->__9;
                  _9__29_3 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_SelectGrandServantInfo__int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__29_3,
                    v78,
                    Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_3__,
                    0);
                  v79 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                  v79->__9__29_3 = (struct System_Func_SelectGrandServantInfo__int__o *)_9__29_3;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&v79->__9__29_3,
                    (int32_t)_9__29_3,
                    v80,
                    v81,
                    v82,
                    v83,
                    v84,
                    v85);
                }
                v86 = System_Linq_Enumerable__GroupBy_object__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v54,
                        (System_Func_TSource__TKey__o *)_9__29_3,
                        (const MethodInfo_384FD10 *)Method_System_Linq_Enumerable_GroupBy_SelectGrandServantInfo__int___);
                v89 = GrandServantListRootComponent___c_TypeInfo;
                v90 = (System_Collections_Generic_IEnumerable_TSource__o *)v86;
                if ( !*(&GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo, v87, v88);
                  v89 = GrandServantListRootComponent___c_TypeInfo;
                }
                v91 = v89->static_fields;
                _9__29_4 = (System_Func_object__int__o *)v91->__9__29_4;
                if ( !_9__29_4 )
                {
                  if ( !*(&v89->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(v89, v87, v88);
                    v91 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                  }
                  v93 = (Il2CppObject *)v91->__9;
                  _9__29_4 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_IGrouping_int__SelectGrandServantInfo___int__TypeInfo);
                  System_Func_object__int____ctor(
                    _9__29_4,
                    v93,
                    Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_4__,
                    0);
                  v94 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                  v94->__9__29_4 = (struct System_Func_IGrouping_int__SelectGrandServantInfo___int__o *)_9__29_4;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&v94->__9__29_4,
                    (int32_t)_9__29_4,
                    v95,
                    v96,
                    v97,
                    v98,
                    v99,
                    v100);
                  v89 = GrandServantListRootComponent___c_TypeInfo;
                }
                if ( !*(&v89->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v89, v87, v88);
                  v89 = GrandServantListRootComponent___c_TypeInfo;
                }
                v101 = v89->static_fields;
                _9__29_5 = (System_Func_object__object__o *)v101->__9__29_5;
                if ( !_9__29_5 )
                {
                  if ( !*(&v89->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(v89, v87, v88);
                    v101 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                  }
                  v103 = (Il2CppObject *)v101->__9;
                  _9__29_5 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_IGrouping_int__SelectGrandServantInfo___List_SelectGrandServantInfo___TypeInfo);
                  System_Func_object__object____ctor(
                    _9__29_5,
                    v103,
                    Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_5__,
                    0);
                  v104 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                  v104->__9__29_5 = (struct System_Func_IGrouping_int__SelectGrandServantInfo___List_SelectGrandServantInfo___o *)_9__29_5;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&v104->__9__29_5,
                    (int32_t)_9__29_5,
                    v105,
                    v106,
                    v107,
                    v108,
                    v109,
                    v110);
                }
                grandServantListData = (GrandServantListData_o *)System_Linq_Enumerable__ToDictionary_object__int__object_(
                                                                   v90,
                                                                   (System_Func_TSource__TKey__o *)_9__29_4,
                                                                   (System_Func_TSource__TElement__o *)_9__29_5,
                                                                   (const MethodInfo_3869058 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__SelectGrandServantInfo___int__List_SelectGrandServantInfo____);
                if ( grandServantListData )
                {
                  v111 = (System_Collections_Generic_Dictionary_int__object__o *)grandServantListData;
                  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
                         (System_Collections_Generic_Dictionary_int__object__o *)grandServantListData,
                         1,
                         (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__List_SelectGrandServantInfo___ContainsKey__) )
                  {
                    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                             v111,
                             1,
                             (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__List_SelectGrandServantInfo___get_Item__);
                  }
                  else
                  {
                    Item = 0;
                  }
                  *(_QWORD *)(v66 + 24) = Item;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v66 + 24),
                    (int32_t)Item,
                    v112,
                    v113,
                    v114,
                    v115,
                    v116,
                    v117);
                  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
                         v111,
                         2,
                         (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__List_SelectGrandServantInfo___ContainsKey__) )
                  {
                    v129 = System_Collections_Generic_Dictionary_int__object___get_Item(
                             v111,
                             2,
                             (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__List_SelectGrandServantInfo___get_Item__);
                  }
                  else
                  {
                    v129 = 0;
                  }
                  *(_QWORD *)(v66 + 32) = v129;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v66 + 32),
                    (int32_t)v129,
                    v123,
                    v124,
                    v125,
                    v126,
                    v127,
                    v128);
                  v132 = *(System_Collections_Generic_List_T__o **)(v66 + 24);
                  if ( v132 )
                  {
                    v133 = GrandServantListRootComponent___c_TypeInfo;
                    if ( !*(&GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo, v130, v131);
                      v133 = GrandServantListRootComponent___c_TypeInfo;
                    }
                    v134 = v133->static_fields;
                    _9__29_6 = (System_Func_object__bool__o *)v134->__9__29_6;
                    if ( !_9__29_6 )
                    {
                      if ( !*(&v133->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(v133, v130, v131);
                        v134 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                      }
                      v136 = (Il2CppObject *)v134->__9;
                      _9__29_6 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_SelectGrandServantInfo__bool__TypeInfo);
                      System_Func_object__bool____ctor(
                        _9__29_6,
                        v136,
                        Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_6__,
                        0);
                      v137 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                      v137->__9__29_6 = (struct System_Func_SelectGrandServantInfo__bool__o *)_9__29_6;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)&v137->__9__29_6,
                        (int32_t)_9__29_6,
                        v138,
                        v139,
                        v140,
                        v141,
                        v142,
                        v143);
                    }
                    LOBYTE(v132) = BasicHelper__Any_object_(
                                     v132,
                                     (System_Func_T__bool__o *)_9__29_6,
                                     (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_SelectGrandServantInfo___);
                  }
                  v144 = *(System_Collections_Generic_List_T__o **)(v66 + 32);
                  if ( v144 )
                  {
                    v145 = GrandServantListRootComponent___c_TypeInfo;
                    if ( !*(&GrandServantListRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(GrandServantListRootComponent___c_TypeInfo, v130, v131);
                      v145 = GrandServantListRootComponent___c_TypeInfo;
                    }
                    v146 = v145->static_fields;
                    _9__29_7 = (System_Func_object__bool__o *)v146->__9__29_7;
                    if ( !_9__29_7 )
                    {
                      if ( !*(&v145->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(v145, v130, v131);
                        v146 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                      }
                      v148 = (Il2CppObject *)v146->__9;
                      _9__29_7 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_SelectGrandServantInfo__bool__TypeInfo);
                      System_Func_object__bool____ctor(
                        _9__29_7,
                        v148,
                        Method_GrandServantListRootComponent___c__OnSelectEditServant_b__29_7__,
                        0);
                      v149 = GrandServantListRootComponent___c_TypeInfo->static_fields;
                      v149->__9__29_7 = (struct System_Func_SelectGrandServantInfo__bool__o *)_9__29_7;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)&v149->__9__29_7,
                        (int32_t)_9__29_7,
                        v150,
                        v151,
                        v152,
                        v153,
                        v154,
                        v155);
                    }
                    LOBYTE(v144) = BasicHelper__Any_object_(
                                     v144,
                                     (System_Func_T__bool__o *)_9__29_7,
                                     (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_SelectGrandServantInfo___);
                  }
                  v156 = GrandServantListRootComponent__InstantiateAssetObject_object_(
                           this,
                           (System_String_o *)StringLiteral_7444/*"GrandServantExtraBranchDialog"*/,
                           (const MethodInfo_3885784 *)Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantExtraBranchDialog___);
                  *(_QWORD *)(v66 + 16) = v156;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v66 + 16),
                    (int32_t)v156,
                    v157,
                    v158,
                    v159,
                    v160,
                    v161,
                    v162);
                  grandServantListData = *(GrandServantListData_o **)(v66 + 16);
                  if ( grandServantListData )
                  {
                    BaseDialog__Init((BaseDialog_o *)grandServantListData, 0);
                    v163 = *(GrandServantExtraBranchDialog_o **)(v66 + 16);
                    v164 = (GrandServantExtraBranchDialog_CallbackFunc_o *)sub_21FFEBC(GrandServantExtraBranchDialog_CallbackFunc_TypeInfo);
                    GrandServantExtraBranchDialog_CallbackFunc___ctor(
                      v164,
                      (Il2CppObject *)v66,
                      (intptr_t)Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__8__,
                      v165);
                    if ( v163 )
                    {
                      GrandServantExtraBranchDialog__Open(
                        v163,
                        (unsigned __int8)v132 & 1,
                        (unsigned __int8)v144 & 1,
                        v164,
                        v166);
                      return;
                    }
                  }
                }
              }
            }
            else if ( *(_QWORD *)v16 )
            {
              GrandServantListRootComponent__StartSelectGrandServant(
                this,
                *(GrandGraphEntity_o **)(*(_QWORD *)v16 + 48LL),
                (System_Collections_Generic_List_SelectGrandServantInfo__o *)v54,
                v65);
              return;
            }
          }
        }
      }
      else if ( *(_QWORD *)v16 )
      {
        v119 = *(_DWORD *)(*(_QWORD *)v16 + 40LL);
        v120 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v120,
          (Il2CppObject *)this,
          Method_GrandServantListRootComponent_SendMessageMenuCancel__,
          0);
        GrandServantListRootComponent__OpenCannotSelectGrandDialog(v121, v119, v120, v122);
        return;
      }
    }
LABEL_84:
    sub_21FFECC(grandServantListData, v7);
  }
  v27 = Method_GrandServantListRootComponent_OnSelectEditServant__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectEditServant__ + 83) & 2) != 0 )
    v27 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectEditServant__);
  v28 = (System_Reflection_MethodBase_o *)sub_21FFC34(v27, v27[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
  GrandServantListRootComponent__SendMessageMenuCancel(this, v29);
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
  __int64 v18; // x1

  if ( (byte_5933251 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
    sub_21FFC50(&Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__35_0__);
    sub_21FFC50(&Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__35_1__);
    sub_21FFC50(&Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__35_2__);
    sub_21FFC50(&Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__35_3__);
    byte_5933251 = 1;
  }
  if ( result > 1 )
  {
    if ( result == 2 )
    {
      v14 = Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__;
      if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
      v15 = (System_Reflection_MethodBase_o *)sub_21FFC34(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
      grandServantListMenuBranchDialog = (BaseDialog_o *)this->fields.grandServantListMenuBranchDialog;
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      v9 = &Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__35_2__;
    }
    else
    {
      if ( result != 3 )
        return;
      v10 = Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__;
      if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
      v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0, 0);
      grandServantListMenuBranchDialog = (BaseDialog_o *)this->fields.grandServantListMenuBranchDialog;
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      v9 = &Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__35_3__;
    }
  }
  else if ( result )
  {
    if ( result != 1 )
      return;
    v5 = Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    grandServantListMenuBranchDialog = (BaseDialog_o *)this->fields.grandServantListMenuBranchDialog;
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v9 = &Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__35_1__;
  }
  else
  {
    v12 = Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
    v13 = (System_Reflection_MethodBase_o *)sub_21FFC34(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
    grandServantListMenuBranchDialog = (BaseDialog_o *)this->fields.grandServantListMenuBranchDialog;
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v9 = &Method_GrandServantListRootComponent__OnSelectGrandServantListMenuBranchDialog_b__35_0__;
  }
  v16 = v8;
  System_Action___ctor(v8, (Il2CppObject *)this, *v9, 0);
  if ( !grandServantListMenuBranchDialog )
    sub_21FFECC(v17, v18);
  BaseDialog__SafeClose(grandServantListMenuBranchDialog, v16, 0);
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
  __int64 v10; // x8
  GrandServantListData_o *v11; // x21
  int32_t v12; // w9
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  struct GrandServantListQuestData_o *QuestData_k__BackingField; // x8
  __int64 v16; // x22
  bool v17; // w20
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x2
  CommonUI_o *v21; // x21
  __int128 v22; // q1
  int64_t v23; // x22
  ServantStatusDialog_EndDelegate_o *v24; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-50h]

  if ( (byte_593324B & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_EndShowEquip__);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593324B = 1;
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
  v10 = *(_QWORD *)&grandServantListData->fields._IsOtherUserData_k__BackingField;
  v11 = grandServantListData;
  if ( v10 )
  {
    v12 = *(_DWORD *)(v10 + 24);
    if ( v12 > equipIndex )
    {
      if ( v12 <= (unsigned int)equipIndex )
        goto LABEL_27;
      if ( *(_QWORD *)(v10 + 8LL * equipIndex + 32) )
      {
        v13 = Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__;
        if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__);
        v14 = (System_Reflection_MethodBase_o *)sub_21FFC34(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
        QuestData_k__BackingField = v11[1].fields._QuestData_k__BackingField;
        if ( !QuestData_k__BackingField )
          goto LABEL_26;
        if ( LODWORD(QuestData_k__BackingField->fields._QuestRestriction_k__BackingField) > equipIndex )
        {
          v16 = *((_QWORD *)&QuestData_k__BackingField[1].klass + equipIndex);
          v17 = equipIndex == 1 && *(_DWORD *)(&v11[1].fields._DisplaySupportInfoButton_k__BackingField + 2) > 0;
          grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v16 )
          {
            v21 = (CommonUI_o *)grandServantListData;
            v22 = *(_OWORD *)(v16 + 32);
            *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
            *(_OWORD *)&v26.fields.fakeValue = v22;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                *(_QWORD *)&grandGraphId,
                v20);
            v25 = v26;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v25, 0);
            v24 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v24,
              (Il2CppObject *)this,
              Method_GrandServantListRootComponent_EndShowEquip__,
              0);
            if ( v21 )
            {
              CommonUI__OpenServantEquipStatusDialog(v21, 11, v23, 1, v24, 0, v17, 0);
              return;
            }
          }
LABEL_26:
          sub_21FFECC(grandServantListData, *(_QWORD *)&grandGraphId);
        }
LABEL_27:
        sub_21FFED4(grandServantListData);
      }
    }
  }
  if ( !isLongPress )
  {
    v18 = Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectOpenEquipStatus__);
    v19 = (System_Reflection_MethodBase_o *)sub_21FFC34(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0);
  }
  GrandServantListRootComponent__SendMessageCloseStatus(this, *(const MethodInfo **)&grandGraphId);
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
  __int64 v10; // x8
  GrandServantListData_o *v11; // x21
  int32_t v12; // w9
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  int32_t v16; // w22
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  ServantLeaderInfo_o *klass; // x8
  CommonUI_o *v20; // x21
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x20
  ServantStatusDialog_EndDelegate_o *v22; // x23

  if ( (byte_5933263 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_EndShowEquip__);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5933263 = 1;
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
  v10 = *(_QWORD *)&grandServantListData->fields._IsOtherUserData_k__BackingField;
  v11 = grandServantListData;
  if ( v10 )
  {
    v12 = *(_DWORD *)(v10 + 24);
    if ( v12 > equipIndex )
    {
      if ( v12 <= (unsigned int)equipIndex )
        sub_21FFED4(grandServantListData);
      if ( *(_QWORD *)(v10 + 8LL * equipIndex + 32) )
      {
        v13 = Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__;
        if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__);
        v14 = (System_Reflection_MethodBase_o *)sub_21FFC34(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
        supportInfoJump = this->fields.supportInfoJump;
        if ( supportInfoJump && supportInfoJump->fields.kind == 3 )
          v16 = 13;
        else
          v16 = 14;
        grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        klass = (ServantLeaderInfo_o *)v11[2].klass;
        if ( klass )
        {
          v20 = (CommonUI_o *)grandServantListData;
          EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(klass, equipIndex, 0);
          v22 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v22,
            (Il2CppObject *)this,
            Method_GrandServantListRootComponent_EndShowEquip__,
            0);
          if ( v20 )
          {
            CommonUI__OpenServantEquipStatusDialog_37307296(v20, v16, EquipTargetInfoByEquipIdx, v22, 0, 0);
            return;
          }
        }
LABEL_24:
        sub_21FFECC(grandServantListData, *(_QWORD *)&grandGraphId);
      }
    }
  }
  if ( !isLongPress )
  {
    v17 = Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectOpenEquipStatusForSupportOrOther__);
    v18 = (System_Reflection_MethodBase_o *)sub_21FFC34(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0, 0);
  }
  GrandServantListRootComponent__SendMessageCloseStatus(this, *(const MethodInfo **)&grandGraphId);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListRootComponent__OnSelectOpenServantStatus(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        bool isLongPress,
        const MethodInfo *method)
{
  GrandServantListData_o *grandServantListData; // x0
  GrandServantListData_o *v8; // x21
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x2
  struct System_Collections_Generic_List_GrandServantListSlotData__o *slotDataList; // x8
  CommonUI_o *v13; // x20
  __int128 v14; // q0
  __int128 v15; // q1
  int v16; // w8
  int64_t v17; // x21
  ServantStatusDialog_FormationEndDelegate_o *v18; // x22
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-50h]

  if ( (byte_593324A & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_EndShowServantWithQuest__);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectOpenServantStatus__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593324A = 1;
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
  v8 = grandServantListData;
  if ( grandServantListData->fields._QuestData_k__BackingField )
  {
    v9 = Method_GrandServantListRootComponent_OnSelectOpenServantStatus__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenServantStatus__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectOpenServantStatus__);
    v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    slotDataList = v8[1].fields.slotDataList;
    if ( slotDataList )
    {
      v13 = (CommonUI_o *)grandServantListData;
      v14 = *(_OWORD *)&slotDataList->fields._items;
      v15 = *(_OWORD *)&slotDataList->fields._syncRoot;
      v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v22.fields.currentCryptoKey = v14;
      *(_OWORD *)&v22.fields.fakeValue = v15;
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          *(_QWORD *)&grandGraphId,
          v11);
      v21 = v22;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v21, 0);
      v18 = (ServantStatusDialog_FormationEndDelegate_o *)sub_21FFEBC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
      ServantStatusDialog_FormationEndDelegate___ctor(
        v18,
        (Il2CppObject *)this,
        Method_GrandServantListRootComponent_EndShowServantWithQuest__,
        0);
      if ( v13 )
      {
        CommonUI__OpenServantStatusDialog_37301708(v13, 1, v17, v18, 0, 0);
        return;
      }
    }
LABEL_18:
    sub_21FFECC(grandServantListData, *(_QWORD *)&grandGraphId);
  }
  if ( !isLongPress )
  {
    v19 = Method_GrandServantListRootComponent_OnSelectOpenServantStatus__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenServantStatus__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectOpenServantStatus__);
    v20 = (System_Reflection_MethodBase_o *)sub_21FFC34(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
  }
  GrandServantListRootComponent__SendMessageCloseStatus(this, *(const MethodInfo **)&grandGraphId);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListRootComponent__OnSelectOpenServantStatusForSupportOrOther(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        bool isLongPress,
        const MethodInfo *method)
{
  GrandServantListData_o *grandServantListData; // x0
  GrandServantListData_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct SupportInfoJump_o *supportInfoJump; // x8
  int32_t v12; // w21
  Il2CppObject *Instance; // x0
  ServantLeaderInfo_o *klass; // x20
  CommonUI_o *v15; // x22
  ServantStatusDialog_EndDelegate_o *v16; // x23
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0

  if ( (byte_5933262 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_EndShowServant__);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5933262 = 1;
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
  v8 = grandServantListData;
  if ( grandServantListData->fields._QuestData_k__BackingField )
  {
    v9 = Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__);
    v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    supportInfoJump = this->fields.supportInfoJump;
    if ( supportInfoJump && supportInfoJump->fields.kind == 3 )
      v12 = 4;
    else
      v12 = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    klass = (ServantLeaderInfo_o *)v8[2].klass;
    v15 = (CommonUI_o *)Instance;
    v16 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v16,
      (Il2CppObject *)this,
      Method_GrandServantListRootComponent_EndShowServant__,
      0);
    if ( v15 )
    {
      CommonUI__OpenServantStatusDialog_37304188(v15, v12, klass, v16, 0);
      return;
    }
LABEL_19:
    sub_21FFECC(grandServantListData, *(_QWORD *)&grandGraphId);
  }
  if ( !isLongPress )
  {
    v17 = Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectOpenServantStatusForSupportOrOther__);
    v18 = (System_Reflection_MethodBase_o *)sub_21FFC34(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0, 0);
  }
  GrandServantListRootComponent__SendMessageCloseStatus(this, *(const MethodInfo **)&grandGraphId);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListRootComponent__OnSelectSupportServant(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  void *grandServantListData; // x0
  __int64 v6; // x2
  struct GrandServantListData_o *v7; // x8
  struct GrandServantListQuestData_o *QuestData_k__BackingField; // x8
  __int64 v9; // x20
  __int64 v10; // x22
  __int64 v11; // x23
  QuestRestrictionInfo_o *QuestRestriction_k__BackingField; // x21
  int v13; // w22
  int32_t v14; // w22
  int32_t ServantId; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  int32_t DispLimitCountStageSealAfterIndexZero; // w0
  Il2CppObject *Instance; // x21
  System_Action_o *v20; // x22
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct SupportInfoJump_o *supportInfoJump; // x2
  int32_t v25; // w9
  int32_t v26; // w8
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  const MethodInfo *v29; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_5933261 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectSupportServant__);
    sub_21FFC50(&Method_GrandServantListRootComponent_SendMessageMenuCancel__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5933261 = 1;
  }
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_36;
  grandServantListData = GrandServantListData__GetSlotData(
                           (GrandServantListData_o *)grandServantListData,
                           grandGraphId,
                           method);
  v7 = this->fields.grandServantListData;
  if ( !v7 )
    goto LABEL_36;
  if ( v7->fields._Kind_k__BackingField == 1 && v7->fields._IsOtherUserData_k__BackingField )
  {
    if ( !grandServantListData )
      goto LABEL_36;
    if ( *((_QWORD *)grandServantListData + 3) )
    {
      QuestData_k__BackingField = v7->fields._QuestData_k__BackingField;
      if ( !QuestData_k__BackingField )
        goto LABEL_36;
      v9 = *((_QWORD *)grandServantListData + 10);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 48);
        v11 = *(_QWORD *)(v9 + 56);
        QuestRestriction_k__BackingField = QuestData_k__BackingField->fields._QuestRestriction_k__BackingField;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&grandGraphId,
            v6);
        *(_QWORD *)&v30.fields.currentCryptoKey = v10;
        *(_QWORD *)&v30.fields.fakeValue = v11;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v30, 0) )
        {
          if ( !ServantLeaderInfo__getQuestRestriction((ServantLeaderInfo_o *)v9, QuestRestriction_k__BackingField, 0)
            && !ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v9, QuestRestriction_k__BackingField, 0) )
          {
            grandServantListData = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !grandServantListData )
              goto LABEL_36;
            v13 = *((_DWORD *)grandServantListData + 20);
            grandServantListData = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !grandServantListData )
              goto LABEL_36;
            if ( v13 < 1 )
              goto LABEL_39;
            if ( !QuestRestriction_k__BackingField )
              goto LABEL_36;
            v14 = *((_DWORD *)grandServantListData + 21);
            if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_50479840(QuestRestriction_k__BackingField, v14, 0)
              || (ServantId = ServantLeaderInfo__GetServantId((ServantLeaderInfo_o *)v9, -1, 0),
                  v16 = *(_DWORD *)(v9 + 64),
                  v17 = ServantId,
                  DispLimitCountStageSealAfterIndexZero = ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(
                                                            (ServantLeaderInfo_o *)v9,
                                                            -1,
                                                            0),
                  !QuestRestrictionInfo__IsRestrictionServantIndividuality(
                     QuestRestriction_k__BackingField,
                     v17,
                     v16,
                     DispLimitCountStageSealAfterIndexZero,
                     v14,
                     1,
                     0)) )
            {
LABEL_39:
              if ( this->fields.supportInfoJump )
              {
                Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v20 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                System_Action___ctor(
                  v20,
                  (Il2CppObject *)this,
                  Method_GrandServantListRootComponent_SendMessageMenuCancel__,
                  0);
                if ( Instance )
                {
                  if ( PartyOrganizationUtility__OpenQuestUseItemExpiredDialog(
                         (PartyOrganizationUtility_o *)Instance,
                         v20,
                         0) )
                  {
                    return;
                  }
                  v21 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_GrandServantListRootComponent_OnSelectSupportServant__);
                  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0);
                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22, v23);
                  grandServantListData = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantClassMaster___);
                  if ( grandServantListData )
                  {
                    grandServantListData = (void *)ServantClassMaster__GetSupportGroupByGrandGraphId(
                                                     (ServantClassMaster_o *)grandServantListData,
                                                     *(_DWORD *)(v9 + 268),
                                                     0);
                    supportInfoJump = this->fields.supportInfoJump;
                    if ( supportInfoJump )
                    {
                      v25 = *(_DWORD *)(v9 + 16);
                      v26 = *(_DWORD *)(v9 + 268);
                      supportInfoJump->fields.selectClassId = (int)grandServantListData;
                      supportInfoJump->fields.selectDeckId = v25;
                      supportInfoJump->fields._SelectGrandGraphId_k__BackingField = v26;
                      if ( SupportInfoJump__ReturnScene(supportInfoJump, 1, (Il2CppObject *)supportInfoJump, 0) )
                        return;
                      grandServantListData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
LABEL_36:
                sub_21FFECC(grandServantListData, *(_QWORD *)&grandGraphId);
              }
            }
          }
        }
      }
    }
    v27 = Method_GrandServantListRootComponent_OnSelectSupportServant__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent_OnSelectSupportServant__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent_OnSelectSupportServant__);
    v28 = (System_Reflection_MethodBase_o *)sub_21FFC34(v27, v27[4]);
    OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
    GrandServantListRootComponent__SendMessageMenuCancel(this, v29);
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListRootComponent__OpenCannotSelectGrandDialog(
        GrandServantListRootComponent_o *this,
        int32_t grandGraphId,
        System_Action_o *func,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Entity; // x21
  System_String_o *v11; // x20
  System_String_o *v12; // x22
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  System_String_o *v15; // x21
  Il2CppObject *Instance; // x22
  System_Nullable_float__o p_messagePosY; // x0
  System_Nullable_float__o messagePosY; // [xsp+38h] [xbp-58h] BYREF
  int monitor; // [xsp+48h] [xbp-48h] BYREF
  int klass_high; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_593324D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_float___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_3412/*"CANNOT_SELECT_GRAND_DIALOG_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_3413/*"CANNOT_SELECT_GRAND_DIALOG_TITLE"*/);
    byte_593324D = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&grandGraphId, func);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             grandGraphId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3413/*"CANNOT_SELECT_GRAND_DIALOG_TITLE"*/,
                                                                  0);
  if ( !Entity )
    goto LABEL_11;
  v11 = System_String__Format((System_String_o *)Master_object, (Il2CppObject *)Entity[2].klass, 0);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3412/*"CANNOT_SELECT_GRAND_DIALOG_MESSAGE"*/, 0);
  klass_high = HIDWORD(Entity[3].klass);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &klass_high);
  monitor = (int)Entity[3].monitor;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &monitor);
  v15 = System_String__Format_75484576(v12, v13, v14, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0;
  System_Nullable_float____ctor(p_messagePosY, 26.0, (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
  if ( !Instance )
LABEL_11:
    sub_21FFECC(Master_object, v7);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    v11,
    v15,
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
  __int64 v2; // x2
  UnityEngine_Object_o *changeGrandSameServantListMenu; // x21
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  Il2CppObject *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  GrandServantListData_o *grandServantListData; // x0
  GrandServantListSlotData_o *SlotData; // x0
  ChangeGrandSameServantListMenu_o *v16; // x20
  GrandServantListSlotData_o *v17; // x21
  System_Action_bool__o *v18; // x22

  if ( (byte_5933253 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_InstantiateAssetObject_ChangeGrandSameServantListMenu___);
    sub_21FFC50(&Method_GrandServantListRootComponent__OpenChangeGrandSameServantListMenu_b__37_0__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_4525/*"ChangeGrandSameServantListMenu"*/);
    byte_5933253 = 1;
  }
  changeGrandSameServantListMenu = (UnityEngine_Object_o *)this->fields.changeGrandSameServantListMenu;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(changeGrandSameServantListMenu, 0, 0) )
  {
    v7 = GrandServantListRootComponent__InstantiateAssetObject_object_(
           this,
           (System_String_o *)StringLiteral_4525/*"ChangeGrandSameServantListMenu"*/,
           (const MethodInfo_3885784 *)Method_GrandServantListRootComponent_InstantiateAssetObject_ChangeGrandSameServantListMenu___);
    this->fields.changeGrandSameServantListMenu = (struct ChangeGrandSameServantListMenu_o *)v7;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.changeGrandSameServantListMenu,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
    || (SlotData = GrandServantListData__GetSlotData(grandServantListData, this->fields.lastSelectedGrandGraphId, v6),
        v16 = this->fields.changeGrandSameServantListMenu,
        v17 = SlotData,
        v18 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(
          v18,
          (Il2CppObject *)this,
          Method_GrandServantListRootComponent__OpenChangeGrandSameServantListMenu_b__37_0__,
          0),
        !v16) )
  {
LABEL_11:
    sub_21FFECC(grandServantListData, v5);
  }
  ChangeGrandSameServantListMenu__Open(v16, v17, v18, 0);
}


void GrandServantListRootComponent__OpenConfirmGrandServantResetDialog(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ConfirmGrandServantResetDialog_o **p_confirmGrandServantResetDialog; // x20
  UnityEngine_Object_o *confirmGrandServantResetDialog; // x21
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  ConfirmGrandServantResetDialog_o *grandServantListData; // x0
  const MethodInfo *v15; // x2
  ConfirmGrandServantResetDialog_o *v16; // x20
  GrandGraphEntity_o *baseWindow; // x21
  UserServantEntity_o *maskSprite; // x22
  ConfirmGrandServantResetDialog_CallbackFunc_o *v19; // x23

  if ( (byte_5933255 & 1) == 0 )
  {
    sub_21FFC50(&ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmGrandServantResetDialog___);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_4815/*"ConfirmGrandServantResetDialog"*/);
    byte_5933255 = 1;
  }
  p_confirmGrandServantResetDialog = &this->fields.confirmGrandServantResetDialog;
  confirmGrandServantResetDialog = (UnityEngine_Object_o *)this->fields.confirmGrandServantResetDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(confirmGrandServantResetDialog, 0, 0) )
  {
    v7 = GrandServantListRootComponent__InstantiateAssetObject_object_(
           this,
           (System_String_o *)StringLiteral_4815/*"ConfirmGrandServantResetDialog"*/,
           (const MethodInfo_3885784 *)Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmGrandServantResetDialog___);
    this->fields.confirmGrandServantResetDialog = (struct ConfirmGrandServantResetDialog_o *)v7;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.confirmGrandServantResetDialog,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  grandServantListData = *p_confirmGrandServantResetDialog;
  if ( !*p_confirmGrandServantResetDialog )
    goto LABEL_12;
  ConfirmGrandServantResetDialog__Init(grandServantListData, 0);
  grandServantListData = (ConfirmGrandServantResetDialog_o *)this->fields.grandServantListData;
  if ( !grandServantListData
    || (grandServantListData = (ConfirmGrandServantResetDialog_o *)GrandServantListData__GetSlotData(
                                                                     (GrandServantListData_o *)grandServantListData,
                                                                     this->fields.lastSelectedGrandGraphId,
                                                                     v15)) == 0
    || (v16 = this->fields.confirmGrandServantResetDialog,
        baseWindow = (GrandGraphEntity_o *)grandServantListData->fields.baseWindow,
        maskSprite = (UserServantEntity_o *)grandServantListData->fields.maskSprite,
        v19 = (ConfirmGrandServantResetDialog_CallbackFunc_o *)sub_21FFEBC(ConfirmGrandServantResetDialog_CallbackFunc_TypeInfo),
        ConfirmGrandServantResetDialog_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent_OnSelectConfirmGrandServantResetDialog__,
          0),
        !v16) )
  {
LABEL_12:
    sub_21FFECC(grandServantListData, v6);
  }
  ConfirmGrandServantResetDialog__Open(v16, baseWindow, maskSprite, v19, 0);
}


void GrandServantListRootComponent__OpenConfirmUseGrandServantResetItemDialog(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ConfirmUseGrandServantResetItemDialog_o **p_confirmUseGrandServantResetItemDialog; // x20
  UnityEngine_Object_o *confirmUseGrandServantResetItemDialog; // x21
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  BaseDialog_o *grandServantListData; // x0
  const MethodInfo *v15; // x2
  ConfirmUseGrandServantResetItemDialog_o *v16; // x20
  GrandGraphEntity_o *baseWindow; // x21
  UserServantEntity_o *maskSprite; // x22
  ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *v19; // x23

  if ( (byte_5933252 & 1) == 0 )
  {
    sub_21FFC50(&ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmUseGrandServantResetItemDialog___);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_4816/*"ConfirmUseGrandServantResetItemDialog"*/);
    byte_5933252 = 1;
  }
  p_confirmUseGrandServantResetItemDialog = &this->fields.confirmUseGrandServantResetItemDialog;
  confirmUseGrandServantResetItemDialog = (UnityEngine_Object_o *)this->fields.confirmUseGrandServantResetItemDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(confirmUseGrandServantResetItemDialog, 0, 0) )
  {
    v7 = GrandServantListRootComponent__InstantiateAssetObject_object_(
           this,
           (System_String_o *)StringLiteral_4816/*"ConfirmUseGrandServantResetItemDialog"*/,
           (const MethodInfo_3885784 *)Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmUseGrandServantResetItemDialog___);
    this->fields.confirmUseGrandServantResetItemDialog = (struct ConfirmUseGrandServantResetItemDialog_o *)v7;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.confirmUseGrandServantResetItemDialog,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
                                                 v15)) == 0
    || (v16 = this->fields.confirmUseGrandServantResetItemDialog,
        baseWindow = (GrandGraphEntity_o *)grandServantListData->fields.baseWindow,
        maskSprite = (UserServantEntity_o *)grandServantListData->fields.maskSprite,
        v19 = (ConfirmUseGrandServantResetItemDialog_CallbackFunc_o *)sub_21FFEBC(ConfirmUseGrandServantResetItemDialog_CallbackFunc_TypeInfo),
        ConfirmUseGrandServantResetItemDialog_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent_OnSelectConfirmUseGrandServantResetItemDialog__,
          0),
        !v16) )
  {
LABEL_12:
    sub_21FFECC(grandServantListData, v6);
  }
  ConfirmUseGrandServantResetItemDialog__Open(v16, baseWindow, maskSprite, v19, 0);
}


void GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog(
        GrandServantListRootComponent_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  struct ConfirmedGrandServantSelectDialog_o **p_confirmedGrandServantSelectDialog; // x22
  UnityEngine_Object_o *confirmedGrandServantSelectDialog; // x23
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  BaseDialog_o *v17; // x0
  ConfirmedGrandServantSelectDialog_o *v18; // x22
  ConfirmedGrandServantSelectDialog_CallbackFunc_o *v19; // x23

  if ( (byte_593324F & 1) == 0 )
  {
    sub_21FFC50(&ConfirmedGrandServantSelectDialog_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmedGrandServantSelectDialog___);
    sub_21FFC50(&Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__32_0__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_4826/*"ConfirmedGrandServantSelectDialog"*/);
    byte_593324F = 1;
  }
  p_confirmedGrandServantSelectDialog = &this->fields.confirmedGrandServantSelectDialog;
  confirmedGrandServantSelectDialog = (UnityEngine_Object_o *)this->fields.confirmedGrandServantSelectDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, grandGraphEntity, userServantEntity);
  if ( UnityEngine_Object__op_Equality(confirmedGrandServantSelectDialog, 0, 0) )
  {
    v10 = GrandServantListRootComponent__InstantiateAssetObject_object_(
            this,
            (System_String_o *)StringLiteral_4826/*"ConfirmedGrandServantSelectDialog"*/,
            (const MethodInfo_3885784 *)Method_GrandServantListRootComponent_InstantiateAssetObject_ConfirmedGrandServantSelectDialog___);
    this->fields.confirmedGrandServantSelectDialog = (struct ConfirmedGrandServantSelectDialog_o *)v10;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.confirmedGrandServantSelectDialog,
      (int32_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (BaseDialog_o *)*p_confirmedGrandServantSelectDialog;
  if ( !*p_confirmedGrandServantSelectDialog
    || (BaseDialog__Init(v17, 0),
        v18 = this->fields.confirmedGrandServantSelectDialog,
        v19 = (ConfirmedGrandServantSelectDialog_CallbackFunc_o *)sub_21FFEBC(ConfirmedGrandServantSelectDialog_CallbackFunc_TypeInfo),
        ConfirmedGrandServantSelectDialog_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__32_0__,
          0),
        !v18) )
  {
    sub_21FFECC(v17, v9);
  }
  ConfirmedGrandServantSelectDialog__Open(v18, grandGraphEntity, userServantEntity, v19, 0);
}


void GrandServantListRootComponent__OpenGrandServantListMenuBranchDialog(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct GrandServantListMenuBranchDialog_o **p_grandServantListMenuBranchDialog; // x20
  UnityEngine_Object_o *grandServantListMenuBranchDialog; // x21
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  BaseDialog_o *grandServantListData; // x0
  const MethodInfo *v15; // x2
  GrandServantListMenuBranchDialog_o *v16; // x20
  GrandGraphEntity_o *baseWindow; // x21
  UserServantEntity_o *maskSprite; // x22
  GrandServantListMenuBranchDialog_CallbackFunc_o *v19; // x23
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x4

  if ( (byte_5933250 & 1) == 0 )
  {
    sub_21FFC50(&GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantListMenuBranchDialog___);
    sub_21FFC50(&Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_7446/*"GrandServantListMenuBranchDialog"*/);
    byte_5933250 = 1;
  }
  p_grandServantListMenuBranchDialog = &this->fields.grandServantListMenuBranchDialog;
  grandServantListMenuBranchDialog = (UnityEngine_Object_o *)this->fields.grandServantListMenuBranchDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(grandServantListMenuBranchDialog, 0, 0) )
  {
    v7 = GrandServantListRootComponent__InstantiateAssetObject_object_(
           this,
           (System_String_o *)StringLiteral_7446/*"GrandServantListMenuBranchDialog"*/,
           (const MethodInfo_3885784 *)Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantListMenuBranchDialog___);
    this->fields.grandServantListMenuBranchDialog = (struct GrandServantListMenuBranchDialog_o *)v7;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantListMenuBranchDialog,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
                                                 v15)) == 0
    || (v16 = this->fields.grandServantListMenuBranchDialog,
        baseWindow = (GrandGraphEntity_o *)grandServantListData->fields.baseWindow,
        maskSprite = (UserServantEntity_o *)grandServantListData->fields.maskSprite,
        v19 = (GrandServantListMenuBranchDialog_CallbackFunc_o *)sub_21FFEBC(GrandServantListMenuBranchDialog_CallbackFunc_TypeInfo),
        GrandServantListMenuBranchDialog_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent_OnSelectGrandServantListMenuBranchDialog__,
          v20),
        !v16) )
  {
LABEL_12:
    sub_21FFECC(grandServantListData, v6);
  }
  GrandServantListMenuBranchDialog__Open(v16, baseWindow, maskSprite, v19, v21);
}


void GrandServantListRootComponent__OpenGrandServantResetDialog(
        GrandServantListRootComponent_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  struct GrandServantResetDialog_o **p_grandServantResetDialog; // x22
  UnityEngine_Object_o *grandServantResetDialog; // x23
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  BaseDialog_o *v17; // x0
  GrandServantResetDialog_o *v18; // x22
  GrandServantResetDialog_CallbackFunc_o *v19; // x23
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x4

  if ( (byte_5933257 & 1) == 0 )
  {
    sub_21FFC50(&GrandServantResetDialog_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantResetDialog___);
    sub_21FFC50(&Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__41_0__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_7450/*"GrandServantResetDialog"*/);
    byte_5933257 = 1;
  }
  p_grandServantResetDialog = &this->fields.grandServantResetDialog;
  grandServantResetDialog = (UnityEngine_Object_o *)this->fields.grandServantResetDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, grandGraphEntity, userServantEntity);
  if ( UnityEngine_Object__op_Equality(grandServantResetDialog, 0, 0) )
  {
    v10 = GrandServantListRootComponent__InstantiateAssetObject_object_(
            this,
            (System_String_o *)StringLiteral_7450/*"GrandServantResetDialog"*/,
            (const MethodInfo_3885784 *)Method_GrandServantListRootComponent_InstantiateAssetObject_GrandServantResetDialog___);
    this->fields.grandServantResetDialog = (struct GrandServantResetDialog_o *)v10;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantResetDialog,
      (int32_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (BaseDialog_o *)*p_grandServantResetDialog;
  if ( !*p_grandServantResetDialog
    || (BaseDialog__Init(v17, 0),
        v18 = this->fields.grandServantResetDialog,
        v19 = (GrandServantResetDialog_CallbackFunc_o *)sub_21FFEBC(GrandServantResetDialog_CallbackFunc_TypeInfo),
        GrandServantResetDialog_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          (intptr_t)Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__41_0__,
          v20),
        !v18) )
  {
    sub_21FFECC(v17, v9);
  }
  GrandServantResetDialog__Open(v18, grandGraphEntity, userServantEntity, v19, v21);
}


void GrandServantListRootComponent__SendMessageCloseStatus(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_593325C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3658/*"CLOSE_STATUS"*/);
    byte_593325C = 1;
  }
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_3658/*"CLOSE_STATUS"*/, 0);
}


void GrandServantListRootComponent__SendMessageMenuCancel(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_593325D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8992/*"MENU_CANCEL"*/);
    byte_593325D = 1;
  }
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_8992/*"MENU_CANCEL"*/, 0);
}


void GrandServantListRootComponent__SendMessageMenuDecide(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_593325E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8993/*"MENU_DECIDE"*/);
    byte_593325E = 1;
  }
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_8993/*"MENU_DECIDE"*/, 0);
}


void GrandServantListRootComponent__StartSelectGrandServant(
        GrandServantListRootComponent_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        System_Collections_Generic_List_SelectGrandServantInfo__o *servantInfos,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
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
  Il2CppObject *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  Il2CppObject *Instance; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  AvalonSceneManager_c *v38; // x8
  CommonUI_o *v39; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x21

  if ( (byte_593324E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_InstantiateAssetObject_SelectGrandServantComponent___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass31_0__StartSelectGrandServant_b__2__);
    sub_21FFC50(&GrandServantListRootComponent___c__DisplayClass31_0_TypeInfo);
    sub_21FFC50(&StringLiteral_13185/*"SelectGrandServantComponent"*/);
    sub_21FFC50(&StringLiteral_12833/*"START_SELECT_GRAND"*/);
    byte_593324E = 1;
  }
  v7 = sub_21FFEBC(GrandServantListRootComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = grandGraphEntity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)grandGraphEntity, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 40) = servantInfos;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)servantInfos, v22, v23, v24, v25, v26, v27);
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12833/*"START_SELECT_GRAND"*/, 0);
  v28 = GrandServantListRootComponent__InstantiateAssetObject_object_(
          this,
          (System_String_o *)StringLiteral_13185/*"SelectGrandServantComponent"*/,
          (const MethodInfo_3885784 *)Method_GrandServantListRootComponent_InstantiateAssetObject_SelectGrandServantComponent___);
  *(_QWORD *)(v7 + 32) = v28;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v28, v29, v30, v31, v32, v33, v34);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v38 = AvalonSceneManager_TypeInfo;
  v39 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v36, v37);
    v38 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v38->static_fields->DEFAULT_FADE_TIME;
  v41 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v7,
    Method_GrandServantListRootComponent___c__DisplayClass31_0__StartSelectGrandServant_b__2__,
    0);
  if ( !v39 )
LABEL_8:
    sub_21FFECC(v8, v9);
  CommonUI__maskFadeout(v39, 2, DEFAULT_FADE_TIME, v41, 0);
}


void GrandServantListRootComponent___OnSelectConfirmGrandServantResetDialog_b__40_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  GrandServantListData_o *grandServantListData; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x2
  GrandServantListSlotData_o *SlotData; // x0
  __int64 v14; // x19
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  NetworkManager_ResultCallbackFunc_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2

  if ( (byte_593326C & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_SetupGrandServantRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass40_0__OnSelectConfirmGrandServantResetDialog_b__2__);
    sub_21FFC50(&GrandServantListRootComponent___c__DisplayClass40_0_TypeInfo);
    byte_593326C = 1;
  }
  v3 = sub_21FFEBC(GrandServantListRootComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  grandServantListData = this->fields.grandServantListData;
  if ( !grandServantListData )
    goto LABEL_10;
  SlotData = GrandServantListData__GetSlotData(grandServantListData, this->fields.lastSelectedGrandGraphId, v12);
  *(_QWORD *)(v3 + 16) = SlotData;
  v14 = v3 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)SlotData, v15, v16, v17, v18, v19, v20);
  v21 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v21,
    (Il2CppObject *)v3,
    Method_GrandServantListRootComponent___c__DisplayClass40_0__OnSelectConfirmGrandServantResetDialog_b__2__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22, v23);
  grandServantListData = (GrandServantListData_o *)NetworkManager__getRequest_object_(
                                                     v21,
                                                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_SetupGrandServantRequest___);
  if ( !*(_QWORD *)v14 || !grandServantListData )
LABEL_10:
    sub_21FFECC(grandServantListData, v5);
  SetupGrandServantRequest__beginRequest(
    (SetupGrandServantRequest_o *)grandServantListData,
    *(_DWORD *)(*(_QWORD *)v14 + 40LL),
    0,
    0);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListRootComponent___OnSelectEditEquip_b__42_0(
        GrandServantListRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  GrandServantListData_o *v5; // x21
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  TitleInfoControl_o *menu; // x0
  struct GrandServantListMenu_o *listMenu; // x8
  const MethodInfo *v15; // x1

  if ( (byte_593326E & 1) == 0 )
  {
    sub_21FFC50(&GrandServantListData_TypeInfo);
    byte_593326E = 1;
  }
  if ( isDecide )
  {
    v5 = (GrandServantListData_o *)sub_21FFEBC(GrandServantListData_TypeInfo);
    GrandServantListData___ctor(v5, v6);
    this->fields.grandServantListData = v5;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantListData,
      (int32_t)v5,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    listMenu = this->fields.listMenu;
    if ( !listMenu || (menu = (TitleInfoControl_o *)listMenu->fields.menu) == 0 )
LABEL_9:
      sub_21FFECC(menu, isDecide);
    ((void (__fastcall *)(TitleInfoControl_o *, struct GrandServantListData_o *, _QWORD))menu->klass[1]._1.byval_arg.data)(
      menu,
      this->fields.grandServantListData,
      *(_QWORD *)&menu->klass[1]._1.byval_arg.bits);
  }
  menu = this->fields.titleInfo;
  if ( !menu )
    goto LABEL_9;
  TitleInfoControl__setDispParticleObj(menu, this->fields.isParticleActive, 0);
  this->fields.isParticleActive = 0;
  GrandServantListRootComponent__SendMessageMenuDecide(this, v15);
}


void GrandServantListRootComponent___OnSelectGrandServantListMenuBranchDialog_b__35_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_5933268 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_12830/*"START_RESET_GRAND"*/);
    byte_5933268 = 1;
  }
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12830/*"START_RESET_GRAND"*/, 0);
  GrandServantListRootComponent__OpenConfirmUseGrandServantResetItemDialog(this, v3);
}


void GrandServantListRootComponent___OnSelectGrandServantListMenuBranchDialog_b__35_1(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_5933269 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_12834/*"START_SELECT_SERVANT"*/);
    byte_5933269 = 1;
  }
  GrandServantListRootComponent__OpenChangeGrandSameServantListMenu(this, method);
  SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_12834/*"START_SELECT_SERVANT"*/, 0);
}


void GrandServantListRootComponent___OnSelectGrandServantListMenuBranchDialog_b__35_2(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandServantListData_o *grandServantListData; // x0
  int32_t ParentClassBoardBaseId; // w0
  __int64 v6; // x1
  __int64 v7; // x2
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  int32_t v9; // w21
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  struct SceneJumpInfo_o *v12; // x8
  struct SceneJumpInfo_o *backSceneJumpInfo; // x19
  const MethodInfo_476E8C0 *v14; // x0
  Il2CppObject *v15; // x3
  __int64 v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  SceneJumpInfo_o *v23; // x19

  if ( (byte_593326A & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_593326A = 1;
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
                             method);
  sceneJumpInfo = this->fields.sceneJumpInfo;
  v9 = ParentClassBoardBaseId;
  if ( !sceneJumpInfo )
    goto LABEL_13;
  returnSceneName = sceneJumpInfo->fields.returnSceneName;
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v6, v7);
  SceneName = SceneList__getSceneName(91, 0);
  grandServantListData = (GrandServantListData_o *)System_String__op_Equality(returnSceneName, SceneName, 0);
  if ( ((unsigned __int8)grandServantListData & 1) == 0 )
  {
LABEL_13:
    v16 = sub_21FFEBC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_48427132((SceneJumpInfo_o *)v16, v9, 0);
    if ( v16 )
    {
      SceneJumpInfo__SetReturnNowScene((SceneJumpInfo_o *)v16, 0);
      v23 = this->fields.sceneJumpInfo;
      if ( !v23 )
      {
        v23 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor(v23, 0);
      }
      *(_QWORD *)(v16 + 56) = v23;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 56), (int32_t)v23, v17, v18, v19, v20, v21, v22);
      grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( grandServantListData )
      {
        v15 = (Il2CppObject *)v16;
        goto LABEL_18;
      }
    }
LABEL_19:
    sub_21FFECC(grandServantListData, method);
  }
  v12 = this->fields.sceneJumpInfo;
  if ( !v12 )
    goto LABEL_19;
  backSceneJumpInfo = v12->fields.backSceneJumpInfo;
  if ( !backSceneJumpInfo )
    goto LABEL_19;
  v14 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  backSceneJumpInfo->fields.id = v9;
  grandServantListData = (GrandServantListData_o *)SingletonMonoBehaviour_object___get_Instance(v14);
  if ( !grandServantListData )
    goto LABEL_19;
  v15 = (Il2CppObject *)backSceneJumpInfo;
LABEL_18:
  AvalonSceneManager__changeScene((AvalonSceneManager_o *)grandServantListData, 91, 1, v15, 0);
}


void GrandServantListRootComponent___OpenChangeGrandSameServantListMenu_b__37_0(
        GrandServantListRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  GrandServantListData_o *v4; // x21
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct GrandServantListMenuLayout_o *menu; // x0
  __int64 v13; // x1
  struct GrandServantListMenu_o *listMenu; // x8
  const MethodInfo *v15; // x1

  if ( (byte_593326B & 1) == 0 )
  {
    sub_21FFC50(&GrandServantListData_TypeInfo);
    byte_593326B = 1;
  }
  v4 = (GrandServantListData_o *)sub_21FFEBC(GrandServantListData_TypeInfo);
  GrandServantListData___ctor(v4, v5);
  this->fields.grandServantListData = v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantListData,
    (int32_t)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  listMenu = this->fields.listMenu;
  if ( !listMenu || (menu = listMenu->fields.menu) == 0 )
    sub_21FFECC(menu, v13);
  ((void (__fastcall *)(struct GrandServantListMenuLayout_o *, struct GrandServantListData_o *, const MethodInfo *))menu->klass->vtable._6_UpdateView.methodPtr)(
    menu,
    this->fields.grandServantListData,
    menu->klass->vtable._6_UpdateView.method);
  GrandServantListRootComponent__SendMessageMenuDecide(this, v15);
}


void GrandServantListRootComponent___OpenConfirmedGrandServantSelectDialog_b__32_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ConfirmedGrandServantSelectDialog_o *confirmedGrandServantSelectDialog; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_5933267 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_DecideActionSendMessageMenuDecide__);
    sub_21FFC50(&Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__32_0__);
    byte_5933267 = 1;
  }
  v3 = Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__32_0__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__32_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog_b__32_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  confirmedGrandServantSelectDialog = this->fields.confirmedGrandServantSelectDialog;
  v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_GrandServantListRootComponent_DecideActionSendMessageMenuDecide__,
    0);
  if ( !confirmedGrandServantSelectDialog )
    sub_21FFECC(v7, v8);
  ConfirmedGrandServantSelectDialog__Close(confirmedGrandServantSelectDialog, v6, 0);
}


void GrandServantListRootComponent___OpenGrandServantResetDialog_b__41_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BaseDialog_o *grandServantResetDialog; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_593326D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_SendMessageMenuDecide__);
    sub_21FFC50(&Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__41_0__);
    byte_593326D = 1;
  }
  v3 = Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__41_0__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__41_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent__OpenGrandServantResetDialog_b__41_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  grandServantResetDialog = (BaseDialog_o *)this->fields.grandServantResetDialog;
  v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_GrandServantListRootComponent_SendMessageMenuDecide__, 0);
  if ( !grandServantResetDialog )
    sub_21FFECC(v7, v8);
  BaseDialog__SafeClose(grandServantResetDialog, v6, 0);
}


void GrandServantListRootComponent___beginStartUp_b__20_0(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_5933264 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent__beginStartUp_b__20_1__);
    byte_5933264 = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_GrandServantListRootComponent__beginStartUp_b__20_1__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4, v5);
  AtlasManager__LoadUISkin(v3, 1, 1, 0);
}


void GrandServantListRootComponent___beginStartUp_b__20_1(
        GrandServantListRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AssetLoader_LoadEndDataHandler_o *v4; // x20

  if ( (byte_5933265 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent__beginStartUp_b__20_2__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&StringLiteral_7445/*"GrandServantList"*/);
    byte_5933265 = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  AssetManager__SetAssetBundleUnload((System_String_o *)StringLiteral_7445/*"GrandServantList"*/, 0);
  v4 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v4,
    (Il2CppObject *)this,
    Method_GrandServantListRootComponent__beginStartUp_b__20_2__,
    0);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_7445/*"GrandServantList"*/, v4, 1, 0, 0);
}


void GrandServantListRootComponent___beginStartUp_b__20_2(
        GrandServantListRootComponent_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TitleInfoControl_o *titleInfo; // x0
  bool v6; // w1
  __int64 v7; // x1
  __int64 v8; // x2
  UISprite_o *backgroundSprite; // x20

  if ( (byte_5933266 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_21356/*"img_grand_servant_list_bg01"*/);
    byte_5933266 = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, _, method);
  AtlasManager__CacheGrandServantListAtlas(0);
  titleInfo = this->fields.titleInfo;
  if ( this->fields.supportInfoJump )
  {
    if ( titleInfo )
    {
      TitleInfoControl__setTitleInfo_46823976(titleInfo, this->fields.myFSM, 2, 99, 1, 0);
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
            goto LABEL_16;
          }
        }
      }
    }
LABEL_19:
    sub_21FFECC(titleInfo, v4);
  }
  if ( !titleInfo )
    goto LABEL_19;
  TitleInfoControl__setTitleInfo_46823976(titleInfo, this->fields.myFSM, 2, 97, 1, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_19;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0);
  if ( !titleInfo )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_19;
  v6 = 1;
LABEL_16:
  TitleInfoControl__SetHelpBtn(titleInfo, v6, 0);
  backgroundSprite = this->fields.backgroundSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v8);
  AtlasManager__SetGrandServantListImage(backgroundSprite, (System_String_o *)StringLiteral_21356/*"img_grand_servant_list_bg01"*/, 0);
  SceneRootComponent__beginStartUp_48429240((SceneRootComponent_o *)this, 0);
}


void GrandServantListRootComponent__beginFinish(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  GrandServantListMenu_o *listMenu; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct GrandServantListMenuBranchDialog_o **p_grandServantListMenuBranchDialog; // x20
  UnityEngine_Object_o *grandServantListMenuBranchDialog; // x21
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct ConfirmUseGrandServantResetItemDialog_o **p_confirmUseGrandServantResetItemDialog; // x20
  UnityEngine_Object_o *confirmUseGrandServantResetItemDialog; // x21
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
  struct ConfirmedGrandServantSelectDialog_o **p_confirmedGrandServantSelectDialog; // x20
  UnityEngine_Object_o *confirmedGrandServantSelectDialog; // x21
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
  struct ConfirmGrandServantResetDialog_o **p_confirmGrandServantResetDialog; // x20
  UnityEngine_Object_o *confirmGrandServantResetDialog; // x21
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
  struct GrandServantResetDialog_o **p_grandServantResetDialog; // x20
  UnityEngine_Object_o *grandServantResetDialog; // x21
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
  struct GrandEquipGraphListMenu_o **p_grandEquipGraphListMenu; // x20
  UnityEngine_Object_o *grandEquipGraphListMenu; // x21
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
  struct ChangeGrandSameServantListMenu_o **p_changeGrandSameServantListMenu; // x20
  UnityEngine_Object_o *changeGrandSameServantListMenu; // x21
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  UnityEngine_Object_o *v83; // x21
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  struct SelectGrandServantComponent_o **p_selectGrandServantComponent; // x20
  UnityEngine_Object_o *selectGrandServantComponent; // x21
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  UnityEngine_Object_o *v95; // x21
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  AtlasManager_c *v102; // x0
  int v103; // w8
  __int64 v104; // x1
  __int64 v105; // x2

  if ( (byte_5933244 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_21FFC50(&StringLiteral_7445/*"GrandServantList"*/);
    byte_5933244 = 1;
  }
  listMenu = this->fields.listMenu;
  if ( !listMenu )
    goto LABEL_66;
  GrandServantListMenu__Release(listMenu, method);
  p_grandServantListMenuBranchDialog = &this->fields.grandServantListMenuBranchDialog;
  grandServantListMenuBranchDialog = (UnityEngine_Object_o *)this->fields.grandServantListMenuBranchDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(grandServantListMenuBranchDialog, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_grandServantListMenuBranchDialog;
    if ( !*p_grandServantListMenuBranchDialog )
      goto LABEL_66;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    *p_grandServantListMenuBranchDialog = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantListMenuBranchDialog,
      0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  p_confirmUseGrandServantResetItemDialog = &this->fields.confirmUseGrandServantResetItemDialog;
  confirmUseGrandServantResetItemDialog = (UnityEngine_Object_o *)this->fields.confirmUseGrandServantResetItemDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v8);
  if ( UnityEngine_Object__op_Inequality(confirmUseGrandServantResetItemDialog, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_confirmUseGrandServantResetItemDialog;
    if ( !*p_confirmUseGrandServantResetItemDialog )
      goto LABEL_66;
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
    UnityEngine_Object__Destroy_83246496(v23, 0);
    *p_confirmUseGrandServantResetItemDialog = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.confirmUseGrandServantResetItemDialog,
      0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  p_confirmedGrandServantSelectDialog = &this->fields.confirmedGrandServantSelectDialog;
  confirmedGrandServantSelectDialog = (UnityEngine_Object_o *)this->fields.confirmedGrandServantSelectDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v20);
  if ( UnityEngine_Object__op_Inequality(confirmedGrandServantSelectDialog, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_confirmedGrandServantSelectDialog;
    if ( !*p_confirmedGrandServantSelectDialog )
      goto LABEL_66;
    v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
    UnityEngine_Object__Destroy_83246496(v35, 0);
    *p_confirmedGrandServantSelectDialog = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.confirmedGrandServantSelectDialog,
      0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  p_confirmGrandServantResetDialog = &this->fields.confirmGrandServantResetDialog;
  confirmGrandServantResetDialog = (UnityEngine_Object_o *)this->fields.confirmGrandServantResetDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v32);
  if ( UnityEngine_Object__op_Inequality(confirmGrandServantResetDialog, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_confirmGrandServantResetDialog;
    if ( !*p_confirmGrandServantResetDialog )
      goto LABEL_66;
    v47 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45, v46);
    UnityEngine_Object__Destroy_83246496(v47, 0);
    *p_confirmGrandServantResetDialog = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.confirmGrandServantResetDialog,
      0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  p_grandServantResetDialog = &this->fields.grandServantResetDialog;
  grandServantResetDialog = (UnityEngine_Object_o *)this->fields.grandServantResetDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v44);
  if ( UnityEngine_Object__op_Inequality(grandServantResetDialog, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_grandServantResetDialog;
    if ( !*p_grandServantResetDialog )
      goto LABEL_66;
    v59 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57, v58);
    UnityEngine_Object__Destroy_83246496(v59, 0);
    *p_grandServantResetDialog = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantResetDialog,
      0,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  p_grandEquipGraphListMenu = &this->fields.grandEquipGraphListMenu;
  grandEquipGraphListMenu = (UnityEngine_Object_o *)this->fields.grandEquipGraphListMenu;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v56);
  if ( UnityEngine_Object__op_Inequality(grandEquipGraphListMenu, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_grandEquipGraphListMenu;
    if ( !*p_grandEquipGraphListMenu )
      goto LABEL_66;
    v71 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v69, v70);
    UnityEngine_Object__Destroy_83246496(v71, 0);
    *p_grandEquipGraphListMenu = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.grandEquipGraphListMenu,
      0,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  p_changeGrandSameServantListMenu = &this->fields.changeGrandSameServantListMenu;
  changeGrandSameServantListMenu = (UnityEngine_Object_o *)this->fields.changeGrandSameServantListMenu;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v68);
  if ( UnityEngine_Object__op_Inequality(changeGrandSameServantListMenu, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_changeGrandSameServantListMenu;
    if ( !*p_changeGrandSameServantListMenu )
      goto LABEL_66;
    v83 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v81, v82);
    UnityEngine_Object__Destroy_83246496(v83, 0);
    *p_changeGrandSameServantListMenu = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.changeGrandSameServantListMenu,
      0,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  p_selectGrandServantComponent = &this->fields.selectGrandServantComponent;
  selectGrandServantComponent = (UnityEngine_Object_o *)this->fields.selectGrandServantComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v80);
  if ( UnityEngine_Object__op_Inequality(selectGrandServantComponent, 0, 0) )
  {
    listMenu = (GrandServantListMenu_o *)*p_selectGrandServantComponent;
    if ( !*p_selectGrandServantComponent )
      goto LABEL_66;
    v95 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)listMenu, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93, v94);
    UnityEngine_Object__Destroy_83246496(v95, 0);
    *p_selectGrandServantComponent = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectGrandServantComponent,
      0,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101);
  }
  v102 = AtlasManager_TypeInfo;
  v103 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.isParticleActive = 0;
  if ( !v103 )
    j_il2cpp_runtime_class_init_0(v102, method, v92);
  AtlasManager__ClearCachedGrandServantListAtlas(0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v104, v105);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_7445/*"GrandServantList"*/, 0);
  listMenu = (GrandServantListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !listMenu )
LABEL_66:
    sub_21FFECC(listMenu, method);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)listMenu, 2, 0, 0);
}


void GrandServantListRootComponent__beginInitialize(GrandServantListRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5933242 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5933242 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0),
        (Instance = (AvalonSceneManager_o *)this->fields.titleInfo) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  v5.fields.y = *(float *)"";
  v5.fields.z = 0.0;
  v5.fields.x = -14.0;
  TitleInfoControl__SetHelpBtnPos((TitleInfoControl_o *)Instance, v5, 0);
}


void GrandServantListRootComponent__beginStartUp(
        GrandServantListRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppClass *v10; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v12; // x10
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  struct SupportInfoJump_o **p_supportInfoJump; // x0
  int32_t v21; // w1
  Il2CppClass *v22; // x8
  __int64 v23; // x9
  Il2CppObject *v24; // x10
  __int64 v25; // x1
  UnityEngine_Component_o *titleInfo; // x0
  System_Action_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2

  if ( (byte_5933243 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent__beginStartUp_b__20_0__);
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&SupportInfoJump_TypeInfo);
    byte_5933243 = 1;
  }
  if ( data )
  {
    v10 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SceneJumpInfo_TypeInfo )
        v12 = data;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v12;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v10 )
        v21 = (int)data;
      else
        v21 = 0;
    }
    else
    {
      v21 = 0;
    }
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.sceneJumpInfo,
      v21,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v22 = (Il2CppClass *)SupportInfoJump_TypeInfo;
    v23 = SupportInfoJump_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v23 )
    {
      if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v23 - 1] == SupportInfoJump_TypeInfo )
        v24 = data;
      else
        v24 = 0;
    }
    else
    {
      v24 = 0;
    }
    this->fields.supportInfoJump = (struct SupportInfoJump_o *)v24;
    p_supportInfoJump = &this->fields.supportInfoJump;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v23 )
    {
      if ( data->klass->_2.typeHierarchy[v23 - 1] == v22 )
        v19 = (int)data;
      else
        v19 = 0;
    }
    else
    {
      v19 = 0;
    }
  }
  else
  {
    this->fields.sceneJumpInfo = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.sceneJumpInfo,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v19 = 0;
    this->fields.supportInfoJump = 0;
    p_supportInfoJump = &this->fields.supportInfoJump;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_supportInfoJump, v19, v13, v14, v15, v16, v17, v18);
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0)) == 0 )
    sub_21FFECC(titleInfo, v25);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0);
  v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_GrandServantListRootComponent__beginStartUp_b__20_0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28, v29);
  AtlasManager__LoadUISkin(v27, 2, 1, 0);
}


void GrandServantListRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593326F & 1) == 0 )
  {
    sub_21FFC50(&GrandServantListRootComponent___c_TypeInfo);
    byte_593326F = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(GrandServantListRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantListRootComponent___c_TypeInfo->static_fields->__9 = (struct GrandServantListRootComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)GrandServantListRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantListRootComponent___c___ctor(GrandServantListRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListRootComponent___c___EndShowServantWithQuest_b__44_0(
        GrandServantListRootComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5933272 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5933272 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void GrandServantListRootComponent___c___OnClickHelpBtn_b__50_0(
        GrandServantListRootComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 100, action, 1, 0);
}


void GrandServantListRootComponent___c___OnClickHelpBtn_b__50_1(
        GrandServantListRootComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialMaster__ShowTutorialWithoutCheck_49214220(-1, 101, action, 0, 0, 0, 0, 0);
}


bool GrandServantListRootComponent___c___OnSelectEditServant_b__29_1(
        GrandServantListRootComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return e->fields._IsValid_k__BackingField;
}


bool GrandServantListRootComponent___c___OnSelectEditServant_b__29_2(
        GrandServantListRootComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return e->fields._CanSelectToGrand_k__BackingField;
}


int32_t GrandServantListRootComponent___c___OnSelectEditServant_b__29_3(
        GrandServantListRootComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return e->fields._ExtraGroupNo_k__BackingField;
}


int32_t GrandServantListRootComponent___c___OnSelectEditServant_b__29_4(
        GrandServantListRootComponent___c_o *this,
        System_Linq_IGrouping_int__SelectGrandServantInfo__o *g,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__SelectGrandServantInfo__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_5933270 & 1) == 0 )
  {
    this = (GrandServantListRootComponent___c_o *)sub_21FFC50(&System_Linq_IGrouping_int__SelectGrandServantInfo__TypeInfo);
    byte_5933270 = 1;
  }
  if ( !g )
    sub_21FFECC(this, g);
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
    v7 = sub_2237E2C(g, System_Linq_IGrouping_int__SelectGrandServantInfo__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__SelectGrandServantInfo__o *, _QWORD))v7)(
           g,
           *(_QWORD *)(v7 + 8));
}


System_Collections_Generic_List_SelectGrandServantInfo__o *GrandServantListRootComponent___c___OnSelectEditServant_b__29_5(
        GrandServantListRootComponent___c_o *this,
        System_Linq_IGrouping_int__SelectGrandServantInfo__o *g,
        const MethodInfo *method)
{
  if ( (byte_5933271 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
    byte_5933271 = 1;
  }
  return (System_Collections_Generic_List_SelectGrandServantInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)g,
                                                                        (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
}


bool GrandServantListRootComponent___c___OnSelectEditServant_b__29_6(
        GrandServantListRootComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return e->fields._CanSelectToGrand_k__BackingField;
}


bool GrandServantListRootComponent___c___OnSelectEditServant_b__29_7(
        GrandServantListRootComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return e->fields._CanSelectToGrand_k__BackingField;
}


void GrandServantListRootComponent___c__DisplayClass29_0___ctor(
        GrandServantListRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


SelectGrandServantInfo_o *GrandServantListRootComponent___c__DisplayClass29_0___OnSelectEditServant_b__0(
        GrandServantListRootComponent___c__DisplayClass29_0_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  GrandServantListRootComponent___c__DisplayClass29_0_o *v4; // x20
  struct GrandServantListSlotData_o *slotData; // x8
  GrandGraphEntity_o *GrandGraphEntity_k__BackingField; // x20
  SelectGrandServantInfo_o *v7; // x21

  v4 = this;
  if ( (byte_5933273 & 1) == 0 )
  {
    this = (GrandServantListRootComponent___c__DisplayClass29_0_o *)sub_21FFC50(&SelectGrandServantInfo_TypeInfo);
    byte_5933273 = 1;
  }
  slotData = v4->fields.slotData;
  if ( !slotData )
    sub_21FFECC(this, e);
  GrandGraphEntity_k__BackingField = slotData->fields._GrandGraphEntity_k__BackingField;
  v7 = (SelectGrandServantInfo_o *)sub_21FFEBC(SelectGrandServantInfo_TypeInfo);
  SelectGrandServantInfo___ctor(v7, GrandGraphEntity_k__BackingField, e, 0);
  return v7;
}


void GrandServantListRootComponent___c__DisplayClass29_1___ctor(
        GrandServantListRootComponent___c__DisplayClass29_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListRootComponent___c__DisplayClass29_1___OnSelectEditServant_b__10(
        GrandServantListRootComponent___c__DisplayClass29_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dialog; // x20
  GrandServantListRootComponent_o *_4__this; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  struct GrandServantListRootComponent___c__DisplayClass29_0_o *CS___8__locals1; // x9
  struct GrandServantListSlotData_o *slotData; // x8

  if ( (byte_5933276 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933276 = 1;
  }
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83246496(dialog, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (slotData = CS___8__locals1->fields.slotData) == 0
    || (_4__this = CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_21FFECC(_4__this, v6);
  }
  GrandServantListRootComponent__StartSelectGrandServant(
    _4__this,
    slotData->fields._GrandGraphEntity_k__BackingField,
    this->fields.ex2ServantInfos,
    v7);
}


void GrandServantListRootComponent___c__DisplayClass29_1___OnSelectEditServant_b__11(
        GrandServantListRootComponent___c__DisplayClass29_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dialog; // x20
  GrandServantListRootComponent_o *_4__this; // x0
  const MethodInfo *v6; // x1
  struct GrandServantListRootComponent___c__DisplayClass29_0_o *CS___8__locals1; // x8

  if ( (byte_5933277 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933277 = 1;
  }
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83246496(dialog, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (_4__this = CS___8__locals1->fields.__4__this) == 0 )
    sub_21FFECC(_4__this, v6);
  GrandServantListRootComponent__SendMessageMenuCancel(_4__this, v6);
}


void GrandServantListRootComponent___c__DisplayClass29_1___OnSelectEditServant_b__8(
        GrandServantListRootComponent___c__DisplayClass29_1_o *this,
        int32_t res,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Action_o **p__9__11; // x21
  System_Action_o *_9__11; // x22
  BaseDialog_o *dialog; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  if ( (byte_5933274 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__10__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__11__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__8__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__9__);
    byte_5933274 = 1;
  }
  if ( res == 2 )
  {
    v20 = Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__8__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__8__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__8__);
    v21 = (System_Reflection_MethodBase_o *)sub_21FFC34(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 1, 0, 0);
    p__9__11 = &this->fields.__9__11;
    _9__11 = this->fields.__9__11;
    dialog = (BaseDialog_o *)this->fields.dialog;
    if ( _9__11 )
      goto LABEL_19;
    _9__11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)this,
      Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__11__,
      0);
    this->fields.__9__11 = _9__11;
    goto LABEL_18;
  }
  if ( res == 1 )
  {
    v18 = Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__8__;
    if ( (*((_BYTE *)Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__8__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__8__);
    v19 = (System_Reflection_MethodBase_o *)sub_21FFC34(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
    p__9__11 = &this->fields.__9__10;
    _9__11 = this->fields.__9__10;
    dialog = (BaseDialog_o *)this->fields.dialog;
    if ( _9__11 )
      goto LABEL_19;
    _9__11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)this,
      Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__10__,
      0);
    this->fields.__9__10 = _9__11;
    goto LABEL_18;
  }
  if ( res )
    return;
  v5 = Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__8__;
  if ( (*((_BYTE *)Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__8__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68(Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__8__);
  v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  p__9__11 = &this->fields.__9__9;
  _9__11 = this->fields.__9__9;
  dialog = (BaseDialog_o *)this->fields.dialog;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)this,
      Method_GrandServantListRootComponent___c__DisplayClass29_1__OnSelectEditServant_b__9__,
      0);
    this->fields.__9__9 = _9__11;
LABEL_18:
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__9__11, (int32_t)_9__11, v12, v13, v14, v15, v16, v17);
  }
LABEL_19:
  if ( !dialog )
    sub_21FFECC(v7, v8);
  BaseDialog__SafeClose(dialog, _9__11, 0);
}


void GrandServantListRootComponent___c__DisplayClass29_1___OnSelectEditServant_b__9(
        GrandServantListRootComponent___c__DisplayClass29_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dialog; // x20
  GrandServantListRootComponent_o *_4__this; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  struct GrandServantListRootComponent___c__DisplayClass29_0_o *CS___8__locals1; // x9
  struct GrandServantListSlotData_o *slotData; // x8

  if ( (byte_5933275 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933275 = 1;
  }
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83246496(dialog, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (slotData = CS___8__locals1->fields.slotData) == 0
    || (_4__this = CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_21FFECC(_4__this, v6);
  }
  GrandServantListRootComponent__StartSelectGrandServant(
    _4__this,
    slotData->fields._GrandGraphEntity_k__BackingField,
    this->fields.ex1ServantInfos,
    v7);
}


void GrandServantListRootComponent___c__DisplayClass31_0___ctor(
        GrandServantListRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListRootComponent___c__DisplayClass31_0___StartSelectGrandServant_b__2(
        GrandServantListRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandServantListRootComponent___c__DisplayClass31_0_o *v3; // x19
  struct GrandServantListRootComponent_o *_4__this; // x8
  struct GrandServantListMenu_o *listMenu; // x8
  struct GrandServantListRootComponent_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct GrandServantListRootComponent_o *v13; // x8
  SelectGrandServantComponent_o *selectGrandServantComponent; // x20
  GrandGraphEntity_o *grandGraphEntity; // x21
  System_Collections_Generic_List_SelectGrandServantInfo__o *servantInfos; // x22
  System_Action_o *v17; // x23
  System_Action_object__o *v18; // x24
  struct GrandServantListRootComponent_o *v19; // x8
  struct GrandServantListRootComponent_o *v20; // x8

  v3 = this;
  if ( (byte_593327B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SelectGrandServantComponent___);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass31_0__StartSelectGrandServant_g__BackAction_0__);
    this = (GrandServantListRootComponent___c__DisplayClass31_0_o *)sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass31_0__StartSelectGrandServant_g__DecideAction_1__);
    byte_593327B = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  listMenu = _4__this->fields.listMenu;
  if ( !listMenu )
    goto LABEL_14;
  this = (GrandServantListRootComponent___c__DisplayClass31_0_o *)listMenu->fields.menu;
  if ( !this )
    goto LABEL_14;
  GrandServantListMenuLayout__SetItemSlotActive((GrandServantListMenuLayout_o *)this, 0, v2);
  this = (GrandServantListRootComponent___c__DisplayClass31_0_o *)v3->fields.selectGrandServant;
  if ( !this )
    goto LABEL_14;
  v6 = v3->fields.__4__this;
  this = (GrandServantListRootComponent___c__DisplayClass31_0_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)this,
                                                                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SelectGrandServantComponent___);
  if ( !v6 )
    goto LABEL_14;
  v6->fields.selectGrandServantComponent = (struct SelectGrandServantComponent_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.selectGrandServantComponent,
    (int32_t)this,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = v3->fields.__4__this;
  if ( !v13 )
    goto LABEL_14;
  selectGrandServantComponent = v13->fields.selectGrandServantComponent;
  grandGraphEntity = v3->fields.grandGraphEntity;
  servantInfos = v3->fields.servantInfos;
  v17 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v3,
    Method_GrandServantListRootComponent___c__DisplayClass31_0__StartSelectGrandServant_g__BackAction_0__,
    0);
  v18 = (System_Action_object__o *)sub_21FFEBC(System_Action_UserServantEntity__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v3,
    Method_GrandServantListRootComponent___c__DisplayClass31_0__StartSelectGrandServant_g__DecideAction_1__,
    0);
  if ( !selectGrandServantComponent
    || (SelectGrandServantComponent__SetUp(
          selectGrandServantComponent,
          grandGraphEntity,
          servantInfos,
          v17,
          (System_Action_UserServantEntity__o *)v18,
          0),
        (v19 = v3->fields.__4__this) == 0)
    || (BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v19->fields.selectGrandServantComponent, 1, 0),
        (v20 = v3->fields.__4__this) == 0)
    || (this = (GrandServantListRootComponent___c__DisplayClass31_0_o *)v20->fields.titleInfo) == 0 )
  {
LABEL_14:
    sub_21FFECC(this, method);
  }
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)this, 0, 0);
}


void GrandServantListRootComponent___c__DisplayClass31_0___StartSelectGrandServant_b__3(
        GrandServantListRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandServantListRootComponent___c__DisplayClass31_0_o *v3; // x19
  struct GrandServantListRootComponent_o *_4__this; // x8
  struct GrandServantListMenu_o *listMenu; // x8
  struct GrandServantListRootComponent_o *v6; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  AvalonSceneManager_c *v19; // x8
  CommonUI_o *v20; // x20
  Il2CppObject *v21; // x22
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21
  struct GrandServantListRootComponent_o *v24; // x8

  v3 = this;
  if ( (byte_5933279 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_GrandServantListRootComponent_SendMessageMenuDecide__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (GrandServantListRootComponent___c__DisplayClass31_0_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5933279 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  listMenu = _4__this->fields.listMenu;
  if ( !listMenu )
    goto LABEL_17;
  this = (GrandServantListRootComponent___c__DisplayClass31_0_o *)listMenu->fields.menu;
  if ( !this )
    goto LABEL_17;
  GrandServantListMenuLayout__SetItemSlotActive((GrandServantListMenuLayout_o *)this, 1, v2);
  v6 = v3->fields.__4__this;
  if ( !v6 )
    goto LABEL_17;
  this = (GrandServantListRootComponent___c__DisplayClass31_0_o *)v6->fields.selectGrandServantComponent;
  if ( !this )
    goto LABEL_17;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
  this = (GrandServantListRootComponent___c__DisplayClass31_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_17;
  this[3].fields.selectGrandServant = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this[3].fields.selectGrandServant, 0, v10, v11, v12, v13, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  v20 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v17, v18);
    v19 = AvalonSceneManager_TypeInfo;
  }
  v21 = (Il2CppObject *)v3->fields.__4__this;
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v23, v21, Method_GrandServantListRootComponent_SendMessageMenuDecide__, 0);
  if ( !v20
    || (this = (GrandServantListRootComponent___c__DisplayClass31_0_o *)CommonUI__maskFadein(
                                                                          v20,
                                                                          DEFAULT_FADE_TIME,
                                                                          v23,
                                                                          0),
        (v24 = v3->fields.__4__this) == 0)
    || (this = (GrandServantListRootComponent___c__DisplayClass31_0_o *)v24->fields.titleInfo) == 0 )
  {
LABEL_17:
    sub_21FFECC(this, method);
  }
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)this, 1, 0);
}


void GrandServantListRootComponent___c__DisplayClass31_0___StartSelectGrandServant_g__BackAction_0(
        GrandServantListRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_5933278 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass31_0__StartSelectGrandServant_b__3__);
    byte_5933278 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_GrandServantListRootComponent___c__DisplayClass31_0__StartSelectGrandServant_b__3__,
    0);
  if ( !v7 )
    sub_21FFECC(v10, v11);
  CommonUI__maskFadeout(v7, 2, DEFAULT_FADE_TIME, v9, 0);
}


void GrandServantListRootComponent___c__DisplayClass31_0___StartSelectGrandServant_g__DecideAction_1(
        GrandServantListRootComponent___c__DisplayClass31_0_o *this,
        UserServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
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
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  AvalonSceneManager_c *v23; // x8
  CommonUI_o *v24; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21

  if ( (byte_593327A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass31_1__StartSelectGrandServant_b__4__);
    sub_21FFC50(&GrandServantListRootComponent___c__DisplayClass31_1_TypeInfo);
    byte_593327A = 1;
  }
  v5 = sub_21FFEBC(GrandServantListRootComponent___c__DisplayClass31_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = servantEntity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)servantEntity, v14, v15, v16, v17, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = AvalonSceneManager_TypeInfo;
  v24 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21, v22);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_GrandServantListRootComponent___c__DisplayClass31_1__StartSelectGrandServant_b__4__,
    0);
  if ( !v24 )
LABEL_8:
    sub_21FFECC(v6, v7);
  CommonUI__maskFadeout(v24, 2, DEFAULT_FADE_TIME, v26, 0);
}


void GrandServantListRootComponent___c__DisplayClass31_1___ctor(
        GrandServantListRootComponent___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListRootComponent___c__DisplayClass31_1___StartSelectGrandServant_b__4(
        GrandServantListRootComponent___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandServantListRootComponent___c__DisplayClass31_1_o *v3; // x19
  struct GrandServantListRootComponent___c__DisplayClass31_0_o *CS___8__locals1; // x8
  struct GrandServantListRootComponent_o *_4__this; // x8
  struct GrandServantListMenu_o *listMenu; // x8
  struct GrandServantListRootComponent___c__DisplayClass31_0_o *v7; // x8
  struct GrandServantListRootComponent_o *v8; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct GrandServantListRootComponent___c__DisplayClass31_0_o *v18; // x8
  struct GrandServantListRootComponent___c__DisplayClass31_0_o *v19; // x8
  struct GrandServantListRootComponent_o *v20; // x20
  GrandServantListData_o *v21; // x21
  const MethodInfo *v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct GrandServantListRootComponent___c__DisplayClass31_0_o *v29; // x8
  struct GrandServantListRootComponent_o *v30; // x8
  struct GrandServantListMenu_o *v31; // x9
  struct GrandServantListRootComponent___c__DisplayClass31_0_o *v32; // x8
  struct GrandServantListRootComponent_o *v33; // x8
  CommonUI_o *v34; // x20
  System_Action_o *_9__5; // x21
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7

  v3 = this;
  if ( (byte_593327C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&GrandServantListData_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (GrandServantListRootComponent___c__DisplayClass31_1_o *)sub_21FFC50(&Method_GrandServantListRootComponent___c__DisplayClass31_1__StartSelectGrandServant_b__5__);
    byte_593327C = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_27;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  listMenu = _4__this->fields.listMenu;
  if ( !listMenu )
    goto LABEL_27;
  this = (GrandServantListRootComponent___c__DisplayClass31_1_o *)listMenu->fields.menu;
  if ( !this )
    goto LABEL_27;
  GrandServantListMenuLayout__SetItemSlotActive((GrandServantListMenuLayout_o *)this, 1, v2);
  v7 = v3->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_27;
  v8 = v7->fields.__4__this;
  if ( !v8 )
    goto LABEL_27;
  this = (GrandServantListRootComponent___c__DisplayClass31_1_o *)v8->fields.selectGrandServantComponent;
  if ( !this )
    goto LABEL_27;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
  v18 = v3->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_27;
  this = (GrandServantListRootComponent___c__DisplayClass31_1_o *)v18->fields.__4__this;
  if ( !this )
    goto LABEL_27;
  this[4].fields.servantEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this[4].fields, 0, v12, v13, v14, v15, v16, v17);
  v19 = v3->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_27;
  v20 = v19->fields.__4__this;
  v21 = (GrandServantListData_o *)sub_21FFEBC(GrandServantListData_TypeInfo);
  GrandServantListData___ctor(v21, v22);
  if ( !v20 )
    goto LABEL_27;
  v20->fields.grandServantListData = v21;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v20->fields.grandServantListData,
    (int32_t)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = v3->fields.CS___8__locals1;
  if ( !v29 )
    goto LABEL_27;
  v30 = v29->fields.__4__this;
  if ( !v30 )
    goto LABEL_27;
  v31 = v30->fields.listMenu;
  if ( !v31 )
    goto LABEL_27;
  this = (GrandServantListRootComponent___c__DisplayClass31_1_o *)v31->fields.menu;
  if ( !this )
    goto LABEL_27;
  this = (GrandServantListRootComponent___c__DisplayClass31_1_o *)((__int64 (__fastcall *)(GrandServantListRootComponent___c__DisplayClass31_1_o *, struct GrandServantListData_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                                                                    this,
                                                                    v30->fields.grandServantListData,
                                                                    *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
  v32 = v3->fields.CS___8__locals1;
  if ( !v32 )
    goto LABEL_27;
  v33 = v32->fields.__4__this;
  if ( !v33 )
    goto LABEL_27;
  this = (GrandServantListRootComponent___c__DisplayClass31_1_o *)v33->fields.titleInfo;
  if ( !this )
    goto LABEL_27;
  TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)this, 1, 0);
  this = (GrandServantListRootComponent___c__DisplayClass31_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = (CommonUI_o *)this;
  _9__5 = v3->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v3,
      Method_GrandServantListRootComponent___c__DisplayClass31_1__StartSelectGrandServant_b__5__,
      0);
    v3->fields.__9__5 = _9__5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__5, (int32_t)_9__5, v36, v37, v38, v39, v40, v41);
  }
  if ( !v34 )
LABEL_27:
    sub_21FFECC(this, method);
  CommonUI__maskFadein(v34, 1.0, _9__5, 0);
}


void GrandServantListRootComponent___c__DisplayClass31_1___StartSelectGrandServant_b__5(
        GrandServantListRootComponent___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct GrandServantListRootComponent___c__DisplayClass31_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_21FFECC(this, method);
  GrandServantListRootComponent__OpenConfirmedGrandServantSelectDialog(
    CS___8__locals1->fields.__4__this,
    CS___8__locals1->fields.grandGraphEntity,
    this->fields.servantEntity,
    v2);
}


void GrandServantListRootComponent___c__DisplayClass40_0___ctor(
        GrandServantListRootComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListRootComponent___c__DisplayClass40_0___OnSelectConfirmGrandServantResetDialog_b__2(
        GrandServantListRootComponent___c__DisplayClass40_0_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  struct GrandServantListRootComponent_o *_4__this; // x20
  GrandServantListData_o *v6; // x21
  const MethodInfo *v7; // x1
  GrandServantListRootComponent_o *menu; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct GrandServantListRootComponent_o *v16; // x8
  struct GrandServantListMenu_o *listMenu; // x9
  const MethodInfo *v18; // x3
  struct GrandServantListSlotData_o *slotData; // x8

  if ( (byte_593327D & 1) == 0 )
  {
    sub_21FFC50(&GrandServantListData_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593327D = 1;
  }
  if ( !System_String__op_Equality(res, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    _4__this = this->fields.__4__this;
    v6 = (GrandServantListData_o *)sub_21FFEBC(GrandServantListData_TypeInfo);
    GrandServantListData___ctor(v6, v7);
    if ( !_4__this )
      goto LABEL_11;
    _4__this->fields.grandServantListData = v6;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.grandServantListData,
      (int32_t)v6,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v16 = this->fields.__4__this;
    if ( !v16
      || (listMenu = v16->fields.listMenu) == 0
      || (menu = (GrandServantListRootComponent_o *)listMenu->fields.menu) == 0
      || (menu = (GrandServantListRootComponent_o *)((__int64 (__fastcall *)(GrandServantListRootComponent_o *, struct GrandServantListData_o *, const MethodInfo *))menu->klass->vtable._6_beginStartUp.methodPtr)(
                                                      menu,
                                                      v16->fields.grandServantListData,
                                                      menu->klass->vtable._6_beginStartUp.method),
          (slotData = this->fields.slotData) == 0)
      || (menu = this->fields.__4__this) == 0 )
    {
LABEL_11:
      sub_21FFECC(menu, v9);
    }
    GrandServantListRootComponent__OpenGrandServantResetDialog(
      menu,
      slotData->fields._GrandGraphEntity_k__BackingField,
      slotData->fields._UserServantEntity_k__BackingField,
      v18);
  }
}