void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent___ctor(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A563DF & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A563DF = 1;
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
  struct System_Action_bool__o *onDecide; // x20
  struct System_Action_bool__o **p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = &this->fields.onDecide;
    *p_onDecide = 0LL;
    sub_1B88554(p_onDecide, 0LL);
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
  System_Action_o *v3; // x20

  if ( (byte_4A563DD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__);
    byte_4A563DD = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
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

  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1B88554(&this->fields.tradeGoodsEntity, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__OnClickCancel(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A563DC & 1) == 0 )
  {
    sub_1B885B0(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__);
    byte_4A563DC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A563DB & 1) == 0 )
  {
    sub_1B885B0(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__);
    byte_4A563DB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  System_Action_o *v7; // x20

  if ( (byte_4A563D7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__);
    byte_4A563D7 = 1;
  }
  if ( !this->fields.state )
  {
    EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(this, item, onDecide, method);
    this->fields.state = 1;
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v7, 0, 0LL);
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
  int64_t exchangeOriginLb; // x0
  float y; // s8
  float z; // s9
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v7; // x9
  UserItemMaster_o *v8; // x20
  int v9; // w23
  struct UISprite_array *exchangeOriginItemIcon; // x10
  CommonConsumeEntity_o *v11; // x8
  UISprite_o *v12; // x21
  int32_t v13; // w22
  struct CommonConsumeEntity_array *v14; // x8
  CommonConsumeEntity_o *v15; // x8
  struct UILabel_array *exchangeOriginCounts; // x9
  UILabel_o *v17; // x21
  int64_t v18; // x22
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v20; // x21
  int v21; // w8
  unsigned int v22; // w23
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v24; // x8
  UISprite_o *v25; // x21
  int32_t objectId; // w22
  struct CommonConsumeEntity_array *v27; // x8
  CommonConsumeEntity_o *v28; // x8
  struct UILabel_array *exchangeOriginCounts2; // x9
  UILabel_o *v30; // x21
  int64_t v31; // x22
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v33; // x21
  float v34; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A563D9 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13411/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/);
    byte_4A563D9 = 1;
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
  exchangeOriginLb = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_67;
  v7 = *(_QWORD *)&exchangeOriginItemList->max_length;
  v8 = (UserItemMaster_o *)exchangeOriginLb;
  if ( (_DWORD)v7 != 3 )
  {
    if ( (int)v7 < 1 )
    {
LABEL_61:
      exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject2;
      if ( exchangeOriginLb )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0LL);
        exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject;
        if ( exchangeOriginLb )
        {
          v21 = -1032847360;
          goto LABEL_64;
        }
      }
    }
    else
    {
      v22 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v22 >= exchangeOriginItemIcon2->max_length || v22 >= (unsigned int)v7 )
LABEL_68:
          sub_1B88814(exchangeOriginLb, method);
        v24 = exchangeOriginItemList->m_Items[v22];
        if ( !v24 )
          break;
        v25 = exchangeOriginItemIcon2->m_Items[v22];
        objectId = v24->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v25, objectId, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        exchangeOriginLb = NetworkManager__get_UserId(0LL);
        v27 = this->fields.exchangeOriginItemList;
        if ( !v27 )
          break;
        if ( v22 >= v27->max_length )
          goto LABEL_68;
        v28 = v27->m_Items[v22];
        if ( !v28 )
          break;
        if ( !v8 )
          break;
        exchangeOriginLb = (int64_t)UserItemMaster__GetEntityDefinitely(v8, exchangeOriginLb, v28->fields.objectId, 0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v22 >= exchangeOriginCounts2->max_length )
          goto LABEL_68;
        if ( !exchangeOriginLb )
          break;
        v30 = exchangeOriginCounts2->m_Items[v22];
        v31 = *(int *)(exchangeOriginLb + 28);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        exchangeOriginLb = (int64_t)LocalizationManager__GetNumberFormatLong(v31, 0LL);
        if ( !v30 )
          break;
        UILabel__set_text(v30, (System_String_o *)exchangeOriginLb, 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v22 >= exchangeOriginCountKinds2->max_length )
          goto LABEL_68;
        v33 = exchangeOriginCountKinds2->m_Items[v22];
        exchangeOriginLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13411/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
        if ( !v33 )
          break;
        UILabel__set_text(v33, (System_String_o *)exchangeOriginLb, 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v7) = exchangeOriginItemList->max_length;
        if ( (int)++v22 >= (int)v7 )
          goto LABEL_61;
      }
    }
