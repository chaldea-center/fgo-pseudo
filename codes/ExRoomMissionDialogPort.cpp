void ExRoomMissionDialogPort___ctor(
        ExRoomMissionDialogPort_o *this,
        ExRoomResourceCatalogAssetBundle_o *inResourceCatalog,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.resourceCatalog = inResourceCatalog;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)inResourceCatalog, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ExRoomMissionDialogPort__BuildOverflowMessage(
        ExRoomMissionDialogPort_o *this,
        int32_t overflowType,
        const MethodInfo *method)
{
  if ( (byte_596AEF2 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8930/*"MASTER_MISSION_SERVANT_OVER_MSG"*/);
    byte_596AEF2 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&overflowType, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_8930/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, 0);
}


MasterMissionReceiveResultDialog_o *ExRoomMissionDialogPort__CreateAllResultDialog(
        ExRoomMissionDialogPort_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596AEF5 & 1) == 0 )
  {
    sub_2213A60(&Method_ExRoomMissionDialogPort_CreateDialog_MasterMissionReceiveResultDialog___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_6549/*"ExRoomMissionReceiveAllResultDialog"*/);
    byte_596AEF5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  return (MasterMissionReceiveResultDialog_o *)ExRoomMissionDialogPort__CreateDialog_object_(
                                                 this,
                                                 (System_String_o *)StringLiteral_6549/*"ExRoomMissionReceiveAllResultDialog"*/,
                                                 (UnityEngine_Transform_o *)Instance[7].monitor,
                                                 (const MethodInfo_38AC23C *)Method_ExRoomMissionDialogPort_CreateDialog_MasterMissionReceiveResultDialog___);
}


ExRoomMissionReceiveConfirmDialogView_o *ExRoomMissionDialogPort__CreateConfirmDialogView(
        ExRoomMissionDialogPort_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ExRoomResourceCatalogAssetBundle_o *resourceCatalog; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *PrefabObject; // x19
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_596AEF3 & 1) == 0 )
  {
    sub_2213A60(&Method_GameObjectHelper_Instantiate_ExRoomMissionReceiveConfirmDialogView___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_6550/*"ExRoomMissionReceiveConfirmDialog"*/);
    byte_596AEF3 = 1;
  }
  resourceCatalog = this->fields.resourceCatalog;
  if ( !resourceCatalog )
    return 0;
  PrefabObject = (UnityEngine_Object_o *)ExRoomResourceCatalogAssetBundle__GetPrefabObject(
                                           resourceCatalog,
                                           (System_String_o *)StringLiteral_6550/*"ExRoomMissionReceiveConfirmDialog"*/,
                                           v2);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Equality(PrefabObject, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  if ( !PrefabObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PrefabObject, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v9);
  }
  return (ExRoomMissionReceiveConfirmDialogView_o *)GameObjectHelper__Instantiate_object_(
                                                      (UnityEngine_GameObject_o *)PrefabObject,
                                                      (UnityEngine_Transform_o *)Instance[7].monitor,
                                                      0,
                                                      (const MethodInfo_38B88AC *)Method_GameObjectHelper_Instantiate_ExRoomMissionReceiveConfirmDialogView___);
}


Il2CppObject *ExRoomMissionDialogPort__CreateDialog_object_(
        ExRoomMissionDialogPort_o *this,
        System_String_o *name,
        UnityEngine_Transform_o *parent,
        const MethodInfo_38AC23C *method)
{
  ExRoomResourceCatalogAssetBundle_o *resourceCatalog; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *PrefabObject; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  resourceCatalog = this->fields.resourceCatalog;
  if ( !resourceCatalog )
    return 0;
  PrefabObject = (UnityEngine_Object_o *)ExRoomResourceCatalogAssetBundle__GetPrefabObject(resourceCatalog, name, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality(PrefabObject, 0, 0);
  if ( v11 )
    return 0;
  if ( !PrefabObject )
    sub_2213CDC(v11, v12);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)PrefabObject, 0, 0);
  return GameObjectHelper__Instantiate_object_(
           (UnityEngine_GameObject_o *)PrefabObject,
           parent,
           0,
           (const MethodInfo_38B88AC *)method->rgctx_data->_1_GameObjectHelper_Instantiate_T_);
}


