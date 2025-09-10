void EventRewardAnotherPayConfirmDialog___cctor(const MethodInfo *method)
{
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  EventRewardAnotherPayConfirmDialog_c *v2; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v3; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v4; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v5; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v6; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v7; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v8; // x9

  if ( (byte_4C21B17 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_4C21B17 = 1;
  }
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CancelButtonReconfirmPos.fields.x = 0xC3600000C3200000LL;
  static_fields->CancelButtonReconfirmPos.fields.z = 0.0;
  v2 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  v3 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(int32x2_t *)&v3->CancelButtonChoicePos.fields.x = vdup_n_s32(0xC3600000);
  v3->CancelButtonChoicePos.fields.z = 0.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->CancelButtonChoiceMultiPos.fields.x = 0xC35A000000000000LL;
  v4->CancelButtonChoiceMultiPos.fields.z = 0.0;
  v5 = v2->static_fields;
  *(_QWORD *)&v5->CancelButtonPurchasedPos.fields.x = 0xC3700000C3200000LL;
  v5->CancelButtonPurchasedPos.fields.z = 0.0;
  v6 = v2->static_fields;
  *(_QWORD *)&v6->CancelButtonResultPos.fields.x = 0xC31B000000000000LL;
  v6->CancelButtonResultPos.fields.z = 0.0;
  v7 = v2->static_fields;
  *(_QWORD *)&v7->DecideButtonReconfirmPos.fields.x = 0xC360000043200000LL;
  v7->DecideButtonReconfirmPos.fields.z = 0.0;
  v8 = v2->static_fields;
  *(_QWORD *)&v8->DecideButtonPurchasedPos.fields.x = -4363988037795840000LL;
  v8->DecideButtonPurchasedPos.fields.z = 0.0;
  v2->static_fields->ConfirmWindowSize = (struct UnityEngine_Vector2_o)0x4416000044430000LL;
  v2->static_fields->ResultWindowSize = (struct UnityEngine_Vector2_o)0x43F0000044430000LL;
  v2->static_fields->ChoiceMultiWindowSize = (struct UnityEngine_Vector2_o)0x440E800044548000LL;
  v2->static_fields->CancelButtonChoiceMultiSize = (struct UnityEngine_Vector2_o)0x42600000435A0000LL;
  v2->static_fields->CancelButtonCommonSize = (struct UnityEngine_Vector2_o)0x425C000043580000LL;
}


void EventRewardAnotherPayConfirmDialog___ctor(EventRewardAnotherPayConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C21B16 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C21B16 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventRewardAnotherPayConfirmDialog__Close(EventRewardAnotherPayConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C21B0F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventRewardAnotherPayConfirmDialog_Init__);
    byte_4C21B0F = 1;
  }
  this->fields.state = 2;
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_Init__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


System_String_o *EventRewardAnotherPayConfirmDialog__GetName(
        EventRewardAnotherPayConfirmDialog_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *ServantLimitCountSealAfter; // x0
  __int64 v7; // x22
  __int64 v8; // x23
  int64_t userIdNumber; // x21
  Il2CppObject *v10; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  ServantLimitImageMaster_o *v13; // x20
  int32_t v14; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C21B14 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C21B14 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  ServantLimitCountSealAfter = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    ServantLimitCountSealAfter = NetworkManager_TypeInfo;
  }
  if ( !svtEntity )
    goto LABEL_28;
  v8 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  userIdNumber = ServantLimitCountSealAfter->static_fields->userIdNumber;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v8;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  ServantLimitCountSealAfter = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                     v17,
                                                     0);
  if ( !Master_object )
    goto LABEL_28;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)Master_object,
          &entity,
          userIdNumber,
          (int32_t)ServantLimitCountSealAfter,
          0) )
  {
    v14 = -1;
    return ServantEntity__getName(svtEntity, v14, -1, 1, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v12 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v13 = (ServantLimitImageMaster_o *)v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  ServantLimitCountSealAfter = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                     v18,
                                                     0);
  if ( !entity
    || !v13
    || (ServantLimitCountSealAfter = (NetworkManager_c *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                           v13,
                                                           (int32_t)ServantLimitCountSealAfter,
                                                           entity->fields.maxLimitCount,
                                                           0),
        !entity) )
  {
LABEL_28:
    sub_1C2D6EC(ServantLimitCountSealAfter, v4);
  }
  if ( (_DWORD)ServantLimitCountSealAfter == entity->fields.maxLimitCount )
    v14 = -1;
  else
    v14 = (int)ServantLimitCountSealAfter;
  return ServantEntity__getName(svtEntity, v14, -1, 1, 0);
}


void EventRewardAnotherPayConfirmDialog__Init(EventRewardAnotherPayConfirmDialog_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0), (itemIcon = (ItemIconComponent_o *)this->fields.skillIcon) == 0) )
  {
    sub_1C2D6EC(itemIcon, method);
  }
  SkillIconComponent__Clear((SkillIconComponent_o *)itemIcon, 0);
  this->fields.onClickButton = 0;
  sub_1C2D434(&this->fields.onClickButton);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventRewardAnotherPayConfirmDialog__OnClickAnotherBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4C21B13 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    byte_4C21B13 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C2D6EC(v5, v6);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
      onClickButton->fields.method_code,
      3,
      (unsigned int)this->fields.buyAnotherItemId,
      onClickButton->fields.method);
  }
}


