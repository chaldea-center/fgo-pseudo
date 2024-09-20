void __fastcall SelectBonusBaseMaster___ctor(SelectBonusBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B781 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int___ctor__);
    byte_4A5B781 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    518,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int___ctor__);
}


void __fastcall SelectBonusBaseMaster__OpenSelectBonusConfirmDialog(
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
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *Instance; // x0
  int32_t v27; // w20
  int32_t v28; // w22
  int32_t v29; // w21
  CommonUI_o *v30; // x23
  SelectBonusConfirmDialog_CallbackFunc_o *v31; // x24

  if ( (byte_4A5B77F & 1) == 0 )
  {
    sub_1B885B0(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__0__);
    sub_1B885B0(&SelectBonusBaseMaster___c__DisplayClass1_0_TypeInfo);
    byte_4A5B77F = 1;
  }
  v17 = sub_1B887FC(SelectBonusBaseMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_6;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_DWORD *)(v17 + 24) = eventId;
  *(_QWORD *)(v17 + 32) = endCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)endCallback, v22, v23);
  *(_QWORD *)(v17 + 40) = bonusGetMessage;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)bonusGetMessage, v24, v25);
  *(_DWORD *)(v17 + 48) = giftType;
  *(_DWORD *)(v17 + 52) = giftObjectId;
  *(_DWORD *)(v17 + 56) = resultIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = *(_DWORD *)(v17 + 52);
  v27 = *(_DWORD *)(v17 + 56);
  v29 = *(_DWORD *)(v17 + 48);
  v30 = (CommonUI_o *)Instance;
  v31 = (SelectBonusConfirmDialog_CallbackFunc_o *)sub_1B887FC(SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
  SelectBonusConfirmDialog_CallbackFunc___ctor(
    v31,
    (Il2CppObject *)v17,
    Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__0__,
    0LL);
  if ( !v30 )
LABEL_6:
    sub_1B8880C(v18, v19);
  CommonUI__OpenSelectBonusConfirmDialog(v30, dialogName, v27, v29, v28, v31, 0LL);
}


void __fastcall SelectBonusBaseMaster__OpenSelectBonusDialog(
        SelectBonusBaseMaster_o *this,
        int32_t eventId,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_SelectBonusEntity__o *SelectBonusEntitiesByEventId; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  System_String_o *v23; // x21
  CommonUI_o *v24; // x20
  SelectBonusDialog_CallbackFunc_o *v25; // x22

  if ( (byte_4A5B77E & 1) == 0 )
  {
    sub_1B885B0(&SelectBonusDialog_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SelectBonusBaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SelectBonusMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SelectBonusEntity__get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SelectBonusBaseMaster___c__DisplayClass0_0__OpenSelectBonusDialog_b__0__);
    sub_1B885B0(&SelectBonusBaseMaster___c__DisplayClass0_0_TypeInfo);
    byte_4A5B77E = 1;
  }
  v7 = sub_1B887FC(SelectBonusBaseMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 24) = endCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)endCallback, v10, v11);
  *(_QWORD *)(v7 + 48) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)this, v12, v13);
  *(_DWORD *)(v7 + 56) = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         (Il2CppObject **)(v7 + 40),
         *(_DWORD *)(v7 + 56),
         (const MethodInfo_311D988 *)Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SelectBonusMaster___);
    if ( !Master_object )
      goto LABEL_19;
    SelectBonusEntitiesByEventId = SelectBonusMaster__GetSelectBonusEntitiesByEventId(
                                     (SelectBonusMaster_o *)Master_object,
                                     *(_DWORD *)(v7 + 56),
                                     v14);
    *(_QWORD *)(v7 + 16) = SelectBonusEntitiesByEventId;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)SelectBonusEntitiesByEventId, v16, v17);
    v18 = *(_QWORD *)(v7 + 16);
    if ( v18 )
    {
      if ( *(int *)(v18 + 24) > 0 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v19 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
        *(_QWORD *)(v7 + 32) = v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v19, v20, v21);
        Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v22 = *(_QWORD *)(v7 + 40);
        if ( v22 )
        {
          v23 = *(System_String_o **)(v22 + 24);
          v24 = (CommonUI_o *)Master_object;
          v25 = (SelectBonusDialog_CallbackFunc_o *)sub_1B887FC(SelectBonusDialog_CallbackFunc_TypeInfo);
          SelectBonusDialog_CallbackFunc___ctor(
            v25,
            (Il2CppObject *)v7,
            Method_SelectBonusBaseMaster___c__DisplayClass0_0__OpenSelectBonusDialog_b__0__,
            0LL);
          if ( v24 )
          {
            CommonUI__OpenSelectBonusDialog(v24, v23, v25, 0LL);
            return;
          }
        }
LABEL_19:
        sub_1B8880C(Master_object, v9);
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
}