MissionRewardGetDialog_o *ExRoomMissionDialogPort__CreateSingleResultDialog(
        ExRoomMissionDialogPort_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596AEF4 & 1) == 0 )
  {
    sub_2213A60(&Method_ExRoomMissionDialogPort_CreateDialog_MissionRewardGetDialog___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_6551/*"ExRoomMissionReceiveSingleResultDialog"*/);
    byte_596AEF4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  return (MissionRewardGetDialog_o *)ExRoomMissionDialogPort__CreateDialog_object_(
                                       this,
                                       (System_String_o *)StringLiteral_6551/*"ExRoomMissionReceiveSingleResultDialog"*/,
                                       (UnityEngine_Transform_o *)Instance[7].monitor,
                                       (const MethodInfo_38AC23C *)Method_ExRoomMissionDialogPort_CreateDialog_MissionRewardGetDialog___);
}


void ExRoomMissionDialogPort__IExRoomMissionDialogPort_OpenCommandCodeDetail(
        ExRoomMissionDialogPort_o *this,
        CommandCodeEntity_o *commandCodeEntity,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x21
  bool v18; // w0
  Il2CppObject *v19; // x21
  ServantStatusDialog_EndDelegate_o *v20; // x22

  if ( (byte_596AEEC & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ExRoomMissionDialogPort___c__DisplayClass11_0__IExRoomMissionDialogPort_OpenCommandCodeDetail_b__0__);
    sub_2213A60(&ExRoomMissionDialogPort___c__DisplayClass11_0_TypeInfo);
    byte_596AEEC = 1;
  }
  v6 = sub_2213CCC(ExRoomMissionDialogPort___c__DisplayClass11_0_TypeInfo);
  ExRoomMissionDialogPort___c__DisplayClass11_0___ctor((ExRoomMissionDialogPort___c__DisplayClass11_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_11;
  *(_QWORD *)(v6 + 16) = onClosed;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)onClosed, v9, v10, v11, v12, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( commandCodeEntity && !v18 )
  {
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v20,
      (Il2CppObject *)v6,
      Method_ExRoomMissionDialogPort___c__DisplayClass11_0__IExRoomMissionDialogPort_OpenCommandCodeDetail_b__0__,
      0);
    if ( v19 )
    {
      CommonUI__OpenServantEquipStatusDialog_37389176((CommonUI_o *)v19, 25, commandCodeEntity, 0, v20, 0, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(v7, v8);
  }
  ActionExtensions__Call(*(System_Action_o **)(v6 + 16), 0);
}


void ExRoomMissionDialogPort__IExRoomMissionDialogPort_OpenCostumeReleaseDetail(
        ExRoomMissionDialogPort_o *this,
        ServantCostumeEntity_o *costumeEntity,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x21
  bool v18; // w0
  ItemDetailInfoComponent_CallbackFunc_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2

  if ( (byte_596AEED & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ExRoomMissionDialogPort___c__DisplayClass12_0__IExRoomMissionDialogPort_OpenCostumeReleaseDetail_b__0__);
    sub_2213A60(&ExRoomMissionDialogPort___c__DisplayClass12_0_TypeInfo);
    byte_596AEED = 1;
  }
  v6 = sub_2213CCC(ExRoomMissionDialogPort___c__DisplayClass12_0_TypeInfo);
  ExRoomMissionDialogPort___c__DisplayClass12_0___ctor((ExRoomMissionDialogPort___c__DisplayClass12_0_o *)v6, 0);
  if ( !v6 )
    sub_2213CDC(v7, v8);
  *(_QWORD *)(v6 + 16) = onClosed;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)onClosed, v9, v10, v11, v12, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !costumeEntity || v18 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v6 + 16), 0);
  }
  else
  {
    v19 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)v6,
      Method_ExRoomMissionDialogPort___c__DisplayClass12_0__IExRoomMissionDialogPort_OpenCostumeReleaseDetail_b__0__,
      0);
    if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v20, v21);
    MissionInfoMaker__OpenCostumeReleaseDetail(costumeEntity, v19, 0);
  }
}


