void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent___ctor(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A02E39 & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    byte_4A02E39 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__CallOnDecide(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_Action_bool__o *onDecide; // x20
  ServantStatusBattleListViewItem_o *p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = (ServantStatusBattleListViewItem_o *)&this->fields.onDecide;
    p_onDecide->klass = 0LL;
    sub_1B649A4(p_onDecide, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      result,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__Close(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4A02E37 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__, v3);
    byte_4A02E37 = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__EndOpen(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__Init(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64C5C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tradeGoodsEntity, 0, v7, v8);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__OnClickCancel(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A02E36 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__, method);
    byte_4A02E36 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64A18(Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    EventTradeSweetsWithdrawalConfirmDialogComponent__Close(this, v5);
  }
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__OnClickDecide(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A02E35 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__, method);
    byte_4A02E35 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64A18(Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    EventTradeSweetsWithdrawalConfirmDialogComponent__CallOnDecide(this, 1, v5);
  }
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__Open(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        EventTradeListViewItem_o *item,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_4A02E31 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, item);
    sub_1B64A00(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__, v7);
    byte_4A02E31 = 1;
  }
  if ( !this->fields.state )
  {
    EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(this, item, onDecide, method);
    this->fields.state = 1;
    v8 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v8, 0, 0LL);
  }
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__Resume(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        EventTradeListViewItem_o *item,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  if ( this->fields.state == 3 )
  {
    EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(this, item, onDecide, method);
    this->fields.state = 2;
  }
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__SerializeFieldNotNullCheck(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBase(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t exchangeOriginLb; // x0
  float y; // s8
  float z; // s9
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v12; // x9
  UserItemMaster_o *v13; // x20
  int v14; // w23
  struct UISprite_array *exchangeOriginItemIcon; // x10
  CommonConsumeEntity_o *v16; // x8
  UISprite_o *v17; // x21
  int32_t v18; // w22
  struct CommonConsumeEntity_array *v19; // x8
  CommonConsumeEntity_o *v20; // x8
  struct UILabel_array *exchangeOriginCounts; // x9
  UILabel_o *v22; // x21
  int64_t v23; // x22
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v25; // x21
  int v26; // w8
  unsigned int v27; // w23
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v29; // x8
  UISprite_o *v30; // x21
  int32_t objectId; // w22
  struct CommonConsumeEntity_array *v32; // x8
  CommonConsumeEntity_o *v33; // x8
  struct UILabel_array *exchangeOriginCounts2; // x9
  UILabel_o *v35; // x21
  int64_t v36; // x22
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v38; // x21
  float v39; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A02E33 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&LocalizationManager_TypeInfo, v5);
    sub_1B64A00(&NetworkManager_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_13347/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, v7);
    byte_4A02E33 = 1;
  }
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginLb;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  exchangeOriginLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)exchangeOriginLb, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_67;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)exchangeOriginLb, 0LL);
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  exchangeOriginLb = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_67;
  v12 = *(_QWORD *)&exchangeOriginItemList->max_length;
  v13 = (UserItemMaster_o *)exchangeOriginLb;
  if ( (_DWORD)v12 != 3 )
  {
    if ( (int)v12 < 1 )
    {
LABEL_61:
      exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject2;
      if ( exchangeOriginLb )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0LL);
        exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject;
        if ( exchangeOriginLb )
        {
          v26 = -1032847360;
          goto LABEL_64;
        }
      }
    }
    else
    {
      v27 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v27 >= exchangeOriginItemIcon2->max_length || v27 >= (unsigned int)v12 )
