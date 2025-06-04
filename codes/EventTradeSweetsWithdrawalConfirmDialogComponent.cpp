void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent___ctor(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFCB11 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFCB11 = 1;
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
    sub_1BC2FAC(p_onDecide);
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

  if ( (byte_4AFCB0F & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__, v3);
    byte_4AFCB0F = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__Init(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, *(const MethodInfo **)&eventId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1BC2FAC(&this->fields.tradeGoodsEntity);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__OnClickCancel(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4AFCB0E & 1) == 0 )
  {
    sub_1BC3008(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__, method);
    byte_4AFCB0E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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

  if ( (byte_4AFCB0D & 1) == 0 )
  {
    sub_1BC3008(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__, method);
    byte_4AFCB0D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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

  if ( (byte_4AFCB09 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, item);
    sub_1BC3008(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__, v7);
    byte_4AFCB09 = 1;
  }
  if ( !this->fields.state )
  {
    EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(this, item, onDecide, method);
    this->fields.state = 1;
    v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
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


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBase(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *exchangeOriginLb; // x0
  float y; // s8
  float z; // s9
  __int64 v11; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v13; // x9
  UserItemMaster_o *v14; // x20
  int v15; // w24
  struct UISprite_array *exchangeOriginItemIcon; // x10
  CommonConsumeEntity_o *v17; // x8
  UISprite_o *v18; // x22
  int32_t v19; // w23
  struct CommonConsumeEntity_array *v20; // x8
  CommonConsumeEntity_o *v21; // x8
  struct UILabel_array *exchangeOriginCounts; // x9
  UILabel_o *v23; // x22
  int64_t v24; // x23
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v26; // x22
  int v27; // w8
  unsigned int v28; // w24
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v30; // x8
  UISprite_o *v31; // x22
  int32_t objectId; // w23
  struct CommonConsumeEntity_array *v33; // x8
  CommonConsumeEntity_o *v34; // x8
  struct UILabel_array *exchangeOriginCounts2; // x9
  UILabel_o *v36; // x22
  int64_t klass_high; // x23
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v39; // x22
  float v40; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFCB0B & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(&LocalizationManager_TypeInfo, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_13374/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, v7);
    byte_4AFCB0B = 1;
  }
  exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginLb;
  if ( !exchangeOriginLb )
    goto LABEL_75;
  exchangeOriginLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(exchangeOriginLb, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_75;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)exchangeOriginLb, 0LL);
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  exchangeOriginLb = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_75;
  v13 = *(_QWORD *)&exchangeOriginItemList->max_length;
  v14 = (UserItemMaster_o *)exchangeOriginLb;
  if ( (_DWORD)v13 != 3 )
  {
    if ( (int)v13 < 1 )
    {
LABEL_69:
      exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject2;
      if ( exchangeOriginLb )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0LL);
        exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject;
        if ( exchangeOriginLb )
        {
          v27 = -1032847360;
          goto LABEL_72;
        }
      }
    }
    else
    {
      v28 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v28 >= exchangeOriginItemIcon2->max_length || v28 >= (unsigned int)v13 )
LABEL_76:
          sub_1BC326C(exchangeOriginLb, method, v11);
        v30 = exchangeOriginItemList->m_Items[v28];
        if ( !v30 )
          break;
        v31 = exchangeOriginItemIcon2->m_Items[v28];
        objectId = v30->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v31, objectId, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4AFC1F1 )
        {
          sub_1BC3008(&NetworkManager_TypeInfo, method);
          byte_4AFC1F1 = 1;
        }
        exchangeOriginLb = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          exchangeOriginLb = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
        }
        v33 = this->fields.exchangeOriginItemList;
        if ( !v33 )
          break;
        if ( v28 >= v33->max_length )
          goto LABEL_76;
        v34 = v33->m_Items[v28];
        if ( !v34 )
          break;
        if ( !v14 )
          break;
        exchangeOriginLb = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                        v14,
                                                        *(_QWORD *)(*(_QWORD *)&exchangeOriginLb[7].fields.m_CachedPtr
                                                                  + 64LL),
                                                        v34->fields.objectId,
                                                        0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v28 >= exchangeOriginCounts2->max_length )
          goto LABEL_76;
        if ( !exchangeOriginLb )
          break;
        v36 = exchangeOriginCounts2->m_Items[v28];
        klass_high = SHIDWORD(exchangeOriginLb[1].klass);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        exchangeOriginLb = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormatLong(klass_high, 0LL);
        if ( !v36 )
          break;
        UILabel__set_text(v36, (System_String_o *)exchangeOriginLb, 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v28 >= exchangeOriginCountKinds2->max_length )
          goto LABEL_76;
        v39 = exchangeOriginCountKinds2->m_Items[v28];
        exchangeOriginLb = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13374/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/,
                                                        0LL);
        if ( !v39 )
          break;
        UILabel__set_text(v39, (System_String_o *)exchangeOriginLb, 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v13) = exchangeOriginItemList->max_length;
        if ( (int)++v28 >= (int)v13 )
          goto LABEL_69;
      }
    }
