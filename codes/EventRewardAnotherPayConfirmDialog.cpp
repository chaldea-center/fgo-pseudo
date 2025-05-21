void __fastcall EventRewardAnotherPayConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  EventRewardAnotherPayConfirmDialog_c *v3; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v4; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v5; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v6; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v7; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v8; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v9; // x9

  if ( (byte_4B3F3F6 & 1) == 0 )
  {
    sub_1BDB878(&EventRewardAnotherPayConfirmDialog_TypeInfo, v1);
    byte_4B3F3F6 = 1;
  }
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CancelButtonReconfirmPos.fields.x = 0xC3600000C3200000LL;
  static_fields->CancelButtonReconfirmPos.fields.z = 0.0;
  v3 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  v4 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(int32x2_t *)&v4->CancelButtonChoicePos.fields.x = vdup_n_s32(0xC3600000);
  v4->CancelButtonChoicePos.fields.z = 0.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->CancelButtonChoiceMultiPos.fields.x = 0xC35A000000000000LL;
  v5->CancelButtonChoiceMultiPos.fields.z = 0.0;
  v6 = v3->static_fields;
  *(_QWORD *)&v6->CancelButtonPurchasedPos.fields.x = 0xC3700000C3200000LL;
  v6->CancelButtonPurchasedPos.fields.z = 0.0;
  v7 = v3->static_fields;
  *(_QWORD *)&v7->CancelButtonResultPos.fields.x = 0xC31B000000000000LL;
  v7->CancelButtonResultPos.fields.z = 0.0;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->DecideButtonReconfirmPos.fields.x = 0xC360000043200000LL;
  v8->DecideButtonReconfirmPos.fields.z = 0.0;
  v9 = v3->static_fields;
  *(_QWORD *)&v9->DecideButtonPurchasedPos.fields.x = -4363988037795840000LL;
  v9->DecideButtonPurchasedPos.fields.z = 0.0;
  v3->static_fields->ConfirmWindowSize = (struct UnityEngine_Vector2_o)0x4416000044430000LL;
  v3->static_fields->ResultWindowSize = (struct UnityEngine_Vector2_o)0x43F0000044430000LL;
  v3->static_fields->ChoiceMultiWindowSize = (struct UnityEngine_Vector2_o)0x440E800044548000LL;
  v3->static_fields->CancelButtonChoiceMultiSize = (struct UnityEngine_Vector2_o)0x42600000435A0000LL;
  v3->static_fields->CancelButtonCommonSize = (struct UnityEngine_Vector2_o)0x425C000043580000LL;
}


void __fastcall EventRewardAnotherPayConfirmDialog___ctor(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B3F3F5 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B3F3F5 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__Close(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B3F3EE & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_EventRewardAnotherPayConfirmDialog_Init__, v3);
    byte_4B3F3EE = 1;
  }
  this->fields.state = 2;
  v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


System_String_o *__fastcall EventRewardAnotherPayConfirmDialog__GetName(
        EventRewardAnotherPayConfirmDialog_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *ServantLimitCountSealAfter; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  int64_t userIdNumber; // x21
  Il2CppObject *v14; // x0
  __int64 v15; // x21
  __int64 v16; // x22
  ServantLimitImageMaster_o *v17; // x20
  int32_t v18; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B3F3F3 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitImageMaster___, svtEntity);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&NetworkManager_TypeInfo, v6);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B3F3F3 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v8);
    byte_4B3ED56 = 1;
  }
  ServantLimitCountSealAfter = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    ServantLimitCountSealAfter = NetworkManager_TypeInfo;
  }
  if ( !svtEntity )
    goto LABEL_28;
  v12 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  userIdNumber = ServantLimitCountSealAfter->static_fields->userIdNumber;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  ServantLimitCountSealAfter = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                     v21,
                                                     0LL);
  if ( !Master_object )
    goto LABEL_28;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)Master_object,
          &entity,
          userIdNumber,
          (int32_t)ServantLimitCountSealAfter,
          0LL) )
  {
    v18 = -1;
    return ServantEntity__getName(svtEntity, v18, -1, 1, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v16 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v15 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v17 = (ServantLimitImageMaster_o *)v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v16;
  *(_QWORD *)&v22.fields.fakeValue = v15;
  ServantLimitCountSealAfter = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                     v22,
                                                     0LL);
  if ( !entity
    || !v17
    || (ServantLimitCountSealAfter = (NetworkManager_c *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                           v17,
                                                           (int32_t)ServantLimitCountSealAfter,
                                                           entity->fields.maxLimitCount,
                                                           0LL),
        !entity) )
  {
LABEL_28:
    sub_1BDBAD4(ServantLimitCountSealAfter, v8);
  }
  if ( (_DWORD)ServantLimitCountSealAfter == entity->fields.maxLimitCount )
    v18 = -1;
  else
    v18 = (int)ServantLimitCountSealAfter;
  return ServantEntity__getName(svtEntity, v18, -1, 1, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__Init(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0LL), (itemIcon = (ItemIconComponent_o *)this->fields.skillIcon) == 0LL) )
  {
    sub_1BDBAD4(itemIcon, method);
  }
  SkillIconComponent__Clear((SkillIconComponent_o *)itemIcon, 0LL);
  this->fields.onClickButton = 0LL;
  sub_1BDB81C(&this->fields.onClickButton);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickAnotherBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4B3F3F2 & 1) == 0 )
  {
    sub_1BDB878(&Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__, method);
    byte_4B3F3F2 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1BDBAD4(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))onClickButton->fields.m_target)(
      onClickButton->fields.original_method_info,
      3LL,
      (unsigned int)this->fields.buyAnotherItemId,
      *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickCancel(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *decideButton; // x0
  int32_t v4; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4B3F3EF & 1) == 0 )
  {
    sub_1BDB878(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__, method);
    byte_4B3F3EF = 1;
  }
  if ( this->fields.state == 1 )
  {
    decideButton = this->fields.decideButton;
    this->fields.buyAnotherItemId = 0;
    if ( !decideButton )
      goto LABEL_17;
    if ( UnityEngine_GameObject__get_activeSelf(decideButton, 0LL) )
      goto LABEL_10;
    decideButton = this->fields.normalBuyButton;
    if ( !decideButton )
      goto LABEL_17;
    if ( UnityEngine_GameObject__get_activeSelf(decideButton, 0LL) )
      goto LABEL_10;
    decideButton = this->fields.anotherBuyButton;
    if ( !decideButton )
      goto LABEL_17;
    if ( UnityEngine_GameObject__get_activeSelf(decideButton, 0LL) )
LABEL_10:
      v4 = 1;
    else
      v4 = 0;
    v5 = Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BDB890(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, v4, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))onClickButton->fields.m_target)(
        onClickButton->fields.original_method_info,
        0LL,
        0LL,
        *(_QWORD *)&onClickButton->fields.extra_arg);
      return;
    }
