void __fastcall SelectBonusBaseMaster___ctor(SelectBonusBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC811A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int___ctor__, method);
    byte_4BC811A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    522,
    (const MethodInfo_3246354 *)Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x25
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *Instance; // x0
  int32_t v42; // w20
  int32_t v43; // w22
  int32_t v44; // w21
  CommonUI_o *v45; // x23
  SelectBonusConfirmDialog_CallbackFunc_o *v46; // x24

  if ( (byte_4BC8118 & 1) == 0 )
  {
    sub_1C1ABD4(&SelectBonusConfirmDialog_CallbackFunc_TypeInfo, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1C1ABD4(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__0__, v18);
    sub_1C1ABD4(&SelectBonusBaseMaster___c__DisplayClass1_0_TypeInfo, v19);
    byte_4BC8118 = 1;
  }
  v20 = sub_1C1AE20(SelectBonusBaseMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_6;
  *(_QWORD *)(v20 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_DWORD *)(v20 + 24) = eventId;
  *(_QWORD *)(v20 + 32) = endCallback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)endCallback, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v20 + 40) = bonusGetMessage;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v20 + 40), (int64_t)bonusGetMessage, v35, v36, v37, v38, v39, v40);
  *(_DWORD *)(v20 + 48) = giftType;
  *(_DWORD *)(v20 + 52) = giftObjectId;
  *(_DWORD *)(v20 + 56) = resultIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v43 = *(_DWORD *)(v20 + 52);
  v42 = *(_DWORD *)(v20 + 56);
  v44 = *(_DWORD *)(v20 + 48);
  v45 = (CommonUI_o *)Instance;
  v46 = (SelectBonusConfirmDialog_CallbackFunc_o *)sub_1C1AE20(SelectBonusConfirmDialog_CallbackFunc_TypeInfo);
  SelectBonusConfirmDialog_CallbackFunc___ctor(
    v46,
    (Il2CppObject *)v20,
    Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__0__,
    0LL);
  if ( !v45 )
LABEL_6:
    sub_1C1AE30(v21, v22);
  CommonUI__OpenSelectBonusConfirmDialog(v45, dialogName, v42, v44, v43, v46, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectBonusBaseMaster__OpenSelectBonusDialog(
        SelectBonusBaseMaster_o *this,
        int32_t eventId,
        System_Action_o *endCallback,
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
  __int64 v16; // x19
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2
  System_Collections_Generic_List_SelectBonusEntity__o *SelectBonusEntitiesByEventId; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x8
  Il2CppObject *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x8
  System_String_o *v48; // x21
  CommonUI_o *v49; // x20
  SelectBonusDialog_CallbackFunc_o *v50; // x22

  if ( (byte_4BC8117 & 1) == 0 )
  {
    sub_1C1ABD4(&SelectBonusDialog_CallbackFunc_TypeInfo, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_1C1ABD4(&Method_DataManager_GetMaster_SelectBonusBaseMaster___, v8);
    sub_1C1ABD4(&Method_DataManager_GetMaster_SelectBonusMaster___, v9);
    sub_1C1ABD4(&DataManager_TypeInfo, v10);
    sub_1C1ABD4(&Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int__TryGetEntity__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SelectBonusEntity__get_Count__, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1C1ABD4(&Method_SelectBonusBaseMaster___c__DisplayClass0_0__OpenSelectBonusDialog_b__0__, v14);
    sub_1C1ABD4(&SelectBonusBaseMaster___c__DisplayClass0_0_TypeInfo, v15);
    byte_4BC8117 = 1;
  }
  v16 = sub_1C1AE20(SelectBonusBaseMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_19;
  *(_QWORD *)(v16 + 24) = endCallback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)endCallback, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 48) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 48), (int64_t)this, v25, v26, v27, v28, v29, v30);
  *(_DWORD *)(v16 + 56) = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         (Il2CppObject **)(v16 + 40),
         *(_DWORD *)(v16 + 56),
         (const MethodInfo_32486C4 *)Method_DataMasterBase_SelectBonusBaseMaster__SelectBonusBaseEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_SelectBonusMaster___);
    if ( !Master_object )
      goto LABEL_19;
    SelectBonusEntitiesByEventId = SelectBonusMaster__GetSelectBonusEntitiesByEventId(
                                     (SelectBonusMaster_o *)Master_object,
                                     *(_DWORD *)(v16 + 56),
                                     v31);
    *(_QWORD *)(v16 + 16) = SelectBonusEntitiesByEventId;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)(v16 + 16),
      (int64_t)SelectBonusEntitiesByEventId,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v39 = *(_QWORD *)(v16 + 16);
    if ( v39 )
    {
      if ( *(int *)(v39 + 24) > 0 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v40 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_GiftMaster___);
        *(_QWORD *)(v16 + 32) = v40;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)v40, v41, v42, v43, v44, v45, v46);
        Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v47 = *(_QWORD *)(v16 + 40);
        if ( v47 )
        {
          v48 = *(System_String_o **)(v47 + 24);
          v49 = (CommonUI_o *)Master_object;
          v50 = (SelectBonusDialog_CallbackFunc_o *)sub_1C1AE20(SelectBonusDialog_CallbackFunc_TypeInfo);
          SelectBonusDialog_CallbackFunc___ctor(
            v50,
            (Il2CppObject *)v16,
            Method_SelectBonusBaseMaster___c__DisplayClass0_0__OpenSelectBonusDialog_b__0__,
            0LL);
          if ( v49 )
          {
            CommonUI__OpenSelectBonusDialog(v49, v48, v50, 0LL);
            return;
          }
        }