LABEL_75:
    sub_1BC3264(exchangeOriginLb, method);
  }
  v15 = 0;
  do
  {
    exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
    if ( !exchangeOriginItemIcon )
      goto LABEL_75;
    if ( v15 >= exchangeOriginItemIcon->max_length || v15 >= (unsigned int)v13 )
      goto LABEL_76;
    v17 = exchangeOriginItemList->m_Items[v15];
    if ( !v17 )
      goto LABEL_75;
    v18 = exchangeOriginItemIcon->m_Items[v15];
    v19 = v17->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v18, v19, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, method);
      byte_4AFC1F1 = 1;
    }
    exchangeOriginLb = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      exchangeOriginLb = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
    }
    v20 = this->fields.exchangeOriginItemList;
    if ( !v20 )
      goto LABEL_75;
    if ( v15 >= v20->max_length )
      goto LABEL_76;
    v21 = v20->m_Items[v15];
    if ( !v21 )
      goto LABEL_75;
    if ( !v14 )
      goto LABEL_75;
    exchangeOriginLb = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                    v14,
                                                    *(_QWORD *)(*(_QWORD *)&exchangeOriginLb[7].fields.m_CachedPtr + 64LL),
                                                    v21->fields.objectId,
                                                    0LL);
    exchangeOriginCounts = this->fields.exchangeOriginCounts;
    if ( !exchangeOriginCounts )
      goto LABEL_75;
    if ( v15 >= exchangeOriginCounts->max_length )
      goto LABEL_76;
    if ( !exchangeOriginLb )
      goto LABEL_75;
    v23 = exchangeOriginCounts->m_Items[v15];
    v24 = SHIDWORD(exchangeOriginLb[1].klass);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    exchangeOriginLb = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormatLong(v24, 0LL);
    if ( !v23 )
      goto LABEL_75;
    UILabel__set_text(v23, (System_String_o *)exchangeOriginLb, 0LL);
    exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
    if ( !exchangeOriginCountKinds )
      goto LABEL_75;
    if ( v15 >= exchangeOriginCountKinds->max_length )
      goto LABEL_76;
    v26 = exchangeOriginCountKinds->m_Items[v15];
    exchangeOriginLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13374/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
    if ( !v26 )
      goto LABEL_75;
    UILabel__set_text(v26, (System_String_o *)exchangeOriginLb, 0LL);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_75;
    LODWORD(v13) = exchangeOriginItemList->max_length;
    ++v15;
  }
  while ( v15 < (int)v13 );
  exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject;
  if ( !exchangeOriginLb )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0LL);
  exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject2;
  if ( !exchangeOriginLb )
    goto LABEL_75;
  v27 = -1023279104;
