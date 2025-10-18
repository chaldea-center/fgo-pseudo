void SelectBonusBaseMaster___ctor(SelectBonusBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C437CB & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int___ctor__);
    byte_4C437CB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    525,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int___ctor__);
}


void SelectBonusBaseMaster__OpenSelectBonusConfirmDialog(
        SelectBonusBaseMaster_o *this,
        int32_t eventId,
        System_String_o *dialogName,
        int32_t resultIndex,
        int32_t giftType,
        int32_t giftObjectId,
        System_String_o *bonusGetMessage,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v17; // x25
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *Instance; // x0
  int32_t v26; // w20
  int32_t v27; // w22
  int32_t v28; // w21
  CommonUI_o *v29; // x23
  SelectBonusConfirmDialog_CallbackFunc_o *v30; // x24

  if ( (byte_4C437C9 & 1) == 0 )
  {
    sub_1C37058(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__0__);
    sub_1C37058(&SelectBonusBaseMaster___c__DisplayClass1_0_TypeInfo);
    byte_4C437C9 = 1;
  }
  v17 = sub_1C372A4(SelectBonusBaseMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_6;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v19, v20);
  *(_DWORD *)(v17 + 24) = eventId;
  *(_QWORD *)(v17 + 32) = endCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)endCallback, v21, v22);
  *(_QWORD *)(v17 + 40) = bonusGetMessage;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 40), (int32_t)bonusGetMessage, v23, v24);
  *(_DWORD *)(v17 + 48) = giftType;
  *(_DWORD *)(v17 + 52) = giftObjectId;
  *(_DWORD *)(v17 + 56) = resultIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = *(_DWORD *)(v17 + 52);
  v26 = *(_DWORD *)(v17 + 56);
  v28 = *(_DWORD *)(v17 + 48);
  v29 = (CommonUI_o *)Instance;
  v30 = (SelectBonusConfirmDialog_CallbackFunc_o *)sub_1C372A4(SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
  SelectBonusConfirmDialog_CallbackFunc___ctor(
    v30,
    (Il2CppObject *)v17,
    Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__0__,
    0);
  if ( !v29 )
LABEL_6:
    sub_1C372B4(v18);
  CommonUI__OpenSelectBonusConfirmDialog(v29, dialogName, v26, v28, v27, v30, 0);
}


void SelectBonusBaseMaster__OpenSelectBonusDialog(
        SelectBonusBaseMaster_o *this,
        int32_t eventId,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  Il2CppObject *Master_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_SelectBonusEntity__o *SelectBonusEntitiesByEventId; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x8
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  System_String_o *v22; // x21
  CommonUI_o *v23; // x20
  SelectBonusDialog_CallbackFunc_o *v24; // x22

  if ( (byte_4C437C8 & 1) == 0 )
  {
    sub_1C37058(&SelectBonusDialog_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SelectBonusBaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SelectBonusMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_SelectBonusEntity__get_Count__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SelectBonusBaseMaster___c__DisplayClass0_0__OpenSelectBonusDialog_b__0__);
    sub_1C37058(&SelectBonusBaseMaster___c__DisplayClass0_0_TypeInfo);
    byte_4C437C8 = 1;
  }
  v7 = sub_1C372A4(SelectBonusBaseMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 24) = endCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)endCallback, v9, v10);
  *(_QWORD *)(v7 + 48) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)this, v11, v12);
  *(_DWORD *)(v7 + 56) = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         (Il2CppObject **)(v7 + 40),
         *(_DWORD *)(v7 + 56),
         (const MethodInfo_33A10EC *)Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SelectBonusMaster___);
    if ( !Master_object )
      goto LABEL_19;
    SelectBonusEntitiesByEventId = SelectBonusMaster__GetSelectBonusEntitiesByEventId(
                                     (SelectBonusMaster_o *)Master_object,
                                     *(_DWORD *)(v7 + 56),
                                     v13);
    *(_QWORD *)(v7 + 16) = SelectBonusEntitiesByEventId;
    sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)SelectBonusEntitiesByEventId, v15, v16);
    v17 = *(_QWORD *)(v7 + 16);
    if ( v17 )
    {
      if ( *(int *)(v17 + 24) > 0 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v18 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GiftMaster___);
        *(_QWORD *)(v7 + 32) = v18;
        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v18, v19, v20);
        Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v21 = *(_QWORD *)(v7 + 40);
        if ( v21 )
        {
          v22 = *(System_String_o **)(v21 + 24);
          v23 = (CommonUI_o *)Master_object;
          v24 = (SelectBonusDialog_CallbackFunc_o *)sub_1C372A4(SelectBonusDialog_CallbackFunc_TypeInfo);
          SelectBonusDialog_CallbackFunc___ctor(
            v24,
            (Il2CppObject *)v7,
            Method_SelectBonusBaseMaster___c__DisplayClass0_0__OpenSelectBonusDialog_b__0__,
            0);
          if ( v23 )
          {
            CommonUI__OpenSelectBonusDialog(v23, v22, v24, 0);
            return;
          }
        }
