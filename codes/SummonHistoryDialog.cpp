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
    sub_1C942F0(0, v3);
  ListViewManager__DestroyList(summonHistoryListViewManager, 0);
}


void SummonHistoryDialog__OnClickClose(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D28B68 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SummonHistoryDialog_OnClickClose__);
    sub_1C94098(&Method_SummonHistoryDialog__OnClickClose_b__6_0__);
    byte_4D28B68 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_SummonHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SummonHistoryDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  }
  this->fields.state = 2;
  v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonHistoryDialog__OnClickClose_b__6_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void SummonHistoryDialog__Open(SummonHistoryDialog_o *this, VaildGachaInfo_o *gachaInfo, const MethodInfo *method)
{
  System_String_o *v5; // x0
  System_String_o *name; // x0
  const MethodInfo *v7; // x1
  UILabel_o *summonNameLabel; // x21
  UILabel_o *UpperMessageLabel; // x21
  System_String_o *Empty; // x21
  Il2CppObject *Master_object; // x20
  int32_t stackLoseNum; // w21
  System_String_o *v13; // x20
  Il2CppObject *v14; // x0
  UILabel_o *messageLabel; // x20
  UILabel_o *closeLabel; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int v29; // [xsp+4h] [xbp-5Ch] BYREF
  UserGachaPickupCollateralEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  GachaPickupCollateralEntity_o *gachaPickupCollateralEntity; // [xsp+10h] [xbp-50h] BYREF
  GachaPickupCollateralGroupEntity_o *gachaPickupCollateralGroupEntity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D28B67 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserGachaPickupCollateralMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_6920/*"GACHA_HISTORY_UPPER_MESSAGE"*/);
    sub_1C94098(&StringLiteral_6913/*"GACHA_HISTORY_EMPTY"*/);
    sub_1C94098(&StringLiteral_6914/*"GACHA_HISTORY_GACHA_NUM"*/);
    sub_1C94098(&StringLiteral_6919/*"GACHA_HISTORY_TITLE"*/);
    sub_1C94098(&StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28B67 = 1;
  }
  gachaPickupCollateralEntity = 0;
  gachaPickupCollateralGroupEntity = 0;
  entity = 0;
  ((void (__fastcall *)(SummonHistoryDialog_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method,
    method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_6919/*"GACHA_HISTORY_TITLE"*/, 0);
  TextLabelScrollDialog__Open((TextLabelScrollDialog_o *)this, v5, string_TypeInfo->static_fields->Empty, 0, 0, 0);
  if ( !gachaInfo )
    goto LABEL_53;
  name = gachaInfo->fields.name;
  if ( !name )
    goto LABEL_53;
  summonNameLabel = this->fields.summonNameLabel;
  name = System_String__Replace_64464308(
           name,
           (System_String_o *)StringLiteral_43/*"\n"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
  if ( !summonNameLabel )
    goto LABEL_53;
  UILabel__set_text(summonNameLabel, name, 0);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  name = LocalizationManager__Get((System_String_o *)StringLiteral_6920/*"GACHA_HISTORY_UPPER_MESSAGE"*/, 0);
  if ( !UpperMessageLabel )
    goto LABEL_53;
  UILabel__set_text(UpperMessageLabel, name, 0);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  name = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
  if ( !name )
    goto LABEL_53;
  if ( GachaPickupCollateralGroupMaster__TryGetEntityFromGachaId(
         (GachaPickupCollateralGroupMaster_o *)name,
         &gachaPickupCollateralGroupEntity,
         gachaInfo->fields.id,
         0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    name = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
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
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserGachaPickupCollateralMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
        }
        name = (System_String_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        name = LocalizationManager__Get((System_String_o *)StringLiteral_6914/*"GACHA_HISTORY_GACHA_NUM"*/, 0);
        if ( !gachaPickupCollateralEntity )
          goto LABEL_53;
        v13 = name;
        v29 = gachaPickupCollateralEntity->fields.triggerDrawNum - stackLoseNum;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
        Empty = System_String__Format(v13, v14, 0);
      }
    }
  }
  name = (System_String_o *)this->fields.gachaNumLabel;
  if ( !name )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)name, Empty, 0);
  name = (System_String_o *)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_53;
  SummonHistoryListViewManager__CreateList((SummonHistoryListViewManager_o *)name, v7);
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
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        name = LocalizationManager__Get((System_String_o *)StringLiteral_6913/*"GACHA_HISTORY_EMPTY"*/, 0);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, name, 0);
          goto LABEL_48;
        }
      }
    }
LABEL_53:
    sub_1C942F0(name, v7);
  }
LABEL_48:
  name = (System_String_o *)this->fields.scrollView;
  if ( !name )
    goto LABEL_53;
  HIDWORD(name[3].monitor) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)name, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  name = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_53;
  UILabel__set_text(closeLabel, name, 0);
  this->fields.closeAction = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.closeAction, 0, v17, v18, v19, v20, v21, v22);
  this->fields.decideAction = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.decideAction, 0, v23, v24, v25, v26, v27, v28);
}


void SummonHistoryDialog___OnClickClose_b__6_0(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0);
  ((void (__fastcall *)(SummonHistoryDialog_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method);
}