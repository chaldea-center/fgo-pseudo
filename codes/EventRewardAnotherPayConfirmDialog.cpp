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

  if ( (byte_4C3D7D0 & 1) == 0 )
  {
    sub_1C37058(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_4C3D7D0 = 1;
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
  if ( (byte_4C3D7CF & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3D7CF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventRewardAnotherPayConfirmDialog__Close(EventRewardAnotherPayConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C3D7C8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventRewardAnotherPayConfirmDialog_Init__);
    byte_4C3D7C8 = 1;
  }
  this->fields.state = 2;
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_Init__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


System_String_o *EventRewardAnotherPayConfirmDialog__GetName(
        EventRewardAnotherPayConfirmDialog_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  NetworkManager_c *ServantLimitCountSealAfter; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  int64_t userIdNumber; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  ServantLimitImageMaster_o *v12; // x20
  int32_t v13; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C3D7CD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3D7CD = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  ServantLimitCountSealAfter = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    ServantLimitCountSealAfter = NetworkManager_TypeInfo;
  }
  if ( !svtEntity )
    goto LABEL_28;
  v7 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  userIdNumber = ServantLimitCountSealAfter->static_fields->userIdNumber;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v7;
  *(_QWORD *)&v16.fields.fakeValue = v6;
  ServantLimitCountSealAfter = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                     v16,
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
    v13 = -1;
    return ServantEntity__getName(svtEntity, v13, -1, 1, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v10;
  ServantLimitCountSealAfter = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                     v17,
                                                     0);
  if ( !entity
    || !v12
    || (ServantLimitCountSealAfter = (NetworkManager_c *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                           v12,
                                                           (int32_t)ServantLimitCountSealAfter,
                                                           entity->fields.maxLimitCount,
                                                           0),
        !entity) )
  {
LABEL_28:
    sub_1C372B4(ServantLimitCountSealAfter);
  }
  if ( (_DWORD)ServantLimitCountSealAfter == entity->fields.maxLimitCount )
    v13 = -1;
  else
    v13 = (int)ServantLimitCountSealAfter;
  return ServantEntity__getName(svtEntity, v13, -1, 1, 0);
}


void EventRewardAnotherPayConfirmDialog__Init(EventRewardAnotherPayConfirmDialog_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0), (itemIcon = (ItemIconComponent_o *)this->fields.skillIcon) == 0) )
  {
    sub_1C372B4(itemIcon);
  }
  SkillIconComponent__Clear((SkillIconComponent_o *)itemIcon, 0);
  this->fields.onClickButton = 0;
  sub_1C36FFC(&this->fields.onClickButton, 0);
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
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4C3D7CC & 1) == 0 )
  {
    sub_1C37058(&Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    byte_4C3D7CC = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C372B4(v5);
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

  if ( (byte_4C3D7C9 & 1) == 0 )
  {
    sub_1C37058(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    byte_4C3D7C9 = 1;
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
      v5 = (_QWORD *)sub_1C37070(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
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
    sub_1C372B4(decideButton);
  }
}


void EventRewardAnotherPayConfirmDialog__OnClickDecide(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4C3D7CA & 1) == 0 )
  {
    sub_1C37058(&Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    byte_4C3D7CA = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C372B4(v5);
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
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8
  __int64 v11; // x1

  if ( (byte_4C3D7C7 & 1) == 0 )
  {
    sub_1C37058(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    byte_4C3D7C7 = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.buyAnotherItemId = anotherItemId;
    this->fields.state = 2;
    v7 = Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C37070(Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C372B4(v9);
    if ( isAnotherPay )
      v11 = 3;
    else
      v11 = 2;
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
      onClickButton->fields.method_code,
      v11,
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
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4C3D7CB & 1) == 0 )
  {
    sub_1C37058(&Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    byte_4C3D7CB = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C372B4(v5);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  ItemEntity_o *Entity; // x22
  int MasterName_k__BackingField; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x24
  char v18; // w25
  bool v19; // zf
  int32_t v20; // w8
  const MethodInfo *v21; // x4
  int32_t eventId; // w23
  struct System_String_o *v23; // x26
  __int64 v24; // x27
  int32_t v25; // w0
  const MethodInfo *v26; // x4
  bool v27; // w23
  System_String_o *name; // x25
  System_String_o *AnotherPayName; // x27
  System_String_o *v30; // x0
  const MethodInfo *v31; // x7
  const MethodInfo *v32; // x1
  EventRewardAnotherPayConfirmDialog_c *v33; // x0
  int32_t state; // w24
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  __int64 v36; // x9
  __int64 v37; // x10
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x4
  System_Action_o *v40; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  UnityEngine_Vector2_o v42; // 0:s0.4,4:s1.4

  v7 = isReconfirm;
  if ( (byte_4C3D7C1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_EventRewardAnotherPayConfirmDialog__Open_b__76_0__);
    sub_1C37058(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3D7C1 = 1;
  }
  p_onClickButton = &this->fields.onClickButton;
  this->fields.onClickButton = buttonAction;
  sub_1C36FFC(&this->fields.onClickButton, buttonAction);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !shopEntity )
    goto LABEL_38;
  v13 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetAnotherPayItemIds(shopEntity, 0);
  v14 = Master_object;
  if ( selectedAnotherItemId <= 0 )
  {
    if ( !Master_object )
      goto LABEL_38;
    if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
      sub_1C372BC(Master_object);
    selectedAnotherItemId = Master_object->fields.revision;
  }
  if ( !v13
    || (Entity = (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v13,
                                   selectedAnotherItemId,
                                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetRelateServantEntity(shopEntity, 0),
        !v14)
    || (MasterName_k__BackingField = (int)v14->fields._MasterName_k__BackingField,
        v17 = Master_object,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__IsSoldOut(shopEntity, 0),
        !Entity) )
  {
LABEL_38:
    sub_1C372B4(Master_object);
  }
  this->fields.buyAnotherItemId = Entity->fields.id;
  if ( !v17 )
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
  v18 = (char)Master_object;
  v19 = ((unsigned __int8)Master_object & 1) == 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIcon;
  if ( v19 )
    v20 = 3;
  else
    v20 = 4;
  if ( MasterName_k__BackingField > 1 )
    v20 = 5;
  if ( v7 )
    v20 = 6;
  this->fields.state = v20;
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
      v24 = *(_QWORD *)&v17->fields._MasterKind_k__BackingField;
      v23 = v17->fields._MasterName_k__BackingField;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v41.fields.currentCryptoKey = v24;
      *(_QWORD *)&v41.fields.fakeValue = v23;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v41, 0);
      EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v25, Entity, v26);
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
  v27 = v18 & 1;
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, 1, MasterName_k__BackingField > 1, v18 & 1, v21);
  name = Entity->fields.name;
  AnotherPayName = ItemEntity__GetAnotherPayName(Entity, 0);
  v30 = ShopEntity__getName(shopEntity, 0);
  EventRewardAnotherPayConfirmDialog__SetConfirmLabel(
    this,
    (ServantEntity_o *)v17,
    name,
    AnotherPayName,
    v30,
    MasterName_k__BackingField > 1,
    v27,
    v31);
  v33 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  state = this->fields.state;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v33 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  static_fields = v33->static_fields;
  v36 = 88;
  if ( state == 5 )
  {
    v36 = 104;
    v37 = 100;
  }
  else
  {
    v37 = 84;
  }
  v42.fields.y = *(float *)((char *)&static_fields->CancelButtonReconfirmPos.fields.x + v36);
  v42.fields.x = *(float *)((char *)&static_fields->CancelButtonReconfirmPos.fields.x + v37);
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v42, v32);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, Entity, v38);
  EventRewardAnotherPayConfirmDialog__SetListView(this, shopEntity, (System_Int32_array *)v14, v27, v39);
  v40 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog__Open_b__76_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0, 0);
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
  ItemEntity_o *v13; // x20
  ServantEntity_o *v14; // x23
  int32_t eventId; // w24
  struct System_String_o *MasterName_k__BackingField; // x25
  __int64 v17; // x26
  int32_t v18; // w0
  const MethodInfo *v19; // x4
  UILabel_o *titleLabel; // x24
  UILabel_o *upperLabel; // x26
  UILabel_o *downerLabel; // x27
  System_String_o *Empty; // x25
  EventRewardAnotherPayConfirmDialog_o *v24; // x0
  const MethodInfo *v25; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  UILabel_o *resultLabel; // x23
  Il2CppObject *v29; // x25
  __int64 *v30; // x8
  System_String_o *v31; // x22
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x4
  bool v34; // w1
  UILabel_o *v35; // x21
  const MethodInfo *v36; // x1
  EventRewardAnotherPayConfirmDialog_c *v37; // x0
  const MethodInfo *v38; // x2
  System_Action_o *v39; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4C3D7C2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&Method_EventRewardAnotherPayConfirmDialog__OpenResult_b__77_0__);
    sub_1C37058(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_1969/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/);
    sub_1C37058(&StringLiteral_1968/*"ANOTHER_PAY_PERIOD_END_MSG"*/);
    sub_1C37058(&StringLiteral_1970/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/);
    byte_4C3D7C2 = 1;
  }
  p_onClickButton = &this->fields.onClickButton;
  entity = 0;
  this->fields.onClickButton = onDecide;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C36FFC(&this->fields.onClickButton, onDecide);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  usedAnotherItemId,
                                                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this->fields.itemIcon )
    goto LABEL_39;
  v13 = (ItemEntity_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this->fields.itemIcon,
                                                                  0);
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetRelateServantEntity(shopEntity, 0);
  if ( !Master_object )
    goto LABEL_39;
  v14 = (ServantEntity_o *)Master_object;
  eventId = shopEntity->fields.eventId;
  v17 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v17;
  *(_QWORD *)&v41.fields.fakeValue = MasterName_k__BackingField;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v41, 0);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v18, v13, v19);
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
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v24, v14, v25);
  ClassName = ServantEntity__getClassName(v14, 0);
  resultLabel = this->fields.resultLabel;
  v29 = (Il2CppObject *)ClassName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isAnotherItemOnly )
      goto LABEL_18;