LABEL_68:
          sub_1B64C64(exchangeOriginLb, method);
        v29 = exchangeOriginItemList->m_Items[v27];
        if ( !v29 )
          break;
        v30 = exchangeOriginItemIcon2->m_Items[v27];
        objectId = v29->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v30, objectId, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        exchangeOriginLb = NetworkManager__get_UserId(0LL);
        v32 = this->fields.exchangeOriginItemList;
        if ( !v32 )
          break;
        if ( v27 >= v32->max_length )
          goto LABEL_68;
        v33 = v32->m_Items[v27];
        if ( !v33 )
          break;
        if ( !v13 )
          break;
        exchangeOriginLb = (int64_t)UserItemMaster__GetEntityDefinitely(
                                      v13,
                                      exchangeOriginLb,
                                      v33->fields.objectId,
                                      0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v27 >= exchangeOriginCounts2->max_length )
          goto LABEL_68;
        if ( !exchangeOriginLb )
          break;
        v35 = exchangeOriginCounts2->m_Items[v27];
        v36 = *(int *)(exchangeOriginLb + 28);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        exchangeOriginLb = (int64_t)LocalizationManager__GetNumberFormatLong(v36, 0LL);
        if ( !v35 )
          break;
        UILabel__set_text(v35, (System_String_o *)exchangeOriginLb, 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v27 >= exchangeOriginCountKinds2->max_length )
          goto LABEL_68;
        v38 = exchangeOriginCountKinds2->m_Items[v27];
        exchangeOriginLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13347/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
        if ( !v38 )
          break;
        UILabel__set_text(v38, (System_String_o *)exchangeOriginLb, 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v12) = exchangeOriginItemList->max_length;
        if ( (int)++v27 >= (int)v12 )
          goto LABEL_61;
      }
    }
