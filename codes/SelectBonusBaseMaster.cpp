void SelectBonusBaseMaster___ctor(SelectBonusBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3120A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int___ctor__);
    byte_4D3120A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    525,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int___ctor__);
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
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *Instance; // x0
  int32_t v39; // w20
  int32_t v40; // w22
  int32_t v41; // w21
  CommonUI_o *v42; // x23
  SelectBonusConfirmDialog_CallbackFunc_o *v43; // x24

  if ( (byte_4D31208 & 1) == 0 )
  {
    sub_1C93AD4(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__0__);
    sub_1C93AD4(&SelectBonusBaseMaster___c__DisplayClass1_0_TypeInfo);
    byte_4D31208 = 1;
  }
  v17 = sub_1C93D20(SelectBonusBaseMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_6;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v17 + 24) = eventId;
  *(_QWORD *)(v17 + 32) = endCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 32), (int32_t)endCallback, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v17 + 40) = bonusGetMessage;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 40), (int32_t)bonusGetMessage, v32, v33, v34, v35, v36, v37);
  *(_DWORD *)(v17 + 48) = giftType;
  *(_DWORD *)(v17 + 52) = giftObjectId;
  *(_DWORD *)(v17 + 56) = resultIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v40 = *(_DWORD *)(v17 + 52);
  v39 = *(_DWORD *)(v17 + 56);
  v41 = *(_DWORD *)(v17 + 48);
  v42 = (CommonUI_o *)Instance;
  v43 = (SelectBonusConfirmDialog_CallbackFunc_o *)sub_1C93D20(SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
  SelectBonusConfirmDialog_CallbackFunc___ctor(
    v43,
    (Il2CppObject *)v17,
    Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__0__,
    0);
  if ( !v42 )
LABEL_6:
    sub_1C93D2C(v18, v19);
  CommonUI__OpenSelectBonusConfirmDialog(v42, dialogName, v39, v41, v40, v43, 0);
}


void SelectBonusBaseMaster__OpenSelectBonusDialog(
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
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_SelectBonusEntity__o *SelectBonusEntitiesByEventId; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x8
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  __int64 v38; // x8
  System_String_o *v39; // x21
  CommonUI_o *v40; // x20
  SelectBonusDialog_CallbackFunc_o *v41; // x22

  if ( (byte_4D31207 & 1) == 0 )
  {
    sub_1C93AD4(&SelectBonusDialog_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SelectBonusBaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SelectBonusMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SelectBonusEntity__get_Count__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SelectBonusBaseMaster___c__DisplayClass0_0__OpenSelectBonusDialog_b__0__);
    sub_1C93AD4(&SelectBonusBaseMaster___c__DisplayClass0_0_TypeInfo);
    byte_4D31207 = 1;
  }
  v7 = sub_1C93D20(SelectBonusBaseMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 24) = endCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)endCallback, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v7 + 56) = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         (Il2CppObject **)(v7 + 40),
         *(_DWORD *)(v7 + 56),
         (const MethodInfo_34632C0 *)Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SelectBonusMaster___);
    if ( !Master_object )
      goto LABEL_19;
    SelectBonusEntitiesByEventId = SelectBonusMaster__GetSelectBonusEntitiesByEventId(
                                     (SelectBonusMaster_o *)Master_object,
                                     *(_DWORD *)(v7 + 56),
                                     v22);
    *(_QWORD *)(v7 + 16) = SelectBonusEntitiesByEventId;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)(v7 + 16),
      (int32_t)SelectBonusEntitiesByEventId,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    v30 = *(_QWORD *)(v7 + 16);
    if ( v30 )
    {
      if ( *(int *)(v30 + 24) > 0 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v31 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GiftMaster___);
        *(_QWORD *)(v7 + 32) = v31;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
        Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v38 = *(_QWORD *)(v7 + 40);
        if ( v38 )
        {
          v39 = *(System_String_o **)(v38 + 24);
          v40 = (CommonUI_o *)Master_object;
          v41 = (SelectBonusDialog_CallbackFunc_o *)sub_1C93D20(SelectBonusDialog_CallbackFunc_TypeInfo);
          SelectBonusDialog_CallbackFunc___ctor(
            v41,
            (Il2CppObject *)v7,
            Method_SelectBonusBaseMaster___c__DisplayClass0_0__OpenSelectBonusDialog_b__0__,
            0);
          if ( v40 )
          {
            CommonUI__OpenSelectBonusDialog(v40, v39, v41, 0);
            return;
          }
        }
LABEL_19:
        sub_1C93D2C(Master_object, v9);
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
}