LABEL_22:
    v30 = &StringLiteral_1970/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
    goto LABEL_23;
  }
  if ( !isAnotherItemOnly )
    goto LABEL_22;
LABEL_18:
  v30 = &StringLiteral_1969/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
LABEL_23:
  v31 = LocalizationManager__Get((System_String_o *)*v30, 0);
  v32 = (Il2CppObject *)ShopEntity__getName(shopEntity, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format_63603016(v31, v32, v29, Name, 0);
  if ( !resultLabel )
    goto LABEL_39;
  UILabel__set_text(resultLabel, (System_String_o *)Master_object, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_39;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         shopEntity->fields.eventId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( entity )
    {
      if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, 0, 0) )
        goto LABEL_30;
      v35 = this->fields.downerLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_1968/*"ANOTHER_PAY_PERIOD_END_MSG"*/,
                                                                      0);
      if ( v35 )
      {
        UILabel__set_text(v35, (System_String_o *)Master_object, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.downerLabel;
        if ( Master_object )
        {
          UILabel__set_fontSize((UILabel_o *)Master_object, 22, 0);
          v34 = 0;
          goto LABEL_36;
        }
      }
    }
LABEL_39:
    sub_1C372B4(Master_object);
  }
LABEL_30:
  v34 = 1;
LABEL_36:
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, v34, 0, 0, v33);
  v37 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v37 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v37->static_fields->ResultWindowSize, v36);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, v13, v38);
  v39 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog__OpenResult_b__77_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0, 0);
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
  UILabel_o *decideLabel; // x21
  UILabel_o *normalBuyLabel; // x21
  UILabel_o *anotherBuyLabel; // x21
  System_String_o *v12; // x22
  Il2CppObject *v13; // x1
  UIWidget_o *cancelButtonSp; // x20
  int32_t state; // w21
  __int64 v16; // x8
  float v17; // s0
  int32_t v18; // w1
  UIWidget_o *v19; // x20
  int32_t v20; // w21
  __int64 v21; // x8
  float v22; // s0
  int32_t v23; // w1
  EventRewardAnotherPayConfirmDialog_c *v24; // x0
  UnityEngine_GameObject_o *v25; // x20
  int32_t v26; // w21
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v27; // x8
  __int64 v28; // x9
  __int64 v29; // x10
  __int64 v30; // x11
  EventRewardAnotherPayConfirmDialog_c *v31; // x0
  UnityEngine_GameObject_o *cancelButton; // x20
  int32_t v33; // w19
  float *p_x; // x9
  __int64 v35; // x8
  __int64 v36; // x10
  float *p_z; // x8
  float *p_y; // x10
  EventRewardAnotherPayConfirmDialog_c *v39; // x0
  int32_t v40; // w19
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v41; // x9
  __int64 v42; // x8
  __int64 v43; // x10
  __int64 v44; // x11
  EventRewardAnotherPayConfirmDialog_c *v45; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3D7C5 & 1) == 0 )
  {
    sub_1C37058(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_9333/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/);
    sub_1C37058(&StringLiteral_1952/*"ANOTHER_PAY_ANOTHER_BUY"*/);
    sub_1C37058(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_1967/*"ANOTHER_PAY_NORMAL_BUY"*/);
    byte_4C3D7C5 = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( this->fields.state == 7 )
    v6 = &StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/;
  else
    v6 = &StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/;
  v7 = (System_String_o *)*v6;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__Get(v7, 0);
  if ( !cancelLabel )
    goto LABEL_70;
  UILabel__set_text(cancelLabel, decideButton, 0);
  decideLabel = this->fields.decideLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_9333/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0);
  if ( !decideLabel )
    goto LABEL_70;
  UILabel__set_text(decideLabel, decideButton, 0);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_1967/*"ANOTHER_PAY_NORMAL_BUY"*/, 0);
  if ( !normalBuyLabel )
    goto LABEL_70;
  UILabel__set_text(normalBuyLabel, decideButton, 0);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_1952/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0);
  v13 = itemEntity ? (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0) : 0LL;
  decideButton = System_String__Format(v12, v13, 0);
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
  v16 = 116;
  if ( state == 5 )
    v16 = 108;
  if ( !cancelButtonSp )
    goto LABEL_70;
  v17 = *(float *)(*(_QWORD *)&decideButton[7].fields + v16);
  if ( v17 == INFINITY )
    v18 = 0x80000000;
  else
    v18 = (int)v17;
  UIWidget__set_width(cancelButtonSp, v18, 0);
  decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  v19 = (UIWidget_o *)this->fields.cancelButtonSp;
  v20 = this->fields.state;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  v21 = 120;
  if ( v20 == 5 )
    v21 = 112;
  if ( !v19 )