void EventRewardAnotherPayConfirmDialog__OnClickCancel(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *decideButton; // x0
  int32_t v4; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4C21B10 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    byte_4C21B10 = 1;
  }
  if ( this->fields.state == 1 )
  {
    decideButton = this->fields.decideButton;
    this->fields.buyAnotherItemId = 0;
    if ( !decideButton )
      goto LABEL_17;
    if ( UnityEngine_GameObject__get_activeSelf(decideButton, 0) )
      goto LABEL_10;
    decideButton = this->fields.normalBuyButton;
    if ( !decideButton )
      goto LABEL_17;
    if ( UnityEngine_GameObject__get_activeSelf(decideButton, 0) )
      goto LABEL_10;
    decideButton = this->fields.anotherBuyButton;
    if ( !decideButton )
      goto LABEL_17;
    if ( UnityEngine_GameObject__get_activeSelf(decideButton, 0) )
LABEL_10:
      v4 = 1;
    else
      v4 = 0;
    v5 = Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, v4, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
    {
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
        onClickButton->fields.method_code,
        0,
        0,
        onClickButton->fields.method);
      return;
    }
LABEL_17:
    sub_1C2D6EC(decideButton, method);
  }
}


void EventRewardAnotherPayConfirmDialog__OnClickDecide(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4C21B11 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    byte_4C21B11 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C2D6EC(v5, v6);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
      onClickButton->fields.method_code,
      1,
      (unsigned int)this->fields.buyAnotherItemId,
      onClickButton->fields.method);
  }
}


void EventRewardAnotherPayConfirmDialog__OnClickListViewItemAction(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isAnotherPay,
        int32_t anotherItemId,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8
  __int64 v12; // x1

  if ( (byte_4C21B0E & 1) == 0 )
  {
    sub_1C2D490(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    byte_4C21B0E = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.buyAnotherItemId = anotherItemId;
    this->fields.state = 2;
    v7 = Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C2D4A8(Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C2D6EC(v9, v10);
    if ( isAnotherPay )
      v12 = 3;
    else
      v12 = 2;
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
      onClickButton->fields.method_code,
      v12,
      (unsigned int)anotherItemId,
      onClickButton->fields.method);
  }
}


void EventRewardAnotherPayConfirmDialog__OnClickNormalBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4C21B12 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    byte_4C21B12 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C2D6EC(v5, v6);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
      onClickButton->fields.method_code,
      2,
      0,
      onClickButton->fields.method);
  }
}


void EventRewardAnotherPayConfirmDialog__Open(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *buttonAction,
        bool isReconfirm,
        int32_t selectedAnotherItemId,
        const MethodInfo *method)
{
  _BOOL4 v7; // w23
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o **p_onClickButton; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x24
  __int64 v15; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  ItemEntity_o *Entity; // x22
  int MasterName_k__BackingField; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x24
  char v20; // w25
  bool v21; // zf
  int32_t v22; // w8
  const MethodInfo *v23; // x4
  int32_t eventId; // w23
  struct System_String_o *v25; // x26
  __int64 v26; // x27
  int32_t v27; // w0
  const MethodInfo *v28; // x4
  bool v29; // w23
  System_String_o *name; // x25
  System_String_o *AnotherPayName; // x27
  System_String_o *v32; // x0
  const MethodInfo *v33; // x7
  const MethodInfo *v34; // x1
  EventRewardAnotherPayConfirmDialog_c *v35; // x0
  int32_t state; // w24
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  __int64 v38; // x9
  __int64 v39; // x10
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x4
  System_Action_o *v42; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  UnityEngine_Vector2_o v44; // 0:s0.4,4:s1.4

  v7 = isReconfirm;
  if ( (byte_4C21B08 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_EventRewardAnotherPayConfirmDialog__Open_b__76_0__);
    sub_1C2D490(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C21B08 = 1;
  }
  p_onClickButton = &this->fields.onClickButton;
  this->fields.onClickButton = buttonAction;
  sub_1C2D434(&this->fields.onClickButton);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !shopEntity )
    goto LABEL_38;
  v14 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetAnotherPayItemIds(shopEntity, 0);
  v16 = Master_object;
  if ( selectedAnotherItemId <= 0 )
  {
    if ( !Master_object )
      goto LABEL_38;
    if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
      sub_1C2D6F4(Master_object, v13, v15);
    selectedAnotherItemId = Master_object->fields.revision;
  }
  if ( !v14
    || (Entity = (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v14,
                                   selectedAnotherItemId,
                                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetRelateServantEntity(shopEntity, 0),
        !v16)
    || (MasterName_k__BackingField = (int)v16->fields._MasterName_k__BackingField,
        v19 = Master_object,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__IsSoldOut(shopEntity, 0),
        !Entity) )
  {
LABEL_38:
    sub_1C2D6EC(Master_object, v13);
  }
  this->fields.buyAnotherItemId = Entity->fields.id;
  if ( !v19 )
  {
    if ( *p_onClickButton )
    {
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))(*p_onClickButton)->fields.invoke_impl)(
        (*p_onClickButton)->fields.method_code,
        2,
        0,
        (*p_onClickButton)->fields.method);
      return;
    }
    goto LABEL_38;
  }
  v20 = (char)Master_object;
  v21 = ((unsigned __int8)Master_object & 1) == 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIcon;
  if ( v21 )
    v22 = 3;
  else
    v22 = 4;
  if ( MasterName_k__BackingField > 1 )
    v22 = 5;
  if ( v7 )
    v22 = 6;
  this->fields.state = v22;
  if ( !Master_object )
    goto LABEL_38;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( !Master_object )
    goto LABEL_38;
  if ( MasterName_k__BackingField <= 1 || v7 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIcon;
    if ( Master_object )
    {
      ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, Entity->fields.id, -1, 1, 0);
      eventId = shopEntity->fields.eventId;
      v26 = *(_QWORD *)&v19->fields._MasterKind_k__BackingField;
      v25 = v19->fields._MasterName_k__BackingField;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v43.fields.currentCryptoKey = v26;
      *(_QWORD *)&v43.fields.fakeValue = v25;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v43, 0);
      EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v27, Entity, v28);
      goto LABEL_32;
    }
    goto LABEL_38;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skill;
  if ( !Master_object )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