LABEL_19:
        sub_1C1AE30(Master_object, v18);
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v16 + 24), 0LL);
}


void __fastcall SelectBonusBaseMaster__UpdateGiftBadgeNum(SelectBonusBaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x19
  __int64 v8; // x1
  GiftButtonCtrl_o *Instance; // x0
  UISprite_c *klass; // x8
  __int64 v11; // x8
  UnityEngine_Object_o *v12; // x19
  UISprite_c *v13; // x8
  __int64 v14; // x8
  CombineRootComponent_o *giftButton; // x0
  CombineRootComponent_c *v16; // x8
  unsigned int methodPtr_low; // w9
  __int64 v18; // x11
  __int64 v19; // x11

  if ( (byte_4BC8119 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineRootComponent_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v2);
    sub_1C1ABD4(&ShopRootComponent_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v5);
    byte_4BC8119 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
    byte_4BC2713 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BC2713 )
    {
      sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BC2713 = 1;
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
    v11 = *(_QWORD *)&klass->_2.element_size;
    if ( !v11 )
      goto LABEL_42;
    v12 = *(UnityEngine_Object_o **)(v11 + 120);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BC2713 )
      {
        sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v8);
        byte_4BC2713 = 1;
      }
      Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (GiftButtonCtrl_o *)TerminalSceneComponent_TypeInfo;
      }
      v13 = Instance[1].fields.limitedPeriodSprite->klass;
      if ( v13 )
      {
        v14 = *(_QWORD *)&v13->_2.element_size;
        if ( v14 )
        {
          Instance = *(GiftButtonCtrl_o **)(v14 + 120);
          if ( Instance )
          {
            GiftButtonCtrl__InvalidateGiftInfo(Instance, 0LL);
            goto LABEL_33;
          }
        }
      }
LABEL_42:
      sub_1C1AE30(Instance, v8);
    }
  }