LABEL_70:
    sub_1C372B4(decideButton);
  v22 = *(float *)(*(_QWORD *)&decideButton[7].fields + v21);
  if ( v22 == INFINITY )
    v23 = 0x80000000;
  else
    v23 = (int)v22;
  UIWidget__set_height(v19, v23, 0);
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
      v45 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v45 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      static_fields = v45->static_fields;
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
      v24 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v25 = this->fields.decideButton;
      v26 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v24 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v27 = v24->static_fields;
      v28 = 68;
      if ( v26 == 4 )
      {
        v28 = 80;
        v29 = 76;
      }
      else
      {
        v29 = 64;
      }
      if ( v26 == 4 )
        v30 = 72;
      else
        v30 = 60;
      v47.fields.x = *(float *)((char *)&v27->CancelButtonReconfirmPos.fields.x + v30);
      v47.fields.y = *(float *)((char *)&v27->CancelButtonReconfirmPos.fields.x + v29);
      v47.fields.z = *(float *)((char *)&v27->CancelButtonReconfirmPos.fields.x + v28);
      GameObjectExtensions__SetLocalPosition(v25, v47, 0);
      v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      v33 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      p_x = &v31->static_fields->CancelButtonReconfirmPos.fields.x;
      v35 = 2;
      if ( v33 == 4 )
      {
        v35 = 11;
        v36 = 10;
      }
      else
      {
        v36 = 1;
      }
      p_z = &p_x[v35];
      p_y = &p_x[v36];
      if ( v33 == 4 )
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
      v39 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      v40 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v39 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v41 = v39->static_fields;
      v42 = 32;
      if ( v40 == 7 )
      {
        v42 = 56;
        v43 = 52;
      }
      else
      {
        v43 = 28;
      }
      if ( v40 == 7 )
        v44 = 48;
      else
        v44 = 24;
      p_z = (float *)((char *)&v41->CancelButtonReconfirmPos.fields.x + v42);
      p_y = (float *)((char *)&v41->CancelButtonReconfirmPos.fields.x + v43);
      p_x = (float *)((char *)&v41->CancelButtonReconfirmPos.fields.x + v44);
      break;
    default:
      return;
  }
  v48.fields.y = *p_y;
  v48.fields.x = *p_x;
  v48.fields.z = *p_z;
  GameObjectExtensions__SetLocalPosition(cancelButton, v48, 0);
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
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  UILabel_o *v40; // x21
  System_String_o *v41; // x0
  System_String_o *Empty; // x1
  System_String_o *v43; // x26
  UILabel_o *v44; // x27
  System_String_o *v45; // x1
  __int64 *v46; // x8
  System_String_o *v47; // x21
  System_String_o *v48; // x0
  __int64 v49; // x0

  if ( (byte_4C3D7C4 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_1965/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/);
    sub_1C37058(&StringLiteral_1959/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/);
    sub_1C37058(&StringLiteral_1953/*"ANOTHER_PAY_CONFIRM_TITLE"*/);
    sub_1C37058(&StringLiteral_1955/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/);
    sub_1C37058(&StringLiteral_1961/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/);
    sub_1C37058(&StringLiteral_1966/*"ANOTHER_PAY_MULTI_INFO_TITLE"*/);
    sub_1C37058(&StringLiteral_1960/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/);
    sub_1C37058(&StringLiteral_1964/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/);
    sub_1C37058(&StringLiteral_1958/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/);
    sub_1C37058(&StringLiteral_1956/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/);
    sub_1C37058(&StringLiteral_1954/*"ANOTHER_PAY_INFO_TITLE"*/);
    sub_1C37058(&StringLiteral_1957/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/);
    sub_1C37058(&StringLiteral_1962/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/);
    byte_4C3D7C4 = 1;
  }
  resultLabel = this->fields.resultLabel;
  if ( !resultLabel )
    goto LABEL_65;
  UILabel__set_text(resultLabel, string_TypeInfo->static_fields->Empty, 0);
  resultLabel = (UILabel_o *)EventRewardAnotherPayConfirmDialog__GetName(v16, svtEntity, v17);
  if ( !svtEntity )
    goto LABEL_65;
  v18 = (Il2CppObject *)resultLabel;
  resultLabel = (UILabel_o *)ServantEntity__getClassName(svtEntity, 0);
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
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_1954/*"ANOTHER_PAY_INFO_TITLE"*/, 0);
      resultLabel = (UILabel_o *)System_String__Format(v26, (Il2CppObject *)anotherName, 0);
      if ( !v25 )
        goto LABEL_65;
      UILabel__set_text(v25, (System_String_o *)resultLabel, 0);
      upperLabel = this->fields.upperLabel;
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_1955/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0);
      resultLabel = (UILabel_o *)System_String__Format(v28, (Il2CppObject *)anotherName, 0);
      if ( !upperLabel )
        goto LABEL_65;
      UILabel__set_text(upperLabel, (System_String_o *)resultLabel, 0);
      downerLabel = this->fields.downerLabel;
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_1956/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0);
      resultLabel = (UILabel_o *)System_String__Format(v30, (Il2CppObject *)anotherName, 0);
      if ( !downerLabel )
        goto LABEL_65;
      UILabel__set_text(downerLabel, (System_String_o *)resultLabel, 0);
      warnLabel = this->fields.warnLabel;
      v32 = (System_String_o *)StringLiteral_1959/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/;
      goto LABEL_62;
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_1953/*"ANOTHER_PAY_CONFIRM_TITLE"*/, 0);
    resultLabel = (UILabel_o *)System_String__Format(v33, (Il2CppObject *)anotherName, 0);
    if ( !v25 )
      goto LABEL_65;
    UILabel__set_text(v25, (System_String_o *)resultLabel, 0);
    v34 = this->fields.downerLabel;
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_1958/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, 0);
    resultLabel = (UILabel_o *)System_String__Format(v35, (Il2CppObject *)itemName, 0);
    if ( !v34 )
      goto LABEL_65;
    UILabel__set_text(v34, (System_String_o *)resultLabel, 0);
    v36 = this->fields.state;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v36 == 6 )
    {
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_1965/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, 0);
      v38 = System_String__Format_63603016(v37, (Il2CppObject *)itemName, v19, v18, 0);