LABEL_32:
  v29 = v20 & 1;
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, 1, MasterName_k__BackingField > 1, v20 & 1, v23);
  name = Entity->fields.name;
  AnotherPayName = ItemEntity__GetAnotherPayName(Entity, 0);
  v32 = ShopEntity__getName(shopEntity, 0);
  EventRewardAnotherPayConfirmDialog__SetConfirmLabel(
    this,
    (ServantEntity_o *)v19,
    name,
    AnotherPayName,
    v32,
    MasterName_k__BackingField > 1,
    v29,
    v33);
  v35 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  state = this->fields.state;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v35 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  static_fields = v35->static_fields;
  v38 = 88;
  if ( state == 5 )
  {
    v38 = 104;
    v39 = 100;
  }
  else
  {
    v39 = 84;
  }
  v44.fields.y = *(float *)((char *)&static_fields->CancelButtonReconfirmPos.fields.x + v38);
  v44.fields.x = *(float *)((char *)&static_fields->CancelButtonReconfirmPos.fields.x + v39);
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v44, v34);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, Entity, v40);
  EventRewardAnotherPayConfirmDialog__SetListView(this, shopEntity, (System_Int32_array *)v16, v29, v41);
  v42 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog__Open_b__76_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0);
}


void EventRewardAnotherPayConfirmDialog__OpenResult(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        bool isAnotherItemOnly,
        int32_t usedAnotherItemId,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onDecide,
        const MethodInfo *method)
{
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o **p_onClickButton; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v13; // x1
  ItemEntity_o *v14; // x20
  ServantEntity_o *v15; // x23
  int32_t eventId; // w24
  struct System_String_o *MasterName_k__BackingField; // x25
  __int64 v18; // x26
  int32_t v19; // w0
  const MethodInfo *v20; // x4
  UILabel_o *titleLabel; // x24
  UILabel_o *upperLabel; // x26
  UILabel_o *downerLabel; // x27
  System_String_o *Empty; // x25
  EventRewardAnotherPayConfirmDialog_o *v25; // x0
  const MethodInfo *v26; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  UILabel_o *resultLabel; // x23
  Il2CppObject *v30; // x25
  __int64 *v31; // x8
  System_String_o *v32; // x22
  Il2CppObject *v33; // x0
  const MethodInfo *v34; // x4
  bool v35; // w1
  UILabel_o *v36; // x21
  const MethodInfo *v37; // x1
  EventRewardAnotherPayConfirmDialog_c *v38; // x0
  const MethodInfo *v39; // x2
  System_Action_o *v40; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4C21B09 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_EventRewardAnotherPayConfirmDialog__OpenResult_b__77_0__);
    sub_1C2D490(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_1967/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/);
    sub_1C2D490(&StringLiteral_1966/*"ANOTHER_PAY_PERIOD_END_MSG"*/);
    sub_1C2D490(&StringLiteral_1968/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/);
    byte_4C21B09 = 1;
  }
  p_onClickButton = &this->fields.onClickButton;
  entity = 0;
  this->fields.onClickButton = onDecide;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C2D434(&this->fields.onClickButton);
  if ( !shopEntity )
  {
    if ( *p_onClickButton )
    {
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))(*p_onClickButton)->fields.invoke_impl)(
        (*p_onClickButton)->fields.method_code,
        0,
        0,
        (*p_onClickButton)->fields.method);
      return;
    }
    goto LABEL_39;
  }
  this->fields.state = 7;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  usedAnotherItemId,
                                                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this->fields.itemIcon )
    goto LABEL_39;
  v14 = (ItemEntity_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this->fields.itemIcon,
                                                                  0);
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetRelateServantEntity(shopEntity, 0);
  if ( !Master_object )
    goto LABEL_39;
  v15 = (ServantEntity_o *)Master_object;
  eventId = shopEntity->fields.eventId;
  v18 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v18;
  *(_QWORD *)&v42.fields.fakeValue = MasterName_k__BackingField;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v42, 0);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v19, v14, v20);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.warnLabel;
  if ( !Master_object )
    goto LABEL_39;
  titleLabel = this->fields.titleLabel;
  upperLabel = this->fields.upperLabel;
  downerLabel = this->fields.downerLabel;
  Empty = string_TypeInfo->static_fields->Empty;
  UILabel__set_text((UILabel_o *)Master_object, Empty, 0);
  if ( !downerLabel )
    goto LABEL_39;
  UILabel__set_text(downerLabel, Empty, 0);
  if ( !upperLabel )
    goto LABEL_39;
  UILabel__set_text(upperLabel, Empty, 0);
  if ( !titleLabel )
    goto LABEL_39;
  UILabel__set_text(titleLabel, Empty, 0);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v25, v15, v26);
  ClassName = ServantEntity__getClassName(v15, 0);
  resultLabel = this->fields.resultLabel;
  v30 = (Il2CppObject *)ClassName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isAnotherItemOnly )
      goto LABEL_18;
LABEL_22:
    v31 = &StringLiteral_1968/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
    goto LABEL_23;
  }
  if ( !isAnotherItemOnly )
    goto LABEL_22;
LABEL_18:
  v31 = &StringLiteral_1967/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