LABEL_72:
  v40 = *(float *)&v27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 0, 0LL);
  exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginLb;
  if ( !exchangeOriginLb )
    goto LABEL_75;
  exchangeOriginLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(exchangeOriginLb, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_75;
  v42.fields.y = y;
  v42.fields.z = z;
  v42.fields.x = v40;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLb, v42, 0LL);
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
  UnityEngine_Component_o *exchangeOriginLbAfter; // x0
  float y; // s8
  float z; // s9
  __int64 v13; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v15; // x9
  UserItemMaster_o *v16; // x21
  int v17; // w25
  struct UISprite_array *exchangeOriginItemIconAfter; // x10
  CommonConsumeEntity_o *v19; // x8
  int32_t v20; // w24
  UISprite_o *v21; // x23
  struct CommonConsumeEntity_array *v22; // x8
  CommonConsumeEntity_o *v23; // x8
  struct UILabel_array *exchangeOriginCountsAfter; // x9
  struct CommonConsumeEntity_array *v25; // x8
  CommonConsumeEntity_o *v26; // x10
  UILabel_o *v27; // x23
  int v28; // w24
  int32_t v29; // w29
  struct UILabel_array *exchangeOriginCountKindsAfter; // x8
  UILabel_o *v31; // x23
  int v32; // w8
  unsigned int v33; // w25
  struct UISprite_array *exchangeOriginItemIcon2After; // x10
  CommonConsumeEntity_o *v35; // x8
  int32_t objectId; // w24
  UISprite_o *v37; // x23
  struct CommonConsumeEntity_array *v38; // x8
  CommonConsumeEntity_o *v39; // x8
  struct UILabel_array *exchangeOriginCounts2After; // x9
  struct CommonConsumeEntity_array *v41; // x8
  CommonConsumeEntity_o *v42; // x10
  UILabel_o *v43; // x23
  int klass_high; // w24
  int32_t num; // w29
  struct UILabel_array *exchangeOriginCountKinds2After; // x8
  UILabel_o *v47; // x23
  float v48; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFCB0C & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&completeNum);
    sub_1BC3008(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_13374/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, v9);
    byte_4AFCB0C = 1;
  }
  exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginLbAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_81;
  exchangeOriginLbAfter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(exchangeOriginLbAfter, 0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_81;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)exchangeOriginLbAfter, 0LL);
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  exchangeOriginLbAfter = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_81;
  v15 = *(_QWORD *)&exchangeOriginItemList->max_length;
  v16 = (UserItemMaster_o *)exchangeOriginLbAfter;
  if ( (_DWORD)v15 != 3 )
  {
    if ( (int)v15 < 1 )
    {
LABEL_75:
      exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject2After;
      if ( exchangeOriginLbAfter )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0LL);
        exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObjectAfter;
        if ( exchangeOriginLbAfter )
        {
          v32 = -1032847360;
          goto LABEL_78;
        }
      }
    }
    else
    {
      v33 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2After = this->fields.exchangeOriginItemIcon2After;
        if ( !exchangeOriginItemIcon2After )
          break;
        if ( v33 >= exchangeOriginItemIcon2After->max_length || v33 >= (unsigned int)v15 )
LABEL_82:
          sub_1BC326C(exchangeOriginLbAfter, *(_QWORD *)&completeNum, v13);
        v35 = exchangeOriginItemList->m_Items[v33];
        if ( !v35 )
          break;
        objectId = v35->fields.objectId;
        v37 = exchangeOriginItemIcon2After->m_Items[v33];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v37, objectId, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4AFC1F1 )
        {
          sub_1BC3008(&NetworkManager_TypeInfo, *(_QWORD *)&completeNum);
          byte_4AFC1F1 = 1;
        }
        exchangeOriginLbAfter = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          exchangeOriginLbAfter = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
        }
        v38 = this->fields.exchangeOriginItemList;
        if ( !v38 )
          break;
        if ( v33 >= v38->max_length )
          goto LABEL_82;
        v39 = v38->m_Items[v33];
        if ( !v39 )
          break;
        if ( !v16 )
          break;
        exchangeOriginLbAfter = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                             v16,
                                                             *(_QWORD *)(*(_QWORD *)&exchangeOriginLbAfter[7].fields.m_CachedPtr
                                                                       + 64LL),
                                                             v39->fields.objectId,
                                                             0LL);
        exchangeOriginCounts2After = this->fields.exchangeOriginCounts2After;
        if ( !exchangeOriginCounts2After )
          break;
        if ( v33 >= exchangeOriginCounts2After->max_length )
          goto LABEL_82;
        if ( !exchangeOriginLbAfter )
          break;
        v41 = this->fields.exchangeOriginItemList;
        if ( !v41 )
          break;
        if ( v33 >= v41->max_length )
          goto LABEL_82;
        v42 = v41->m_Items[v33];
        if ( !v42 )
          break;
        v43 = exchangeOriginCounts2After->m_Items[v33];
        klass_high = HIDWORD(exchangeOriginLbAfter[1].klass);
        num = v42->fields.num;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        exchangeOriginLbAfter = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormatLong(
                                                             klass_high + num * completeNum,
                                                             0LL);
        if ( !v43 )
          break;
        UILabel__set_text(v43, (System_String_o *)exchangeOriginLbAfter, 0LL);
        exchangeOriginCountKinds2After = this->fields.exchangeOriginCountKinds2After;
        if ( !exchangeOriginCountKinds2After )
          break;
        if ( v33 >= exchangeOriginCountKinds2After->max_length )
          goto LABEL_82;
        v47 = exchangeOriginCountKinds2After->m_Items[v33];
        exchangeOriginLbAfter = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_13374/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/,
                                                             0LL);
        if ( !v47 )
          break;
        UILabel__set_text(v47, (System_String_o *)exchangeOriginLbAfter, 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v15) = exchangeOriginItemList->max_length;
        if ( (int)++v33 >= (int)v15 )
          goto LABEL_75;
      }
    }