void ExRoomMissionDialogPort__IExRoomMissionDialogPort_OpenEquipDetail(
        ExRoomMissionDialogPort_o *this,
        EquipEntity_o *equipEntity,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x21
  bool v18; // w0
  ItemDetailInfoComponent_CallbackFunc_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2

  if ( (byte_596AEEE & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ExRoomMissionDialogPort___c__DisplayClass13_0__IExRoomMissionDialogPort_OpenEquipDetail_b__0__);
    sub_2213A60(&ExRoomMissionDialogPort___c__DisplayClass13_0_TypeInfo);
    byte_596AEEE = 1;
  }
  v6 = sub_2213CCC(ExRoomMissionDialogPort___c__DisplayClass13_0_TypeInfo);
  ExRoomMissionDialogPort___c__DisplayClass13_0___ctor((ExRoomMissionDialogPort___c__DisplayClass13_0_o *)v6, 0);
  if ( !v6 )
    sub_2213CDC(v7, v8);
  *(_QWORD *)(v6 + 16) = onClosed;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)onClosed, v9, v10, v11, v12, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !equipEntity || v18 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v6 + 16), 0);
  }
  else
  {
    v19 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)v6,
      Method_ExRoomMissionDialogPort___c__DisplayClass13_0__IExRoomMissionDialogPort_OpenEquipDetail_b__0__,
      0);
    if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v20, v21);
    MissionInfoMaker__OpenEquipDetail(equipEntity, v19, 0);
  }
}


void ExRoomMissionDialogPort__IExRoomMissionDialogPort_OpenItemDetail(
        ExRoomMissionDialogPort_o *this,
        ItemEntity_o *itemEntity,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x21
  bool v18; // w0
  Il2CppObject *v19; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v20; // x22

  if ( (byte_596AEE9 & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ExRoomMissionDialogPort___c__DisplayClass8_0__IExRoomMissionDialogPort_OpenItemDetail_b__0__);
    sub_2213A60(&ExRoomMissionDialogPort___c__DisplayClass8_0_TypeInfo);
    byte_596AEE9 = 1;
  }
  v6 = sub_2213CCC(ExRoomMissionDialogPort___c__DisplayClass8_0_TypeInfo);
  ExRoomMissionDialogPort___c__DisplayClass8_0___ctor((ExRoomMissionDialogPort___c__DisplayClass8_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_11;
  *(_QWORD *)(v6 + 16) = onClosed;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)onClosed, v9, v10, v11, v12, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( itemEntity && !v18 )
  {
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)v6,
      Method_ExRoomMissionDialogPort___c__DisplayClass8_0__IExRoomMissionDialogPort_OpenItemDetail_b__0__,
      0);
    if ( v19 )
    {
      CommonUI__OpenItemDetailDialog((CommonUI_o *)v19, itemEntity, v20, 50, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(v7, v8);
  }
  ActionExtensions__Call(*(System_Action_o **)(v6 + 16), 0);
}


void ExRoomMissionDialogPort__IExRoomMissionDialogPort_OpenPresentBoxOver(
        ExRoomMissionDialogPort_o *this,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x21
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_596AEF0 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_8920/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/);
    byte_596AEF0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    ActionExtensions__Call(onClosed, 0);
  }
  else
  {
    v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = **(System_String_o ***)(qword_5984390 + 184);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8920/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, 0);
    if ( !v9 )
      sub_2213CDC(v11, v12);
    CommonUI__OpenNotificationDialog((CommonUI_o *)v9, v10, v11, onClosed, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  }
}