LABEL_56:
      v45 = v38;
      resultLabel = this->fields.upperLabel;
      if ( !resultLabel )
        goto LABEL_65;
      UILabel__set_text(resultLabel, v45, 0);
      v46 = (__int64 *)&StringLiteral_1964/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/;
      warnLabel = this->fields.warnLabel;
      if ( !isMultiAnotherPayItem )
        v46 = &StringLiteral_1959/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/;
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
      sub_1C372B4(resultLabel);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_1957/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, 0);
    resultLabel = (UILabel_o *)sub_1C37100(object___TypeInfo, 4);
    if ( !resultLabel )
      goto LABEL_65;
    v44 = resultLabel;
    if ( !itemName || (resultLabel = (UILabel_o *)sub_1C37194(itemName, resultLabel->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v44->fields.m_CancellationTokenSource) )
        goto LABEL_66;
      v44->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)itemName;
      resultLabel = (UILabel_o *)sub_1C36FFC(&v44->fields.leftAnchor, itemName);
      if ( !v19 || (resultLabel = (UILabel_o *)sub_1C37194(v19, v44->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v44->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_66;
        v44->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v19;
        resultLabel = (UILabel_o *)sub_1C36FFC(&v44->fields.rightAnchor, v19);
        if ( !v18 || (resultLabel = (UILabel_o *)sub_1C37194(v18, v44->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v44->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_66;
          v44->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v18;
          resultLabel = (UILabel_o *)sub_1C36FFC(&v44->fields.bottomAnchor, v18);
          if ( !shopName || (resultLabel = (UILabel_o *)sub_1C37194(shopName, v44->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v44->fields.m_CancellationTokenSource) > 3 )
            {
              v44->fields.topAnchor = (struct UIRect_AnchorPoint_o *)shopName;
              sub_1C36FFC(&v44->fields.topAnchor, shopName);
              v38 = System_String__Format_63603084(v43, (System_Object_array *)v44, 0);
              goto LABEL_56;
            }
LABEL_66:
            sub_1C372BC(resultLabel);
          }
        }
      }
    }
    v49 = sub_1C372D8();
    sub_1C37180(v49, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  resultLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1966/*"ANOTHER_PAY_MULTI_INFO_TITLE"*/, 0);
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
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_1960/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/, 0);
    resultLabel = (UILabel_o *)System_String__Format(v39, (Il2CppObject *)anotherName, 0);
    goto LABEL_36;
  }
  if ( !isOnlyAnotherItem )
    goto LABEL_35;
LABEL_17:
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_1961/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/, 0);
  resultLabel = (UILabel_o *)System_String__Format_63603016(v23, (Il2CppObject *)anotherName, v19, v18, 0);
