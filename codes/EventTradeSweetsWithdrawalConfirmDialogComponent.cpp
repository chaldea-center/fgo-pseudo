void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent___ctor(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A6B0BF & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    byte_4A6B0BF = 1;
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
    sub_1B8FFB4(p_onDecide);
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

  if ( (byte_4A6B0BD & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__, v3);
    byte_4A6B0BD = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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

  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B9026C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1B8FFB4(&this->fields.tradeGoodsEntity);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__OnClickCancel(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A6B0BC & 1) == 0 )
  {
    sub_1B90010(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__, method);
    byte_4A6B0BC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
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

  if ( (byte_4A6B0BB & 1) == 0 )
  {
    sub_1B90010(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__, method);
    byte_4A6B0BB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028();
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
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

  if ( (byte_4A6B0B7 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, item);
    sub_1B90010(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__, v7);
    byte_4A6B0B7 = 1;
  }
  if ( !this->fields.state )
  {
    EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(this, item, onDecide, method);
    this->fields.state = 1;
    v8 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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
  __int64 v11; // x2
  __int64 v12; // x3
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v14; // x9
  UserItemMaster_o *v15; // x20
  int v16; // w23
  struct UISprite_array *exchangeOriginItemIcon; // x10
  CommonConsumeEntity_o *v18; // x8
  UISprite_o *v19; // x21
  int32_t v20; // w22
  struct CommonConsumeEntity_array *v21; // x8
  CommonConsumeEntity_o *v22; // x8
  struct UILabel_array *exchangeOriginCounts; // x9
  UILabel_o *v24; // x21
  int64_t v25; // x22
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v27; // x21
  int v28; // w8
  unsigned int v29; // w23
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v31; // x8
  UISprite_o *v32; // x21
  int32_t objectId; // w22
  struct CommonConsumeEntity_array *v34; // x8
  CommonConsumeEntity_o *v35; // x8
  struct UILabel_array *exchangeOriginCounts2; // x9
  UILabel_o *v37; // x21
  int64_t v38; // x22
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v40; // x21
  float v41; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6B0B9 & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, method);
    sub_1B90010(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&LocalizationManager_TypeInfo, v5);
    sub_1B90010(&NetworkManager_TypeInfo, v6);
    sub_1B90010(&StringLiteral_13436/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, v7);
    byte_4A6B0B9 = 1;
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
  exchangeOriginLb = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_67;
  v14 = *(_QWORD *)&exchangeOriginItemList->max_length;
  v15 = (UserItemMaster_o *)exchangeOriginLb;
  if ( (_DWORD)v14 != 3 )
  {
    if ( (int)v14 < 1 )
    {
LABEL_61:
      exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject2;
      if ( exchangeOriginLb )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0LL);
        exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject;
        if ( exchangeOriginLb )
        {
          v28 = -1032847360;
          goto LABEL_64;
        }
      }
    }
    else
    {
      v29 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v29 >= exchangeOriginItemIcon2->max_length || v29 >= (unsigned int)v14 )
LABEL_68:
          sub_1B90274(exchangeOriginLb, method, v11, v12);
        v31 = exchangeOriginItemList->m_Items[v29];
        if ( !v31 )
          break;
        v32 = exchangeOriginItemIcon2->m_Items[v29];
        objectId = v31->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v32, objectId, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        exchangeOriginLb = NetworkManager__get_UserId(0LL);
        v34 = this->fields.exchangeOriginItemList;
        if ( !v34 )
          break;
        if ( v29 >= v34->max_length )
          goto LABEL_68;
        v35 = v34->m_Items[v29];
        if ( !v35 )
          break;
        if ( !v15 )
          break;
        exchangeOriginLb = (int64_t)UserItemMaster__GetEntityDefinitely(
                                      v15,
                                      exchangeOriginLb,
                                      v35->fields.objectId,
                                      0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v29 >= exchangeOriginCounts2->max_length )
          goto LABEL_68;
        if ( !exchangeOriginLb )
          break;
        v37 = exchangeOriginCounts2->m_Items[v29];
        v38 = *(int *)(exchangeOriginLb + 28);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        exchangeOriginLb = (int64_t)LocalizationManager__GetNumberFormatLong(v38, 0LL);
        if ( !v37 )
          break;
        UILabel__set_text(v37, (System_String_o *)exchangeOriginLb, 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v29 >= exchangeOriginCountKinds2->max_length )
          goto LABEL_68;
        v40 = exchangeOriginCountKinds2->m_Items[v29];
        exchangeOriginLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13436/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
        if ( !v40 )
          break;
        UILabel__set_text(v40, (System_String_o *)exchangeOriginLb, 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v14) = exchangeOriginItemList->max_length;
        if ( (int)++v29 >= (int)v14 )
          goto LABEL_61;
      }
    }
