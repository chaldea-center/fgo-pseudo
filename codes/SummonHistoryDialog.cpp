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
    sub_1BCAA3C(0LL, v3);
  ListViewManager__DestroyList(summonHistoryListViewManager, 0LL);
}


void __fastcall SummonHistoryDialog__OnClickClose(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_4B1289E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SummonHistoryDialog_OnClickClose__, v5, v6);
    sub_1BCA7E0(&Method_SummonHistoryDialog__OnClickClose_b__6_0__, v7, v8);
    byte_4B1289E = 1;
  }
  if ( !this->fields.state )
  {
    v9 = Method_SummonHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_SummonHistoryDialog_OnClickClose__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  }
  this->fields.state = 2;
  v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonHistoryDialog__OnClickClose_b__6_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall SummonHistoryDialog__Open(
        SummonHistoryDialog_o *this,
        VaildGachaInfo_o *gachaInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  System_String_o *v34; // x0
  int64_t name; // x0
  const MethodInfo *v36; // x1
  UILabel_o *summonNameLabel; // x21
  UILabel_o *UpperMessageLabel; // x21
  __int64 v39; // x1
  System_String_o *Empty; // x21
  __int64 v41; // x1
  Il2CppObject *Master_object; // x20
  int32_t stackLoseNum; // w21
  System_String_o *v44; // x20
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  UILabel_o *messageLabel; // x20
  __int64 v48; // x1
  UILabel_o *closeLabel; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int v62; // [xsp+4h] [xbp-5Ch] BYREF
  UserGachaPickupCollateralEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  GachaPickupCollateralEntity_o *gachaPickupCollateralEntity; // [xsp+10h] [xbp-50h] BYREF
  GachaPickupCollateralGroupEntity_o *gachaPickupCollateralGroupEntity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B1289D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___, gachaInfo, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaPickupCollateralMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserGachaPickupCollateralMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&string_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_7000/*"GACHA_HISTORY_UPPER_MESSAGE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_6993/*"GACHA_HISTORY_EMPTY"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_6994/*"GACHA_HISTORY_GACHA_NUM"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_6999/*"GACHA_HISTORY_TITLE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    byte_4B1289D = 1;
  }
  gachaPickupCollateralEntity = 0LL;
  gachaPickupCollateralGroupEntity = 0LL;
  entity = 0LL;
  ((void (__fastcall *)(SummonHistoryDialog_o *, void *, const MethodInfo *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image,
    method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_6999/*"GACHA_HISTORY_TITLE"*/, 0LL);
  TextLabelScrollDialog__Open(
    (TextLabelScrollDialog_o *)this,
    v34,
    string_TypeInfo->static_fields->Empty,
    0LL,
    0LL,
    0LL);
  if ( !gachaInfo )
    goto LABEL_49;
  name = (int64_t)gachaInfo->fields.name;
  if ( !name )
    goto LABEL_49;
  summonNameLabel = this->fields.summonNameLabel;
  name = (int64_t)System_String__Replace_62420848(
                    (System_String_o *)name,
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
  if ( !summonNameLabel )
    goto LABEL_49;
  UILabel__set_text(summonNameLabel, (System_String_o *)name, 0LL);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  name = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7000/*"GACHA_HISTORY_UPPER_MESSAGE"*/, 0LL);
  if ( !UpperMessageLabel )
    goto LABEL_49;
  UILabel__set_text(UpperMessageLabel, (System_String_o *)name, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v39);
  name = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
  if ( !name )
    goto LABEL_49;
  if ( GachaPickupCollateralGroupMaster__TryGetEntityFromGachaId(
         (GachaPickupCollateralGroupMaster_o *)name,
         &gachaPickupCollateralGroupEntity,
         gachaInfo->fields.id,
         0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
    name = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
    if ( !gachaPickupCollateralGroupEntity || !name )
      goto LABEL_49;
    name = GachaPickupCollateralMaster__TryGetEntityFromGroupId(
             (GachaPickupCollateralMaster_o *)name,
             &gachaPickupCollateralEntity,
             gachaPickupCollateralGroupEntity->fields.id,
             0LL);
    if ( (name & 1) != 0 )
    {
      if ( !gachaPickupCollateralEntity )
        goto LABEL_49;
      if ( !gachaPickupCollateralEntity->fields.maxGetNum )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserGachaPickupCollateralMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v41);
        name = NetworkManager__get_UserId(0LL);
        if ( !gachaPickupCollateralEntity || !Master_object )
          goto LABEL_49;
        name = UserGachaPickupCollateralMaster__TryGetEntity(
                 (UserGachaPickupCollateralMaster_o *)Master_object,
                 &entity,
                 name,
                 gachaPickupCollateralEntity->fields.gachaPickupCollateralGroupId,
                 gachaPickupCollateralEntity->fields.type,
                 gachaPickupCollateralEntity->fields.rarity,
                 0LL);
        if ( (name & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_49;
          stackLoseNum = entity->fields.stackLoseNum;
        }
        else
        {
          stackLoseNum = 0;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
        name = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6994/*"GACHA_HISTORY_GACHA_NUM"*/, 0LL);
        if ( !gachaPickupCollateralEntity )
          goto LABEL_49;
        v44 = (System_String_o *)name;
        v62 = gachaPickupCollateralEntity->fields.triggerDrawNum - stackLoseNum;
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
        Empty = System_String__Format(v44, v45, 0LL);
      }
    }
  }
  name = (int64_t)this->fields.gachaNumLabel;
  if ( !name )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)name, Empty, 0LL);
  name = (int64_t)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_49;
  SummonHistoryListViewManager__CreateList((SummonHistoryListViewManager_o *)name, v36);
  name = (int64_t)this->fields.summonHistoryListViewManager;
  if ( !name )
    goto LABEL_49;
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)name, 0LL) <= 0 )
  {
    name = (int64_t)this->fields.messageLabel;
    if ( name )
    {
      name = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)name, 0LL);
      if ( name )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)name, 1, 0LL);
        messageLabel = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
        name = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6993/*"GACHA_HISTORY_EMPTY"*/, 0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, (System_String_o *)name, 0LL);
          goto LABEL_44;
        }
      }
    }
LABEL_49:
    sub_1BCAA3C(name, v36);
  }
LABEL_44:
  name = (int64_t)this->fields.scrollView;
  if ( !name )
    goto LABEL_49;
  *(_DWORD *)(name + 84) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)name, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
  name = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_49;
  UILabel__set_text(closeLabel, (System_String_o *)name, 0LL);
  this->fields.closeAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v50, v51, v52, v53, v54, v55);
  this->fields.decideAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.decideAction, 0LL, v56, v57, v58, v59, v60, v61);
}


void __fastcall SummonHistoryDialog___OnClickClose_b__6_0(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  ((void (__fastcall *)(SummonHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}