LABEL_67:
    sub_1B8880C(exchangeOriginLb, method);
  }
  v9 = 0;
  do
  {
    exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
    if ( !exchangeOriginItemIcon )
      goto LABEL_67;
    if ( v9 >= exchangeOriginItemIcon->max_length || v9 >= (unsigned int)v7 )
      goto LABEL_68;
    v11 = exchangeOriginItemList->m_Items[v9];
    if ( !v11 )
      goto LABEL_67;
    v12 = exchangeOriginItemIcon->m_Items[v9];
    v13 = v11->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v12, v13, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    exchangeOriginLb = NetworkManager__get_UserId(0LL);
    v14 = this->fields.exchangeOriginItemList;
    if ( !v14 )
      goto LABEL_67;
    if ( v9 >= v14->max_length )
      goto LABEL_68;
    v15 = v14->m_Items[v9];
    if ( !v15 )
      goto LABEL_67;
    if ( !v8 )
      goto LABEL_67;
    exchangeOriginLb = (int64_t)UserItemMaster__GetEntityDefinitely(v8, exchangeOriginLb, v15->fields.objectId, 0LL);
    exchangeOriginCounts = this->fields.exchangeOriginCounts;
    if ( !exchangeOriginCounts )
      goto LABEL_67;
    if ( v9 >= exchangeOriginCounts->max_length )
      goto LABEL_68;
    if ( !exchangeOriginLb )
      goto LABEL_67;
    v17 = exchangeOriginCounts->m_Items[v9];
    v18 = *(int *)(exchangeOriginLb + 28);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    exchangeOriginLb = (int64_t)LocalizationManager__GetNumberFormatLong(v18, 0LL);
    if ( !v17 )
      goto LABEL_67;
    UILabel__set_text(v17, (System_String_o *)exchangeOriginLb, 0LL);
    exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
    if ( !exchangeOriginCountKinds )
      goto LABEL_67;
    if ( v9 >= exchangeOriginCountKinds->max_length )
      goto LABEL_68;
    v20 = exchangeOriginCountKinds->m_Items[v9];
    exchangeOriginLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13411/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
    if ( !v20 )
      goto LABEL_67;
    UILabel__set_text(v20, (System_String_o *)exchangeOriginLb, 0LL);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_67;
    LODWORD(v7) = exchangeOriginItemList->max_length;
    ++v9;
  }
  while ( v9 < (int)v7 );
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0LL);
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject2;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  v21 = -1023279104;
LABEL_64:
  v34 = *(float *)&v21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 0, 0LL);
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginLb;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  exchangeOriginLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)exchangeOriginLb, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_67;
  v36.fields.y = y;
  v36.fields.z = z;
  v36.fields.x = v34;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLb, v36, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBaseAfter(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        int32_t completeNum,
        const MethodInfo *method)
{
  int64_t exchangeOriginLbAfter; // x0
  float y; // s8
  float z; // s9
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v9; // x9
  UserItemMaster_o *v10; // x21
  int v11; // w24
  struct UISprite_array *exchangeOriginItemIconAfter; // x10
  CommonConsumeEntity_o *v13; // x8
  int32_t v14; // w23
  UISprite_o *v15; // x22
  struct CommonConsumeEntity_array *v16; // x8
  CommonConsumeEntity_o *v17; // x8
  struct UILabel_array *exchangeOriginCountsAfter; // x9
  struct CommonConsumeEntity_array *v19; // x8
  CommonConsumeEntity_o *v20; // x10
  UILabel_o *v21; // x22
  int v22; // w23
  int32_t v23; // w25
  struct UILabel_array *exchangeOriginCountKindsAfter; // x8
  UILabel_o *v25; // x22
  int v26; // w8
  unsigned int v27; // w24
  struct UISprite_array *exchangeOriginItemIcon2After; // x10
  CommonConsumeEntity_o *v29; // x8
  int32_t objectId; // w23
  UISprite_o *v31; // x22
  struct CommonConsumeEntity_array *v32; // x8
  CommonConsumeEntity_o *v33; // x8
  struct UILabel_array *exchangeOriginCounts2After; // x9
  struct CommonConsumeEntity_array *v35; // x8
  CommonConsumeEntity_o *v36; // x10
  UILabel_o *v37; // x22
  int v38; // w23
  int32_t num; // w25
  struct UILabel_array *exchangeOriginCountKinds2After; // x8
  UILabel_o *v41; // x22
  float v42; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A563DA & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13411/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/);
    byte_4A563DA = 1;
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
  exchangeOriginLbAfter = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_73;
  v9 = *(_QWORD *)&exchangeOriginItemList->max_length;
  v10 = (UserItemMaster_o *)exchangeOriginLbAfter;
  if ( (_DWORD)v9 != 3 )
  {
    if ( (int)v9 < 1 )
    {
LABEL_67:
      exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObject2After;
      if ( exchangeOriginLbAfter )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0LL);
        exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObjectAfter;
        if ( exchangeOriginLbAfter )
        {
          v26 = -1032847360;
          goto LABEL_70;
        }
      }
    }
    else
    {
      v27 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2After = this->fields.exchangeOriginItemIcon2After;
        if ( !exchangeOriginItemIcon2After )
          break;
        if ( v27 >= exchangeOriginItemIcon2After->max_length || v27 >= (unsigned int)v9 )
LABEL_74:
          sub_1B88814(exchangeOriginLbAfter, *(_QWORD *)&completeNum);
        v29 = exchangeOriginItemList->m_Items[v27];
        if ( !v29 )
          break;
        objectId = v29->fields.objectId;
        v31 = exchangeOriginItemIcon2After->m_Items[v27];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v31, objectId, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        exchangeOriginLbAfter = NetworkManager__get_UserId(0LL);
        v32 = this->fields.exchangeOriginItemList;
        if ( !v32 )
          break;
        if ( v27 >= v32->max_length )
          goto LABEL_74;
        v33 = v32->m_Items[v27];
        if ( !v33 )
          break;
        if ( !v10 )
          break;
        exchangeOriginLbAfter = (int64_t)UserItemMaster__GetEntityDefinitely(
                                           v10,
                                           exchangeOriginLbAfter,
                                           v33->fields.objectId,
                                           0LL);
        exchangeOriginCounts2After = this->fields.exchangeOriginCounts2After;
        if ( !exchangeOriginCounts2After )
          break;
        if ( v27 >= exchangeOriginCounts2After->max_length )
          goto LABEL_74;
        if ( !exchangeOriginLbAfter )
          break;
        v35 = this->fields.exchangeOriginItemList;
        if ( !v35 )
          break;
        if ( v27 >= v35->max_length )
          goto LABEL_74;
        v36 = v35->m_Items[v27];
        if ( !v36 )
          break;
        v37 = exchangeOriginCounts2After->m_Items[v27];
        v38 = *(_DWORD *)(exchangeOriginLbAfter + 28);
        num = v36->fields.num;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        exchangeOriginLbAfter = (int64_t)LocalizationManager__GetNumberFormatLong(v38 + num * completeNum, 0LL);
        if ( !v37 )
          break;
        UILabel__set_text(v37, (System_String_o *)exchangeOriginLbAfter, 0LL);
        exchangeOriginCountKinds2After = this->fields.exchangeOriginCountKinds2After;
        if ( !exchangeOriginCountKinds2After )
          break;
        if ( v27 >= exchangeOriginCountKinds2After->max_length )
          goto LABEL_74;
        v41 = exchangeOriginCountKinds2After->m_Items[v27];
        exchangeOriginLbAfter = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13411/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
        if ( !v41 )
          break;
        UILabel__set_text(v41, (System_String_o *)exchangeOriginLbAfter, 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v9) = exchangeOriginItemList->max_length;
        if ( (int)++v27 >= (int)v9 )
          goto LABEL_67;
      }
    }