LABEL_33:
  Instance = (GiftButtonCtrl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  giftButton = (CombineRootComponent_o *)Instance->fields.giftButton;
  if ( giftButton )
  {
    v16 = giftButton->klass;
    methodPtr_low = LOBYTE(giftButton->klass->vtable._0_Equals.methodPtr);
    v18 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( methodPtr_low >= (unsigned int)v18
      && (CombineRootComponent_c *)v16->_2.typeHierarchy[v18 - 1] == CombineRootComponent_TypeInfo )
    {
      CombineRootComponent__UpdateGiftBadgeNum(giftButton, 0LL);
    }
    else
    {
      v19 = LOBYTE(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( methodPtr_low >= (unsigned int)v19
        && (ShopRootComponent_c *)v16->_2.typeHierarchy[v19 - 1] == ShopRootComponent_TypeInfo )
      {
        ShopRootComponent__UpdateGiftBadgeNum((ShopRootComponent_o *)giftButton, 0LL);
      }
    }
  }
}


void __fastcall SelectBonusBaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC811B & 1) == 0 )
  {
    sub_1C1ABD4(&SelectBonusBaseMaster___c_TypeInfo, v1);
    byte_4BC811B = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(SelectBonusBaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SelectBonusBaseMaster___c_TypeInfo->static_fields->__9 = (struct SelectBonusBaseMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)SelectBonusBaseMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4BC811C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BC811C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v3);
  CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0LL);
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass0_0___ctor(
        SelectBonusBaseMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectBonusBaseMaster___c__DisplayClass0_0___OpenSelectBonusDialog_b__0(
        SelectBonusBaseMaster___c__DisplayClass0_0_o *this,
        int32_t resultIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  void *Instance; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_SelectBonusEntity__o *selectBonusList; // x21
  System_Func_object__bool__o *v13; // x22
  Il2CppObject *v14; // x21
  int32_t v15; // w4
  int32_t v16; // w5
  struct SelectBonusBaseEntity_o *selectBonusBaseEnt; // x8
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_4BC811D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_FirstOrDefault_SelectBonusEntity___, *(_QWORD *)&resultIndex);
    sub_1C1ABD4(&System_Func_SelectBonusEntity__bool__TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C1ABD4(&Method_SelectBonusBaseMaster___c__DisplayClass0_1__OpenSelectBonusDialog_b__1__, v7);
    sub_1C1ABD4(&SelectBonusBaseMaster___c__DisplayClass0_1_TypeInfo, v8);
    byte_4BC811D = 1;
  }
  v9 = sub_1C1AE20(SelectBonusBaseMaster___c__DisplayClass0_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_DWORD *)(v9 + 16) = resultIndex;
  selectBonusList = this->fields.selectBonusList;
  v13 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_SelectBonusEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_SelectBonusBaseMaster___c__DisplayClass0_1__OpenSelectBonusDialog_b__1__,
    0LL);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__50081164(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectBonusList,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2FC2D8C *)Method_System_Linq_Enumerable_FirstOrDefault_SelectBonusEntity___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseSelectBonusDialog((CommonUI_o *)Instance, 0LL);
  if ( !v14 )
  {
    ActionExtensions__Call(this->fields.endCallback, 0LL);
    return;
  }
  Instance = this->fields.giftMst;
  if ( !Instance
    || ((Instance = GiftMaster__getDataById((GiftMaster_o *)Instance, (int32_t)v14[1].monitor, 0LL)) == 0LL
      ? (v15 = 0, v16 = 0)
      : (v15 = *((_DWORD *)Instance + 5), v16 = *((_DWORD *)Instance + 6)),
        (selectBonusBaseEnt = this->fields.selectBonusBaseEnt) == 0LL || (Instance = this->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1C1AE30(Instance, v11);
  }
  SelectBonusBaseMaster__OpenSelectBonusConfirmDialog(
    (SelectBonusBaseMaster_o *)Instance,
    this->fields.eventId,
    selectBonusBaseEnt->fields.confirmDialogObject,
    *(_DWORD *)(v9 + 16),
    v15,
    v16,
    (System_String_o *)v14[2].klass,
    this->fields.endCallback,
    v18);
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
    sub_1C1AE30(this, 0LL);
  return e->fields.idx == this->fields.resultIndex;
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass1_0___ctor(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__0(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  NetworkManager_ResultCallbackFunc_o *_9__1; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BC811E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_NetworkManager_getRequest_EventScriptFlagRequest___, *(_QWORD *)&result);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C1ABD4(&Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__1__, v8);
    byte_4BC811E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseSelectBonusConfirmDialog(Instance, 0LL);
  if ( result == 1 )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (CommonUI_o *)NetworkManager__getRequest_object_(
                               _9__1,
                               (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_EventScriptFlagRequest___);
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
        v11);
      return;
    }
LABEL_15:
    sub_1C1AE30(Instance, v10);
  }
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__1(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SelectBonusBaseMaster___c__DisplayClass1_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  System_Action_o *_9__2; // x25
  CommonUI_o *v7; // x24
  int32_t eventId; // w20
  System_String_o *bonusGetMessage; // x21
  int32_t giftType; // w22
  int32_t giftObjectId; // w23
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v3 = this;
  if ( (byte_4BC811F & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, result);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (SelectBonusBaseMaster___c__DisplayClass1_0_o *)sub_1C1ABD4(
                                                             &Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__2__,
                                                             v5);
    byte_4BC811F = 1;
  }
  if ( !v3->fields.__4__this )
    goto LABEL_8;
  SelectBonusBaseMaster__UpdateGiftBadgeNum((SelectBonusBaseMaster_o *)this, (const MethodInfo *)result);
  this = (SelectBonusBaseMaster___c__DisplayClass1_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = v3->fields.__9__2;
  v7 = (CommonUI_o *)this;
  eventId = v3->fields.eventId;
  bonusGetMessage = v3->fields.bonusGetMessage;
  giftType = v3->fields.giftType;
  giftObjectId = v3->fields.giftObjectId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_SelectBonusBaseMaster___c__DisplayClass1_0__OpenSelectBonusConfirmDialog_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v3->fields.__9__2, (int64_t)_9__2, v12, v13, v14, v15, v16, v17);
  }
  if ( !v7 )
LABEL_8:
    sub_1C1AE30(this, result);
  CommonUI__OpenSelectBonusGetDialog(v7, eventId, bonusGetMessage, giftType, giftObjectId, _9__2, 0LL);
}