void ExRoomMissionDialogPort__IExRoomMissionDialogPort_OpenReceiveAllResult(
        ExRoomMissionDialogPort_o *this,
        ExRoomMissionReceiveAllResultDialog_o *dialog,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *AllResultDialog; // x21
  System_Int32_array *ReceivedMissionIds; // x0
  __int64 v11; // x1

  if ( (byte_596AEE8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AEE8 = 1;
  }
  AllResultDialog = (UnityEngine_Object_o *)ExRoomMissionDialogPort__CreateAllResultDialog(
                                              this,
                                              (const MethodInfo *)dialog);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  ReceivedMissionIds = (System_Int32_array *)UnityEngine_Object__op_Equality(AllResultDialog, 0, 0);
  if ( ((unsigned __int8)ReceivedMissionIds & 1) != 0 )
  {
    ActionExtensions__Call(onClosed, 0);
  }
  else
  {
    if ( !dialog
      || (ReceivedMissionIds = ExRoomMissionReceiveAllResultDialog__get_ReceivedMissionIds(dialog, 0), !AllResultDialog) )
    {
      sub_2213CDC(ReceivedMissionIds, v11);
    }
    MasterMissionReceiveResultDialog__Open(
      (MasterMissionReceiveResultDialog_o *)AllResultDialog,
      ReceivedMissionIds,
      onClosed,
      0);
  }
}


void ExRoomMissionDialogPort__IExRoomMissionDialogPort_OpenReceiveConfirm(
        ExRoomMissionDialogPort_o *this,
        ExRoomMissionReceiveConfirmDialog_o *dialog,
        System_Action_bool__o *onClosed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *ConfirmDialogView; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_596AEE6 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AEE6 = 1;
  }
  ConfirmDialogView = (UnityEngine_Object_o *)ExRoomMissionDialogPort__CreateConfirmDialogView(
                                                this,
                                                (const MethodInfo *)dialog);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__op_Equality(ConfirmDialogView, 0, 0);
  if ( v10 )
  {
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)onClosed,
      0,
      (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
  }
  else
  {
    if ( !ConfirmDialogView )
      sub_2213CDC(v10, v11);
    ExRoomMissionReceiveConfirmDialogView__Open(
      (ExRoomMissionReceiveConfirmDialogView_o *)ConfirmDialogView,
      dialog,
      onClosed,
      0);
  }
}


void ExRoomMissionDialogPort__IExRoomMissionDialogPort_OpenReceiveSingleResult(
        ExRoomMissionDialogPort_o *this,
        ExRoomMissionReceiveSingleResultDialog_o *dialog,
        System_Action_o *onClosed,
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
  const MethodInfo *v16; // x1
  MissionRewardGetDialog_o *SingleResultDialog; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *v26; // x22
  GiftEntity_array *DisplayRewardGiftEntities; // x0
  GiftEntity_array *v28; // x22
  System_String_o *DisplayMessage; // x19
  MissionRewardGetDialog_o *v30; // x21
  MissionRewardGetDialog_ClickDelegate_o *v31; // x23

  if ( (byte_596AEE7 & 1) == 0 )
  {
    sub_2213A60(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ExRoomMissionDialogPort___c__DisplayClass6_0__IExRoomMissionDialogPort_OpenReceiveSingleResult_b__0__);
    sub_2213A60(&ExRoomMissionDialogPort___c__DisplayClass6_0_TypeInfo);
    byte_596AEE7 = 1;
  }
  v7 = sub_2213CCC(ExRoomMissionDialogPort___c__DisplayClass6_0_TypeInfo);
  ExRoomMissionDialogPort___c__DisplayClass6_0___ctor((ExRoomMissionDialogPort___c__DisplayClass6_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 24) = onClosed;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)onClosed, v10, v11, v12, v13, v14, v15);
  SingleResultDialog = ExRoomMissionDialogPort__CreateSingleResultDialog(this, v16);
  *(_QWORD *)(v7 + 16) = SingleResultDialog;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)SingleResultDialog, v18, v19, v20, v21, v22, v23);
  v26 = *(UnityEngine_Object_o **)(v7 + 16);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
  if ( !UnityEngine_Object__op_Equality(v26, 0, 0) )
  {
    if ( dialog )
    {
      DisplayRewardGiftEntities = ExRoomMissionReceiveSingleResultDialog__get_DisplayRewardGiftEntities(dialog, 0);
      if ( DisplayRewardGiftEntities )
      {
        v28 = DisplayRewardGiftEntities;
        if ( DisplayRewardGiftEntities->max_length )
        {
          DisplayMessage = ExRoomMissionReceiveSingleResultDialog__get_DisplayMessage(dialog, 0);
          v30 = *(MissionRewardGetDialog_o **)(v7 + 16);
          v31 = (MissionRewardGetDialog_ClickDelegate_o *)sub_2213CCC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
          MissionRewardGetDialog_ClickDelegate___ctor(
            v31,
            (Il2CppObject *)v7,
            Method_ExRoomMissionDialogPort___c__DisplayClass6_0__IExRoomMissionDialogPort_OpenReceiveSingleResult_b__0__,
            0);
          if ( v30 )
          {
            MissionRewardGetDialog__Open(v30, v28, DisplayMessage, v31, 0, 0);
            return;
          }
LABEL_13:
          sub_2213CDC(v8, v9);
        }
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
}


void ExRoomMissionDialogPort__IExRoomMissionDialogPort_OpenServantDetail(
        ExRoomMissionDialogPort_o *this,
        ServantEntity_o *servantEntity,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x21
  bool v18; // w0
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x21
  __int64 v23; // x22
  CommonUI_o *v24; // x19
  int32_t v25; // w21
  ServantStatusDialog_EndDelegate_o *v26; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_596AEEB & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ExRoomMissionDialogPort___c__DisplayClass10_0__IExRoomMissionDialogPort_OpenServantDetail_b__0__);
    sub_2213A60(&ExRoomMissionDialogPort___c__DisplayClass10_0_TypeInfo);
    byte_596AEEB = 1;
  }
  v6 = sub_2213CCC(ExRoomMissionDialogPort___c__DisplayClass10_0_TypeInfo);
  ExRoomMissionDialogPort___c__DisplayClass10_0___ctor((ExRoomMissionDialogPort___c__DisplayClass10_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_13;
  *(_QWORD *)(v6 + 16) = onClosed;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)onClosed, v9, v10, v11, v12, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( servantEntity && !v18 )
  {
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v23 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    v24 = (CommonUI_o *)v19;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    *(_QWORD *)&v27.fields.currentCryptoKey = v22;
    *(_QWORD *)&v27.fields.fakeValue = v23;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v27, 0);
    v26 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v26,
      (Il2CppObject *)v6,
      Method_ExRoomMissionDialogPort___c__DisplayClass10_0__IExRoomMissionDialogPort_OpenServantDetail_b__0__,
      0);
    if ( v24 )
    {
      CommonUI__OpenServantStatusDialog_37386528(v24, 7, v25, v26, 0);
      return;
    }
LABEL_13:
    sub_2213CDC(v7, v8);
  }
  ActionExtensions__Call(*(System_Action_o **)(v6 + 16), 0);
}