LABEL_23:
  v32 = LocalizationManager__Get((System_String_o *)*v31, 0);
  v33 = (Il2CppObject *)ShopEntity__getName(shopEntity, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format_63499224(v32, v33, v30, Name, 0);
  if ( !resultLabel )
    goto LABEL_39;
  UILabel__set_text(resultLabel, (System_String_o *)Master_object, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_39;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         shopEntity->fields.eventId,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( entity )
    {
      if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, 0, 0) )
        goto LABEL_30;
      v36 = this->fields.downerLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_1966/*"ANOTHER_PAY_PERIOD_END_MSG"*/,
                                                                      0);
      if ( v36 )
      {
        UILabel__set_text(v36, (System_String_o *)Master_object, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.downerLabel;
        if ( Master_object )
        {
          UILabel__set_fontSize((UILabel_o *)Master_object, 22, 0);
          v35 = 0;
          goto LABEL_36;
        }
      }
    }
LABEL_39:
    sub_1C2D6EC(Master_object, v13);
  }
LABEL_30:
  v35 = 1;
LABEL_36:
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, v35, 0, 0, v34);
  v38 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v38 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v38->static_fields->ResultWindowSize, v37);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, v14, v39);
  v40 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog__OpenResult_b__77_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0);
}


void EventRewardAnotherPayConfirmDialog__SetButtonDisp(
        EventRewardAnotherPayConfirmDialog_o *this,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  UILabel_o *cancelLabel; // x21
  __int64 *v6; // x8
  System_String_o *v7; // x22
  System_String_o *decideButton; // x0
  __int64 v9; // x1
  UILabel_o *decideLabel; // x21
  UILabel_o *normalBuyLabel; // x21
  UILabel_o *anotherBuyLabel; // x21
  System_String_o *v13; // x22
  Il2CppObject *v14; // x1
  UIWidget_o *cancelButtonSp; // x20
  int32_t state; // w21
  __int64 v17; // x8
  float v18; // s0
  int32_t v19; // w1
  UIWidget_o *v20; // x20
  int32_t v21; // w21
  __int64 v22; // x8
  float v23; // s0
  int32_t v24; // w1
  EventRewardAnotherPayConfirmDialog_c *v25; // x0
  UnityEngine_GameObject_o *v26; // x20
  int32_t v27; // w21
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v28; // x8
  __int64 v29; // x9
  __int64 v30; // x10
  __int64 v31; // x11
  EventRewardAnotherPayConfirmDialog_c *v32; // x0
  UnityEngine_GameObject_o *cancelButton; // x20
  int32_t v34; // w19
  float *p_x; // x9
  __int64 v36; // x8
  __int64 v37; // x10
  float *p_z; // x8
  float *p_y; // x10
  EventRewardAnotherPayConfirmDialog_c *v40; // x0
  int32_t v41; // w19
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v42; // x9
  __int64 v43; // x8
  __int64 v44; // x10
  __int64 v45; // x11
  EventRewardAnotherPayConfirmDialog_c *v46; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21B0C & 1) == 0 )
  {
    sub_1C2D490(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_9326/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/);
    sub_1C2D490(&StringLiteral_1950/*"ANOTHER_PAY_ANOTHER_BUY"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_1965/*"ANOTHER_PAY_NORMAL_BUY"*/);
    byte_4C21B0C = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( this->fields.state == 7 )
    v6 = &StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/;
  else
    v6 = &StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/;
  v7 = (System_String_o *)*v6;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__Get(v7, 0);
  if ( !cancelLabel )
    goto LABEL_70;
  UILabel__set_text(cancelLabel, decideButton, 0);
  decideLabel = this->fields.decideLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_9326/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0);
  if ( !decideLabel )
    goto LABEL_70;
  UILabel__set_text(decideLabel, decideButton, 0);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_1965/*"ANOTHER_PAY_NORMAL_BUY"*/, 0);
  if ( !normalBuyLabel )
    goto LABEL_70;
  UILabel__set_text(normalBuyLabel, decideButton, 0);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_1950/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0);
  v14 = itemEntity ? (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0) : 0LL;
  decideButton = System_String__Format(v13, v14, 0);
  if ( !anotherBuyLabel )
    goto LABEL_70;
  UILabel__set_text(anotherBuyLabel, decideButton, 0);
  decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  cancelButtonSp = (UIWidget_o *)this->fields.cancelButtonSp;
  state = this->fields.state;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  v17 = 116;
  if ( state == 5 )
    v17 = 108;
  if ( !cancelButtonSp )
    goto LABEL_70;
  v18 = *(float *)(*(_QWORD *)&decideButton[7].fields + v17);
  if ( v18 == INFINITY )
    v19 = 0x80000000;
  else
    v19 = (int)v18;
  UIWidget__set_width(cancelButtonSp, v19, 0);
  decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  v20 = (UIWidget_o *)this->fields.cancelButtonSp;
  v21 = this->fields.state;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  v22 = 120;
  if ( v21 == 5 )
    v22 = 112;
  if ( !v20 )