LABEL_81:
    sub_1BC3264(exchangeOriginLbAfter, *(_QWORD *)&completeNum);
  }
  v17 = 0;
  do
  {
    exchangeOriginItemIconAfter = this->fields.exchangeOriginItemIconAfter;
    if ( !exchangeOriginItemIconAfter )
      goto LABEL_81;
    if ( v17 >= exchangeOriginItemIconAfter->max_length || v17 >= (unsigned int)v15 )
      goto LABEL_82;
    v19 = exchangeOriginItemList->m_Items[v17];
    if ( !v19 )
      goto LABEL_81;
    v20 = v19->fields.objectId;
    v21 = exchangeOriginItemIconAfter->m_Items[v17];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v21, v20, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, *(_QWORD *)&completeNum);
      byte_4AFC1F1 = 1;
    }
    exchangeOriginLbAfter = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      exchangeOriginLbAfter = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
    }
    v22 = this->fields.exchangeOriginItemList;
    if ( !v22 )
      goto LABEL_81;
    if ( v17 >= v22->max_length )
      goto LABEL_82;
    v23 = v22->m_Items[v17];
    if ( !v23 )
      goto LABEL_81;
    if ( !v16 )
      goto LABEL_81;
    exchangeOriginLbAfter = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                         v16,
                                                         *(_QWORD *)(*(_QWORD *)&exchangeOriginLbAfter[7].fields.m_CachedPtr
                                                                   + 64LL),
                                                         v23->fields.objectId,
                                                         0LL);
    exchangeOriginCountsAfter = this->fields.exchangeOriginCountsAfter;
    if ( !exchangeOriginCountsAfter )
      goto LABEL_81;
    if ( v17 >= exchangeOriginCountsAfter->max_length )
      goto LABEL_82;
    if ( !exchangeOriginLbAfter )
      goto LABEL_81;
    v25 = this->fields.exchangeOriginItemList;
    if ( !v25 )
      goto LABEL_81;
    if ( v17 >= v25->max_length )
      goto LABEL_82;
    v26 = v25->m_Items[v17];
    if ( !v26 )
      goto LABEL_81;
    v27 = exchangeOriginCountsAfter->m_Items[v17];
    v28 = HIDWORD(exchangeOriginLbAfter[1].klass);
    v29 = v26->fields.num;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    exchangeOriginLbAfter = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormatLong(
                                                         v28 + v29 * completeNum,
                                                         0LL);
    if ( !v27 )
      goto LABEL_81;
    UILabel__set_text(v27, (System_String_o *)exchangeOriginLbAfter, 0LL);
    exchangeOriginCountKindsAfter = this->fields.exchangeOriginCountKindsAfter;
    if ( !exchangeOriginCountKindsAfter )
      goto LABEL_81;
    if ( v17 >= exchangeOriginCountKindsAfter->max_length )
      goto LABEL_82;
    v31 = exchangeOriginCountKindsAfter->m_Items[v17];
    exchangeOriginLbAfter = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13374/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/,
                                                         0LL);
    if ( !v31 )
      goto LABEL_81;
    UILabel__set_text(v31, (System_String_o *)exchangeOriginLbAfter, 0LL);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_81;
    LODWORD(v15) = exchangeOriginItemList->max_length;
    ++v17;
  }
  while ( v17 < (int)v15 );
  exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObjectAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0LL);
  exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject2After;
  if ( !exchangeOriginLbAfter )
    goto LABEL_81;
  v32 = -1023279104;