void __fastcall SelectBonusBaseMaster__UpdateGiftBadgeNum(SelectBonusBaseMaster_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  __int64 v4; // x1
  GiftButtonCtrl_o *Instance; // x0
  UISprite_c *klass; // x8
  __int64 v7; // x8
  UnityEngine_Object_o *v8; // x19
  UISprite_c *v9; // x8
  __int64 v10; // x8
  CombineRootComponent_o *giftButton; // x0
  CombineRootComponent_c *v12; // x8
  unsigned int methodPtr_low; // w9
  __int64 v14; // x11
  __int64 v15; // x11

  if ( (byte_4A5B780 & 1) == 0 )
  {
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ShopRootComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5B780 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
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
    v7 = *(_QWORD *)&klass->_2.element_size;
    if ( !v7 )
      goto LABEL_42;
    v8 = *(UnityEngine_Object_o **)(v7 + 120);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
      }
      Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
      }
      v9 = Instance[1].fields.limitedPeriodSprite->klass;
      if ( v9 )
      {
        v10 = *(_QWORD *)&v9->_2.element_size;
        if ( v10 )
        {
          Instance = *(GiftButtonCtrl_o **)(v10 + 120);
          if ( Instance )
          {
            GiftButtonCtrl__InvalidateGiftInfo(Instance, 0LL);
            goto LABEL_33;
          }
        }
      }
LABEL_42:
      sub_1B8880C(Instance, v4);
    }
  }