LABEL_70:
    sub_1C2D6EC(decideButton, v9);
  v23 = *(float *)(*(_QWORD *)&decideButton[7].fields + v22);
  if ( v23 == INFINITY )
    v24 = 0x80000000;
  else
    v24 = (int)v23;
  UIWidget__set_height(v20, v24, 0);
  switch ( this->fields.state )
  {
    case 3:
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      decideButton = (System_String_o *)this->fields.normalBuyButton;
      if ( !decideButton )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0);
      decideButton = (System_String_o *)this->fields.anotherBuyButton;
      if ( !decideButton )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0);
      v46 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v46 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      static_fields = v46->static_fields;
      p_x = &static_fields->CancelButtonChoicePos.fields.x;
      p_y = &static_fields->CancelButtonChoicePos.fields.y;
      p_z = &static_fields->CancelButtonChoicePos.fields.z;
      break;
    case 4:
    case 6:
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0);
      decideButton = (System_String_o *)this->fields.normalBuyButton;
      if ( !decideButton )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      decideButton = (System_String_o *)this->fields.anotherBuyButton;
      if ( !decideButton )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      v25 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v26 = this->fields.decideButton;
      v27 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v25 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v28 = v25->static_fields;
      v29 = 68;
      if ( v27 == 4 )
      {
        v29 = 80;
        v30 = 76;
      }
      else
      {
        v30 = 64;
      }
      if ( v27 == 4 )
        v31 = 72;
      else
        v31 = 60;
      v48.fields.x = *(float *)((char *)&v28->CancelButtonReconfirmPos.fields.x + v31);
      v48.fields.y = *(float *)((char *)&v28->CancelButtonReconfirmPos.fields.x + v30);
      v48.fields.z = *(float *)((char *)&v28->CancelButtonReconfirmPos.fields.x + v29);
      GameObjectExtensions__SetLocalPosition(v26, v48, 0);
      v32 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      v34 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v32 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      p_x = &v32->static_fields->CancelButtonReconfirmPos.fields.x;
      v36 = 2;
      if ( v34 == 4 )
      {
        v36 = 11;
        v37 = 10;
      }
      else
      {
        v37 = 1;
      }
      p_z = &p_x[v36];
      p_y = &p_x[v37];
      if ( v34 == 4 )
        p_x += 9;
      break;
    case 5:
    case 7:
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      decideButton = (System_String_o *)this->fields.normalBuyButton;
      if ( !decideButton )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      decideButton = (System_String_o *)this->fields.anotherBuyButton;
      if ( !decideButton )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      v40 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      v41 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v40 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v42 = v40->static_fields;
      v43 = 32;
      if ( v41 == 7 )
      {
        v43 = 56;
        v44 = 52;
      }
      else
      {
        v44 = 28;
      }
      if ( v41 == 7 )
        v45 = 48;
      else
        v45 = 24;
      p_z = (float *)((char *)&v42->CancelButtonReconfirmPos.fields.x + v43);
      p_y = (float *)((char *)&v42->CancelButtonReconfirmPos.fields.x + v44);
      p_x = (float *)((char *)&v42->CancelButtonReconfirmPos.fields.x + v45);
      break;
    default:
      return;
  }
  v49.fields.y = *p_y;
  v49.fields.x = *p_x;
  v49.fields.z = *p_z;
  GameObjectExtensions__SetLocalPosition(cancelButton, v49, 0);
}