LABEL_19:
        sub_1C372B4(Master_object);
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
}


void SelectBonusBaseMaster__UpdateGiftBadgeNum(SelectBonusBaseMaster_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  GiftButtonCtrl_o *Instance; // x0
  UISprite_c *klass; // x8
  __int64 v6; // x8
  UnityEngine_Object_o *v7; // x19
  UISprite_c *v8; // x8
  __int64 v9; // x8
  CombineRootComponent_o *giftButton; // x0
  CombineRootComponent_c *v11; // x8
  unsigned int naturalAligment; // w9
  __int64 v13; // x11
  __int64 v14; // x11

  if ( (byte_4C437CA & 1) == 0 )
  {
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ShopRootComponent_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C437CA = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
    }
    Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance[1].fields.limitedPeriodSprite->klass;
    if ( !klass )
      goto LABEL_42;
    v6 = *(_QWORD *)&klass->_2.instance_size;
    if ( !v6 )
      goto LABEL_42;
    v7 = *(UnityEngine_Object_o **)(v6 + 120);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C3CF06 )
      {
        sub_1C37058(&TerminalSceneComponent_TypeInfo);
        byte_4C3CF06 = 1;
      }
      Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
      }
      v8 = Instance[1].fields.limitedPeriodSprite->klass;
      if ( v8 )
      {
        v9 = *(_QWORD *)&v8->_2.instance_size;
        if ( v9 )
        {
          Instance = *(GiftButtonCtrl_o **)(v9 + 120);
          if ( Instance )
          {
            GiftButtonCtrl__InvalidateGiftInfo(Instance, 0);
            goto LABEL_33;
          }
        }
      }
LABEL_42:
      sub_1C372B4(Instance);
    }
  }
LABEL_33:
  Instance = (GiftButtonCtrl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  giftButton = (CombineRootComponent_o *)Instance->fields.giftButton;
  if ( giftButton )
  {
    v11 = giftButton->klass;
    naturalAligment = giftButton->klass->_2.naturalAligment;
    v13 = CombineRootComponent_TypeInfo->_2.naturalAligment;
    if ( naturalAligment >= (unsigned int)v13
      && (CombineRootComponent_c *)v11->_2.typeHierarchy[v13 - 1] == CombineRootComponent_TypeInfo )
    {
      CombineRootComponent__UpdateGiftBadgeNum(giftButton, 0);
    }
    else
    {
      v14 = ShopRootComponent_TypeInfo->_2.naturalAligment;
      if ( naturalAligment >= (unsigned int)v14
        && (ShopRootComponent_c *)v11->_2.typeHierarchy[v14 - 1] == ShopRootComponent_TypeInfo )
      {
        ShopRootComponent__UpdateGiftBadgeNum((ShopRootComponent_o *)giftButton, 0);
      }
    }
  }
}


void SelectBonusBaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C437CC & 1) == 0 )
  {
    sub_1C37058(&SelectBonusBaseMaster___c_TypeInfo);
    byte_4C437CC = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SelectBonusBaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectBonusBaseMaster___c_TypeInfo->static_fields->__9 = (struct SelectBonusBaseMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)SelectBonusBaseMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SelectBonusBaseMaster___c___ctor(SelectBonusBaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectBonusBaseMaster___c___OpenSelectBonusConfirmDialog_b__1_3(
        SelectBonusBaseMaster___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C437CD & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C437CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0);
}


void SelectBonusBaseMaster___c__DisplayClass0_0___ctor(
        SelectBonusBaseMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectBonusBaseMaster___c__DisplayClass0_0___OpenSelectBonusDialog_b__0(
        SelectBonusBaseMaster___c__DisplayClass0_0_o *this,
        int32_t resultIndex,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *Instance; // x0
  struct System_Collections_Generic_List_SelectBonusEntity__o *selectBonusList; // x21
  System_Func_object__bool__o *v8; // x22
  Il2CppObject *v9; // x21
  int32_t v10; // w4
  int32_t v11; // w5
  struct SelectBonusBaseEntity_o *selectBonusBaseEnt; // x8
  const MethodInfo *v13; // [xsp+0h] [xbp-50h]

  if ( (byte_4C437CE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_SelectBonusEntity___);
    sub_1C37058(&System_Func_SelectBonusEntity__bool__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SelectBonusBaseMaster___c__DisplayClass0_1__OpenSelectBonusDialog_b__1__);
    sub_1C37058(&SelectBonusBaseMaster___c__DisplayClass0_1_TypeInfo);
    byte_4C437CE = 1;
  }
  v5 = sub_1C372A4(SelectBonusBaseMaster___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_DWORD *)(v5 + 16) = resultIndex;
  selectBonusList = this->fields.selectBonusList;
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_SelectBonusEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_SelectBonusBaseMaster___c__DisplayClass0_1__OpenSelectBonusDialog_b__1__,
    0);
  v9 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
         (System_Collections_Generic_IEnumerable_TSource__o *)selectBonusList,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_SelectBonusEntity___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseSelectBonusDialog((CommonUI_o *)Instance, 0);
  if ( !v9 )
  {
    ActionExtensions__Call(this->fields.endCallback, 0);
    return;
  }
  Instance = this->fields.giftMst;
  if ( !Instance
    || ((Instance = GiftMaster__getDataById((GiftMaster_o *)Instance, (int32_t)v9[1].monitor, 0)) == 0
      ? (v10 = 0, v11 = 0)
      : (v10 = *((_DWORD *)Instance + 5), v11 = *((_DWORD *)Instance + 6)),
        (selectBonusBaseEnt = this->fields.selectBonusBaseEnt) == 0 || (Instance = this->fields.__4__this) == 0) )
  {
LABEL_14:
    sub_1C372B4(Instance);
  }
  SelectBonusBaseMaster__OpenSelectBonusConfirmDialog(
    (SelectBonusBaseMaster_o *)Instance,
    this->fields.eventId,
    selectBonusBaseEnt->fields.confirmDialogObject,
    *(_DWORD *)(v5 + 16),
    v10,
    v11,
    (System_String_o *)v9[2].klass,
    this->fields.endCallback,
    v13);
}


void SelectBonusBaseMaster___c__DisplayClass0_1___ctor(
        SelectBonusBaseMaster___c__DisplayClass0_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SelectBonusBaseMaster___c__DisplayClass0_1___OpenSelectBonusDialog_b__1(
        SelectBonusBaseMaster___c__DisplayClass0_1_o *this,
        SelectBonusEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C372B4(this);
  return e->fields.idx == this->fields.resultIndex;
}


void SelectBonusBaseMaster___c__DisplayClass1_0___ctor(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__0(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x3
  NetworkManager_ResultCallbackFunc_o *_9__1; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C437CF & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_EventScriptFlagRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__1__);
    byte_4C437CF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseSelectBonusConfirmDialog(Instance, 0);
  if ( result == 1 )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9);
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (CommonUI_o *)NetworkManager__getRequest_object_(
                               _9__1,
                               (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_EventScriptFlagRequest___);
    if ( !Instance )
      goto LABEL_15;
    EventScriptFlagRequest__beginRequest(
      (EventScriptFlagRequest_o *)Instance,
      this->fields.eventId,
      this->fields.resultIndex,
      0);
  }
  else if ( !result )
  {
    Instance = (CommonUI_o *)this->fields.__4__this;
    if ( Instance )
    {
      SelectBonusBaseMaster__OpenSelectBonusDialog(
        (SelectBonusBaseMaster_o *)Instance,
        this->fields.eventId,
        this->fields.endCallback,
        v6);
      return;
    }
LABEL_15:
    sub_1C372B4(Instance);
  }
}


void SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__1(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SelectBonusBaseMaster___c__DisplayClass1_0_o *v3; // x19
  System_Action_o *_9__2; // x25
  CommonUI_o *v5; // x24
  int32_t eventId; // w20
  System_String_o *bonusGetMessage; // x21
  int32_t giftType; // w22
  int32_t giftObjectId; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  v3 = this;
  if ( (byte_4C437D0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (SelectBonusBaseMaster___c__DisplayClass1_0_o *)sub_1C37058(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__2__);
    byte_4C437D0 = 1;
  }
  if ( !v3->fields.__4__this )
    goto LABEL_8;
  SelectBonusBaseMaster__UpdateGiftBadgeNum((SelectBonusBaseMaster_o *)this, (const MethodInfo *)result);
  this = (SelectBonusBaseMaster___c__DisplayClass1_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = v3->fields.__9__2;
  v5 = (CommonUI_o *)this;
  eventId = v3->fields.eventId;
  bonusGetMessage = v3->fields.bonusGetMessage;
  giftType = v3->fields.giftType;
  giftObjectId = v3->fields.giftObjectId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v5 )
LABEL_8:
    sub_1C372B4(this);
  CommonUI__OpenSelectBonusGetDialog(v5, eventId, bonusGetMessage, giftType, giftObjectId, _9__2, 0);
}


void SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__2(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_endCallback; // x19
  System_Delegate_o *v4; // x20
  struct System_Action_o *endCallback; // t1
  SelectBonusBaseMaster___c_c *v6; // x0
  System_Action_o *_9__1_3; // x21
  Il2CppObject *v8; // x22
  struct SelectBonusBaseMaster___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Delegate_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Delegate_o *v15; // x8
  System_Action_c *v16; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *klass; // x21
  CommonUI_o *v19; // x19
  System_Action_o *v20; // x20
  __int64 v21; // x0

  if ( (byte_4C437D1 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call__);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SelectBonusBaseMaster___c__OpenSelectBonusConfirmDialog_b__1_3__);
    sub_1C37058(&SelectBonusBaseMaster___c_TypeInfo);
    byte_4C437D1 = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = (CGThumbnailListItem_o *)&this->fields.endCallback;
  v4 = (System_Delegate_o *)endCallback;
  v6 = SelectBonusBaseMaster___c_TypeInfo;
  if ( !SelectBonusBaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectBonusBaseMaster___c_TypeInfo);
    v6 = SelectBonusBaseMaster___c_TypeInfo;
  }
  _9__1_3 = v6->static_fields->__9__1_3;
  if ( !_9__1_3 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = SelectBonusBaseMaster___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v6->static_fields->__9;
    _9__1_3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__1_3, v8, Method_SelectBonusBaseMaster___c__OpenSelectBonusConfirmDialog_b__1_3__, 0);
    static_fields = SelectBonusBaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_3 = _9__1_3;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__1_3, (int32_t)_9__1_3, v10, v11);
  }
  v12 = System_Delegate__Combine(v4, (System_Delegate_o *)_9__1_3, 0);
  v15 = v12;
  if ( !v12 )
    goto LABEL_13;
  v16 = System_Action_TypeInfo;
  if ( (System_Action_c *)v12->klass != System_Action_TypeInfo
    || (p_endCallback->klass = (CGThumbnailListItem_c *)v12, (System_Action_c *)v12->klass != v16) )
  {
    sub_1C37574(v12);
LABEL_13:
    p_endCallback->klass = (CGThumbnailListItem_c *)v15;
  }
  sub_1C36FFC(p_endCallback, (int32_t)v15, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  klass = (Il2CppObject *)p_endCallback->klass;
  v19 = (CommonUI_o *)Instance;
  v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v20, klass, Method_ActionExtensions_Call__, 0);
  if ( !v19 )
    sub_1C372B4(v21);
  CommonUI__CloseSelectBonusGetDialog_31323076(v19, v20, 0);
}