LABEL_33:
  Instance = (GiftButtonCtrl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  giftButton = (CombineRootComponent_o *)Instance->fields.giftButton;
  if ( giftButton )
  {
    v12 = giftButton->klass;
    methodPtr_low = LOBYTE(giftButton->klass->vtable._0_Equals.methodPtr);
    v14 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( methodPtr_low >= (unsigned int)v14
      && (CombineRootComponent_c *)v12->_2.typeHierarchy[v14 - 1] == CombineRootComponent_TypeInfo )
    {
      CombineRootComponent__UpdateGiftBadgeNum(giftButton, 0LL);
    }
    else
    {
      v15 = LOBYTE(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( methodPtr_low >= (unsigned int)v15
        && (ShopRootComponent_c *)v12->_2.typeHierarchy[v15 - 1] == ShopRootComponent_TypeInfo )
      {
        ShopRootComponent__UpdateGiftBadgeNum((ShopRootComponent_o *)giftButton, 0LL);
      }
    }
  }
}


void __fastcall SelectBonusBaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B782 & 1) == 0 )
  {
    sub_1B885B0(&SelectBonusBaseMaster___c_TypeInfo);
    byte_4A5B782 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SelectBonusBaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SelectBonusBaseMaster___c_TypeInfo->static_fields->__9 = (struct SelectBonusBaseMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SelectBonusBaseMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall SelectBonusBaseMaster___c___ctor(SelectBonusBaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectBonusBaseMaster___c___OpenSelectBonusConfirmDialog_b__1_3(
        SelectBonusBaseMaster___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5B783 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5B783 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0LL);
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass0_0___ctor(
        SelectBonusBaseMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass0_0___OpenSelectBonusDialog_b__0(
        SelectBonusBaseMaster___c__DisplayClass0_0_o *this,
        int32_t resultIndex,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *Instance; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_SelectBonusEntity__o *selectBonusList; // x21
  System_Func_object__bool__o *v9; // x22
  Il2CppObject *v10; // x21
  int32_t v11; // w4
  int32_t v12; // w5
  struct SelectBonusBaseEntity_o *selectBonusBaseEnt; // x8
  const MethodInfo *v14; // [xsp+0h] [xbp-50h]

  if ( (byte_4A5B784 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_SelectBonusEntity___);
    sub_1B885B0(&System_Func_SelectBonusEntity__bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SelectBonusBaseMaster___c__DisplayClass0_1__OpenSelectBonusDialog_b__1__);
    sub_1B885B0(&SelectBonusBaseMaster___c__DisplayClass0_1_TypeInfo);
    byte_4A5B784 = 1;
  }
  v5 = sub_1B887FC(SelectBonusBaseMaster___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_DWORD *)(v5 + 16) = resultIndex;
  selectBonusList = this->fields.selectBonusList;
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_SelectBonusEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SelectBonusBaseMaster___c__DisplayClass0_1__OpenSelectBonusDialog_b__1__,
    0LL);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectBonusList,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_SelectBonusEntity___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseSelectBonusDialog((CommonUI_o *)Instance, 0LL);
  if ( !v10 )
  {
    ActionExtensions__Call(this->fields.endCallback, 0LL);
    return;
  }
  Instance = this->fields.giftMst;
  if ( !Instance
    || ((Instance = GiftMaster__getDataById((GiftMaster_o *)Instance, (int32_t)v10[1].monitor, 0LL)) == 0LL
      ? (v11 = 0, v12 = 0)
      : (v11 = *((_DWORD *)Instance + 5), v12 = *((_DWORD *)Instance + 6)),
        (selectBonusBaseEnt = this->fields.selectBonusBaseEnt) == 0LL || (Instance = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(Instance, v7);
  }
  SelectBonusBaseMaster__OpenSelectBonusConfirmDialog(
    (SelectBonusBaseMaster_o *)Instance,
    this->fields.eventId,
    selectBonusBaseEnt->fields.confirmDialogObject,
    *(_DWORD *)(v5 + 16),
    v11,
    v12,
    (System_String_o *)v10[2].klass,
    this->fields.endCallback,
    v14);
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass0_1___ctor(
        SelectBonusBaseMaster___c__DisplayClass0_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SelectBonusBaseMaster___c__DisplayClass0_1___OpenSelectBonusDialog_b__1(
        SelectBonusBaseMaster___c__DisplayClass0_1_o *this,
        SelectBonusEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B8880C(this, 0LL);
  return e->fields.idx == this->fields.resultIndex;
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass1_0___ctor(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__0(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  NetworkManager_ResultCallbackFunc_o *_9__1; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5B785 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_EventScriptFlagRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__1__);
    byte_4A5B785 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseSelectBonusConfirmDialog(Instance, 0LL);
  if ( result == 1 )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (CommonUI_o *)NetworkManager__getRequest_object_(
                               _9__1,
                               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventScriptFlagRequest___);
    if ( !Instance )
      goto LABEL_15;
    EventScriptFlagRequest__beginRequest(
      (EventScriptFlagRequest_o *)Instance,
      this->fields.eventId,
      this->fields.resultIndex,
      0LL);
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
        v7);
      return;
    }
LABEL_15:
    sub_1B8880C(Instance, v6);
  }
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__1(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SelectBonusBaseMaster___c__DisplayClass1_0_o *v3; // x19
  System_Action_o *_9__2; // x24
  CommonUI_o *v5; // x23
  System_String_o *bonusGetMessage; // x20
  int32_t giftType; // w21
  int32_t giftObjectId; // w22
  int32_t v9; // w2
  int32_t v10; // w3

  v3 = this;
  if ( (byte_4A5B786 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (SelectBonusBaseMaster___c__DisplayClass1_0_o *)sub_1B885B0(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__2__);
    byte_4A5B786 = 1;
  }
  if ( !v3->fields.__4__this )
    goto LABEL_8;
  SelectBonusBaseMaster__UpdateGiftBadgeNum((SelectBonusBaseMaster_o *)this, (const MethodInfo *)result);
  this = (SelectBonusBaseMaster___c__DisplayClass1_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = v3->fields.__9__2;
  v5 = (CommonUI_o *)this;
  bonusGetMessage = v3->fields.bonusGetMessage;
  giftType = v3->fields.giftType;
  giftObjectId = v3->fields.giftObjectId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v5 )
LABEL_8:
    sub_1B8880C(this, result);
  CommonUI__OpenSelectBonusGetDialog(v5, bonusGetMessage, giftType, giftObjectId, _9__2, 0LL);
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__2(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_endCallback; // x19
  System_Delegate_o *v4; // x20
  struct System_Action_o *endCallback; // t1
  SelectBonusBaseMaster___c_c *v6; // x0
  System_Action_o *_9__1_3; // x21
  Il2CppObject *v8; // x22
  struct SelectBonusBaseMaster___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Delegate_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Delegate_o *v15; // x8
  System_Action_c *v16; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *klass; // x21
  CommonUI_o *v19; // x19
  System_Action_o *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_4A5B787 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call__);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SelectBonusBaseMaster___c__OpenSelectBonusConfirmDialog_b__1_3__);
    sub_1B885B0(&SelectBonusBaseMaster___c_TypeInfo);
    byte_4A5B787 = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = (ServantStatusBattleListViewItem_o *)&this->fields.endCallback;
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
    _9__1_3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__1_3, v8, Method_SelectBonusBaseMaster___c__OpenSelectBonusConfirmDialog_b__1_3__, 0LL);
    static_fields = SelectBonusBaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_3 = _9__1_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_3, (int32_t)_9__1_3, v10, v11);
  }
  v12 = System_Delegate__Combine(v4, (System_Delegate_o *)_9__1_3, 0LL);
  v15 = v12;
  if ( !v12 )
    goto LABEL_13;
  v16 = System_Action_TypeInfo;
  if ( (System_Action_c *)v12->klass != System_Action_TypeInfo
    || (p_endCallback->klass = (ServantStatusBattleListViewItem_c *)v12, (System_Action_c *)v12->klass != v16) )
  {
    sub_1B88ACC(v12);
LABEL_13:
    p_endCallback->klass = (ServantStatusBattleListViewItem_c *)v15;
  }
  sub_1B88554(p_endCallback, (int32_t)v15, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  klass = (Il2CppObject *)p_endCallback->klass;
  v19 = (CommonUI_o *)Instance;
  v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v20, klass, Method_ActionExtensions_Call__, 0LL);
  if ( !v19 )
    sub_1B8880C(v21, v22);
  CommonUI__CloseSelectBonusGetDialog_30596264(v19, v20, 0LL);
}