LABEL_17:
    sub_1BDBAD4(decideButton, method);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickDecide(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4B3F3F0 & 1) == 0 )
  {
    sub_1BDB878(&Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__, method);
    byte_4B3F3F0 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1BDBAD4(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))onClickButton->fields.m_target)(
      onClickButton->fields.original_method_info,
      1LL,
      (unsigned int)this->fields.buyAnotherItemId,
      *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__OnClickListViewItemAction(
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

  if ( (byte_4B3F3ED & 1) == 0 )
  {
    sub_1BDB878(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__, isAnotherPay);
    byte_4B3F3ED = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.buyAnotherItemId = anotherItemId;
    this->fields.state = 2;
    v7 = Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BDB890(Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1BDBAD4(v9, v10);
    if ( isAnotherPay )
      v12 = 3LL;
    else
      v12 = 2LL;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))onClickButton->fields.m_target)(
      onClickButton->fields.original_method_info,
      v12,
      (unsigned int)anotherItemId,
      *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickNormalBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4B3F3F1 & 1) == 0 )
  {
    sub_1BDB878(&Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__, method);
    byte_4B3F3F1 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1BDBAD4(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))onClickButton->fields.m_target)(
      onClickButton->fields.original_method_info,
      2LL,
      0LL,
      *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__Open(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *buttonAction,
        bool isReconfirm,
        int32_t selectedAnotherItemId,
        const MethodInfo *method)
{
  _BOOL4 v7; // w23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o **p_onClickButton; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x24
  __int64 v21; // x2
  System_Int32_array *v22; // x21
  ItemEntity_o *Entity; // x22
  int max_length; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x24
  char v26; // w25
  bool v27; // zf
  int32_t v28; // w8
  const MethodInfo *v29; // x4
  int32_t eventId; // w23
  struct System_String_o *MasterName_k__BackingField; // x26
  __int64 v32; // x27
  int32_t v33; // w0
  const MethodInfo *v34; // x4
  bool v35; // w23
  System_String_o *name; // x25
  System_String_o *AnotherPayName; // x27
  System_String_o *v38; // x0
  const MethodInfo *v39; // x7
  const MethodInfo *v40; // x1
  EventRewardAnotherPayConfirmDialog_c *v41; // x0
  int32_t state; // w24
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  __int64 v44; // x9
  __int64 v45; // x10
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x4
  System_Action_o *v48; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  UnityEngine_Vector2_o v50; // 0:s0.4,4:s1.4

  v7 = isReconfirm;
  if ( (byte_4B3F3E7 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, shopEntity);
    sub_1BDB878(&Method_DataManager_GetMaster_ItemMaster___, v11);
    sub_1BDB878(&DataManager_TypeInfo, v12);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_1BDB878(&Method_EventRewardAnotherPayConfirmDialog__Open_b__76_0__, v14);
    sub_1BDB878(&EventRewardAnotherPayConfirmDialog_TypeInfo, v15);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    byte_4B3F3E7 = 1;
  }
  p_onClickButton = &this->fields.onClickButton;
  this->fields.onClickButton = buttonAction;
  sub_1BDB81C(&this->fields.onClickButton);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !shopEntity )
    goto LABEL_40;
  v20 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetAnotherPayItemIds(shopEntity, 0LL);
  v22 = (System_Int32_array *)Master_object;
  if ( selectedAnotherItemId <= 0 )
  {
    if ( !Master_object )
      goto LABEL_40;
    if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
      sub_1BDBADC(Master_object, v19, v21);
    selectedAnotherItemId = Master_object->fields.revision;
  }
  if ( !v20
    || (Entity = (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v20,
                                   selectedAnotherItemId,
                                   (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetRelateServantEntity(
                                                                        shopEntity,
                                                                        0LL),
        !v22)
    || (max_length = v22->max_length,
        v25 = Master_object,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__IsSoldOut(shopEntity, 0LL),
        !Entity) )
  {
LABEL_40:
    sub_1BDBAD4(Master_object, v19);
  }
  this->fields.buyAnotherItemId = Entity->fields.id;
  if ( !v25 )
  {
    if ( *p_onClickButton )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))(*p_onClickButton)->fields.m_target)(
        (*p_onClickButton)->fields.original_method_info,
        2LL,
        0LL,
        *(_QWORD *)&(*p_onClickButton)->fields.extra_arg);
      return;
    }
    goto LABEL_40;
  }
  v26 = (char)Master_object;
  v27 = ((unsigned __int8)Master_object & 1) == 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIcon;
  if ( v27 )
    v28 = 3;
  else
    v28 = 4;
  if ( max_length > 1 )
    v28 = 5;
  if ( v7 )
    v28 = 6;
  this->fields.state = v28;
  if ( !Master_object )
    goto LABEL_40;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_40;
  if ( max_length <= 1 || v7 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIcon;
    if ( Master_object )
    {
      ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, Entity->fields.id, -1, 1, 0LL);
      eventId = shopEntity->fields.eventId;
      v32 = *(_QWORD *)&v25->fields._MasterKind_k__BackingField;
      MasterName_k__BackingField = v25->fields._MasterName_k__BackingField;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v49.fields.currentCryptoKey = v32;
      *(_QWORD *)&v49.fields.fakeValue = MasterName_k__BackingField;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v49, 0LL);
      EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v33, Entity, v34);
      goto LABEL_32;
    }
    goto LABEL_40;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skill;
  if ( !Master_object )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
