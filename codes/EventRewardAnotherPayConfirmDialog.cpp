void __fastcall EventRewardAnotherPayConfirmDialog___cctor(const MethodInfo *method)
{
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  EventRewardAnotherPayConfirmDialog_c *v2; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v3; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v4; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v5; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v6; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v7; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v8; // x9

  if ( (byte_4BD7390 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_4BD7390 = 1;
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


void __fastcall EventRewardAnotherPayConfirmDialog___ctor(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD738F & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD738F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__Close(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4BD7388 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventRewardAnotherPayConfirmDialog_Init__);
    byte_4BD7388 = 1;
  }
  this->fields.state = 2;
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


System_String_o *__fastcall EventRewardAnotherPayConfirmDialog__GetName(
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

  if ( (byte_4BD738D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD738D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
  ServantLimitCountSealAfter = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                     v17,
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
    v14 = -1;
    return ServantEntity__getName(svtEntity, v14, -1, 1, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v12 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v13 = (ServantLimitImageMaster_o *)v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  ServantLimitCountSealAfter = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                     v18,
                                                     0LL);
  if ( !entity
    || !v13
    || (ServantLimitCountSealAfter = (NetworkManager_c *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                           v13,
                                                           (int32_t)ServantLimitCountSealAfter,
                                                           entity->fields.maxLimitCount,
                                                           0LL),
        !entity) )
  {
LABEL_28:
    sub_1C22094(ServantLimitCountSealAfter, v4);
  }
  if ( (_DWORD)ServantLimitCountSealAfter == entity->fields.maxLimitCount )
    v14 = -1;
  else
    v14 = (int)ServantLimitCountSealAfter;
  return ServantEntity__getName(svtEntity, v14, -1, 1, 0LL);
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
    sub_1C22094(itemIcon, method);
  }
  SkillIconComponent__Clear((SkillIconComponent_o *)itemIcon, 0LL);
  this->fields.onClickButton = 0LL;
  sub_1C21DDC(&this->fields.onClickButton, 0LL);
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

  if ( (byte_4BD738C & 1) == 0 )
  {
    sub_1C21E38(&Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    byte_4BD738C = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C22094(v5, v6);
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

  if ( (byte_4BD7389 & 1) == 0 )
  {
    sub_1C21E38(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    byte_4BD7389 = 1;
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
      v5 = (_QWORD *)sub_1C21E50(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
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
    sub_1C22094(decideButton, method);
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

  if ( (byte_4BD738A & 1) == 0 )
  {
    sub_1C21E38(&Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    byte_4BD738A = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C22094(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))onClickButton->fields.m_target)(
      onClickButton->fields.original_method_info,
      1LL,
      (unsigned int)this->fields.buyAnotherItemId,
      *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


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

  if ( (byte_4BD7387 & 1) == 0 )
  {
    sub_1C21E38(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    byte_4BD7387 = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.buyAnotherItemId = anotherItemId;
    this->fields.state = 2;
    v7 = Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C21E50(Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C22094(v9, v10);
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

  if ( (byte_4BD738B & 1) == 0 )
  {
    sub_1C21E38(&Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    byte_4BD738B = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C22094(v5, v6);
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
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o **p_onClickButton; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x24
  System_Int32_array *v15; // x21
  ItemEntity_o *Entity; // x22
  int max_length; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x24
  char v19; // w25
  bool v20; // zf
  int32_t v21; // w8
  const MethodInfo *v22; // x4
  int32_t eventId; // w23
  struct System_String_o *MasterName_k__BackingField; // x26
  __int64 v25; // x27
  int32_t v26; // w0
  const MethodInfo *v27; // x4
  bool v28; // w23
  System_String_o *name; // x25
  System_String_o *AnotherPayName; // x27
  System_String_o *v31; // x0
  const MethodInfo *v32; // x7
  const MethodInfo *v33; // x1
  EventRewardAnotherPayConfirmDialog_c *v34; // x0
  int32_t state; // w24
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  __int64 v37; // x9
  __int64 v38; // x10
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x4
  System_Action_o *v41; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  UnityEngine_Vector2_o v43; // 0:s0.4,4:s1.4

  v7 = isReconfirm;
  if ( (byte_4BD7381 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_EventRewardAnotherPayConfirmDialog__Open_b__76_0__);
    sub_1C21E38(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD7381 = 1;
  }
  p_onClickButton = &this->fields.onClickButton;
  this->fields.onClickButton = buttonAction;
  sub_1C21DDC(&this->fields.onClickButton, buttonAction);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !shopEntity )
    goto LABEL_40;
  v14 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetAnotherPayItemIds(shopEntity, 0LL);
  v15 = (System_Int32_array *)Master_object;
  if ( selectedAnotherItemId <= 0 )
  {
    if ( !Master_object )
      goto LABEL_40;
    if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
      sub_1C2209C(Master_object, v13);
    selectedAnotherItemId = Master_object->fields.revision;
  }
  if ( !v14
    || (Entity = (ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v14,
                                   selectedAnotherItemId,
                                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetRelateServantEntity(
                                                                        shopEntity,
                                                                        0LL),
        !v15)
    || (max_length = v15->max_length,
        v18 = Master_object,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__IsSoldOut(shopEntity, 0LL),
        !Entity) )
  {
LABEL_40:
    sub_1C22094(Master_object, v13);
  }
  this->fields.buyAnotherItemId = Entity->fields.id;
  if ( !v18 )
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
  v19 = (char)Master_object;
  v20 = ((unsigned __int8)Master_object & 1) == 0;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIcon;
  if ( v20 )
    v21 = 3;
  else
    v21 = 4;
  if ( max_length > 1 )
    v21 = 5;
  if ( v7 )
    v21 = 6;
  this->fields.state = v21;
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
      v25 = *(_QWORD *)&v18->fields._MasterKind_k__BackingField;
      MasterName_k__BackingField = v18->fields._MasterName_k__BackingField;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v42.fields.currentCryptoKey = v25;
      *(_QWORD *)&v42.fields.fakeValue = MasterName_k__BackingField;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v42, 0LL);
      EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v26, Entity, v27);
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
  v28 = v19 & 1;
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, 1, max_length > 1, v19 & 1, v22);
  name = Entity->fields.name;
  AnotherPayName = ItemEntity__GetAnotherPayName(Entity, 0LL);
  v31 = ShopEntity__getName(shopEntity, 0LL);
  EventRewardAnotherPayConfirmDialog__SetConfirmLabel(
    this,
    (ServantEntity_o *)v18,
    name,
    AnotherPayName,
    v31,
    max_length > 1,
    v28,
    v32);
  v34 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  state = this->fields.state;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v34 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  static_fields = v34->static_fields;
  v37 = 88LL;
  if ( state == 5 )
    v37 = 104LL;
  if ( state == 5 )
    v38 = 100LL;
  else
    v38 = 84LL;
  v43.fields.y = *(float *)((char *)&static_fields->CancelButtonReconfirmPos.fields.x + v37);
  v43.fields.x = *(float *)((char *)&static_fields->CancelButtonReconfirmPos.fields.x + v38);
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v43, v33);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, Entity, v39);
  EventRewardAnotherPayConfirmDialog__SetListView(this, shopEntity, v15, v28, v40);
  v41 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog__Open_b__76_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OpenResult(
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

  if ( (byte_4BD7382 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_EventRewardAnotherPayConfirmDialog__OpenResult_b__77_0__);
    sub_1C21E38(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_2099/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/);
    sub_1C21E38(&StringLiteral_2098/*"ANOTHER_PAY_PERIOD_END_MSG"*/);
    sub_1C21E38(&StringLiteral_2100/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/);
    byte_4BD7382 = 1;
  }
  p_onClickButton = &this->fields.onClickButton;
  entity = 0LL;
  this->fields.onClickButton = onDecide;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C21DDC(&this->fields.onClickButton, onDecide);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  usedAnotherItemId,
                                                                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this->fields.itemIcon )
    goto LABEL_39;
  v14 = (ItemEntity_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this->fields.itemIcon,
                                                                  0LL);
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetRelateServantEntity(shopEntity, 0LL);
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
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v42, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v19, v14, v20);
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
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v25, v15, v26);
  ClassName = ServantEntity__getClassName(v15, 0LL);
  resultLabel = this->fields.resultLabel;
  v30 = (Il2CppObject *)ClassName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isAnotherItemOnly )
      goto LABEL_18;
LABEL_22:
    v31 = &StringLiteral_2100/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
    goto LABEL_23;
  }
  if ( !isAnotherItemOnly )
    goto LABEL_22;
LABEL_18:
  v31 = &StringLiteral_2099/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
LABEL_23:
  v32 = LocalizationManager__Get((System_String_o *)*v31, 0LL);
  v33 = (Il2CppObject *)ShopEntity__getName(shopEntity, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format_63129916(v32, v33, v30, Name, 0LL);
  if ( !resultLabel )
    goto LABEL_39;
  UILabel__set_text(resultLabel, (System_String_o *)Master_object, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_39;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         shopEntity->fields.eventId,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( entity )
    {
      if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, 0LL, 0LL) )
        goto LABEL_30;
      v36 = this->fields.downerLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_2098/*"ANOTHER_PAY_PERIOD_END_MSG"*/,
                                                                      0LL);
      if ( v36 )
      {
        UILabel__set_text(v36, (System_String_o *)Master_object, 0LL);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.downerLabel;
        if ( Master_object )
        {
          UILabel__set_fontSize((UILabel_o *)Master_object, 22, 0LL);
          v35 = 0;
          goto LABEL_36;
        }
      }
    }
LABEL_39:
    sub_1C22094(Master_object, v13);
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
  v40 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog__OpenResult_b__77_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__SetButtonDisp(
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

  if ( (byte_4BD7385 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_9496/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/);
    sub_1C21E38(&StringLiteral_2082/*"ANOTHER_PAY_ANOTHER_BUY"*/);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_2097/*"ANOTHER_PAY_NORMAL_BUY"*/);
    byte_4BD7385 = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( this->fields.state == 7 )
    v6 = &StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/;
  else
    v6 = &StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/;
  v7 = (System_String_o *)*v6;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__Get(v7, 0LL);
  if ( !cancelLabel )
    goto LABEL_76;
  UILabel__set_text(cancelLabel, decideButton, 0LL);
  decideLabel = this->fields.decideLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_9496/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_76;
  UILabel__set_text(decideLabel, decideButton, 0LL);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_2097/*"ANOTHER_PAY_NORMAL_BUY"*/, 0LL);
  if ( !normalBuyLabel )
    goto LABEL_76;
  UILabel__set_text(normalBuyLabel, decideButton, 0LL);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2082/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0LL);
  v14 = itemEntity ? (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0LL) : 0LL;
  decideButton = System_String__Format(v13, v14, 0LL);
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
  v17 = 116LL;
  if ( state == 5 )
    v17 = 108LL;
  if ( !cancelButtonSp )
    goto LABEL_76;
  v18 = *(float *)(*(_QWORD *)&decideButton[7].fields + v17);
  if ( v18 == INFINITY )
    v19 = 0x80000000;
  else
    v19 = (int)v18;
  UIWidget__set_width(cancelButtonSp, v19, 0LL);
  decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  v20 = (UIWidget_o *)this->fields.cancelButtonSp;
  v21 = this->fields.state;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  v22 = 120LL;
  if ( v21 == 5 )
    v22 = 112LL;
  if ( !v20 )
LABEL_76:
    sub_1C22094(decideButton, v9);
  v23 = *(float *)(*(_QWORD *)&decideButton[7].fields + v22);
  if ( v23 == INFINITY )
    v24 = 0x80000000;
  else
    v24 = (int)v23;
  UIWidget__set_height(v20, v24, 0LL);
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
      v25 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v26 = this->fields.decideButton;
      v27 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v25 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v28 = v25->static_fields;
      v29 = 68LL;
      if ( v27 == 4 )
        v29 = 80LL;
      if ( v27 == 4 )
        v30 = 76LL;
      else
        v30 = 64LL;
      if ( v27 == 4 )
        v31 = 72LL;
      else
        v31 = 60LL;
      v48.fields.x = *(float *)((char *)&v28->CancelButtonReconfirmPos.fields.x + v31);
      v48.fields.y = *(float *)((char *)&v28->CancelButtonReconfirmPos.fields.x + v30);
      v48.fields.z = *(float *)((char *)&v28->CancelButtonReconfirmPos.fields.x + v29);
      GameObjectExtensions__SetLocalPosition(v26, v48, 0LL);
      v32 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      v34 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v32 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      p_x = &v32->static_fields->CancelButtonReconfirmPos.fields.x;
      v36 = 2LL;
      if ( v34 == 4 )
        v36 = 11LL;
      if ( v34 == 4 )
        v37 = 10LL;
      else
        v37 = 1LL;
      p_z = &p_x[v36];
      p_y = &p_x[v37];
      if ( v34 == 4 )
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
      v40 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      v41 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v40 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v42 = v40->static_fields;
      v43 = 32LL;
      if ( v41 == 7 )
        v43 = 56LL;
      if ( v41 == 7 )
        v44 = 52LL;
      else
        v44 = 28LL;
      if ( v41 == 7 )
        v45 = 48LL;
      else
        v45 = 24LL;
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
  GameObjectExtensions__SetLocalPosition(cancelButton, v49, 0LL);
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
  System_Object_array *v44; // x27
  __int64 *v45; // x8
  System_String_o *v46; // x21
  System_String_o *v47; // x0
  __int64 v48; // x0

  v13 = svtEntity;
  if ( (byte_4BD7384 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_2095/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/);
    sub_1C21E38(&StringLiteral_2089/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/);
    sub_1C21E38(&StringLiteral_2083/*"ANOTHER_PAY_CONFIRM_TITLE"*/);
    sub_1C21E38(&StringLiteral_2085/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/);
    sub_1C21E38(&StringLiteral_2091/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/);
    sub_1C21E38(&StringLiteral_2096/*"ANOTHER_PAY_MULTI_INFO_TITLE"*/);
    sub_1C21E38(&StringLiteral_2090/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/);
    sub_1C21E38(&StringLiteral_2094/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/);
    sub_1C21E38(&StringLiteral_2088/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/);
    sub_1C21E38(&StringLiteral_2086/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/);
    sub_1C21E38(&StringLiteral_2084/*"ANOTHER_PAY_INFO_TITLE"*/);
    sub_1C21E38(&StringLiteral_2087/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/);
    sub_1C21E38(&StringLiteral_2092/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/);
    byte_4BD7384 = 1;
  }
  resultLabel = this->fields.resultLabel;
  if ( !resultLabel )
    goto LABEL_65;
  UILabel__set_text(resultLabel, string_TypeInfo->static_fields->Empty, 0LL);
  resultLabel = (UILabel_o *)EventRewardAnotherPayConfirmDialog__GetName(v16, v13, v17);
  if ( !v13 )
    goto LABEL_65;
  v18 = (Il2CppObject *)resultLabel;
  resultLabel = (UILabel_o *)ServantEntity__getClassName(v13, 0LL);
  if ( !this->fields.warnLabel )
    goto LABEL_65;
  v19 = (Il2CppObject *)resultLabel;
  if ( this->fields.state == 5 )
    v20 = 18;
  else
    v20 = 20;
  UILabel__set_fontSize(this->fields.warnLabel, v20, 0LL);
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
    v25 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( state == 3 )
    {
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2084/*"ANOTHER_PAY_INFO_TITLE"*/, 0LL);
      resultLabel = (UILabel_o *)System_String__Format(v26, (Il2CppObject *)anotherName, 0LL);
      if ( !v25 )
        goto LABEL_65;
      UILabel__set_text(v25, (System_String_o *)resultLabel, 0LL);
      upperLabel = this->fields.upperLabel;
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2085/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0LL);
      resultLabel = (UILabel_o *)System_String__Format(v28, (Il2CppObject *)anotherName, 0LL);
      if ( !upperLabel )
        goto LABEL_65;
      UILabel__set_text(upperLabel, (System_String_o *)resultLabel, 0LL);
      downerLabel = this->fields.downerLabel;
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2086/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0LL);
      resultLabel = (UILabel_o *)System_String__Format(v30, (Il2CppObject *)anotherName, 0LL);
      if ( !downerLabel )
        goto LABEL_65;
      UILabel__set_text(downerLabel, (System_String_o *)resultLabel, 0LL);
      warnLabel = this->fields.warnLabel;
      v32 = (System_String_o *)StringLiteral_2089/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/;
      goto LABEL_62;
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_2083/*"ANOTHER_PAY_CONFIRM_TITLE"*/, 0LL);
    resultLabel = (UILabel_o *)System_String__Format(v33, (Il2CppObject *)anotherName, 0LL);
    if ( !v25 )
      goto LABEL_65;
    UILabel__set_text(v25, (System_String_o *)resultLabel, 0LL);
    v34 = this->fields.downerLabel;
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_2088/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, 0LL);
    resultLabel = (UILabel_o *)System_String__Format(v35, (Il2CppObject *)itemName, 0LL);
    if ( !v34 )
      goto LABEL_65;
    UILabel__set_text(v34, (System_String_o *)resultLabel, 0LL);
    v36 = this->fields.state;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v36 == 6 )
    {
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2095/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, 0LL);
      v38 = (ServantEntity_o *)System_String__Format_63129916(v37, (Il2CppObject *)itemName, v19, v18, 0LL);
LABEL_56:
      svtEntity = v38;
      resultLabel = this->fields.upperLabel;
      if ( !resultLabel )
        goto LABEL_65;
      UILabel__set_text(resultLabel, (System_String_o *)svtEntity, 0LL);
      v45 = (__int64 *)&StringLiteral_2094/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/;
      warnLabel = this->fields.warnLabel;
      if ( !isMultiAnotherPayItem )
        v45 = &StringLiteral_2089/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/;
      v46 = (System_String_o *)*v45;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = v46;
LABEL_62:
      v47 = LocalizationManager__Get(v32, 0LL);
      resultLabel = (UILabel_o *)System_String__Format(v47, (Il2CppObject *)anotherName, 0LL);
      if ( warnLabel )
      {
        Empty = (System_String_o *)resultLabel;
        resultLabel = warnLabel;
        goto LABEL_64;
      }
LABEL_65:
      sub_1C22094(resultLabel, svtEntity);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_2087/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, 0LL);
    resultLabel = (UILabel_o *)sub_1C21EE0(object___TypeInfo, 4LL);
    if ( !resultLabel )
      goto LABEL_65;
    v44 = (System_Object_array *)resultLabel;
    if ( !itemName || (resultLabel = (UILabel_o *)sub_1C21F74(itemName, resultLabel->klass->_1.element_class)) != 0LL )
    {
      if ( !v44->max_length )
        goto LABEL_66;
      v44->m_Items[0] = (Il2CppObject *)itemName;
      resultLabel = (UILabel_o *)sub_1C21DDC(v44->m_Items, itemName);
      if ( !v19 || (resultLabel = (UILabel_o *)sub_1C21F74(v19, v44->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v44->max_length <= 1 )
          goto LABEL_66;
        v44->m_Items[1] = v19;
        resultLabel = (UILabel_o *)sub_1C21DDC(&v44->m_Items[1], v19);
        if ( !v18 || (resultLabel = (UILabel_o *)sub_1C21F74(v18, v44->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v44->max_length <= 2 )
            goto LABEL_66;
          v44->m_Items[2] = v18;
          resultLabel = (UILabel_o *)sub_1C21DDC(&v44->m_Items[2], v18);
          if ( !shopName || (resultLabel = (UILabel_o *)sub_1C21F74(shopName, v44->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v44->max_length > 3 )
            {
              v44->m_Items[3] = (Il2CppObject *)shopName;
              sub_1C21DDC(&v44->m_Items[3], shopName);
              v38 = (ServantEntity_o *)System_String__Format_63129984(v43, v44, 0LL);
              goto LABEL_56;
            }
LABEL_66:
            sub_1C2209C(resultLabel, svtEntity);
          }
        }
      }
    }
    v48 = sub_1C220B8();
    sub_1C21F60(v48, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  resultLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2096/*"ANOTHER_PAY_MULTI_INFO_TITLE"*/, 0LL);
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
  v22 = this->fields.upperLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isOnlyAnotherItem )
      goto LABEL_17;
LABEL_35:
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_2090/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/, 0LL);
    resultLabel = (UILabel_o *)System_String__Format(v39, (Il2CppObject *)anotherName, 0LL);
    goto LABEL_36;
  }
  if ( !isOnlyAnotherItem )
    goto LABEL_35;