LABEL_67:
    sub_1B9026C(exchangeOriginLb, method);
  }
  v16 = 0;
  do
  {
    exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
    if ( !exchangeOriginItemIcon )
      goto LABEL_67;
    if ( v16 >= exchangeOriginItemIcon->max_length || v16 >= (unsigned int)v14 )
      goto LABEL_68;
    v18 = exchangeOriginItemList->m_Items[v16];
    if ( !v18 )
      goto LABEL_67;
    v19 = exchangeOriginItemIcon->m_Items[v16];
    v20 = v18->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v19, v20, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    exchangeOriginLb = NetworkManager__get_UserId(0LL);
    v21 = this->fields.exchangeOriginItemList;
    if ( !v21 )
      goto LABEL_67;
    if ( v16 >= v21->max_length )
      goto LABEL_68;
    v22 = v21->m_Items[v16];
    if ( !v22 )
      goto LABEL_67;
    if ( !v15 )
      goto LABEL_67;
    exchangeOriginLb = (int64_t)UserItemMaster__GetEntityDefinitely(v15, exchangeOriginLb, v22->fields.objectId, 0LL);
    exchangeOriginCounts = this->fields.exchangeOriginCounts;
    if ( !exchangeOriginCounts )
      goto LABEL_67;
    if ( v16 >= exchangeOriginCounts->max_length )
      goto LABEL_68;
    if ( !exchangeOriginLb )
      goto LABEL_67;
    v24 = exchangeOriginCounts->m_Items[v16];
    v25 = *(int *)(exchangeOriginLb + 28);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    exchangeOriginLb = (int64_t)LocalizationManager__GetNumberFormatLong(v25, 0LL);
    if ( !v24 )
      goto LABEL_67;
    UILabel__set_text(v24, (System_String_o *)exchangeOriginLb, 0LL);
    exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
    if ( !exchangeOriginCountKinds )
      goto LABEL_67;
    if ( v16 >= exchangeOriginCountKinds->max_length )
      goto LABEL_68;
    v27 = exchangeOriginCountKinds->m_Items[v16];
    exchangeOriginLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13436/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
    if ( !v27 )
      goto LABEL_67;
    UILabel__set_text(v27, (System_String_o *)exchangeOriginLb, 0LL);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_67;
    LODWORD(v14) = exchangeOriginItemList->max_length;
    ++v16;
  }
  while ( v16 < (int)v14 );
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0LL);
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject2;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  v28 = -1023279104;
LABEL_64:
  v41 = *(float *)&v28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 0, 0LL);
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginLb;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  exchangeOriginLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)exchangeOriginLb, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_67;
  v43.fields.y = y;
  v43.fields.z = z;
  v43.fields.x = v41;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLb, v43, 0LL);
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
  __int64 v13; // x2
  __int64 v14; // x3
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v16; // x9
  UserItemMaster_o *v17; // x21
  int v18; // w24
  struct UISprite_array *exchangeOriginItemIconAfter; // x10
  CommonConsumeEntity_o *v20; // x8
  int32_t v21; // w23
  UISprite_o *v22; // x22
  struct CommonConsumeEntity_array *v23; // x8
  CommonConsumeEntity_o *v24; // x8
  struct UILabel_array *exchangeOriginCountsAfter; // x9
  struct CommonConsumeEntity_array *v26; // x8
  CommonConsumeEntity_o *v27; // x10
  UILabel_o *v28; // x22
  int v29; // w23
  int32_t v30; // w25
  struct UILabel_array *exchangeOriginCountKindsAfter; // x8
  UILabel_o *v32; // x22
  int v33; // w8
  unsigned int v34; // w24
  struct UISprite_array *exchangeOriginItemIcon2After; // x10
  CommonConsumeEntity_o *v36; // x8
  int32_t objectId; // w23
  UISprite_o *v38; // x22
  struct CommonConsumeEntity_array *v39; // x8
  CommonConsumeEntity_o *v40; // x8
  struct UILabel_array *exchangeOriginCounts2After; // x9
  struct CommonConsumeEntity_array *v42; // x8
  CommonConsumeEntity_o *v43; // x10
  UILabel_o *v44; // x22
  int v45; // w23
  int32_t num; // w25
  struct UILabel_array *exchangeOriginCountKinds2After; // x8
  UILabel_o *v48; // x22
  float v49; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6B0BA & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, *(_QWORD *)&completeNum);
    sub_1B90010(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1B90010(&DataManager_TypeInfo, v6);
    sub_1B90010(&LocalizationManager_TypeInfo, v7);
    sub_1B90010(&NetworkManager_TypeInfo, v8);
    sub_1B90010(&StringLiteral_13436/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, v9);
    byte_4A6B0BA = 1;
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
  exchangeOriginLbAfter = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_73;
  v16 = *(_QWORD *)&exchangeOriginItemList->max_length;
  v17 = (UserItemMaster_o *)exchangeOriginLbAfter;
  if ( (_DWORD)v16 != 3 )
  {
    if ( (int)v16 < 1 )
    {
LABEL_67:
      exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObject2After;
      if ( exchangeOriginLbAfter )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0LL);
        exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObjectAfter;
        if ( exchangeOriginLbAfter )
        {
          v33 = -1032847360;
          goto LABEL_70;
        }
      }
    }
    else
    {
      v34 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2After = this->fields.exchangeOriginItemIcon2After;
        if ( !exchangeOriginItemIcon2After )
          break;
        if ( v34 >= exchangeOriginItemIcon2After->max_length || v34 >= (unsigned int)v16 )
LABEL_74:
          sub_1B90274(exchangeOriginLbAfter, *(_QWORD *)&completeNum, v13, v14);
        v36 = exchangeOriginItemList->m_Items[v34];
        if ( !v36 )
          break;
        objectId = v36->fields.objectId;
        v38 = exchangeOriginItemIcon2After->m_Items[v34];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v38, objectId, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        exchangeOriginLbAfter = NetworkManager__get_UserId(0LL);
        v39 = this->fields.exchangeOriginItemList;
        if ( !v39 )
          break;
        if ( v34 >= v39->max_length )
          goto LABEL_74;
        v40 = v39->m_Items[v34];
        if ( !v40 )
          break;
        if ( !v17 )
          break;
        exchangeOriginLbAfter = (int64_t)UserItemMaster__GetEntityDefinitely(
                                           v17,
                                           exchangeOriginLbAfter,
                                           v40->fields.objectId,
                                           0LL);
        exchangeOriginCounts2After = this->fields.exchangeOriginCounts2After;
        if ( !exchangeOriginCounts2After )
          break;
        if ( v34 >= exchangeOriginCounts2After->max_length )
          goto LABEL_74;
        if ( !exchangeOriginLbAfter )
          break;
        v42 = this->fields.exchangeOriginItemList;
        if ( !v42 )
          break;
        if ( v34 >= v42->max_length )
          goto LABEL_74;
        v43 = v42->m_Items[v34];
        if ( !v43 )
          break;
        v44 = exchangeOriginCounts2After->m_Items[v34];
        v45 = *(_DWORD *)(exchangeOriginLbAfter + 28);
        num = v43->fields.num;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        exchangeOriginLbAfter = (int64_t)LocalizationManager__GetNumberFormatLong(v45 + num * completeNum, 0LL);
        if ( !v44 )
          break;
        UILabel__set_text(v44, (System_String_o *)exchangeOriginLbAfter, 0LL);
        exchangeOriginCountKinds2After = this->fields.exchangeOriginCountKinds2After;
        if ( !exchangeOriginCountKinds2After )
          break;
        if ( v34 >= exchangeOriginCountKinds2After->max_length )
          goto LABEL_74;
        v48 = exchangeOriginCountKinds2After->m_Items[v34];
        exchangeOriginLbAfter = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13436/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
        if ( !v48 )
          break;
        UILabel__set_text(v48, (System_String_o *)exchangeOriginLbAfter, 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v16) = exchangeOriginItemList->max_length;
        if ( (int)++v34 >= (int)v16 )
          goto LABEL_67;
      }
    }
