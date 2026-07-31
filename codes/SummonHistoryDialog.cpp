void SummonHistoryDialog___ctor(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog___ctor((TextLabelScrollDialog_o *)this, 0);
}


void SummonHistoryDialog__Init(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *summonHistoryListViewManager; // x0

  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0);
  summonHistoryListViewManager = (ListViewManager_o *)this->fields.summonHistoryListViewManager;
  if ( !summonHistoryListViewManager )
    sub_21FFECC(0, v3);
  ListViewManager__DestroyList(summonHistoryListViewManager, 0);
}


void SummonHistoryDialog__OnClickClose(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_5934898 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SummonHistoryDialog_OnClickClose__);
    sub_21FFC50(&Method_SummonHistoryDialog__OnClickClose_b__6_0__);
    byte_5934898 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_SummonHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SummonHistoryDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  }
  v5 = System_Action_TypeInfo;
  this->fields.state = 2;
  v6 = (System_Action_o *)sub_21FFEBC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonHistoryDialog__OnClickClose_b__6_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void SummonHistoryDialog__Open(SummonHistoryDialog_o *this, VaildGachaInfo_o *gachaInfo, const MethodInfo *method)
{
  SummonHistoryDialog_c *klass; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x0
  System_String_o *name; // x0
  const MethodInfo *v10; // x1
  UILabel_o *summonNameLabel; // x21
  UILabel_o *UpperMessageLabel; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x2
  __int64 v18; // x2
  Il2CppObject *Master_object; // x20
  __int64 v20; // x2
  int32_t stackLoseNum; // w21
  System_String_o *v22; // x20
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *messageLabel; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  UILabel_o *closeLabel; // x20
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int v42; // [xsp+4h] [xbp-5Ch] BYREF
  UserGachaPickupCollateralEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  GachaPickupCollateralEntity_o *gachaPickupCollateralEntity; // [xsp+10h] [xbp-50h] BYREF
  GachaPickupCollateralGroupEntity_o *gachaPickupCollateralGroupEntity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5934897 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserGachaPickupCollateralMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_7191/*"GACHA_HISTORY_UPPER_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_7184/*"GACHA_HISTORY_EMPTY"*/);
    sub_21FFC50(&StringLiteral_7185/*"GACHA_HISTORY_GACHA_NUM"*/);
    sub_21FFC50(&StringLiteral_7190/*"GACHA_HISTORY_TITLE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934897 = 1;
  }
  gachaPickupCollateralEntity = 0;
  gachaPickupCollateralGroupEntity = 0;
  klass = this->klass;
  entity = 0;
  ((void (__fastcall *)(SummonHistoryDialog_o *, const MethodInfo *, const MethodInfo *))klass->vtable._7_Init.methodPtr)(
    this,
    klass->vtable._7_Init.method,
    method);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_7190/*"GACHA_HISTORY_TITLE"*/, 0);
  TextLabelScrollDialog__Open(
    (TextLabelScrollDialog_o *)this,
    v8,
    **(System_String_o ***)(qword_594C0B8 + 184),
    0,
    0,
    0);
  if ( !gachaInfo )
    goto LABEL_53;
  name = gachaInfo->fields.name;
  if ( !name )
    goto LABEL_53;
  summonNameLabel = this->fields.summonNameLabel;
  name = System_String__Replace_75490096(
           name,
           (System_String_o *)StringLiteral_43/*"\n"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
  if ( !summonNameLabel )
    goto LABEL_53;
  UILabel__set_text(summonNameLabel, name, 0);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  name = LocalizationManager__Get((System_String_o *)StringLiteral_7191/*"GACHA_HISTORY_UPPER_MESSAGE"*/, 0);
  if ( !UpperMessageLabel )
    goto LABEL_53;
  UILabel__set_text(UpperMessageLabel, name, 0);
  v15 = **(System_String_o ***)(qword_594C0B8 + 184);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
  name = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
  if ( !name )
    goto LABEL_53;
  if ( GachaPickupCollateralGroupMaster__TryGetEntityFromGachaId(
         (GachaPickupCollateralGroupMaster_o *)name,
         &gachaPickupCollateralGroupEntity,
         gachaInfo->fields.id,
         0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v16);
    name = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
    if ( !gachaPickupCollateralGroupEntity || !name )
      goto LABEL_53;
    name = (System_String_o *)GachaPickupCollateralMaster__TryGetEntityFromGroupId(
                                (GachaPickupCollateralMaster_o *)name,
                                &gachaPickupCollateralEntity,
                                gachaPickupCollateralGroupEntity->fields.id,
                                0);
    if ( ((unsigned __int8)name & 1) != 0 )
    {
      if ( !gachaPickupCollateralEntity )
        goto LABEL_53;
      if ( !gachaPickupCollateralEntity->fields.maxGetNum )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v17);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserGachaPickupCollateralMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v18);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        name = (System_String_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v18);
          name = (System_String_o *)NetworkManager_TypeInfo;
        }
        if ( !gachaPickupCollateralEntity || !Master_object )
          goto LABEL_53;
        name = (System_String_o *)UserGachaPickupCollateralMaster__TryGetEntity(
                                    (UserGachaPickupCollateralMaster_o *)Master_object,
                                    &entity,
                                    *(_QWORD *)(*(_QWORD *)&name[7].fields + 64LL),
                                    gachaPickupCollateralEntity->fields.gachaPickupCollateralGroupId,
                                    gachaPickupCollateralEntity->fields.type,
                                    gachaPickupCollateralEntity->fields.rarity,
                                    0);
        if ( ((unsigned __int8)name & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_53;
          stackLoseNum = entity->fields.stackLoseNum;
        }
        else
        {
          stackLoseNum = 0;
        }
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v20);
        name = LocalizationManager__Get((System_String_o *)StringLiteral_7185/*"GACHA_HISTORY_GACHA_NUM"*/, 0);
        if ( !gachaPickupCollateralEntity )
          goto LABEL_53;
        v22 = name;
        v42 = gachaPickupCollateralEntity->fields.triggerDrawNum - stackLoseNum;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v42);
        v15 = System_String__Format(v22, v23, 0);
      }
    }
  }
  name = (System_String_o *)this->fields.gachaNumLabel;
  if ( !name )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)name, v15, 0);
  name = (System_String_o *)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_53;
  SummonHistoryListViewManager__CreateList((SummonHistoryListViewManager_o *)name, v10);
  name = (System_String_o *)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_53;
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)name, 0) <= 0 )
  {
    name = (System_String_o *)this->fields.messageLabel;
    if ( name )
    {
      name = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)name, 0);
      if ( name )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)name, 1, 0);
        messageLabel = this->fields.messageLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
        name = LocalizationManager__Get((System_String_o *)StringLiteral_7184/*"GACHA_HISTORY_EMPTY"*/, 0);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, name, 0);
          goto LABEL_48;
        }
      }
    }
LABEL_53:
    sub_21FFECC(name, v10);
  }
LABEL_48:
  name = (System_String_o *)this->fields.scrollView;
  if ( !name )
    goto LABEL_53;
  HIDWORD(name[3].monitor) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)name, 0);
  closeLabel = this->fields.closeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
  name = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_53;
  UILabel__set_text(closeLabel, name, 0);
  this->fields.closeAction = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v30, v31, v32, v33, v34, v35);
  this->fields.decideAction = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.decideAction, 0, v36, v37, v38, v39, v40, v41);
}


void SummonHistoryDialog___OnClickClose_b__6_0(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0);
  ((void (__fastcall *)(SummonHistoryDialog_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method);
}