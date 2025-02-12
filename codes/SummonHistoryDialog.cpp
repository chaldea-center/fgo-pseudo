void __fastcall SummonHistoryDialog___ctor(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog___ctor((TextLabelScrollDialog_o *)this, 0LL);
}


void __fastcall SummonHistoryDialog__Init(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *summonHistoryListViewManager; // x0

  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0LL);
  summonHistoryListViewManager = (ListViewManager_o *)this->fields.summonHistoryListViewManager;
  if ( !summonHistoryListViewManager )
    sub_1C13F80(0LL, v3);
  ListViewManager__DestroyList(summonHistoryListViewManager, 0LL);
}


void __fastcall SummonHistoryDialog__OnClickClose(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4BB0D12 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_SummonHistoryDialog_OnClickClose__, v3);
    sub_1C13D24(&Method_SummonHistoryDialog__OnClickClose_b__6_0__, v4);
    byte_4BB0D12 = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_SummonHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_SummonHistoryDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  }
  this->fields.state = 2;
  v7 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonHistoryDialog__OnClickClose_b__6_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SummonHistoryDialog__Open(
        SummonHistoryDialog_o *this,
        VaildGachaInfo_o *gachaInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_String_o *v19; // x0
  System_String_o *name; // x0
  const MethodInfo *v21; // x1
  UILabel_o *summonNameLabel; // x21
  UILabel_o *UpperMessageLabel; // x21
  System_String_o *Empty; // x21
  Il2CppObject *Master_object; // x20
  int32_t stackLoseNum; // w21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_String_o *v30; // x20
  Il2CppObject *v31; // x0
  UILabel_o *messageLabel; // x20
  UILabel_o *closeLabel; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int v46; // [xsp+4h] [xbp-5Ch] BYREF
  UserGachaPickupCollateralEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  GachaPickupCollateralEntity_o *gachaPickupCollateralEntity; // [xsp+10h] [xbp-50h] BYREF
  GachaPickupCollateralGroupEntity_o *gachaPickupCollateralGroupEntity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BB0D11 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___, gachaInfo);
    sub_1C13D24(&Method_DataManager_GetMaster_GachaPickupCollateralMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_UserGachaPickupCollateralMaster___, v6);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&int_TypeInfo, v8);
    sub_1C13D24(&LocalizationManager_TypeInfo, v9);
    sub_1C13D24(&NetworkManager_TypeInfo, v10);
    sub_1C13D24(&string_TypeInfo, v11);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v12);
    sub_1C13D24(&StringLiteral_7040/*"GACHA_HISTORY_LIST_MESSAGE"*/, v13);
    sub_1C13D24(&StringLiteral_7033/*"GACHA"*/, v14);
    sub_1C13D24(&StringLiteral_7034/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/, v15);
    sub_1C13D24(&StringLiteral_7039/*"GACHA_HISTORY_LIST_DOT"*/, v16);
    sub_1C13D24(&StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, v17);
    sub_1C13D24(&StringLiteral_1/*""*/, v18);
    byte_4BB0D11 = 1;
  }
  gachaPickupCollateralEntity = 0LL;
  gachaPickupCollateralGroupEntity = 0LL;
  entity = 0LL;
  ((void (__fastcall *)(SummonHistoryDialog_o *, void *, const MethodInfo *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image,
    method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_7039/*"GACHA_HISTORY_LIST_DOT"*/, 0LL);
  TextLabelScrollDialog__Open(
    (TextLabelScrollDialog_o *)this,
    v19,
    string_TypeInfo->static_fields->Empty,
    0LL,
    0LL,
    0LL);
  if ( !gachaInfo )
    goto LABEL_53;
  name = gachaInfo->fields.name;
  if ( !name )
    goto LABEL_53;
  summonNameLabel = this->fields.summonNameLabel;
  name = System_String__Replace_62987572(
           name,
           (System_String_o *)StringLiteral_43/*"\n"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
  if ( !summonNameLabel )
    goto LABEL_53;
  UILabel__set_text(summonNameLabel, name, 0LL);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  name = LocalizationManager__Get((System_String_o *)StringLiteral_7040/*"GACHA_HISTORY_LIST_MESSAGE"*/, 0LL);
  if ( !UpperMessageLabel )
    goto LABEL_53;
  UILabel__set_text(UpperMessageLabel, name, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  name = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
  if ( !name )
    goto LABEL_53;
  if ( GachaPickupCollateralGroupMaster__TryGetEntityFromGachaId(
         (GachaPickupCollateralGroupMaster_o *)name,
         &gachaPickupCollateralGroupEntity,
         gachaInfo->fields.id,
         0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    name = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
    if ( !gachaPickupCollateralGroupEntity || !name )
      goto LABEL_53;
    name = (System_String_o *)GachaPickupCollateralMaster__TryGetEntityFromGroupId(
                                (GachaPickupCollateralMaster_o *)name,
                                &gachaPickupCollateralEntity,
                                gachaPickupCollateralGroupEntity->fields.id,
                                0LL);
    if ( ((unsigned __int8)name & 1) != 0 )
    {
      if ( !gachaPickupCollateralEntity )
        goto LABEL_53;
      if ( !gachaPickupCollateralEntity->fields.maxGetNum )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserGachaPickupCollateralMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BAF1E5 )
        {
          sub_1C13D24(&NetworkManager_TypeInfo, v21);
          byte_4BAF1E5 = 1;
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
                                    0LL);
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
        name = LocalizationManager__Get((System_String_o *)StringLiteral_7034/*"GACHA_DAILY_MAX_DRAW_NUM_RESET_AT"*/, 0LL);
        if ( !gachaPickupCollateralEntity )
          goto LABEL_53;
        v30 = name;
        v46 = gachaPickupCollateralEntity->fields.triggerDrawNum - stackLoseNum;
        v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v27, v28, v29);
        Empty = System_String__Format(v30, v31, 0LL);
      }
    }
  }
  name = (System_String_o *)this->fields.gachaNumLabel;
  if ( !name )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)name, Empty, 0LL);
  name = (System_String_o *)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_53;
  SummonHistoryListViewManager__CreateList((SummonHistoryListViewManager_o *)name, v21);
  name = (System_String_o *)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_53;
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)name, 0LL) <= 0 )
  {
    name = (System_String_o *)this->fields.messageLabel;
    if ( name )
    {
      name = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)name, 0LL);
      if ( name )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)name, 1, 0LL);
        messageLabel = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        name = LocalizationManager__Get((System_String_o *)StringLiteral_7033/*"GACHA"*/, 0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, name, 0LL);
          goto LABEL_48;
        }
      }
    }
LABEL_53:
    sub_1C13F80(name, v21);
  }
LABEL_48:
  name = (System_String_o *)this->fields.scrollView;
  if ( !name )
    goto LABEL_53;
  HIDWORD(name[3].monitor) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)name, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  name = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_53;
  UILabel__set_text(closeLabel, name, 0LL);
  this->fields.closeAction = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v34, v35, v36, v37, v38, v39);
  this->fields.decideAction = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.decideAction, 0LL, v40, v41, v42, v43, v44, v45);
}


void __fastcall SummonHistoryDialog___OnClickClose_b__6_0(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  ((void (__fastcall *)(SummonHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}