LABEL_78:
  v48 = *(float *)&v32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 0, 0LL);
  exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginLbAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_81;
  exchangeOriginLbAfter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(exchangeOriginLbAfter, 0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_81;
  v50.fields.y = y;
  v50.fields.z = z;
  v50.fields.x = v48;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLbAfter, v50, 0LL);
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
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x3
  int32_t v33; // w21
  const MethodInfo *v34; // x3

  v6 = this;
  if ( (byte_4AFCB0A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_CommonConsumeMaster___, item);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&LocalizationManager_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_13373/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/, v9);
    sub_1BC3008(&StringLiteral_13378/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/, v10);
    sub_1BC3008(&StringLiteral_13379/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/, v11);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v12);
    sub_1BC3008(&StringLiteral_13376/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/, v13);
    sub_1BC3008(&StringLiteral_13372/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/, v14);
    sub_1BC3008(&StringLiteral_13375/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/, v15);
    this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_1BC3008(&StringLiteral_13377/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/, v16);
    byte_4AFCB0A = 1;
  }
  if ( !item )
    goto LABEL_29;
  p_tradeGoodsEntity = &v6->fields.tradeGoodsEntity;
  v6->fields.tradeGoodsEntity = item->fields._TradeGoodsEntity_k__BackingField;
  sub_1BC2FAC(&v6->fields.tradeGoodsEntity);
  v6->fields.onDecide = onDecide;
  sub_1BC2FAC(&v6->fields.onDecide);
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
                                                                 (System_String_o *)StringLiteral_13379/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                                 0LL);
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  detailLabel = v6->fields.detailLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13376/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                                 0LL);
  if ( !detailLabel )
    goto LABEL_29;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
  exchangeOriginLb = v6->fields.exchangeOriginLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13373/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                                 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0LL);
  exchangeOriginLbAfter = v6->fields.exchangeOriginLbAfter;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13372/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                                 0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLbAfter, (System_String_o *)this, 0LL);
  cancelButtonLb = v6->fields.cancelButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/,
                                                                 0LL);
  if ( !cancelButtonLb )
    goto LABEL_29;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
  decideButtonLb = v6->fields.decideButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13375/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                                 0LL);
  if ( !decideButtonLb )
    goto LABEL_29;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
  returnItemsLabel = v6->fields.returnItemsLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13377/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                                 0LL);
  if ( !returnItemsLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsLabel, (System_String_o *)this, 0LL);
  returnItemsNoneLabel = v6->fields.returnItemsNoneLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13378/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                                 0LL);
  if ( !returnItemsNoneLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsNoneLabel, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_29;
  if ( !this )
    goto LABEL_29;
  v6->fields.exchangeOriginItemList = CommonConsumeMaster__GetSortedEntityList(
                                        (CommonConsumeMaster_o *)this,
                                        (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                        0LL);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_1BC2FAC(&v6->fields.exchangeOriginItemList);
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
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)EventTradeListViewItemDraw__GetDisplayMode(3, item, v31);
  if ( !v6->fields.listViewItemDraw
    || (v33 = (int)this,
        EventTradeListViewItemDraw__SetItem(v6->fields.listViewItemDraw, item, (int32_t)this, v32),
        (this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.listViewItemDraw) == 0LL) )
  {
LABEL_29:
    sub_1BC3264(this, item);
  }
  EventTradeListViewItemDraw__UpdateItem((EventTradeListViewItemDraw_o *)this, item, v33, v34);
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

  if ( (byte_4AFCB10 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFCB10 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}