LABEL_36:
  if ( !v22 )
    goto LABEL_65;
  UILabel__set_text(v22, (System_String_o *)resultLabel, 0);
  v40 = this->fields.warnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_1962/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/, 0);
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
  struct System_Int32_array *itemIds; // x8
  int32_t v12; // w24
  EventRewardAnotherPayListViewManager_o *v13; // x23
  int32_t eventId; // w22
  System_Action_bool__int__o *v15; // x25
  const MethodInfo *v16; // x6

  if ( (byte_4C3D7C6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_bool__int__TypeInfo);
    sub_1C37058(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    byte_4C3D7C6 = 1;
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
          sub_1C372BC(listViewManager);
        v12 = itemIds->m_Items[0];
        v13 = this->fields.listViewManager;
        eventId = shopEntity->fields.eventId;
        v15 = (System_Action_bool__int__o *)sub_1C372A4(System_Action_bool__int__TypeInfo);
        System_Action_bool__int____ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__,
          0);
        if ( v13 )
        {
          EventRewardAnotherPayListViewManager__CreateList(
            v13,
            eventId,
            v12,
            anotherItemIds,
            isOnlyAnotherItem,
            v15,
            v16);
          return;
        }
      }
    }
LABEL_12:
    sub_1C372B4(listViewManager);
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
  int32_t *p_value; // x8
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  System_Func_object__bool__o *v13; // x21
  Il2CppObject *v14; // x0
  int32_t v15; // w20
  Il2CppObject *Master_object; // x22
  SkillLvMaster_o *v17; // x21
  UILabel_o *skillNameLabel; // x21
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0
  SkillLvEntity_o *v21; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3D7C3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    sub_1C37058(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_1C37058(&Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0__SetSvtPassiveSkillInfo_b__0__);
    sub_1C37058(&EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0_TypeInfo);
    byte_4C3D7C3 = 1;
  }
  v21 = 0;
  entity = 0;
  v9 = sub_1C372A4(EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0_TypeInfo);
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
    skill = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    if ( !skill )
      goto LABEL_25;
    ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                              (ServantPassiveSkillMaster_o *)skill,
                                                                              svtId,
                                                                              0);
    v13 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v9,
      Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0__SetSvtPassiveSkillInfo_b__0__,
      0);
    v14 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
            ServantSkillList,
            (System_Func_TSource__bool__o *)v13,
            (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    if ( !v14 )
      return;
    p_value = (int32_t *)&v14[1].monitor + 1;
  }
  v15 = *p_value;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
  skill = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_25;
  v17 = (SkillLvMaster_o *)skill;
  skill = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        v15,
                                        (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)skill & 1) == 0 )
    return;
  if ( !v17 )
    goto LABEL_25;
  if ( !SkillLvMaster__TryGetEntity(v17, &v21, v15, 1, 0) )
    return;
  skill = (UnityEngine_GameObject_o *)entity;
  if ( !entity )
    goto LABEL_25;
  skillNameLabel = this->fields.skillNameLabel;
  skill = (UnityEngine_GameObject_o *)SkillEntity__getName((SkillEntity_o *)entity, 0);
  if ( !skillNameLabel
    || (UILabel__set_text(skillNameLabel, (System_String_o *)skill, 0), (skill = (UnityEngine_GameObject_o *)v21) == 0)
    || (skillDetailLabel = this->fields.skillDetailLabel,
        Detail = SkillLvEntity__getDetail(v21, 0, 0, 0),
        WrapControlText__textAdjust(skillDetailLabel, Detail, 18, 0, 0),
        (skill = (UnityEngine_GameObject_o *)this->fields.skillIcon) == 0) )
  {
LABEL_25:
    sub_1C372B4(skill);
  }
  SkillIconComponent__Set((SkillIconComponent_o *)skill, v15, 0);
}


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
    sub_1C372B4(titleLabel);
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
    sub_1C372B4(window);
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
  if ( (byte_4C3D7CE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15641/*"Window/CancelButton"*/);
    byte_4C3D7CE = 1;
  }
  return (System_String_o *)StringLiteral_15641/*"Window/CancelButton"*/;
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
    sub_1C372B4(this);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}