LABEL_32:
  v35 = v26 & 1;
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, 1, max_length > 1, v26 & 1, v29);
  name = Entity->fields.name;
  AnotherPayName = ItemEntity__GetAnotherPayName(Entity, 0LL);
  v38 = ShopEntity__getName(shopEntity, 0LL);
  EventRewardAnotherPayConfirmDialog__SetConfirmLabel(
    this,
    (ServantEntity_o *)v25,
    name,
    AnotherPayName,
    v38,
    max_length > 1,
    v35,
    v39);
  v41 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  state = this->fields.state;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v41 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  static_fields = v41->static_fields;
  v44 = 88LL;
  if ( state == 5 )
    v44 = 104LL;
  if ( state == 5 )
    v45 = 100LL;
  else
    v45 = 84LL;
  v50.fields.y = *(float *)((char *)&static_fields->CancelButtonReconfirmPos.fields.x + v44);
  v50.fields.x = *(float *)((char *)&static_fields->CancelButtonReconfirmPos.fields.x + v45);
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v50, v40);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, Entity, v46);
  EventRewardAnotherPayConfirmDialog__SetListView(this, shopEntity, v22, v35, v47);
  v48 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog__Open_b__76_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OpenResult(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        bool isAnotherItemOnly,
        int32_t usedAnotherItemId,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onDecide,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o **p_onClickButton; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v26; // x1
  ItemEntity_o *v27; // x20
  ServantEntity_o *v28; // x23
  int32_t eventId; // w24
  struct System_String_o *MasterName_k__BackingField; // x25
  __int64 v31; // x26
  int32_t v32; // w0
  const MethodInfo *v33; // x4
  UILabel_o *titleLabel; // x24
  UILabel_o *upperLabel; // x26
  UILabel_o *downerLabel; // x27
  System_String_o *Empty; // x25
  EventRewardAnotherPayConfirmDialog_o *v38; // x0
  const MethodInfo *v39; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  UILabel_o *resultLabel; // x23
  Il2CppObject *v43; // x25
  __int64 *v44; // x8
  System_String_o *v45; // x22
  Il2CppObject *v46; // x0
  const MethodInfo *v47; // x4
  bool v48; // w1
  UILabel_o *v49; // x21
  const MethodInfo *v50; // x1
  EventRewardAnotherPayConfirmDialog_c *v51; // x0
  const MethodInfo *v52; // x2
  System_Action_o *v53; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4B3F3E8 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, shopEntity);
    sub_1BDB878(&Method_DataManager_GetMaster_EventMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMaster_ItemMaster___, v12);
    sub_1BDB878(&DataManager_TypeInfo, v13);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v15);
    sub_1BDB878(&Method_EventRewardAnotherPayConfirmDialog__OpenResult_b__77_0__, v16);
    sub_1BDB878(&EventRewardAnotherPayConfirmDialog_TypeInfo, v17);
    sub_1BDB878(&LocalizationManager_TypeInfo, v18);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1BDB878(&string_TypeInfo, v20);
    sub_1BDB878(&StringLiteral_1991/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/, v21);
    sub_1BDB878(&StringLiteral_1990/*"ANOTHER_PAY_PERIOD_END_MSG"*/, v22);
    sub_1BDB878(&StringLiteral_1992/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/, v23);
    byte_4B3F3E8 = 1;
  }
  p_onClickButton = &this->fields.onClickButton;
  entity = 0LL;
  this->fields.onClickButton = onDecide;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1BDB81C(&this->fields.onClickButton);
  if ( !shopEntity )
  {
    if ( *p_onClickButton )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))(*p_onClickButton)->fields.m_target)(
        (*p_onClickButton)->fields.original_method_info,
        0LL,
        0LL,
        *(_QWORD *)&(*p_onClickButton)->fields.extra_arg);
      return;
    }
    goto LABEL_39;
  }
  this->fields.state = 7;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  usedAnotherItemId,
                                                                  (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this->fields.itemIcon )
    goto LABEL_39;
  v27 = (ItemEntity_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this->fields.itemIcon,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetRelateServantEntity(shopEntity, 0LL);
  if ( !Master_object )
    goto LABEL_39;
  v28 = (ServantEntity_o *)Master_object;
  eventId = shopEntity->fields.eventId;
  v31 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v31;
  *(_QWORD *)&v55.fields.fakeValue = MasterName_k__BackingField;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v55, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v32, v27, v33);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.warnLabel;
  if ( !Master_object )
    goto LABEL_39;
  titleLabel = this->fields.titleLabel;
  upperLabel = this->fields.upperLabel;
  downerLabel = this->fields.downerLabel;
  Empty = string_TypeInfo->static_fields->Empty;
  UILabel__set_text((UILabel_o *)Master_object, Empty, 0LL);
  if ( !downerLabel )
    goto LABEL_39;
  UILabel__set_text(downerLabel, Empty, 0LL);
  if ( !upperLabel )
    goto LABEL_39;
  UILabel__set_text(upperLabel, Empty, 0LL);
  if ( !titleLabel )
    goto LABEL_39;
  UILabel__set_text(titleLabel, Empty, 0LL);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v38, v28, v39);
  ClassName = ServantEntity__getClassName(v28, 0LL);
  resultLabel = this->fields.resultLabel;
  v43 = (Il2CppObject *)ClassName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isAnotherItemOnly )
      goto LABEL_18;