LABEL_17:
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2091/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/, 0LL);
  resultLabel = (UILabel_o *)System_String__Format_63129916(v23, (Il2CppObject *)anotherName, v19, v18, 0LL);
LABEL_36:
  svtEntity = (ServantEntity_o *)resultLabel;
  if ( !v22 )
    goto LABEL_65;
  UILabel__set_text(v22, (System_String_o *)resultLabel, 0LL);
  v40 = this->fields.warnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_2092/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/, 0LL);
  resultLabel = (UILabel_o *)System_String__Format(v41, (Il2CppObject *)anotherName, 0LL);
  if ( !v40 )
    goto LABEL_65;
  UILabel__set_text(v40, (System_String_o *)resultLabel, 0LL);
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
  UnityEngine_Component_o *listViewManager; // x0
  int32_t state; // w23
  struct System_Int32_array *itemIds; // x8
  int32_t v12; // w24
  EventRewardAnotherPayListViewManager_o *v13; // x23
  int32_t eventId; // w22
  System_Action_bool__int__o *v15; // x25
  const MethodInfo *v16; // x6

  if ( (byte_4BD7386 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__int__TypeInfo);
    sub_1C21E38(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    byte_4BD7386 = 1;
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
          sub_1C2209C(listViewManager, shopEntity);
        v12 = itemIds->m_Items[1];
        v13 = this->fields.listViewManager;
        eventId = shopEntity->fields.eventId;
        v15 = (System_Action_bool__int__o *)sub_1C22084(System_Action_bool__int__TypeInfo);
        System_Action_bool__int____ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__,
          0LL);
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
    sub_1C22094(listViewManager, shopEntity);
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


void __fastcall EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(
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

  if ( (byte_4BD7383 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    sub_1C21E38(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_1C21E38(&Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0__SetSvtPassiveSkillInfo_b__0__);
    sub_1C21E38(&EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0_TypeInfo);
    byte_4BD7383 = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  v9 = sub_1C22084(EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_25;
  *(_DWORD *)(v9 + 16) = eventId;
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
    skill = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    if ( !skill )
      goto LABEL_25;
    ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                              (ServantPassiveSkillMaster_o *)skill,
                                                                              svtId,
                                                                              0LL);
    v14 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v9,
      Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass79_0__SetSvtPassiveSkillInfo_b__0__,
      0LL);
    v15 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
            ServantSkillList,
            (System_Func_TSource__bool__o *)v14,
            (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    if ( !v15 )
      return;
    p_value = (int32_t *)&v15[1].monitor + 1;
  }
  v16 = *p_value;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillMaster___);
  skill = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_25;
  v18 = (SkillLvMaster_o *)skill;
  skill = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        v16,
                                        (const MethodInfo_325BE14 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)skill & 1) == 0 )
    return;
  if ( !v18 )
    goto LABEL_25;
  if ( !SkillLvMaster__TryGetEntity(v18, &v22, v16, 1, 0LL) )
    return;
  skill = (UnityEngine_GameObject_o *)entity;
  if ( !entity )
    goto LABEL_25;
  skillNameLabel = this->fields.skillNameLabel;
  skill = (UnityEngine_GameObject_o *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
  if ( !skillNameLabel
    || (UILabel__set_text(skillNameLabel, (System_String_o *)skill, 0LL),
        (skill = (UnityEngine_GameObject_o *)v22) == 0LL)
    || (skillDetailLabel = this->fields.skillDetailLabel,
        Detail = SkillLvEntity__getDetail(v22, 0, 0LL),
        WrapControlText__textAdjust(skillDetailLabel, Detail, 18, 0, 0LL),
        (skill = (UnityEngine_GameObject_o *)this->fields.skillIcon) == 0LL) )
  {
LABEL_25:
    sub_1C22094(skill, v11);
  }
  SkillIconComponent__Set((SkillIconComponent_o *)skill, v16, 0LL);
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
    sub_1C22094(titleLabel, isEventPeriod);
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
    sub_1C22094(window, method);
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
  if ( (byte_4BD738E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15909/*"Window/CancelButton"*/);
    byte_4BD738E = 1;
  }
  return (System_String_o *)StringLiteral_15909/*"Window/CancelButton"*/;
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
    sub_1C22094(this, 0LL);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}