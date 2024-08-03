void __fastcall SummonHistoryDialog___ctor(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog___ctor((TextLabelScrollDialog_o *)this, 0LL);
}


void __fastcall SummonHistoryDialog__Init(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *summonHistoryListViewManager; // x0

  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0LL);
  summonHistoryListViewManager = (ListViewManager_o *)this->fields.summonHistoryListViewManager;
  if ( !summonHistoryListViewManager )
    sub_1B64324(0LL);
  ListViewManager__DestroyList(summonHistoryListViewManager, 0LL);
}


void __fastcall SummonHistoryDialog__OnClickClose(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Action_o *v8; // x20

  if ( (byte_49F8C42 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SummonHistoryDialog_OnClickClose__, v4);
    sub_1B640C8(&Method_SummonHistoryDialog__OnClickClose_b__6_0__, v5);
    byte_49F8C42 = 1;
  }
  if ( !this->fields.state )
  {
    v6 = Method_SummonHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_SummonHistoryDialog_OnClickClose__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  }
  this->fields.state = 2;
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonHistoryDialog__OnClickClose_b__6_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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
  int64_t name; // x0
  UILabel_o *summonNameLabel; // x21
  UILabel_o *UpperMessageLabel; // x21
  System_String_o *Empty; // x21
  Il2CppObject *Master_object; // x20
  int32_t stackLoseNum; // w21
  System_String_o *v26; // x20
  Il2CppObject *v27; // x0
  const MethodInfo *v28; // x1
  UILabel_o *messageLabel; // x20
  UILabel_o *closeLabel; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int v35; // [xsp+4h] [xbp-5Ch] BYREF
  UserGachaPickupCollateralEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  GachaPickupCollateralEntity_o *gachaPickupCollateralEntity; // [xsp+10h] [xbp-50h] BYREF
  GachaPickupCollateralGroupEntity_o *gachaPickupCollateralGroupEntity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49F8C41 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___, gachaInfo);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaPickupCollateralMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_UserGachaPickupCollateralMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&string_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v12);
    sub_1B640C8(&StringLiteral_6849/*"GACHA_HISTORY_UPPER_MESSAGE"*/, v13);
    sub_1B640C8(&StringLiteral_6842/*"GACHA_HISTORY_EMPTY"*/, v14);
    sub_1B640C8(&StringLiteral_6843/*"GACHA_HISTORY_GACHA_NUM"*/, v15);
    sub_1B640C8(&StringLiteral_6848/*"GACHA_HISTORY_TITLE"*/, v16);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v17);
    sub_1B640C8(&StringLiteral_1/*""*/, v18);
    byte_49F8C41 = 1;
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
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6848/*"GACHA_HISTORY_TITLE"*/, 0LL);
  TextLabelScrollDialog__Open(
    (TextLabelScrollDialog_o *)this,
    v19,
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
  name = (int64_t)System_String__Replace_61395016(
                    (System_String_o *)name,
                    (System_String_o *)StringLiteral_43/*"\n"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
  if ( !summonNameLabel )
    goto LABEL_49;
  UILabel__set_text(summonNameLabel, (System_String_o *)name, 0LL);
  UpperMessageLabel = this->fields.UpperMessageLabel;
  name = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6849/*"GACHA_HISTORY_UPPER_MESSAGE"*/, 0LL);
  if ( !UpperMessageLabel )
    goto LABEL_49;
  UILabel__set_text(UpperMessageLabel, (System_String_o *)name, 0LL);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  name = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaPickupCollateralGroupMaster___);
  if ( !name )
    goto LABEL_49;
  if ( GachaPickupCollateralGroupMaster__TryGetEntityFromGachaId(
         (GachaPickupCollateralGroupMaster_o *)name,
         &gachaPickupCollateralGroupEntity,
         gachaInfo->fields.id,
         0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    name = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaPickupCollateralMaster___);
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
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserGachaPickupCollateralMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        name = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6843/*"GACHA_HISTORY_GACHA_NUM"*/, 0LL);
        if ( !gachaPickupCollateralEntity )
          goto LABEL_49;
        v26 = (System_String_o *)name;
        v35 = gachaPickupCollateralEntity->fields.triggerDrawNum - stackLoseNum;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
        Empty = System_String__Format(v26, v27, 0LL);
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
  SummonHistoryListViewManager__CreateList((SummonHistoryListViewManager_o *)name, v28);
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        name = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6842/*"GACHA_HISTORY_EMPTY"*/, 0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, (System_String_o *)name, 0LL);
          goto LABEL_44;
        }
      }
    }
LABEL_49:
    sub_1B64324(name);
  }
LABEL_44:
  name = (int64_t)this->fields.scrollView;
  if ( !name )
    goto LABEL_49;
  *(_DWORD *)(name + 84) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)name, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  name = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_49;
  UILabel__set_text(closeLabel, (System_String_o *)name, 0LL);
  this->fields.closeAction = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, 0, v31, v32);
  this->fields.decideAction = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.decideAction, 0, v33, v34);
}


void __fastcall SummonHistoryDialog___OnClickClose_b__6_0(SummonHistoryDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  ((void (__fastcall *)(SummonHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}