LABEL_73:
    sub_1B9026C(exchangeOriginLbAfter, *(_QWORD *)&completeNum);
  }
  v18 = 0;
  do
  {
    exchangeOriginItemIconAfter = this->fields.exchangeOriginItemIconAfter;
    if ( !exchangeOriginItemIconAfter )
      goto LABEL_73;
    if ( v18 >= exchangeOriginItemIconAfter->max_length || v18 >= (unsigned int)v16 )
      goto LABEL_74;
    v20 = exchangeOriginItemList->m_Items[v18];
    if ( !v20 )
      goto LABEL_73;
    v21 = v20->fields.objectId;
    v22 = exchangeOriginItemIconAfter->m_Items[v18];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v22, v21, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    exchangeOriginLbAfter = NetworkManager__get_UserId(0LL);
    v23 = this->fields.exchangeOriginItemList;
    if ( !v23 )
      goto LABEL_73;
    if ( v18 >= v23->max_length )
      goto LABEL_74;
    v24 = v23->m_Items[v18];
    if ( !v24 )
      goto LABEL_73;
    if ( !v17 )
      goto LABEL_73;
    exchangeOriginLbAfter = (int64_t)UserItemMaster__GetEntityDefinitely(
                                       v17,
                                       exchangeOriginLbAfter,
                                       v24->fields.objectId,
                                       0LL);
    exchangeOriginCountsAfter = this->fields.exchangeOriginCountsAfter;
    if ( !exchangeOriginCountsAfter )
      goto LABEL_73;
    if ( v18 >= exchangeOriginCountsAfter->max_length )
      goto LABEL_74;
    if ( !exchangeOriginLbAfter )
      goto LABEL_73;
    v26 = this->fields.exchangeOriginItemList;
    if ( !v26 )
      goto LABEL_73;
    if ( v18 >= v26->max_length )
      goto LABEL_74;
    v27 = v26->m_Items[v18];
    if ( !v27 )
      goto LABEL_73;
    v28 = exchangeOriginCountsAfter->m_Items[v18];
    v29 = *(_DWORD *)(exchangeOriginLbAfter + 28);
    v30 = v27->fields.num;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    exchangeOriginLbAfter = (int64_t)LocalizationManager__GetNumberFormatLong(v29 + v30 * completeNum, 0LL);
    if ( !v28 )
      goto LABEL_73;
    UILabel__set_text(v28, (System_String_o *)exchangeOriginLbAfter, 0LL);
    exchangeOriginCountKindsAfter = this->fields.exchangeOriginCountKindsAfter;
    if ( !exchangeOriginCountKindsAfter )
      goto LABEL_73;
    if ( v18 >= exchangeOriginCountKindsAfter->max_length )
      goto LABEL_74;
    v32 = exchangeOriginCountKindsAfter->m_Items[v18];
    exchangeOriginLbAfter = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13436/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
    if ( !v32 )
      goto LABEL_73;
    UILabel__set_text(v32, (System_String_o *)exchangeOriginLbAfter, 0LL);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_73;
    LODWORD(v16) = exchangeOriginItemList->max_length;
    ++v18;
  }
  while ( v18 < (int)v16 );
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObjectAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0LL);
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObject2After;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  v33 = -1023279104;
LABEL_70:
  v49 = *(float *)&v33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 0, 0LL);
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginLbAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  exchangeOriginLbAfter = (int64_t)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)exchangeOriginLbAfter,
                                     0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  v51.fields.y = y;
  v51.fields.z = z;
  v51.fields.x = v49;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLbAfter, v51, 0LL);
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
  struct EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  UILabel_o *titleLabel; // x22
  UILabel_o *detailLabel; // x22
  UILabel_o *exchangeOriginLb; // x22
  UILabel_o *exchangeOriginLbAfter; // x22
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  UILabel_o *returnItemsLabel; // x22
  UILabel_o *returnItemsNoneLabel; // x22
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  bool v27; // w21
  const MethodInfo *v28; // x1
  int32_t NowTradeNum; // w0
  const MethodInfo *v30; // x2
  int32_t v31; // w21

  v6 = this;
  if ( (byte_4A6B0B8 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_CommonConsumeMaster___, item);
    sub_1B90010(&DataManager_TypeInfo, v7);
    sub_1B90010(&LocalizationManager_TypeInfo, v8);
    sub_1B90010(&StringLiteral_13435/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/, v9);
    sub_1B90010(&StringLiteral_13440/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/, v10);
    sub_1B90010(&StringLiteral_13441/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/, v11);
    sub_1B90010(&StringLiteral_3756/*"COMMON_CONFIRM_CANCEL"*/, v12);
    sub_1B90010(&StringLiteral_13438/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/, v13);
    sub_1B90010(&StringLiteral_13434/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/, v14);
    sub_1B90010(&StringLiteral_13437/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/, v15);
    this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_1B90010(&StringLiteral_13439/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/, v16);
    byte_4A6B0B8 = 1;
  }
  if ( !item )
    goto LABEL_29;
  p_tradeGoodsEntity = &v6->fields.tradeGoodsEntity;
  v6->fields.tradeGoodsEntity = item->fields._TradeGoodsEntity_k__BackingField;
  sub_1B8FFB4(&v6->fields.tradeGoodsEntity);
  v6->fields.onDecide = onDecide;
  sub_1B8FFB4(&v6->fields.onDecide);
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
                                                                 (System_String_o *)StringLiteral_13441/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                                 0LL);
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  detailLabel = v6->fields.detailLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13438/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                                 0LL);
  if ( !detailLabel )
    goto LABEL_29;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
  exchangeOriginLb = v6->fields.exchangeOriginLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13435/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                                 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0LL);
  exchangeOriginLbAfter = v6->fields.exchangeOriginLbAfter;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13434/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                                 0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLbAfter, (System_String_o *)this, 0LL);
  cancelButtonLb = v6->fields.cancelButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CANCEL"*/,
                                                                 0LL);
  if ( !cancelButtonLb )
    goto LABEL_29;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
  decideButtonLb = v6->fields.decideButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13437/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                                 0LL);
  if ( !decideButtonLb )
    goto LABEL_29;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
  returnItemsLabel = v6->fields.returnItemsLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13439/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                                 0LL);
  if ( !returnItemsLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsLabel, (System_String_o *)this, 0LL);
  returnItemsNoneLabel = v6->fields.returnItemsNoneLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13440/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                                 0LL);
  if ( !returnItemsNoneLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsNoneLabel, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_29;
  if ( !this )
    goto LABEL_29;
  v6->fields.exchangeOriginItemList = CommonConsumeMaster__GetSortedEntityList(
                                        (CommonConsumeMaster_o *)this,
                                        (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                        0LL);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_1B8FFB4(&v6->fields.exchangeOriginItemList);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_29;
  v27 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.returnItemsNoneLabel;
  if ( !this )
    goto LABEL_29;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v27, 0LL);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.returnItemsBaseObj;
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v27, 0LL);
  EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBase(v6, v28);
  NowTradeNum = EventTradeListViewItem__get_NowTradeNum(item, 0LL);
  EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBaseAfter(v6, NowTradeNum, v30);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)EventTradeListViewItemDraw__GetDisplayMode(3, item, 0LL);
  if ( !v6->fields.listViewItemDraw
    || (v31 = (int)this,
        EventTradeListViewItemDraw__SetItem(v6->fields.listViewItemDraw, item, (int32_t)this, 0LL),
        (this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.listViewItemDraw) == 0LL) )
  {
LABEL_29:
    sub_1B9026C(this, item);
  }
  EventTradeListViewItemDraw__UpdateItem((EventTradeListViewItemDraw_o *)this, item, v31, 0LL);
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

  if ( (byte_4A6B0BE & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6B0BE = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B9026C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}