LABEL_22:
    v44 = &StringLiteral_1992/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
    goto LABEL_23;
  }
  if ( !isAnotherItemOnly )
    goto LABEL_22;
LABEL_18:
  v44 = &StringLiteral_1991/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
LABEL_23:
  v45 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
  v46 = (Il2CppObject *)ShopEntity__getName(shopEntity, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format_62613620(v45, v46, v43, Name, 0LL);
  if ( !resultLabel )
    goto LABEL_39;
  UILabel__set_text(resultLabel, (System_String_o *)Master_object, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_39;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         shopEntity->fields.eventId,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( entity )
    {
      if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, 0LL, 0LL) )
        goto LABEL_30;
      v49 = this->fields.downerLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_1990/*"ANOTHER_PAY_PERIOD_END_MSG"*/,
                                                                      0LL);
      if ( v49 )
      {
        UILabel__set_text(v49, (System_String_o *)Master_object, 0LL);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.downerLabel;
        if ( Master_object )
        {
          UILabel__set_fontSize((UILabel_o *)Master_object, 22, 0LL);
          v48 = 0;
          goto LABEL_36;
        }
      }
    }
LABEL_39:
    sub_1BDBAD4(Master_object, v26);
  }
LABEL_30:
  v48 = 1;
LABEL_36:
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, v48, 0, 0, v47);
  v51 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v51 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v51->static_fields->ResultWindowSize, v50);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, v27, v52);
  v53 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog__OpenResult_b__77_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__SetButtonDisp(
        EventRewardAnotherPayConfirmDialog_o *this,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UILabel_o *cancelLabel; // x21
  __int64 *v12; // x8
  System_String_o *v13; // x22
  System_String_o *decideButton; // x0
  __int64 v15; // x1
  UILabel_o *decideLabel; // x21
  UILabel_o *normalBuyLabel; // x21
  UILabel_o *anotherBuyLabel; // x21
  System_String_o *v19; // x22
  Il2CppObject *v20; // x1
  UIWidget_o *cancelButtonSp; // x20
  int32_t state; // w21
  __int64 v23; // x8
  float v24; // s0
  int32_t v25; // w1
  UIWidget_o *v26; // x20
  int32_t v27; // w21
  __int64 v28; // x8
  float v29; // s0
  int32_t v30; // w1
  EventRewardAnotherPayConfirmDialog_c *v31; // x0
  UnityEngine_GameObject_o *v32; // x20
  int32_t v33; // w21
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v34; // x8
  __int64 v35; // x9
  __int64 v36; // x10
  __int64 v37; // x11
  EventRewardAnotherPayConfirmDialog_c *v38; // x0
  UnityEngine_GameObject_o *cancelButton; // x20
  int32_t v40; // w19
  float *p_x; // x9
  __int64 v42; // x8
  __int64 v43; // x10
  float *p_z; // x8
  float *p_y; // x10
  EventRewardAnotherPayConfirmDialog_c *v46; // x0
  int32_t v47; // w19
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v48; // x9
  __int64 v49; // x8
  __int64 v50; // x10
  __int64 v51; // x11
  EventRewardAnotherPayConfirmDialog_c *v52; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3F3EB & 1) == 0 )
  {
    sub_1BDB878(&EventRewardAnotherPayConfirmDialog_TypeInfo, itemEntity);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_9327/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v6);
    sub_1BDB878(&StringLiteral_1974/*"ANOTHER_PAY_ANOTHER_BUY"*/, v7);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v8);
    sub_1BDB878(&StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, v9);
    sub_1BDB878(&StringLiteral_1989/*"ANOTHER_PAY_NORMAL_BUY"*/, v10);
    byte_4B3F3EB = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( this->fields.state == 7 )
    v12 = &StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/;
  else
    v12 = &StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/;
  v13 = (System_String_o *)*v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__Get(v13, 0LL);
  if ( !cancelLabel )
    goto LABEL_76;
  UILabel__set_text(cancelLabel, decideButton, 0LL);
  decideLabel = this->fields.decideLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_9327/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_76;
  UILabel__set_text(decideLabel, decideButton, 0LL);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_1989/*"ANOTHER_PAY_NORMAL_BUY"*/, 0LL);
  if ( !normalBuyLabel )
    goto LABEL_76;
  UILabel__set_text(normalBuyLabel, decideButton, 0LL);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_1974/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0LL);
  v20 = itemEntity ? (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0LL) : 0LL;
  decideButton = System_String__Format(v19, v20, 0LL);
  if ( !anotherBuyLabel )
    goto LABEL_76;
  UILabel__set_text(anotherBuyLabel, decideButton, 0LL);
  decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  cancelButtonSp = (UIWidget_o *)this->fields.cancelButtonSp;
  state = this->fields.state;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  v23 = 116LL;
  if ( state == 5 )
    v23 = 108LL;
  if ( !cancelButtonSp )
    goto LABEL_76;
  v24 = *(float *)(*(_QWORD *)&decideButton[7].fields + v23);
  if ( v24 == INFINITY )
    v25 = 0x80000000;
  else
    v25 = (int)v24;
  UIWidget__set_width(cancelButtonSp, v25, 0LL);
  decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  v26 = (UIWidget_o *)this->fields.cancelButtonSp;
  v27 = this->fields.state;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  v28 = 120LL;
  if ( v27 == 5 )
    v28 = 112LL;
  if ( !v26 )