LABEL_67:
    sub_1B64C5C(exchangeOriginLb, method);
  }
  v14 = 0;
  do
  {
    exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
    if ( !exchangeOriginItemIcon )
      goto LABEL_67;
    if ( v14 >= exchangeOriginItemIcon->max_length || v14 >= (unsigned int)v12 )
      goto LABEL_68;
    v16 = exchangeOriginItemList->m_Items[v14];
    if ( !v16 )
      goto LABEL_67;
    v17 = exchangeOriginItemIcon->m_Items[v14];
    v18 = v16->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v17, v18, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    exchangeOriginLb = NetworkManager__get_UserId(0LL);
    v19 = this->fields.exchangeOriginItemList;
    if ( !v19 )
      goto LABEL_67;
    if ( v14 >= v19->max_length )
      goto LABEL_68;
    v20 = v19->m_Items[v14];
    if ( !v20 )
      goto LABEL_67;
    if ( !v13 )
      goto LABEL_67;
    exchangeOriginLb = (int64_t)UserItemMaster__GetEntityDefinitely(v13, exchangeOriginLb, v20->fields.objectId, 0LL);
    exchangeOriginCounts = this->fields.exchangeOriginCounts;
    if ( !exchangeOriginCounts )
      goto LABEL_67;
    if ( v14 >= exchangeOriginCounts->max_length )
      goto LABEL_68;
    if ( !exchangeOriginLb )
      goto LABEL_67;
    v22 = exchangeOriginCounts->m_Items[v14];
    v23 = *(int *)(exchangeOriginLb + 28);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    exchangeOriginLb = (int64_t)LocalizationManager__GetNumberFormatLong(v23, 0LL);
    if ( !v22 )
      goto LABEL_67;
    UILabel__set_text(v22, (System_String_o *)exchangeOriginLb, 0LL);
    exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
    if ( !exchangeOriginCountKinds )
      goto LABEL_67;
    if ( v14 >= exchangeOriginCountKinds->max_length )
      goto LABEL_68;
    v25 = exchangeOriginCountKinds->m_Items[v14];
    exchangeOriginLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13347/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
    if ( !v25 )
      goto LABEL_67;
    UILabel__set_text(v25, (System_String_o *)exchangeOriginLb, 0LL);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_67;
    LODWORD(v12) = exchangeOriginItemList->max_length;
    ++v14;
  }
  while ( v14 < (int)v12 );
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0LL);
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject2;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  v26 = -1023279104;
LABEL_64:
  v39 = *(float *)&v26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 0, 0LL);
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginLb;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  exchangeOriginLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)exchangeOriginLb, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_67;
  v41.fields.y = y;
  v41.fields.z = z;
  v41.fields.x = v39;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLb, v41, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBaseAfter(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        int32_t completeNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t exchangeOriginLbAfter; // x0
  float y; // s8
  float z; // s9
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v14; // x9
  UserItemMaster_o *v15; // x21
  int v16; // w24
  struct UISprite_array *exchangeOriginItemIconAfter; // x10
  CommonConsumeEntity_o *v18; // x8
  int32_t v19; // w23
  UISprite_o *v20; // x22
  struct CommonConsumeEntity_array *v21; // x8
  CommonConsumeEntity_o *v22; // x8
  struct UILabel_array *exchangeOriginCountsAfter; // x9
  struct CommonConsumeEntity_array *v24; // x8
  CommonConsumeEntity_o *v25; // x10
  UILabel_o *v26; // x22
  int v27; // w23
  int32_t v28; // w25
  struct UILabel_array *exchangeOriginCountKindsAfter; // x8
  UILabel_o *v30; // x22
  int v31; // w8
  unsigned int v32; // w24
  struct UISprite_array *exchangeOriginItemIcon2After; // x10
  CommonConsumeEntity_o *v34; // x8
  int32_t objectId; // w23
  UISprite_o *v36; // x22
  struct CommonConsumeEntity_array *v37; // x8
  CommonConsumeEntity_o *v38; // x8
  struct UILabel_array *exchangeOriginCounts2After; // x9
  struct CommonConsumeEntity_array *v40; // x8
  CommonConsumeEntity_o *v41; // x10
  UILabel_o *v42; // x22
  int v43; // w23
  int32_t num; // w25
  struct UILabel_array *exchangeOriginCountKinds2After; // x8
  UILabel_o *v46; // x22
  float v47; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A02E34 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, *(_QWORD *)&completeNum);
    sub_1B64A00(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1B64A00(&DataManager_TypeInfo, v6);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&NetworkManager_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_13347/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, v9);
    byte_4A02E34 = 1;
  }
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginLbAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  exchangeOriginLbAfter = (int64_t)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)exchangeOriginLbAfter,
                                     0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)exchangeOriginLbAfter, 0LL);
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  exchangeOriginLbAfter = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_73;
  v14 = *(_QWORD *)&exchangeOriginItemList->max_length;
  v15 = (UserItemMaster_o *)exchangeOriginLbAfter;
  if ( (_DWORD)v14 != 3 )
  {
    if ( (int)v14 < 1 )
    {
LABEL_67:
      exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObject2After;
      if ( exchangeOriginLbAfter )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0LL);
        exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObjectAfter;
        if ( exchangeOriginLbAfter )
        {
          v31 = -1032847360;
          goto LABEL_70;
        }
      }
    }
    else
    {
      v32 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2After = this->fields.exchangeOriginItemIcon2After;
        if ( !exchangeOriginItemIcon2After )
          break;
        if ( v32 >= exchangeOriginItemIcon2After->max_length || v32 >= (unsigned int)v14 )
LABEL_74:
          sub_1B64C64(exchangeOriginLbAfter, *(_QWORD *)&completeNum);
        v34 = exchangeOriginItemList->m_Items[v32];
        if ( !v34 )
          break;
        objectId = v34->fields.objectId;
        v36 = exchangeOriginItemIcon2After->m_Items[v32];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v36, objectId, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        exchangeOriginLbAfter = NetworkManager__get_UserId(0LL);
        v37 = this->fields.exchangeOriginItemList;
        if ( !v37 )
          break;
        if ( v32 >= v37->max_length )
          goto LABEL_74;
        v38 = v37->m_Items[v32];
        if ( !v38 )
          break;
        if ( !v15 )
          break;
        exchangeOriginLbAfter = (int64_t)UserItemMaster__GetEntityDefinitely(
                                           v15,
                                           exchangeOriginLbAfter,
                                           v38->fields.objectId,
                                           0LL);
        exchangeOriginCounts2After = this->fields.exchangeOriginCounts2After;
        if ( !exchangeOriginCounts2After )
          break;
        if ( v32 >= exchangeOriginCounts2After->max_length )
          goto LABEL_74;
        if ( !exchangeOriginLbAfter )
          break;
        v40 = this->fields.exchangeOriginItemList;
        if ( !v40 )
          break;
        if ( v32 >= v40->max_length )
          goto LABEL_74;
        v41 = v40->m_Items[v32];
        if ( !v41 )
          break;
        v42 = exchangeOriginCounts2After->m_Items[v32];
        v43 = *(_DWORD *)(exchangeOriginLbAfter + 28);
        num = v41->fields.num;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        exchangeOriginLbAfter = (int64_t)LocalizationManager__GetNumberFormatLong(v43 + num * completeNum, 0LL);
        if ( !v42 )
          break;
        UILabel__set_text(v42, (System_String_o *)exchangeOriginLbAfter, 0LL);
        exchangeOriginCountKinds2After = this->fields.exchangeOriginCountKinds2After;
        if ( !exchangeOriginCountKinds2After )
          break;
        if ( v32 >= exchangeOriginCountKinds2After->max_length )
          goto LABEL_74;
        v46 = exchangeOriginCountKinds2After->m_Items[v32];
        exchangeOriginLbAfter = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13347/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
        if ( !v46 )
          break;
        UILabel__set_text(v46, (System_String_o *)exchangeOriginLbAfter, 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v14) = exchangeOriginItemList->max_length;
        if ( (int)++v32 >= (int)v14 )
          goto LABEL_67;
      }
    }