void SelectBonusBaseMaster__UpdateGiftBadgeNum(SelectBonusBaseMaster_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  __int64 v4; // x1
  GiftButtonCtrl_o *Instance; // x0
  NoticeNumberComponent_c *klass; // x8
  __int64 v7; // x8
  UnityEngine_Object_o *v8; // x19
  NoticeNumberComponent_c *v9; // x8
  __int64 v10; // x8
  CombineRootComponent_o *giftButton; // x0
  CombineRootComponent_c *v12; // x8
  unsigned int naturalAligment; // w9
  __int64 v14; // x11
  __int64 v15; // x11

  if ( (byte_4D31209 & 1) == 0 )
  {
    sub_1C93AD4(&CombineRootComponent_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ShopRootComponent_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D31209 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
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
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance[1].fields.giftNumberCounter->klass;
    if ( !klass )
      goto LABEL_42;
    v7 = *(_QWORD *)&klass->_2.instance_size;
    if ( !v7 )
      goto LABEL_42;
    v8 = *(UnityEngine_Object_o **)(v7 + 120);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D2A6EE )
      {
        sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
        byte_4D2A6EE = 1;
      }
      Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
      }
      v9 = Instance[1].fields.giftNumberCounter->klass;
      if ( v9 )
      {
        v10 = *(_QWORD *)&v9->_2.instance_size;
        if ( v10 )
        {
          Instance = *(GiftButtonCtrl_o **)(v10 + 120);
          if ( Instance )
          {
            GiftButtonCtrl__InvalidateGiftInfo(Instance, 0);
            goto LABEL_33;
          }
        }
      }
LABEL_42:
      sub_1C93D2C(Instance, v4);
    }
  }