void EventRewardAnotherPayConfirmDialog__SetConfirmLabel(
        EventRewardAnotherPayConfirmDialog_o *this,
        ServantEntity_o *svtEntity,
        System_String_o *itemName,
        System_String_o *anotherName,
        System_String_o *shopName,
        bool isMultiAnotherPayItem,
        bool isOnlyAnotherItem,
        const MethodInfo *method)
{
  ServantEntity_o *v13; // x25
  UILabel_o *resultLabel; // x0
  EventRewardAnotherPayConfirmDialog_o *v16; // x0
  const MethodInfo *v17; // x2
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x25
  int32_t v20; // w1
  UILabel_o *titleLabel; // x27
  UILabel_o *v22; // x21
  System_String_o *v23; // x0
  int32_t state; // w27
  UILabel_o *v25; // x26
  System_String_o *v26; // x0
  UILabel_o *upperLabel; // x21
  System_String_o *v28; // x0
  UILabel_o *downerLabel; // x21
  System_String_o *v30; // x0
  struct UILabel_o *warnLabel; // x20
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  UILabel_o *v34; // x26
  System_String_o *v35; // x0
  int32_t v36; // w26
  System_String_o *v37; // x0
  ServantEntity_o *v38; // x0
  System_String_o *v39; // x0
  UILabel_o *v40; // x21
  System_String_o *v41; // x0
  System_String_o *Empty; // x1
  System_String_o *v43; // x26
  __int64 v44; // x2
  UILabel_o *v45; // x27
  __int64 *v46; // x8
  System_String_o *v47; // x21
  System_String_o *v48; // x0
  __int64 v49; // x0

  v13 = svtEntity;
  if ( (byte_4C21B0B & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_1963/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/);
    sub_1C2D490(&StringLiteral_1957/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/);
    sub_1C2D490(&StringLiteral_1951/*"ANOTHER_PAY_CONFIRM_TITLE"*/);
    sub_1C2D490(&StringLiteral_1953/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/);
    sub_1C2D490(&StringLiteral_1959/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/);
    sub_1C2D490(&StringLiteral_1964/*"ANOTHER_PAY_MULTI_INFO_TITLE"*/);
    sub_1C2D490(&StringLiteral_1958/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/);
    sub_1C2D490(&StringLiteral_1962/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/);
    sub_1C2D490(&StringLiteral_1956/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/);
    sub_1C2D490(&StringLiteral_1954/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/);
    sub_1C2D490(&StringLiteral_1952/*"ANOTHER_PAY_INFO_TITLE"*/);
    sub_1C2D490(&StringLiteral_1955/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/);
    sub_1C2D490(&StringLiteral_1960/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/);
    byte_4C21B0B = 1;
  }
  resultLabel = this->fields.resultLabel;
  if ( !resultLabel )
    goto LABEL_65;
  UILabel__set_text(resultLabel, string_TypeInfo->static_fields->Empty, 0);
  resultLabel = (UILabel_o *)EventRewardAnotherPayConfirmDialog__GetName(v16, v13, v17);
  if ( !v13 )
    goto LABEL_65;
  v18 = (Il2CppObject *)resultLabel;
  resultLabel = (UILabel_o *)ServantEntity__getClassName(v13, 0);
  if ( !this->fields.warnLabel )
    goto LABEL_65;
  v19 = (Il2CppObject *)resultLabel;
  if ( this->fields.state == 5 )
    v20 = 18;
  else
    v20 = 20;
  UILabel__set_fontSize(this->fields.warnLabel, v20, 0);
  titleLabel = this->fields.titleLabel;
  if ( this->fields.state != 5 )
  {
    if ( !titleLabel )
      goto LABEL_65;
    UILabel__set_fontSize(this->fields.titleLabel, 24, 0);
    resultLabel = this->fields.downerLabel;
    if ( !resultLabel )
      goto LABEL_65;
    UILabel__set_fontSize(resultLabel, 20, 0);
    resultLabel = this->fields.upperLabel;
    if ( !resultLabel )
      goto LABEL_65;
    UILabel__set_fontSize(resultLabel, 20, 0);
    state = this->fields.state;
    v25 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( state == 3 )
    {
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_1952/*"ANOTHER_PAY_INFO_TITLE"*/, 0);
      resultLabel = (UILabel_o *)System_String__Format(v26, (Il2CppObject *)anotherName, 0);
      if ( !v25 )
        goto LABEL_65;
      UILabel__set_text(v25, (System_String_o *)resultLabel, 0);
      upperLabel = this->fields.upperLabel;
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_1953/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0);
      resultLabel = (UILabel_o *)System_String__Format(v28, (Il2CppObject *)anotherName, 0);
      if ( !upperLabel )
        goto LABEL_65;
      UILabel__set_text(upperLabel, (System_String_o *)resultLabel, 0);
      downerLabel = this->fields.downerLabel;
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_1954/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0);
      resultLabel = (UILabel_o *)System_String__Format(v30, (Il2CppObject *)anotherName, 0);
      if ( !downerLabel )
        goto LABEL_65;
      UILabel__set_text(downerLabel, (System_String_o *)resultLabel, 0);
      warnLabel = this->fields.warnLabel;
      v32 = (System_String_o *)StringLiteral_1957/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/;
      goto LABEL_62;
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_1951/*"ANOTHER_PAY_CONFIRM_TITLE"*/, 0);
    resultLabel = (UILabel_o *)System_String__Format(v33, (Il2CppObject *)anotherName, 0);
    if ( !v25 )
      goto LABEL_65;
    UILabel__set_text(v25, (System_String_o *)resultLabel, 0);
    v34 = this->fields.downerLabel;
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_1956/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, 0);
    resultLabel = (UILabel_o *)System_String__Format(v35, (Il2CppObject *)itemName, 0);
    if ( !v34 )
      goto LABEL_65;
    UILabel__set_text(v34, (System_String_o *)resultLabel, 0);
    v36 = this->fields.state;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v36 == 6 )
    {
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_1963/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, 0);
      v38 = (ServantEntity_o *)System_String__Format_63499224(v37, (Il2CppObject *)itemName, v19, v18, 0);
LABEL_56:
      svtEntity = v38;
      resultLabel = this->fields.upperLabel;
      if ( !resultLabel )
        goto LABEL_65;
      UILabel__set_text(resultLabel, (System_String_o *)svtEntity, 0);
      v46 = (__int64 *)&StringLiteral_1962/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/;
      warnLabel = this->fields.warnLabel;
      if ( !isMultiAnotherPayItem )
        v46 = &StringLiteral_1957/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/;
      v47 = (System_String_o *)*v46;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = v47;
LABEL_62:
      v48 = LocalizationManager__Get(v32, 0);
      resultLabel = (UILabel_o *)System_String__Format(v48, (Il2CppObject *)anotherName, 0);
      if ( warnLabel )
      {
        Empty = (System_String_o *)resultLabel;
        resultLabel = warnLabel;
        goto LABEL_64;
      }