void ExRoomMissionDialogPort__IExRoomMissionDialogPort_OpenServantEquipDetail(
        ExRoomMissionDialogPort_o *this,
        GiftEntity_o *giftEntity,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x21
  bool v18; // w0
  Il2CppObject *v19; // x21
  ServantStatusDialog_EndDelegate_o *v20; // x22

  if ( (byte_596AEEA & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ExRoomMissionDialogPort___c__DisplayClass9_0__IExRoomMissionDialogPort_OpenServantEquipDetail_b__0__);
    sub_2213A60(&ExRoomMissionDialogPort___c__DisplayClass9_0_TypeInfo);
    byte_596AEEA = 1;
  }
  v6 = sub_2213CCC(ExRoomMissionDialogPort___c__DisplayClass9_0_TypeInfo);
  ExRoomMissionDialogPort___c__DisplayClass9_0___ctor((ExRoomMissionDialogPort___c__DisplayClass9_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_11;
  *(_QWORD *)(v6 + 16) = onClosed;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)onClosed, v9, v10, v11, v12, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( giftEntity && !v18 )
  {
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v20,
      (Il2CppObject *)v6,
      Method_ExRoomMissionDialogPort___c__DisplayClass9_0__IExRoomMissionDialogPort_OpenServantEquipDetail_b__0__,
      0);
    if ( v19 )
    {
      CommonUI__OpenServantStatusDialog_37387092((CommonUI_o *)v19, 7, giftEntity, v20, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(v7, v8);
  }
  ActionExtensions__Call(*(System_Action_o **)(v6 + 16), 0);
}


void ExRoomMissionDialogPort__IExRoomMissionDialogPort_OpenUserPresentBoxError(
        ExRoomMissionDialogPort_o *this,
        int32_t overflowType,
        System_Action_o *onClosed,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  int32_t v9; // w1
  const MethodInfo *v10; // x2
  System_String_o *v11; // x20
  Il2CppObject *v12; // x0
  __int64 v13; // x1

  if ( (byte_596AEF1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AEF1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
  {
    ActionExtensions__Call(onClosed, 0);
  }
  else
  {
    v11 = ExRoomMissionDialogPort__BuildOverflowMessage((ExRoomMissionDialogPort_o *)v8, v9, v10);
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v12 )
      sub_2213CDC(0, v13);
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)v12,
      **(System_String_o ***)(qword_5984390 + 184),
      v11,
      onClosed,
      -1,
      0,
      0,
      0,
      1,
      0,
      0,
      0,
      0,
      0.0,
      0,
      0);
  }
}


void ExRoomMissionDialogPort__PlayCommonCloseSe(const MethodInfo *method)
{
  _QWORD *v1; // x0
  System_Reflection_MethodBase_o *v2; // x0

  if ( (byte_596AEEF & 1) == 0 )
  {
    sub_2213A60(&Method_ExRoomMissionDialogPort_PlayCommonCloseSe__);
    byte_596AEEF = 1;
  }
  v1 = Method_ExRoomMissionDialogPort_PlayCommonCloseSe__;
  if ( (*((_BYTE *)Method_ExRoomMissionDialogPort_PlayCommonCloseSe__ + 83) & 2) != 0 )
    v1 = (_QWORD *)sub_2213A78(Method_ExRoomMissionDialogPort_PlayCommonCloseSe__);
  v2 = (System_Reflection_MethodBase_o *)sub_2213A44(v1, v1[4]);
  OverwriteAssetSoundName__PlaySystemSe(v2, 0, 0, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass10_0___ctor(
        ExRoomMissionDialogPort___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass10_0___IExRoomMissionDialogPort_OpenServantDetail_b__0(
        ExRoomMissionDialogPort___c__DisplayClass10_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596AF02 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AF02 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
  ActionExtensions__Call(this->fields.onClosed, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass11_0___ctor(
        ExRoomMissionDialogPort___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass11_0___IExRoomMissionDialogPort_OpenCommandCodeDetail_b__0(
        ExRoomMissionDialogPort___c__DisplayClass11_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596AF03 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AF03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
  ActionExtensions__Call(this->fields.onClosed, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass12_0___ctor(
        ExRoomMissionDialogPort___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass12_0___IExRoomMissionDialogPort_OpenCostumeReleaseDetail_b__0(
        ExRoomMissionDialogPort___c__DisplayClass12_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596AF04 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AF04 = 1;
  }
  ExRoomMissionDialogPort__PlayCommonCloseSe(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
  ActionExtensions__Call(this->fields.onClosed, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass13_0___ctor(
        ExRoomMissionDialogPort___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass13_0___IExRoomMissionDialogPort_OpenEquipDetail_b__0(
        ExRoomMissionDialogPort___c__DisplayClass13_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596AF05 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AF05 = 1;
  }
  ExRoomMissionDialogPort__PlayCommonCloseSe(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
  ActionExtensions__Call(this->fields.onClosed, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass6_0___ctor(
        ExRoomMissionDialogPort___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass6_0___IExRoomMissionDialogPort_OpenReceiveSingleResult_b__0(
        ExRoomMissionDialogPort___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  MissionRewardGetDialog_o *view; // x0

  view = this->fields.view;
  if ( !view )
    sub_2213CDC(0, method);
  MissionRewardGetDialog__Close_55014960(view, this->fields.onClosed, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass8_0___ctor(
        ExRoomMissionDialogPort___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass8_0___IExRoomMissionDialogPort_OpenItemDetail_b__0(
        ExRoomMissionDialogPort___c__DisplayClass8_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596AF06 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AF06 = 1;
  }
  ExRoomMissionDialogPort__PlayCommonCloseSe(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
  ActionExtensions__Call(this->fields.onClosed, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass9_0___ctor(
        ExRoomMissionDialogPort___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionDialogPort___c__DisplayClass9_0___IExRoomMissionDialogPort_OpenServantEquipDetail_b__0(
        ExRoomMissionDialogPort___c__DisplayClass9_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596AF07 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AF07 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
  ActionExtensions__Call(this->fields.onClosed, 0);
}