LABEL_33:
  Instance = (GiftButtonCtrl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  giftButton = (CombineRootComponent_o *)Instance->fields.giftButton;
  if ( giftButton )
  {
    v12 = giftButton->klass;
    naturalAligment = giftButton->klass->_2.naturalAligment;
    v14 = CombineRootComponent_TypeInfo->_2.naturalAligment;
    if ( naturalAligment >= (unsigned int)v14
      && (CombineRootComponent_c *)v12->_2.typeHierarchy[v14 - 1] == CombineRootComponent_TypeInfo )
    {
      CombineRootComponent__UpdateGiftBadgeNum(giftButton, 0);
    }
    else
    {
      v15 = ShopRootComponent_TypeInfo->_2.naturalAligment;
      if ( naturalAligment >= (unsigned int)v15
        && (ShopRootComponent_c *)v12->_2.typeHierarchy[v15 - 1] == ShopRootComponent_TypeInfo )
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3120B & 1) == 0 )
  {
    sub_1C93AD4(&SelectBonusBaseMaster___c_TypeInfo);
    byte_4D3120B = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SelectBonusBaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectBonusBaseMaster___c_TypeInfo->static_fields->__9 = (struct SelectBonusBaseMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SelectBonusBaseMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v3; // x1

  if ( (byte_4D3120C & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D3120C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
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
  __int64 v7; // x1
  struct System_Collections_Generic_List_SelectBonusEntity__o *selectBonusList; // x21
  System_Func_object__bool__o *v9; // x22
  Il2CppObject *v10; // x21
  int32_t v11; // w4
  int32_t v12; // w5
  struct SelectBonusBaseEntity_o *selectBonusBaseEnt; // x8
  const MethodInfo *v14; // [xsp+0h] [xbp-50h]

  if ( (byte_4D3120D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_SelectBonusEntity___);
    sub_1C93AD4(&System_Func_SelectBonusEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SelectBonusBaseMaster___c__DisplayClass0_1__OpenSelectBonusDialog_b__1__);
    sub_1C93AD4(&SelectBonusBaseMaster___c__DisplayClass0_1_TypeInfo);
    byte_4D3120D = 1;
  }
  v5 = sub_1C93D20(SelectBonusBaseMaster___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_DWORD *)(v5 + 16) = resultIndex;
  selectBonusList = this->fields.selectBonusList;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_SelectBonusEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SelectBonusBaseMaster___c__DisplayClass0_1__OpenSelectBonusDialog_b__1__,
    0);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectBonusList,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_SelectBonusEntity___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseSelectBonusDialog((CommonUI_o *)Instance, 0);
  if ( !v10 )
  {
    ActionExtensions__Call(this->fields.endCallback, 0);
    return;
  }
  Instance = this->fields.giftMst;
  if ( !Instance
    || ((Instance = GiftMaster__getDataById((GiftMaster_o *)Instance, (int32_t)v10[1].monitor, 0)) == 0
      ? (v11 = 0, v12 = 0)
      : (v11 = *((_DWORD *)Instance + 5), v12 = *((_DWORD *)Instance + 6)),
        (selectBonusBaseEnt = this->fields.selectBonusBaseEnt) == 0 || (Instance = this->fields.__4__this) == 0) )
  {
LABEL_14:
    sub_1C93D2C(Instance, v7);
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
    sub_1C93D2C(this, 0);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  NetworkManager_ResultCallbackFunc_o *_9__1; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D3120E & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_EventScriptFlagRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__1__);
    byte_4D3120E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseSelectBonusConfirmDialog(Instance, 0);
  if ( result == 1 )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (CommonUI_o *)NetworkManager__getRequest_object_(
                               _9__1,
                               (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_EventScriptFlagRequest___);
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
        v7);
      return;
    }
LABEL_15:
    sub_1C93D2C(Instance, v6);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  v3 = this;
  if ( (byte_4D3120F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (SelectBonusBaseMaster___c__DisplayClass1_0_o *)sub_1C93AD4(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__2__);
    byte_4D3120F = 1;
  }
  if ( !v3->fields.__4__this )
    goto LABEL_8;
  SelectBonusBaseMaster__UpdateGiftBadgeNum((SelectBonusBaseMaster_o *)this, (const MethodInfo *)result);
  this = (SelectBonusBaseMaster___c__DisplayClass1_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = v3->fields.__9__2;
  v5 = (CommonUI_o *)this;
  eventId = v3->fields.eventId;
  bonusGetMessage = v3->fields.bonusGetMessage;
  giftType = v3->fields.giftType;
  giftObjectId = v3->fields.giftObjectId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v5 )
LABEL_8:
    sub_1C93D2C(this, result);
  CommonUI__OpenSelectBonusGetDialog(v5, eventId, bonusGetMessage, giftType, giftObjectId, _9__2, 0);
}


void SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__2(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_endCallback; // x19
  System_Delegate_o *v4; // x20
  struct System_Action_o *endCallback; // t1
  SelectBonusBaseMaster___c_c *v6; // x0
  System_Action_o *_9__1_3; // x21
  Il2CppObject *v8; // x22
  struct SelectBonusBaseMaster___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Delegate_o *v23; // x8
  System_Action_c *v24; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *klass; // x21
  CommonUI_o *v27; // x19
  System_Action_o *v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1

  if ( (byte_4D31210 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call__);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SelectBonusBaseMaster___c__OpenSelectBonusConfirmDialog_b__1_3__);
    sub_1C93AD4(&SelectBonusBaseMaster___c_TypeInfo);
    byte_4D31210 = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = (GrandQuestFolderBoardItem_o *)&this->fields.endCallback;
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
    _9__1_3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(_9__1_3, v8, Method_SelectBonusBaseMaster___c__OpenSelectBonusConfirmDialog_b__1_3__, 0);
    static_fields = SelectBonusBaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_3 = _9__1_3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_3, (int32_t)_9__1_3, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Delegate__Combine(v4, (System_Delegate_o *)_9__1_3, 0);
  v23 = v16;
  if ( !v16 )
    goto LABEL_13;
  v24 = System_Action_TypeInfo;
  if ( (System_Action_c *)v16->klass != System_Action_TypeInfo
    || (p_endCallback->klass = (GrandQuestFolderBoardItem_c *)v16, (System_Action_c *)v16->klass != v24) )
  {
    sub_1C940C8(v16);
LABEL_13:
    p_endCallback->klass = (GrandQuestFolderBoardItem_c *)v23;
  }
  sub_1C93A78(p_endCallback, (int32_t)v23, v17, v18, v19, v20, v21, v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  klass = (Il2CppObject *)p_endCallback->klass;
  v27 = (CommonUI_o *)Instance;
  v28 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v28, klass, Method_ActionExtensions_Call__, 0);
  if ( !v27 )
    sub_1C93D2C(v29, v30);
  CommonUI__CloseSelectBonusGetDialog(v27, v28, 0);
}