void __fastcall SelectBonusBaseMaster___c__DisplayClass1_0___OpenSelectBonusConfirmDialog_b__2(
        SelectBonusBaseMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationUtility_o *p_endCallback; // x19
  System_Delegate_o *v8; // x20
  struct System_Action_o *endCallback; // t1
  SelectBonusBaseMaster___c_c *v10; // x0
  System_Action_o *_9__1_3; // x21
  Il2CppObject *v12; // x22
  struct SelectBonusBaseMaster___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Delegate_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x8
  System_Action_c *v28; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *klass; // x21
  CommonUI_o *v31; // x19
  System_Action_o *v32; // x20
  __int64 v33; // x0
  __int64 v34; // x1

  if ( (byte_4BC8120 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ActionExtensions_Call__, method);
    sub_1C1ABD4(&System_Action_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C1ABD4(&Method_SelectBonusBaseMaster___c__OpenSelectBonusConfirmDialog_b__1_3__, v5);
    sub_1C1ABD4(&SelectBonusBaseMaster___c_TypeInfo, v6);
    byte_4BC8120 = 1;
  }
  endCallback = this->fields.endCallback;
  p_endCallback = (PartyOrganizationUtility_o *)&this->fields.endCallback;
  v8 = (System_Delegate_o *)endCallback;
  v10 = SelectBonusBaseMaster___c_TypeInfo;
  if ( !SelectBonusBaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectBonusBaseMaster___c_TypeInfo);
    v10 = SelectBonusBaseMaster___c_TypeInfo;
  }
  _9__1_3 = v10->static_fields->__9__1_3;
  if ( !_9__1_3 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = SelectBonusBaseMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__1_3 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(_9__1_3, v12, Method_SelectBonusBaseMaster___c__OpenSelectBonusConfirmDialog_b__1_3__, 0LL);
    static_fields = SelectBonusBaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_3 = _9__1_3;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__1_3, (int64_t)_9__1_3, v14, v15, v16, v17, v18, v19);
  }
  v20 = System_Delegate__Combine(v8, (System_Delegate_o *)_9__1_3, 0LL);
  v27 = (int64_t)v20;
  if ( !v20 )
    goto LABEL_13;
  v28 = System_Action_TypeInfo;
  if ( (System_Action_c *)v20->klass != System_Action_TypeInfo
    || (p_endCallback->klass = (PartyOrganizationUtility_c *)v20, (System_Action_c *)v20->klass != v28) )
  {
    sub_1C1B0F0(v20);
LABEL_13:
    p_endCallback->klass = (PartyOrganizationUtility_c *)v27;
  }
  sub_1C1AB78(p_endCallback, v27, v21, v22, v23, v24, v25, v26);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  klass = (Il2CppObject *)p_endCallback->klass;
  v31 = (CommonUI_o *)Instance;
  v32 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v32, klass, Method_ActionExtensions_Call__, 0LL);
  if ( !v31 )
    sub_1C1AE30(v33, v34);
  CommonUI__CloseSelectBonusGetDialog_31210596(v31, v32, 0LL);
}