LABEL_76:
    sub_1BDBAD4(decideButton, v15);
  v29 = *(float *)(*(_QWORD *)&decideButton[7].fields + v28);
  if ( v29 == INFINITY )
    v30 = 0x80000000;
  else
    v30 = (int)v29;
  UIWidget__set_height(v26, v30, 0LL);
  switch ( this->fields.state )
  {
    case 3:
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
      decideButton = (System_String_o *)this->fields.normalBuyButton;
      if ( !decideButton )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0LL);
      decideButton = (System_String_o *)this->fields.anotherBuyButton;
      if ( !decideButton )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0LL);
      v52 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v52 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      static_fields = v52->static_fields;
      p_x = &static_fields->CancelButtonChoicePos.fields.x;
      p_y = &static_fields->CancelButtonChoicePos.fields.y;
      p_z = &static_fields->CancelButtonChoicePos.fields.z;
      break;
    case 4:
    case 6:
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0LL);
      decideButton = (System_String_o *)this->fields.normalBuyButton;
      if ( !decideButton )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
      decideButton = (System_String_o *)this->fields.anotherBuyButton;
      if ( !decideButton )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
      v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v32 = this->fields.decideButton;
      v33 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v34 = v31->static_fields;
      v35 = 68LL;
      if ( v33 == 4 )
        v35 = 80LL;
      if ( v33 == 4 )
        v36 = 76LL;
      else
        v36 = 64LL;
      if ( v33 == 4 )
        v37 = 72LL;
      else
        v37 = 60LL;
      v54.fields.x = *(float *)((char *)&v34->CancelButtonReconfirmPos.fields.x + v37);
      v54.fields.y = *(float *)((char *)&v34->CancelButtonReconfirmPos.fields.x + v36);
      v54.fields.z = *(float *)((char *)&v34->CancelButtonReconfirmPos.fields.x + v35);
      GameObjectExtensions__SetLocalPosition(v32, v54, 0LL);
      v38 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      v40 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v38 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      p_x = &v38->static_fields->CancelButtonReconfirmPos.fields.x;
      v42 = 2LL;
      if ( v40 == 4 )
        v42 = 11LL;
      if ( v40 == 4 )
        v43 = 10LL;
      else
        v43 = 1LL;
      p_z = &p_x[v42];
      p_y = &p_x[v43];
      if ( v40 == 4 )
        p_x += 9;
      break;
    case 5:
    case 7:
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
      decideButton = (System_String_o *)this->fields.normalBuyButton;
      if ( !decideButton )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
      decideButton = (System_String_o *)this->fields.anotherBuyButton;
      if ( !decideButton )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
      v46 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      v47 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v46 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v48 = v46->static_fields;
      v49 = 32LL;
      if ( v47 == 7 )
        v49 = 56LL;
      if ( v47 == 7 )
        v50 = 52LL;
      else
        v50 = 28LL;
      if ( v47 == 7 )
        v51 = 48LL;
      else
        v51 = 24LL;
      p_z = (float *)((char *)&v48->CancelButtonReconfirmPos.fields.x + v49);
      p_y = (float *)((char *)&v48->CancelButtonReconfirmPos.fields.x + v50);
      p_x = (float *)((char *)&v48->CancelButtonReconfirmPos.fields.x + v51);
      break;
    default:
      return;
  }
  v55.fields.y = *p_y;
  v55.fields.x = *p_x;
  v55.fields.z = *p_z;
  GameObjectExtensions__SetLocalPosition(cancelButton, v55, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__SetConfirmLabel(
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  UILabel_o *resultLabel; // x0
  EventRewardAnotherPayConfirmDialog_o *v31; // x0
  const MethodInfo *v32; // x2
  Il2CppObject *v33; // x23
  Il2CppObject *v34; // x25
  int32_t v35; // w1
  UILabel_o *titleLabel; // x27
  UILabel_o *v37; // x21
  System_String_o *v38; // x0
  int32_t state; // w27
  UILabel_o *v40; // x26
  System_String_o *v41; // x0
  UILabel_o *upperLabel; // x21
  System_String_o *v43; // x0
  UILabel_o *downerLabel; // x21
  System_String_o *v45; // x0
  struct UILabel_o *warnLabel; // x20
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  UILabel_o *v49; // x26
  System_String_o *v50; // x0
  int32_t v51; // w26
  System_String_o *v52; // x0
  ServantEntity_o *v53; // x0
  System_String_o *v54; // x0
  UILabel_o *v55; // x21
  System_String_o *v56; // x0
  System_String_o *Empty; // x1
  System_String_o *v58; // x26
  __int64 v59; // x2
  System_Object_array *v60; // x27
  __int64 *v61; // x8
  System_String_o *v62; // x21
  System_String_o *v63; // x0
  __int64 v64; // x0

  v13 = svtEntity;
  if ( (byte_4B3F3EA & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, svtEntity);
    sub_1BDB878(&object___TypeInfo, v15);
    sub_1BDB878(&string_TypeInfo, v16);
    sub_1BDB878(&StringLiteral_1987/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, v17);
    sub_1BDB878(&StringLiteral_1981/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, v18);
    sub_1BDB878(&StringLiteral_1975/*"ANOTHER_PAY_CONFIRM_TITLE"*/, v19);
    sub_1BDB878(&StringLiteral_1977/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, v20);
    sub_1BDB878(&StringLiteral_1983/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/, v21);
    sub_1BDB878(&StringLiteral_1988/*"ANOTHER_PAY_MULTI_INFO_TITLE"*/, v22);
    sub_1BDB878(&StringLiteral_1982/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/, v23);
    sub_1BDB878(&StringLiteral_1986/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/, v24);
    sub_1BDB878(&StringLiteral_1980/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, v25);
    sub_1BDB878(&StringLiteral_1978/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, v26);
    sub_1BDB878(&StringLiteral_1976/*"ANOTHER_PAY_INFO_TITLE"*/, v27);
    sub_1BDB878(&StringLiteral_1979/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, v28);
    sub_1BDB878(&StringLiteral_1984/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/, v29);
    byte_4B3F3EA = 1;
  }
  resultLabel = this->fields.resultLabel;
  if ( !resultLabel )
    goto LABEL_65;
  UILabel__set_text(resultLabel, string_TypeInfo->static_fields->Empty, 0LL);
  resultLabel = (UILabel_o *)EventRewardAnotherPayConfirmDialog__GetName(v31, v13, v32);
  if ( !v13 )
    goto LABEL_65;
  v33 = (Il2CppObject *)resultLabel;
  resultLabel = (UILabel_o *)ServantEntity__getClassName(v13, 0LL);
  if ( !this->fields.warnLabel )
    goto LABEL_65;
  v34 = (Il2CppObject *)resultLabel;
  if ( this->fields.state == 5 )
    v35 = 18;
  else
    v35 = 20;
  UILabel__set_fontSize(this->fields.warnLabel, v35, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( this->fields.state != 5 )
  {
    if ( !titleLabel )
      goto LABEL_65;
    UILabel__set_fontSize(this->fields.titleLabel, 24, 0LL);
    resultLabel = this->fields.downerLabel;
    if ( !resultLabel )
      goto LABEL_65;
    UILabel__set_fontSize(resultLabel, 20, 0LL);
    resultLabel = this->fields.upperLabel;
    if ( !resultLabel )
      goto LABEL_65;
    UILabel__set_fontSize(resultLabel, 20, 0LL);
    state = this->fields.state;
    v40 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( state == 3 )
    {
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_1976/*"ANOTHER_PAY_INFO_TITLE"*/, 0LL);
      resultLabel = (UILabel_o *)System_String__Format(v41, (Il2CppObject *)anotherName, 0LL);
      if ( !v40 )
        goto LABEL_65;
      UILabel__set_text(v40, (System_String_o *)resultLabel, 0LL);
      upperLabel = this->fields.upperLabel;
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_1977/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0LL);
      resultLabel = (UILabel_o *)System_String__Format(v43, (Il2CppObject *)anotherName, 0LL);
      if ( !upperLabel )
        goto LABEL_65;
      UILabel__set_text(upperLabel, (System_String_o *)resultLabel, 0LL);
      downerLabel = this->fields.downerLabel;
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_1978/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0LL);
      resultLabel = (UILabel_o *)System_String__Format(v45, (Il2CppObject *)anotherName, 0LL);
      if ( !downerLabel )
        goto LABEL_65;
      UILabel__set_text(downerLabel, (System_String_o *)resultLabel, 0LL);
      warnLabel = this->fields.warnLabel;
      v47 = (System_String_o *)StringLiteral_1981/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/;
      goto LABEL_62;
    }
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_1975/*"ANOTHER_PAY_CONFIRM_TITLE"*/, 0LL);
    resultLabel = (UILabel_o *)System_String__Format(v48, (Il2CppObject *)anotherName, 0LL);
    if ( !v40 )
      goto LABEL_65;
    UILabel__set_text(v40, (System_String_o *)resultLabel, 0LL);
    v49 = this->fields.downerLabel;
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_1980/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, 0LL);
    resultLabel = (UILabel_o *)System_String__Format(v50, (Il2CppObject *)itemName, 0LL);
    if ( !v49 )
      goto LABEL_65;
    UILabel__set_text(v49, (System_String_o *)resultLabel, 0LL);
    v51 = this->fields.state;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v51 == 6 )
    {
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_1987/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, 0LL);
      v53 = (ServantEntity_o *)System_String__Format_62613620(v52, (Il2CppObject *)itemName, v34, v33, 0LL);