LABEL_73:
    sub_1B64C5C(exchangeOriginLbAfter, *(_QWORD *)&completeNum);
  }
  v16 = 0;
  do
  {
    exchangeOriginItemIconAfter = this->fields.exchangeOriginItemIconAfter;
    if ( !exchangeOriginItemIconAfter )
      goto LABEL_73;
    if ( v16 >= exchangeOriginItemIconAfter->max_length || v16 >= (unsigned int)v14 )
      goto LABEL_74;
    v18 = exchangeOriginItemList->m_Items[v16];
    if ( !v18 )
      goto LABEL_73;
    v19 = v18->fields.objectId;
    v20 = exchangeOriginItemIconAfter->m_Items[v16];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v20, v19, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    exchangeOriginLbAfter = NetworkManager__get_UserId(0LL);
    v21 = this->fields.exchangeOriginItemList;
    if ( !v21 )
      goto LABEL_73;
    if ( v16 >= v21->max_length )
      goto LABEL_74;
    v22 = v21->m_Items[v16];
    if ( !v22 )
      goto LABEL_73;
    if ( !v15 )
      goto LABEL_73;
    exchangeOriginLbAfter = (int64_t)UserItemMaster__GetEntityDefinitely(
                                       v15,
                                       exchangeOriginLbAfter,
                                       v22->fields.objectId,
                                       0LL);
    exchangeOriginCountsAfter = this->fields.exchangeOriginCountsAfter;
    if ( !exchangeOriginCountsAfter )
      goto LABEL_73;
    if ( v16 >= exchangeOriginCountsAfter->max_length )
      goto LABEL_74;
    if ( !exchangeOriginLbAfter )
      goto LABEL_73;
    v24 = this->fields.exchangeOriginItemList;
    if ( !v24 )
      goto LABEL_73;
    if ( v16 >= v24->max_length )
      goto LABEL_74;
    v25 = v24->m_Items[v16];
    if ( !v25 )
      goto LABEL_73;
    v26 = exchangeOriginCountsAfter->m_Items[v16];
    v27 = *(_DWORD *)(exchangeOriginLbAfter + 28);
    v28 = v25->fields.num;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    exchangeOriginLbAfter = (int64_t)LocalizationManager__GetNumberFormatLong(v27 + v28 * completeNum, 0LL);
    if ( !v26 )
      goto LABEL_73;
    UILabel__set_text(v26, (System_String_o *)exchangeOriginLbAfter, 0LL);
    exchangeOriginCountKindsAfter = this->fields.exchangeOriginCountKindsAfter;
    if ( !exchangeOriginCountKindsAfter )
      goto LABEL_73;
    if ( v16 >= exchangeOriginCountKindsAfter->max_length )
      goto LABEL_74;
    v30 = exchangeOriginCountKindsAfter->m_Items[v16];
    exchangeOriginLbAfter = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13347/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
    if ( !v30 )
      goto LABEL_73;
    UILabel__set_text(v30, (System_String_o *)exchangeOriginLbAfter, 0LL);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_73;
    LODWORD(v14) = exchangeOriginItemList->max_length;
    ++v16;
  }
  while ( v16 < (int)v14 );
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObjectAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0LL);
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObject2After;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  v31 = -1023279104;
LABEL_70:
  v47 = *(float *)&v31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 0, 0LL);
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginLbAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  exchangeOriginLbAfter = (int64_t)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)exchangeOriginLbAfter,
                                     0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  v49.fields.y = y;
  v49.fields.z = z;
  v49.fields.x = v47;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLbAfter, v49, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        EventTradeListViewItem_o *item,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *v6; // x20
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
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  UILabel_o *titleLabel; // x22
  UILabel_o *detailLabel; // x22
  UILabel_o *exchangeOriginLb; // x22
  UILabel_o *exchangeOriginLbAfter; // x22
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  UILabel_o *returnItemsLabel; // x22
  UILabel_o *returnItemsNoneLabel; // x22
  CommonConsumeEntity_array *SortedEntityList; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  bool v33; // w21
  const MethodInfo *v34; // x1
  int32_t NowTradeNum; // w0
  const MethodInfo *v36; // x2
  int32_t v37; // w21

  v6 = this;
  if ( (byte_4A02E32 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_CommonConsumeMaster___, item);
    sub_1B64A00(&DataManager_TypeInfo, v7);
    sub_1B64A00(&LocalizationManager_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_13346/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/, v9);
    sub_1B64A00(&StringLiteral_13351/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/, v10);
    sub_1B64A00(&StringLiteral_13352/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/, v11);
    sub_1B64A00(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v12);
    sub_1B64A00(&StringLiteral_13349/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/, v13);
    sub_1B64A00(&StringLiteral_13345/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/, v14);
    sub_1B64A00(&StringLiteral_13348/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/, v15);
    this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_1B64A00(&StringLiteral_13350/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/, v16);
    byte_4A02E32 = 1;
  }
  if ( !item )
    goto LABEL_29;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  p_tradeGoodsEntity = &v6->fields.tradeGoodsEntity;
  v6->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&v6->fields.tradeGoodsEntity,
    (int32_t)TradeGoodsEntity_k__BackingField,
    (int32_t)onDecide,
    (int32_t)method);
  v6->fields.onDecide = onDecide;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v6->fields.onDecide, (int32_t)onDecide, v19, v20);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)v6,
                                                                 0LL);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  titleLabel = v6->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13352/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                                 0LL);
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  detailLabel = v6->fields.detailLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13349/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                                 0LL);
  if ( !detailLabel )
    goto LABEL_29;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
  exchangeOriginLb = v6->fields.exchangeOriginLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13346/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                                 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0LL);
  exchangeOriginLbAfter = v6->fields.exchangeOriginLbAfter;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13345/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                                 0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLbAfter, (System_String_o *)this, 0LL);
  cancelButtonLb = v6->fields.cancelButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/,
                                                                 0LL);
  if ( !cancelButtonLb )
    goto LABEL_29;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
  decideButtonLb = v6->fields.decideButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13348/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                                 0LL);
  if ( !decideButtonLb )
    goto LABEL_29;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
  returnItemsLabel = v6->fields.returnItemsLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13350/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                                 0LL);
  if ( !returnItemsLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsLabel, (System_String_o *)this, 0LL);
  returnItemsNoneLabel = v6->fields.returnItemsNoneLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13351/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                                 0LL);
  if ( !returnItemsNoneLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsNoneLabel, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_29;
  if ( !this )
    goto LABEL_29;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)this,
                       (*p_tradeGoodsEntity)->fields.commonConsumeId,
                       0LL);
  v6->fields.exchangeOriginItemList = SortedEntityList;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&v6->fields.exchangeOriginItemList,
    (int32_t)SortedEntityList,
    v30,
    v31);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_29;
  v33 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.returnItemsNoneLabel;
  if ( !this )
    goto LABEL_29;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v33, 0LL);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.returnItemsBaseObj;
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v33, 0LL);
  EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBase(v6, v34);
  NowTradeNum = EventTradeListViewItem__get_NowTradeNum(item, 0LL);
  EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBaseAfter(v6, NowTradeNum, v36);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)EventTradeListViewItemDraw__GetDisplayMode(3, item, 0LL);
  if ( !v6->fields.listViewItemDraw
    || (v37 = (int)this,
        EventTradeListViewItemDraw__SetItem(v6->fields.listViewItemDraw, item, (int32_t)this, 0LL),
        (this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.listViewItemDraw) == 0LL) )
  {
LABEL_29:
    sub_1B64C5C(this, item);
  }
  EventTradeListViewItemDraw__UpdateItem((EventTradeListViewItemDraw_o *)this, item, v37, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent___Close_b__45_0(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventTradeSweetsWithdrawalConfirmDialogComponent__Init(this, this->fields.eventId, v2);
}


UnityEngine_GameObject_o *__fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__get_closeBtnObject(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A02E38 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A02E38 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B64C5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}