LABEL_73:
    sub_1B8880C(exchangeOriginLbAfter, *(_QWORD *)&completeNum);
  }
  v11 = 0;
  do
  {
    exchangeOriginItemIconAfter = this->fields.exchangeOriginItemIconAfter;
    if ( !exchangeOriginItemIconAfter )
      goto LABEL_73;
    if ( v11 >= exchangeOriginItemIconAfter->max_length || v11 >= (unsigned int)v9 )
      goto LABEL_74;
    v13 = exchangeOriginItemList->m_Items[v11];
    if ( !v13 )
      goto LABEL_73;
    v14 = v13->fields.objectId;
    v15 = exchangeOriginItemIconAfter->m_Items[v11];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v15, v14, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    exchangeOriginLbAfter = NetworkManager__get_UserId(0LL);
    v16 = this->fields.exchangeOriginItemList;
    if ( !v16 )
      goto LABEL_73;
    if ( v11 >= v16->max_length )
      goto LABEL_74;
    v17 = v16->m_Items[v11];
    if ( !v17 )
      goto LABEL_73;
    if ( !v10 )
      goto LABEL_73;
    exchangeOriginLbAfter = (int64_t)UserItemMaster__GetEntityDefinitely(
                                       v10,
                                       exchangeOriginLbAfter,
                                       v17->fields.objectId,
                                       0LL);
    exchangeOriginCountsAfter = this->fields.exchangeOriginCountsAfter;
    if ( !exchangeOriginCountsAfter )
      goto LABEL_73;
    if ( v11 >= exchangeOriginCountsAfter->max_length )
      goto LABEL_74;
    if ( !exchangeOriginLbAfter )
      goto LABEL_73;
    v19 = this->fields.exchangeOriginItemList;
    if ( !v19 )
      goto LABEL_73;
    if ( v11 >= v19->max_length )
      goto LABEL_74;
    v20 = v19->m_Items[v11];
    if ( !v20 )
      goto LABEL_73;
    v21 = exchangeOriginCountsAfter->m_Items[v11];
    v22 = *(_DWORD *)(exchangeOriginLbAfter + 28);
    v23 = v20->fields.num;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    exchangeOriginLbAfter = (int64_t)LocalizationManager__GetNumberFormatLong(v22 + v23 * completeNum, 0LL);
    if ( !v21 )
      goto LABEL_73;
    UILabel__set_text(v21, (System_String_o *)exchangeOriginLbAfter, 0LL);
    exchangeOriginCountKindsAfter = this->fields.exchangeOriginCountKindsAfter;
    if ( !exchangeOriginCountKindsAfter )
      goto LABEL_73;
    if ( v11 >= exchangeOriginCountKindsAfter->max_length )
      goto LABEL_74;
    v25 = exchangeOriginCountKindsAfter->m_Items[v11];
    exchangeOriginLbAfter = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13411/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
    if ( !v25 )
      goto LABEL_73;
    UILabel__set_text(v25, (System_String_o *)exchangeOriginLbAfter, 0LL);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_73;
    LODWORD(v9) = exchangeOriginItemList->max_length;
    ++v11;
  }
  while ( v11 < (int)v9 );
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObjectAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0LL);
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObject2After;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  v26 = -1023279104;
LABEL_70:
  v42 = *(float *)&v26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 0, 0LL);
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginLbAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  exchangeOriginLbAfter = (int64_t)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)exchangeOriginLbAfter,
                                     0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  v44.fields.y = y;
  v44.fields.z = z;
  v44.fields.x = v42;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLbAfter, v44, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        EventTradeListViewItem_o *item,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *v6; // x20
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  UILabel_o *titleLabel; // x22
  UILabel_o *detailLabel; // x22
  UILabel_o *exchangeOriginLb; // x22
  UILabel_o *exchangeOriginLbAfter; // x22
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  UILabel_o *returnItemsLabel; // x22
  UILabel_o *returnItemsNoneLabel; // x22
  CommonConsumeEntity_array *SortedEntityList; // x0
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  bool v19; // w21
  const MethodInfo *v20; // x1
  int32_t NowTradeNum; // w0
  const MethodInfo *v22; // x2
  int32_t v23; // w21

  v6 = this;
  if ( (byte_4A563D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13410/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/);
    sub_1B885B0(&StringLiteral_13415/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/);
    sub_1B885B0(&StringLiteral_13416/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_13413/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_13409/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/);
    sub_1B885B0(&StringLiteral_13412/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/);
    this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_1B885B0(&StringLiteral_13414/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/);
    byte_4A563D8 = 1;
  }
  if ( !item )
    goto LABEL_29;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  p_tradeGoodsEntity = &v6->fields.tradeGoodsEntity;
  v6->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
  sub_1B88554(&v6->fields.tradeGoodsEntity, TradeGoodsEntity_k__BackingField);
  v6->fields.onDecide = onDecide;
  sub_1B88554(&v6->fields.onDecide, onDecide);
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
                                                                 (System_String_o *)StringLiteral_13416/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                                 0LL);
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  detailLabel = v6->fields.detailLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13413/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                                 0LL);
  if ( !detailLabel )
    goto LABEL_29;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
  exchangeOriginLb = v6->fields.exchangeOriginLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13410/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                                 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0LL);
  exchangeOriginLbAfter = v6->fields.exchangeOriginLbAfter;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13409/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                                 0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLbAfter, (System_String_o *)this, 0LL);
  cancelButtonLb = v6->fields.cancelButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/,
                                                                 0LL);
  if ( !cancelButtonLb )
    goto LABEL_29;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
  decideButtonLb = v6->fields.decideButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13412/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                                 0LL);
  if ( !decideButtonLb )
    goto LABEL_29;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
  returnItemsLabel = v6->fields.returnItemsLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13414/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                                 0LL);
  if ( !returnItemsLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsLabel, (System_String_o *)this, 0LL);
  returnItemsNoneLabel = v6->fields.returnItemsNoneLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13415/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                                 0LL);
  if ( !returnItemsNoneLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsNoneLabel, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_29;
  if ( !this )
    goto LABEL_29;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)this,
                       (*p_tradeGoodsEntity)->fields.commonConsumeId,
                       0LL);
  v6->fields.exchangeOriginItemList = SortedEntityList;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_1B88554(
                                                                 &v6->fields.exchangeOriginItemList,
                                                                 SortedEntityList);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_29;
  v19 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.returnItemsNoneLabel;
  if ( !this )
    goto LABEL_29;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19, 0LL);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.returnItemsBaseObj;
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v19, 0LL);
  EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBase(v6, v20);
  NowTradeNum = EventTradeListViewItem__get_NowTradeNum(item, 0LL);
  EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBaseAfter(v6, NowTradeNum, v22);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)EventTradeListViewItemDraw__GetDisplayMode(3, item, 0LL);
  if ( !v6->fields.listViewItemDraw
    || (v23 = (int)this,
        EventTradeListViewItemDraw__SetItem(v6->fields.listViewItemDraw, item, (int32_t)this, 0LL),
        (this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.listViewItemDraw) == 0LL) )
  {
LABEL_29:
    sub_1B8880C(this, item);
  }
  EventTradeListViewItemDraw__UpdateItem((EventTradeListViewItemDraw_o *)this, item, v23, 0LL);
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

  if ( (byte_4A563DE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A563DE = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}