LABEL_56:
      svtEntity = v53;
      resultLabel = this->fields.upperLabel;
      if ( !resultLabel )
        goto LABEL_65;
      UILabel__set_text(resultLabel, (System_String_o *)svtEntity, 0LL);
      v61 = (__int64 *)&StringLiteral_1986/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/;
      warnLabel = this->fields.warnLabel;
      if ( !isMultiAnotherPayItem )
        v61 = &StringLiteral_1981/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/;
      v62 = (System_String_o *)*v61;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = v62;
LABEL_62:
      v63 = LocalizationManager__Get(v47, 0LL);
      resultLabel = (UILabel_o *)System_String__Format(v63, (Il2CppObject *)anotherName, 0LL);
      if ( warnLabel )
      {
        Empty = (System_String_o *)resultLabel;
        resultLabel = warnLabel;
        goto LABEL_64;
      }
LABEL_65:
      sub_1BDBAD4(resultLabel, svtEntity);
    }
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_1979/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, 0LL);
    resultLabel = (UILabel_o *)sub_1BDB920(object___TypeInfo, 4LL);
    if ( !resultLabel )
      goto LABEL_65;
    v60 = (System_Object_array *)resultLabel;
    if ( !itemName || (resultLabel = (UILabel_o *)sub_1BDB9B4(itemName, resultLabel->klass->_1.element_class)) != 0LL )
    {
      if ( !v60->max_length )
        goto LABEL_66;
      v60->m_Items[0] = (Il2CppObject *)itemName;
      resultLabel = (UILabel_o *)sub_1BDB81C(v60->m_Items);
      if ( !v34 || (resultLabel = (UILabel_o *)sub_1BDB9B4(v34, v60->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v60->max_length <= 1 )
          goto LABEL_66;
        v60->m_Items[1] = v34;
        resultLabel = (UILabel_o *)sub_1BDB81C(&v60->m_Items[1]);
        if ( !v33 || (resultLabel = (UILabel_o *)sub_1BDB9B4(v33, v60->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v60->max_length <= 2 )
            goto LABEL_66;
          v60->m_Items[2] = v33;
          resultLabel = (UILabel_o *)sub_1BDB81C(&v60->m_Items[2]);
          if ( !shopName || (resultLabel = (UILabel_o *)sub_1BDB9B4(shopName, v60->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v60->max_length > 3 )
            {
              v60->m_Items[3] = (Il2CppObject *)shopName;
              sub_1BDB81C(&v60->m_Items[3]);
              v53 = (ServantEntity_o *)System_String__Format_62613688(v58, v60, 0LL);
              goto LABEL_56;
            }
LABEL_66:
            sub_1BDBADC(resultLabel, svtEntity, v59);
          }
        }
      }
    }
    v64 = sub_1BDBAF8();
    sub_1BDB9A0(v64, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  resultLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1988/*"ANOTHER_PAY_MULTI_INFO_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_65;
  UILabel__set_text(titleLabel, (System_String_o *)resultLabel, 0LL);
  resultLabel = this->fields.titleLabel;
  if ( !resultLabel )
    goto LABEL_65;
  UILabel__set_fontSize(resultLabel, 26, 0LL);
  resultLabel = this->fields.upperLabel;
  if ( !resultLabel )
    goto LABEL_65;
  UILabel__set_fontSize(resultLabel, 18, 0LL);
  v37 = this->fields.upperLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isOnlyAnotherItem )
      goto LABEL_17;
LABEL_35:
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_1982/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/, 0LL);
    resultLabel = (UILabel_o *)System_String__Format(v54, (Il2CppObject *)anotherName, 0LL);
    goto LABEL_36;
  }
  if ( !isOnlyAnotherItem )
    goto LABEL_35;
LABEL_17:
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_1983/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/, 0LL);
  resultLabel = (UILabel_o *)System_String__Format_62613620(v38, (Il2CppObject *)anotherName, v34, v33, 0LL);
LABEL_36:
  svtEntity = (ServantEntity_o *)resultLabel;
  if ( !v37 )
    goto LABEL_65;
  UILabel__set_text(v37, (System_String_o *)resultLabel, 0LL);
  v55 = this->fields.warnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_1984/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/, 0LL);
  resultLabel = (UILabel_o *)System_String__Format(v56, (Il2CppObject *)anotherName, 0LL);
  if ( !v55 )
    goto LABEL_65;
  UILabel__set_text(v55, (System_String_o *)resultLabel, 0LL);
  resultLabel = this->fields.downerLabel;
  if ( !resultLabel )
    goto LABEL_65;
  Empty = string_TypeInfo->static_fields->Empty;
LABEL_64:
  UILabel__set_text(resultLabel, Empty, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__SetListView(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        System_Int32_array *anotherItemIds,
        bool isOnlyAnotherItem,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Component_o *listViewManager; // x0
  int32_t state; // w23
  __int64 v12; // x2
  struct System_Int32_array *itemIds; // x8
  int32_t v14; // w24
  EventRewardAnotherPayListViewManager_o *v15; // x23
  int32_t eventId; // w22
  System_Action_bool__int__o *v17; // x25
  const MethodInfo *v18; // x6

  if ( (byte_4B3F3EC & 1) == 0 )
  {
    sub_1BDB878(&System_Action_bool__int__TypeInfo, shopEntity);
    sub_1BDB878(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__, v9);
    byte_4B3F3EC = 1;
  }
  listViewManager = (UnityEngine_Component_o *)this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_12;
  state = this->fields.state;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listViewManager, 0LL);
  if ( !listViewManager )
    goto LABEL_12;
  if ( state == 5 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 1, 0LL);
    if ( shopEntity )
    {
      itemIds = shopEntity->fields.itemIds;
      if ( itemIds )
      {
        if ( !itemIds->max_length )
          sub_1BDBADC(listViewManager, shopEntity, v12);
        v14 = itemIds->m_Items[1];
        v15 = this->fields.listViewManager;
        eventId = shopEntity->fields.eventId;
        v17 = (System_Action_bool__int__o *)sub_1BDBAC4(System_Action_bool__int__TypeInfo);
        System_Action_bool__int____ctor(
          v17,
          (Il2CppObject *)this,
          (intptr_t)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__,
          0LL);
        if ( v15 )
        {
          EventRewardAnotherPayListViewManager__CreateList(
            v15,
            eventId,
            v14,
            anotherItemIds,
            isOnlyAnotherItem,
            v17,
            v18);
          return;
        }
      }
    }
LABEL_12:
    sub_1BDBAD4(listViewManager, shopEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__SetState(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(
        EventRewardAnotherPayConfirmDialog_o *this,
        int32_t eventId,
        int32_t svtId,
        ItemEntity_o *anotherItemEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  UnityEngine_GameObject_o *skill; // x0
  __int64 v19; // x1
  int32_t *p_value; // x8
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  System_Func_object__bool__o *v22; // x21
  Il2CppObject *v23; // x0
  int32_t v24; // w20
  Il2CppObject *Master_object; // x22
  SkillLvMaster_o *v26; // x21
  UILabel_o *skillNameLabel; // x21
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0
  SkillLvEntity_o *v30; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B3F3E9 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_SkillMaster___, v10);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___, v13);
    sub_1BDB878(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v14);
    sub_1BDB878(&Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0__SetSvtPassiveSkillInfo_b__0__, v15);
    sub_1BDB878(&EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0_TypeInfo, v16);
    byte_4B3F3E9 = 1;
  }
  v30 = 0LL;
  entity = 0LL;
  v17 = sub_1BDBAC4(EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_25;
  *(_DWORD *)(v17 + 16) = eventId;
  skill = this->fields.skill;
  if ( !skill )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(skill, 1, 0LL);
  if ( anotherItemEntity && anotherItemEntity->fields.type == 40 )
  {
    p_value = &anotherItemEntity->fields.value;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    skill = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    if ( !skill )
      goto LABEL_25;
    ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                              (ServantPassiveSkillMaster_o *)skill,
                                                                              svtId,
                                                                              0LL);
    v22 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v17,
      Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0__SetSvtPassiveSkillInfo_b__0__,
      0LL);
    v23 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
            ServantSkillList,
            (System_Func_TSource__bool__o *)v22,
            (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    if ( !v23 )
      return;
    p_value = (int32_t *)&v23[1].monitor + 1;
  }
  v24 = *p_value;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillMaster___);
  skill = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_25;
  v26 = (SkillLvMaster_o *)skill;
  skill = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        v24,
                                        (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)skill & 1) == 0 )
    return;
  if ( !v26 )
    goto LABEL_25;
  if ( !SkillLvMaster__TryGetEntity(v26, &v30, v24, 1, 0LL) )
    return;
  skill = (UnityEngine_GameObject_o *)entity;
  if ( !entity )
    goto LABEL_25;
  skillNameLabel = this->fields.skillNameLabel;
  skill = (UnityEngine_GameObject_o *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
  if ( !skillNameLabel
    || (UILabel__set_text(skillNameLabel, (System_String_o *)skill, 0LL),
        (skill = (UnityEngine_GameObject_o *)v30) == 0LL)
    || (skillDetailLabel = this->fields.skillDetailLabel,
        Detail = SkillLvEntity__getDetail(v30, 0, 0LL),
        WrapControlText__textAdjust(skillDetailLabel, Detail, 18, 0, 0LL),
        (skill = (UnityEngine_GameObject_o *)this->fields.skillIcon) == 0LL) )
  {
LABEL_25:
    sub_1BDBAD4(skill, v19);
  }
  SkillIconComponent__Set((SkillIconComponent_o *)skill, v24, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetUIPosition(
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
    sub_1BDBAD4(titleLabel, isEventPeriod);
  gameObject = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 255.0, 0LL);
  switch ( this->fields.state )
  {
    case 3:
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, 10.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !titleLabel )
        goto LABEL_39;
      v10 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v10, 180.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v11 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v11, 120.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v12 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v12, -100.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v13 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      v14 = -1021640704;
      goto LABEL_37;
    case 4:
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, -25.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !titleLabel )
        goto LABEL_39;
      v15 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v15, 185.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v16 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v16, 135.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v17 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v17, -125.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v13 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      v14 = -1020329984;
      goto LABEL_37;
    case 5:
      titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v18 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v18, 238.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v19 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v19, 212.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v13 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      v14 = -1021706240;
      goto LABEL_37;
    case 6:
      v20 = 5.0;
      if ( isMultiAnotherPayItem )
        v20 = 10.0;
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, v20, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !titleLabel )
        goto LABEL_39;
      v21 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      v22 = 175.0;
      if ( isMultiAnotherPayItem )
        v22 = 188.0;
      GameObjectExtensions__SetLocalPositionY(v21, v22, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v23 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      v24 = 125.0;
      if ( isMultiAnotherPayItem )
        v24 = 132.0;
      GameObjectExtensions__SetLocalPositionY(v23, v24, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v25 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      v26 = -95.0;
      if ( isMultiAnotherPayItem )
        v26 = -106.0;
      GameObjectExtensions__SetLocalPositionY(v25, v26, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v13 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      v27 = -145.0;
      if ( isMultiAnotherPayItem )
        v27 = -166.0;
      goto LABEL_38;
    case 7:
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, -30.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v28 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v28, 100.0, 0LL);
      if ( isEventPeriod )
        return;
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, 0.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v29 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v29, 120.0, 0LL);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_39;
      v13 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
      v14 = -1027080192;
LABEL_37:
      v27 = *(float *)&v14;
LABEL_38:
      GameObjectExtensions__SetLocalPositionY(v13, v27, 0LL);
      return;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetWindowSize(
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
        UIWidget__set_width(window, x, 0LL),
        (window = this->fields.window) == 0LL) )
  {
    sub_1BDBAD4(window, method);
  }
  if ( y == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)y;
  UIWidget__set_height(window, v7, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog___OpenResult_b__77_0(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


void __fastcall EventRewardAnotherPayConfirmDialog___Open_b__76_0(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


System_String_o *__fastcall EventRewardAnotherPayConfirmDialog__get_closeBtnPath(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B3F3F4 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15616/*"Window/CancelButton"*/, method);
    byte_4B3F3F4 = 1;
  }
  return (System_String_o *)StringLiteral_15616/*"Window/CancelButton"*/;
}


void __fastcall EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0___ctor(
        EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0___SetSvtPassiveSkillInfo_b__0(
        EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0_o *this,
        ServantPassiveSkillEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BDBAD4(this, 0LL);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}