LABEL_65:
      sub_1C2D6EC(resultLabel, svtEntity);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_1955/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, 0);
    resultLabel = (UILabel_o *)sub_1C2D538(object___TypeInfo, 4);
    if ( !resultLabel )
      goto LABEL_65;
    v45 = resultLabel;
    if ( !itemName || (resultLabel = (UILabel_o *)sub_1C2D5CC(itemName, resultLabel->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v45->fields.m_CancellationTokenSource) )
        goto LABEL_66;
      v45->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)itemName;
      resultLabel = (UILabel_o *)sub_1C2D434(&v45->fields.leftAnchor);
      if ( !v19 || (resultLabel = (UILabel_o *)sub_1C2D5CC(v19, v45->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v45->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_66;
        v45->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v19;
        resultLabel = (UILabel_o *)sub_1C2D434(&v45->fields.rightAnchor);
        if ( !v18 || (resultLabel = (UILabel_o *)sub_1C2D5CC(v18, v45->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v45->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_66;
          v45->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v18;
          resultLabel = (UILabel_o *)sub_1C2D434(&v45->fields.bottomAnchor);
          if ( !shopName || (resultLabel = (UILabel_o *)sub_1C2D5CC(shopName, v45->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v45->fields.m_CancellationTokenSource) > 3 )
            {
              v45->fields.topAnchor = (struct UIRect_AnchorPoint_o *)shopName;
              sub_1C2D434(&v45->fields.topAnchor);
              v38 = (ServantEntity_o *)System_String__Format_63499292(v43, (System_Object_array *)v45, 0);
              goto LABEL_56;
            }
LABEL_66:
            sub_1C2D6F4(resultLabel, svtEntity, v44);
          }
        }
      }
    }
    v49 = sub_1C2D710();
    sub_1C2D5B8(v49, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  resultLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1964/*"ANOTHER_PAY_MULTI_INFO_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_65;
  UILabel__set_text(titleLabel, (System_String_o *)resultLabel, 0);
  resultLabel = this->fields.titleLabel;
  if ( !resultLabel )
    goto LABEL_65;
  UILabel__set_fontSize(resultLabel, 26, 0);
  resultLabel = this->fields.upperLabel;
  if ( !resultLabel )
    goto LABEL_65;
  UILabel__set_fontSize(resultLabel, 18, 0);
  v22 = this->fields.upperLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isOnlyAnotherItem )
      goto LABEL_17;
LABEL_35:
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_1958/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/, 0);
    resultLabel = (UILabel_o *)System_String__Format(v39, (Il2CppObject *)anotherName, 0);
    goto LABEL_36;
  }
  if ( !isOnlyAnotherItem )
    goto LABEL_35;
LABEL_17:
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_1959/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/, 0);
  resultLabel = (UILabel_o *)System_String__Format_63499224(v23, (Il2CppObject *)anotherName, v19, v18, 0);
LABEL_36:
  svtEntity = (ServantEntity_o *)resultLabel;
  if ( !v22 )
    goto LABEL_65;
  UILabel__set_text(v22, (System_String_o *)resultLabel, 0);
  v40 = this->fields.warnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_1960/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/, 0);
  resultLabel = (UILabel_o *)System_String__Format(v41, (Il2CppObject *)anotherName, 0);
  if ( !v40 )
    goto LABEL_65;
  UILabel__set_text(v40, (System_String_o *)resultLabel, 0);
  resultLabel = this->fields.downerLabel;
  if ( !resultLabel )
    goto LABEL_65;
  Empty = string_TypeInfo->static_fields->Empty;
LABEL_64:
  UILabel__set_text(resultLabel, Empty, 0);
}


void EventRewardAnotherPayConfirmDialog__SetListView(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        System_Int32_array *anotherItemIds,
        bool isOnlyAnotherItem,
        const MethodInfo *method)
{
  UnityEngine_Component_o *listViewManager; // x0
  int32_t state; // w23
  __int64 v11; // x2
  struct System_Int32_array *itemIds; // x8
  int32_t v13; // w24
  EventRewardAnotherPayListViewManager_o *v14; // x23
  int32_t eventId; // w22
  System_Action_bool__int__o *v16; // x25
  const MethodInfo *v17; // x6

  if ( (byte_4C21B0D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_bool__int__TypeInfo);
    sub_1C2D490(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    byte_4C21B0D = 1;
  }
  listViewManager = (UnityEngine_Component_o *)this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_12;
  state = this->fields.state;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listViewManager, 0);
  if ( !listViewManager )
    goto LABEL_12;
  if ( state == 5 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 1, 0);
    if ( shopEntity )
    {
      itemIds = shopEntity->fields.itemIds;
      if ( itemIds )
      {
        if ( !LODWORD(itemIds->max_length) )
          sub_1C2D6F4(listViewManager, shopEntity, v11);
        v13 = itemIds->m_Items[0];
        v14 = this->fields.listViewManager;
        eventId = shopEntity->fields.eventId;
        v16 = (System_Action_bool__int__o *)sub_1C2D6DC(System_Action_bool__int__TypeInfo);
        System_Action_bool__int____ctor(
          v16,
          (Il2CppObject *)this,
          (intptr_t)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__,
          0);
        if ( v14 )
        {
          EventRewardAnotherPayListViewManager__CreateList(
            v14,
            eventId,
            v13,
            anotherItemIds,
            isOnlyAnotherItem,
            v16,
            v17);
          return;
        }
      }
    }
LABEL_12:
    sub_1C2D6EC(listViewManager, shopEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void EventRewardAnotherPayConfirmDialog__SetState(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isReconfirm,
        bool isMultiAnotherItem,
        bool isOnlyAnotherItem,
        const MethodInfo *method)
{
  int32_t v5; // w8

  if ( isOnlyAnotherItem )
    v5 = 4;
  else
    v5 = 3;
  if ( isMultiAnotherItem )
    v5 = 5;
  if ( isReconfirm )
    v5 = 6;
  this->fields.state = v5;
}


void EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(
        EventRewardAnotherPayConfirmDialog_o *this,
        int32_t eventId,
        int32_t svtId,
        ItemEntity_o *anotherItemEntity,
        const MethodInfo *method)
{
  __int64 v9; // x22
  UnityEngine_GameObject_o *skill; // x0
  __int64 v11; // x1
  int32_t *p_value; // x8
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  System_Func_object__bool__o *v14; // x21
  Il2CppObject *v15; // x0
  int32_t v16; // w20
  Il2CppObject *Master_object; // x22
  SkillLvMaster_o *v18; // x21
  UILabel_o *skillNameLabel; // x21
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0
  SkillLvEntity_o *v22; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C21B0A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    sub_1C2D490(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_1C2D490(&Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0__SetSvtPassiveSkillInfo_b__0__);
    sub_1C2D490(&EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0_TypeInfo);
    byte_4C21B0A = 1;
  }
  v22 = 0;
  entity = 0;
  v9 = sub_1C2D6DC(EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_25;
  *(_DWORD *)(v9 + 16) = eventId;
  skill = this->fields.skill;
  if ( !skill )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(skill, 1, 0);
  if ( anotherItemEntity && anotherItemEntity->fields.type == 40 )
  {
    p_value = &anotherItemEntity->fields.value;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    skill = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    if ( !skill )
      goto LABEL_25;
    ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                              (ServantPassiveSkillMaster_o *)skill,
                                                                              svtId,
                                                                              0);
    v14 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v9,
      Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0__SetSvtPassiveSkillInfo_b__0__,
      0);
    v15 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
            ServantSkillList,
            (System_Func_TSource__bool__o *)v14,
            (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    if ( !v15 )
      return;
    p_value = (int32_t *)&v15[1].monitor + 1;
  }
  v16 = *p_value;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
  skill = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_25;
  v18 = (SkillLvMaster_o *)skill;
  skill = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        v16,
                                        (const MethodInfo_3387DE4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)skill & 1) == 0 )
    return;
  if ( !v18 )
    goto LABEL_25;
  if ( !SkillLvMaster__TryGetEntity(v18, &v22, v16, 1, 0) )
    return;
  skill = (UnityEngine_GameObject_o *)entity;
  if ( !entity )
    goto LABEL_25;
  skillNameLabel = this->fields.skillNameLabel;
  skill = (UnityEngine_GameObject_o *)SkillEntity__getName((SkillEntity_o *)entity, 0);
  if ( !skillNameLabel
    || (UILabel__set_text(skillNameLabel, (System_String_o *)skill, 0), (skill = (UnityEngine_GameObject_o *)v22) == 0)
    || (skillDetailLabel = this->fields.skillDetailLabel,
        Detail = SkillLvEntity__getDetail(v22, 0, 0, 0),
        WrapControlText__textAdjust(skillDetailLabel, Detail, 18, 0, 0),
        (skill = (UnityEngine_GameObject_o *)this->fields.skillIcon) == 0) )
  {
LABEL_25:
    sub_1C2D6EC(skill, v11);
  }
  SkillIconComponent__Set((SkillIconComponent_o *)skill, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayConfirmDialog__SetUIPosition(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isEventPeriod,
        bool isMultiAnotherPayItem,
        bool isOnlyAnotherItem,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  int v14; // w8
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  float v20; // s0
  UnityEngine_GameObject_o *v21; // x0
  float v22; // s0
  UnityEngine_GameObject_o *v23; // x0
  float v24; // s0
  UnityEngine_GameObject_o *v25; // x0
  float v26; // s0
  float v27; // s0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0

  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !titleLabel )
LABEL_39:
    sub_1C2D6EC(titleLabel, isEventPeriod);
  gameObject = UnityEngine_Component__get_gameObject(titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 255.0, 0);
  switch ( this->fields.state )
  {
    case 3:
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, 10.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !titleLabel )
        goto LABEL_39;
      v10 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v10, 180.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v11 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v11, 120.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v12 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v12, -100.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v13 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v14 = -1021640704;
      goto LABEL_37;
    case 4:
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, -25.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !titleLabel )
        goto LABEL_39;
      v15 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v15, 185.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v16 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v16, 135.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v17 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v17, -125.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v13 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v14 = -1020329984;
      goto LABEL_37;
    case 5:
      titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v18 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v18, 238.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v19 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v19, 212.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v13 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v14 = -1021706240;
      goto LABEL_37;
    case 6:
      v20 = 5.0;
      if ( isMultiAnotherPayItem )
        v20 = 10.0;
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, v20, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !titleLabel )
        goto LABEL_39;
      v21 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v22 = 175.0;
      if ( isMultiAnotherPayItem )
        v22 = 188.0;
      GameObjectExtensions__SetLocalPositionY(v21, v22, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v23 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v24 = 125.0;
      if ( isMultiAnotherPayItem )
        v24 = 132.0;
      GameObjectExtensions__SetLocalPositionY(v23, v24, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v25 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v26 = -95.0;
      if ( isMultiAnotherPayItem )
        v26 = -106.0;
      GameObjectExtensions__SetLocalPositionY(v25, v26, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v13 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v27 = -145.0;
      if ( isMultiAnotherPayItem )
        v27 = -166.0;
      goto LABEL_38;
    case 7:
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, -30.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v28 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v28, 100.0, 0);
      if ( isEventPeriod )
        return;
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, 0.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v29 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v29, 120.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v13 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v14 = -1027080192;
LABEL_37:
      v27 = *(float *)&v14;
LABEL_38:
      GameObjectExtensions__SetLocalPositionY(v13, v27, 0);
      return;
    default:
      return;
  }
}


void EventRewardAnotherPayConfirmDialog__SetWindowSize(
        EventRewardAnotherPayConfirmDialog_o *this,
        UnityEngine_Vector2_o size,
        const MethodInfo *method)
{
  UIWidget_o *window; // x0
  float y; // s8
  int32_t x; // w1
  int32_t v7; // w1

  window = this->fields.window;
  if ( !window
    || ((y = size.fields.y, size.fields.x != INFINITY) ? (x = (int)size.fields.x) : (x = 0x80000000),
        UIWidget__set_width(window, x, 0),
        (window = this->fields.window) == 0) )
  {
    sub_1C2D6EC(window, method);
  }
  if ( y == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)y;
  UIWidget__set_height(window, v7, 0);
}


void EventRewardAnotherPayConfirmDialog___OpenResult_b__77_0(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


void EventRewardAnotherPayConfirmDialog___Open_b__76_0(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


System_String_o *EventRewardAnotherPayConfirmDialog__get_closeBtnPath(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C21B15 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15638/*"Window/CancelButton"*/);
    byte_4C21B15 = 1;
  }
  return (System_String_o *)StringLiteral_15638/*"Window/CancelButton"*/;
}


void EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0___ctor(
        EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0___SetSvtPassiveSkillInfo_b__0(
        EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0_o *this,
        ServantPassiveSkillEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C2D6EC(this, 0);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}