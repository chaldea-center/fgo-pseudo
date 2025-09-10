void EventTradeSweetsWithdrawalConfirmDialogComponent___ctor(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C21CCD & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C21CCD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__CallOnDecide(
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
    *p_onDecide = 0;
    sub_1C2D434(p_onDecide);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      result,
      onDecide->fields.method);
  }
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__Close(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C21CCB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__);
    byte_4C21CCB = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__EndOpen(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


// local variable allocation has failed, the output may be wrong!
void EventTradeSweetsWithdrawalConfirmDialogComponent__Init(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, *(const MethodInfo **)&eventId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0;
  sub_1C2D434(&this->fields.tradeGoodsEntity);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__OnClickCancel(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C21CCA & 1) == 0 )
  {
    sub_1C2D490(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__);
    byte_4C21CCA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    EventTradeSweetsWithdrawalConfirmDialogComponent__Close(this, v5);
  }
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__OnClickDecide(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C21CC9 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__);
    byte_4C21CC9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    EventTradeSweetsWithdrawalConfirmDialogComponent__CallOnDecide(this, 1, v5);
  }
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__Open(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        EventTradeListViewItem_o *item,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  System_Action_o *v7; // x20

  if ( (byte_4C21CC5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__);
    byte_4C21CC5 = 1;
  }
  if ( !this->fields.state )
  {
    EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(this, item, onDecide, method);
    this->fields.state = 1;
    v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v7, 0, 0);
  }
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__Resume(
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


void EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBase(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *exchangeOriginLb; // x0
  float y; // s8
  float z; // s9
  __int64 v6; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  il2cpp_array_size_t max_length; // x9
  UserItemMaster_o *v9; // x20
  int v10; // w24
  struct UISprite_array *exchangeOriginItemIcon; // x10
  CommonConsumeEntity_o *v12; // x8
  UISprite_o *v13; // x22
  int32_t v14; // w23
  struct CommonConsumeEntity_array *v15; // x8
  CommonConsumeEntity_o *v16; // x8
  struct UILabel_array *exchangeOriginCounts; // x9
  UILabel_o *v18; // x22
  int64_t v19; // x23
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v21; // x22
  int v22; // w8
  unsigned int v23; // w24
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v25; // x8
  UISprite_o *v26; // x22
  int32_t objectId; // w23
  struct CommonConsumeEntity_array *v28; // x8
  CommonConsumeEntity_o *v29; // x8
  struct UILabel_array *exchangeOriginCounts2; // x9
  UILabel_o *v31; // x22
  int64_t klass_high; // x23
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v34; // x22
  float v35; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21CC7 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13498/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/);
    byte_4C21CC7 = 1;
  }
  exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginLb;
  if ( !exchangeOriginLb )
    goto LABEL_75;
  exchangeOriginLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(exchangeOriginLb, 0);
  if ( !exchangeOriginLb )
    goto LABEL_75;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)exchangeOriginLb, 0);
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  exchangeOriginLb = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_75;
  max_length = exchangeOriginItemList->max_length;
  v9 = (UserItemMaster_o *)exchangeOriginLb;
  if ( (_DWORD)max_length != 3 )
  {
    if ( (int)max_length < 1 )
    {
LABEL_69:
      exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject2;
      if ( exchangeOriginLb )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0);
        exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject;
        if ( exchangeOriginLb )
        {
          v22 = -1032847360;
          goto LABEL_72;
        }
      }
    }
    else
    {
      v23 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v23 >= LODWORD(exchangeOriginItemIcon2->max_length) || v23 >= (unsigned int)max_length )
LABEL_76:
          sub_1C2D6F4(exchangeOriginLb, method, v6);
        v25 = exchangeOriginItemList->m_Items[v23];
        if ( !v25 )
          break;
        v26 = exchangeOriginItemIcon2->m_Items[v23];
        objectId = v25->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v26, objectId, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        exchangeOriginLb = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          exchangeOriginLb = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
        }
        v28 = this->fields.exchangeOriginItemList;
        if ( !v28 )
          break;
        if ( v23 >= LODWORD(v28->max_length) )
          goto LABEL_76;
        v29 = v28->m_Items[v23];
        if ( !v29 )
          break;
        if ( !v9 )
          break;
        exchangeOriginLb = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                        v9,
                                                        *(_QWORD *)(exchangeOriginLb[7].fields.m_CachedPtr + 64),
                                                        v29->fields.objectId,
                                                        0);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v23 >= LODWORD(exchangeOriginCounts2->max_length) )
          goto LABEL_76;
        if ( !exchangeOriginLb )
          break;
        v31 = exchangeOriginCounts2->m_Items[v23];
        klass_high = SHIDWORD(exchangeOriginLb[1].klass);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        exchangeOriginLb = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormatLong(klass_high, 0);
        if ( !v31 )
          break;
        UILabel__set_text(v31, (System_String_o *)exchangeOriginLb, 0);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v23 >= LODWORD(exchangeOriginCountKinds2->max_length) )
          goto LABEL_76;
        v34 = exchangeOriginCountKinds2->m_Items[v23];
        exchangeOriginLb = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_13498/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/,
                                                        0);
        if ( !v34 )
          break;
        UILabel__set_text(v34, (System_String_o *)exchangeOriginLb, 0);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(max_length) = exchangeOriginItemList->max_length;
        if ( (int)++v23 >= (int)max_length )
          goto LABEL_69;
      }
    }
LABEL_75:
    sub_1C2D6EC(exchangeOriginLb, method);
  }
  v10 = 0;
  do
  {
    exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
    if ( !exchangeOriginItemIcon )
      goto LABEL_75;
    if ( (unsigned int)v10 >= LODWORD(exchangeOriginItemIcon->max_length) || v10 >= (unsigned int)max_length )
      goto LABEL_76;
    v12 = exchangeOriginItemList->m_Items[v10];
    if ( !v12 )
      goto LABEL_75;
    v13 = exchangeOriginItemIcon->m_Items[v10];
    v14 = v12->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v13, v14, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    exchangeOriginLb = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      exchangeOriginLb = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
    }
    v15 = this->fields.exchangeOriginItemList;
    if ( !v15 )
      goto LABEL_75;
    if ( (unsigned int)v10 >= LODWORD(v15->max_length) )
      goto LABEL_76;
    v16 = v15->m_Items[v10];
    if ( !v16 )
      goto LABEL_75;
    if ( !v9 )
      goto LABEL_75;
    exchangeOriginLb = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                    v9,
                                                    *(_QWORD *)(exchangeOriginLb[7].fields.m_CachedPtr + 64),
                                                    v16->fields.objectId,
                                                    0);
    exchangeOriginCounts = this->fields.exchangeOriginCounts;
    if ( !exchangeOriginCounts )
      goto LABEL_75;
    if ( (unsigned int)v10 >= LODWORD(exchangeOriginCounts->max_length) )
      goto LABEL_76;
    if ( !exchangeOriginLb )
      goto LABEL_75;
    v18 = exchangeOriginCounts->m_Items[v10];
    v19 = SHIDWORD(exchangeOriginLb[1].klass);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    exchangeOriginLb = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormatLong(v19, 0);
    if ( !v18 )
      goto LABEL_75;
    UILabel__set_text(v18, (System_String_o *)exchangeOriginLb, 0);
    exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
    if ( !exchangeOriginCountKinds )
      goto LABEL_75;
    if ( (unsigned int)v10 >= LODWORD(exchangeOriginCountKinds->max_length) )
      goto LABEL_76;
    v21 = exchangeOriginCountKinds->m_Items[v10];
    exchangeOriginLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13498/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0);
    if ( !v21 )
      goto LABEL_75;
    UILabel__set_text(v21, (System_String_o *)exchangeOriginLb, 0);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_75;
    LODWORD(max_length) = exchangeOriginItemList->max_length;
    ++v10;
  }
  while ( v10 < (int)max_length );
  exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject;
  if ( !exchangeOriginLb )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0);
  exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject2;
  if ( !exchangeOriginLb )
    goto LABEL_75;
  v22 = -1023279104;
LABEL_72:
  v35 = *(float *)&v22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 0, 0);
  exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginLb;
  if ( !exchangeOriginLb )
    goto LABEL_75;
  exchangeOriginLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(exchangeOriginLb, 0);
  if ( !exchangeOriginLb )
    goto LABEL_75;
  v37.fields.y = y;
  v37.fields.z = z;
  v37.fields.x = v35;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLb, v37, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBaseAfter(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        int32_t completeNum,
        const MethodInfo *method)
{
  UnityEngine_Component_o *exchangeOriginLbAfter; // x0
  float y; // s8
  float z; // s9
  __int64 v8; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  il2cpp_array_size_t max_length; // x9
  UserItemMaster_o *v11; // x21
  int v12; // w25
  struct UISprite_array *exchangeOriginItemIconAfter; // x10
  CommonConsumeEntity_o *v14; // x8
  int32_t v15; // w24
  UISprite_o *v16; // x23
  struct CommonConsumeEntity_array *v17; // x8
  CommonConsumeEntity_o *v18; // x8
  struct UILabel_array *exchangeOriginCountsAfter; // x9
  struct CommonConsumeEntity_array *v20; // x8
  CommonConsumeEntity_o *v21; // x10
  UILabel_o *v22; // x23
  int v23; // w24
  int32_t v24; // w29
  struct UILabel_array *exchangeOriginCountKindsAfter; // x8
  UILabel_o *v26; // x23
  int v27; // w8
  unsigned int v28; // w25
  struct UISprite_array *exchangeOriginItemIcon2After; // x10
  CommonConsumeEntity_o *v30; // x8
  int32_t objectId; // w24
  UISprite_o *v32; // x23
  struct CommonConsumeEntity_array *v33; // x8
  CommonConsumeEntity_o *v34; // x8
  struct UILabel_array *exchangeOriginCounts2After; // x9
  struct CommonConsumeEntity_array *v36; // x8
  CommonConsumeEntity_o *v37; // x10
  UILabel_o *v38; // x23
  int klass_high; // w24
  int32_t num; // w29
  struct UILabel_array *exchangeOriginCountKinds2After; // x8
  UILabel_o *v42; // x23
  float v43; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21CC8 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13498/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/);
    byte_4C21CC8 = 1;
  }
  exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginLbAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_81;
  exchangeOriginLbAfter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(exchangeOriginLbAfter, 0);
  if ( !exchangeOriginLbAfter )
    goto LABEL_81;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)exchangeOriginLbAfter, 0);
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  exchangeOriginLbAfter = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_81;
  max_length = exchangeOriginItemList->max_length;
  v11 = (UserItemMaster_o *)exchangeOriginLbAfter;
  if ( (_DWORD)max_length != 3 )
  {
    if ( (int)max_length < 1 )
    {
LABEL_75:
      exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject2After;
      if ( exchangeOriginLbAfter )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0);
        exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObjectAfter;
        if ( exchangeOriginLbAfter )
        {
          v27 = -1032847360;
          goto LABEL_78;
        }
      }
    }
    else
    {
      v28 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2After = this->fields.exchangeOriginItemIcon2After;
        if ( !exchangeOriginItemIcon2After )
          break;
        if ( v28 >= LODWORD(exchangeOriginItemIcon2After->max_length) || v28 >= (unsigned int)max_length )
LABEL_82:
          sub_1C2D6F4(exchangeOriginLbAfter, *(_QWORD *)&completeNum, v8);
        v30 = exchangeOriginItemList->m_Items[v28];
        if ( !v30 )
          break;
        objectId = v30->fields.objectId;
        v32 = exchangeOriginItemIcon2After->m_Items[v28];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v32, objectId, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        exchangeOriginLbAfter = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          exchangeOriginLbAfter = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
        }
        v33 = this->fields.exchangeOriginItemList;
        if ( !v33 )
          break;
        if ( v28 >= LODWORD(v33->max_length) )
          goto LABEL_82;
        v34 = v33->m_Items[v28];
        if ( !v34 )
          break;
        if ( !v11 )
          break;
        exchangeOriginLbAfter = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                             v11,
                                                             *(_QWORD *)(exchangeOriginLbAfter[7].fields.m_CachedPtr + 64),
                                                             v34->fields.objectId,
                                                             0);
        exchangeOriginCounts2After = this->fields.exchangeOriginCounts2After;
        if ( !exchangeOriginCounts2After )
          break;
        if ( v28 >= LODWORD(exchangeOriginCounts2After->max_length) )
          goto LABEL_82;
        if ( !exchangeOriginLbAfter )
          break;
        v36 = this->fields.exchangeOriginItemList;
        if ( !v36 )
          break;
        if ( v28 >= LODWORD(v36->max_length) )
          goto LABEL_82;
        v37 = v36->m_Items[v28];
        if ( !v37 )
          break;
        v38 = exchangeOriginCounts2After->m_Items[v28];
        klass_high = HIDWORD(exchangeOriginLbAfter[1].klass);
        num = v37->fields.num;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        exchangeOriginLbAfter = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormatLong(
                                                             klass_high + num * completeNum,
                                                             0);
        if ( !v38 )
          break;
        UILabel__set_text(v38, (System_String_o *)exchangeOriginLbAfter, 0);
        exchangeOriginCountKinds2After = this->fields.exchangeOriginCountKinds2After;
        if ( !exchangeOriginCountKinds2After )
          break;
        if ( v28 >= LODWORD(exchangeOriginCountKinds2After->max_length) )
          goto LABEL_82;
        v42 = exchangeOriginCountKinds2After->m_Items[v28];
        exchangeOriginLbAfter = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_13498/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/,
                                                             0);
        if ( !v42 )
          break;
        UILabel__set_text(v42, (System_String_o *)exchangeOriginLbAfter, 0);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(max_length) = exchangeOriginItemList->max_length;
        if ( (int)++v28 >= (int)max_length )
          goto LABEL_75;
      }
    }
LABEL_81:
    sub_1C2D6EC(exchangeOriginLbAfter, *(_QWORD *)&completeNum);
  }
  v12 = 0;
  do
  {
    exchangeOriginItemIconAfter = this->fields.exchangeOriginItemIconAfter;
    if ( !exchangeOriginItemIconAfter )
      goto LABEL_81;
    if ( (unsigned int)v12 >= LODWORD(exchangeOriginItemIconAfter->max_length) || v12 >= (unsigned int)max_length )
      goto LABEL_82;
    v14 = exchangeOriginItemList->m_Items[v12];
    if ( !v14 )
      goto LABEL_81;
    v15 = v14->fields.objectId;
    v16 = exchangeOriginItemIconAfter->m_Items[v12];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v16, v15, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    exchangeOriginLbAfter = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      exchangeOriginLbAfter = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
    }
    v17 = this->fields.exchangeOriginItemList;
    if ( !v17 )
      goto LABEL_81;
    if ( (unsigned int)v12 >= LODWORD(v17->max_length) )
      goto LABEL_82;
    v18 = v17->m_Items[v12];
    if ( !v18 )
      goto LABEL_81;
    if ( !v11 )
      goto LABEL_81;
    exchangeOriginLbAfter = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                         v11,
                                                         *(_QWORD *)(exchangeOriginLbAfter[7].fields.m_CachedPtr + 64),
                                                         v18->fields.objectId,
                                                         0);
    exchangeOriginCountsAfter = this->fields.exchangeOriginCountsAfter;
    if ( !exchangeOriginCountsAfter )
      goto LABEL_81;
    if ( (unsigned int)v12 >= LODWORD(exchangeOriginCountsAfter->max_length) )
      goto LABEL_82;
    if ( !exchangeOriginLbAfter )
      goto LABEL_81;
    v20 = this->fields.exchangeOriginItemList;
    if ( !v20 )
      goto LABEL_81;
    if ( (unsigned int)v12 >= LODWORD(v20->max_length) )
      goto LABEL_82;
    v21 = v20->m_Items[v12];
    if ( !v21 )
      goto LABEL_81;
    v22 = exchangeOriginCountsAfter->m_Items[v12];
    v23 = HIDWORD(exchangeOriginLbAfter[1].klass);
    v24 = v21->fields.num;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    exchangeOriginLbAfter = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormatLong(
                                                         v23 + v24 * completeNum,
                                                         0);
    if ( !v22 )
      goto LABEL_81;
    UILabel__set_text(v22, (System_String_o *)exchangeOriginLbAfter, 0);
    exchangeOriginCountKindsAfter = this->fields.exchangeOriginCountKindsAfter;
    if ( !exchangeOriginCountKindsAfter )
      goto LABEL_81;
    if ( (unsigned int)v12 >= LODWORD(exchangeOriginCountKindsAfter->max_length) )
      goto LABEL_82;
    v26 = exchangeOriginCountKindsAfter->m_Items[v12];
    exchangeOriginLbAfter = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13498/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/,
                                                         0);
    if ( !v26 )
      goto LABEL_81;
    UILabel__set_text(v26, (System_String_o *)exchangeOriginLbAfter, 0);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_81;
    LODWORD(max_length) = exchangeOriginItemList->max_length;
    ++v12;
  }
  while ( v12 < (int)max_length );
  exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObjectAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0);
  exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject2After;
  if ( !exchangeOriginLbAfter )
    goto LABEL_81;
  v27 = -1023279104;
LABEL_78:
  v43 = *(float *)&v27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 0, 0);
  exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginLbAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_81;
  exchangeOriginLbAfter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(exchangeOriginLbAfter, 0);
  if ( !exchangeOriginLbAfter )
    goto LABEL_81;
  v45.fields.y = y;
  v45.fields.z = z;
  v45.fields.x = v43;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLbAfter, v45, 0);
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        EventTradeListViewItem_o *item,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *v6; // x20
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
  bool v17; // w21
  const MethodInfo *v18; // x1
  int32_t NowTradeNum; // w0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  int32_t v23; // w21
  const MethodInfo *v24; // x3

  v6 = this;
  if ( (byte_4C21CC6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13497/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/);
    sub_1C2D490(&StringLiteral_13502/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/);
    sub_1C2D490(&StringLiteral_13503/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_13500/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_13496/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/);
    sub_1C2D490(&StringLiteral_13499/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/);
    this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_1C2D490(&StringLiteral_13501/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/);
    byte_4C21CC6 = 1;
  }
  if ( !item )
    goto LABEL_29;
  p_tradeGoodsEntity = &v6->fields.tradeGoodsEntity;
  v6->fields.tradeGoodsEntity = item->fields._TradeGoodsEntity_k__BackingField;
  sub_1C2D434(&v6->fields.tradeGoodsEntity);
  v6->fields.onDecide = onDecide;
  sub_1C2D434(&v6->fields.onDecide);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)v6,
                                                                 0);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  titleLabel = v6->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13503/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                                 0);
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0);
  detailLabel = v6->fields.detailLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13500/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                                 0);
  if ( !detailLabel )
    goto LABEL_29;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0);
  exchangeOriginLb = v6->fields.exchangeOriginLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13497/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                                 0);
  if ( !exchangeOriginLb )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0);
  exchangeOriginLbAfter = v6->fields.exchangeOriginLbAfter;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13496/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                                 0);
  if ( !exchangeOriginLbAfter )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLbAfter, (System_String_o *)this, 0);
  cancelButtonLb = v6->fields.cancelButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/,
                                                                 0);
  if ( !cancelButtonLb )
    goto LABEL_29;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
  decideButtonLb = v6->fields.decideButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13499/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                                 0);
  if ( !decideButtonLb )
    goto LABEL_29;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0);
  returnItemsLabel = v6->fields.returnItemsLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13501/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                                 0);
  if ( !returnItemsLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsLabel, (System_String_o *)this, 0);
  returnItemsNoneLabel = v6->fields.returnItemsNoneLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13502/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                                 0);
  if ( !returnItemsNoneLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsNoneLabel, (System_String_o *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_29;
  if ( !this )
    goto LABEL_29;
  v6->fields.exchangeOriginItemList = CommonConsumeMaster__GetSortedEntityList(
                                        (CommonConsumeMaster_o *)this,
                                        (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                        0);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_1C2D434(&v6->fields.exchangeOriginItemList);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_29;
  v17 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.returnItemsNoneLabel;
  if ( !this )
    goto LABEL_29;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v17, 0);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.returnItemsBaseObj;
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v17, 0);
  EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBase(v6, v18);
  NowTradeNum = EventTradeListViewItem__get_NowTradeNum(item, 0);
  EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBaseAfter(v6, NowTradeNum, v20);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)EventTradeListViewItemDraw__GetDisplayMode(3, item, v21);
  if ( !v6->fields.listViewItemDraw
    || (v23 = (int)this,
        EventTradeListViewItemDraw__SetItem(v6->fields.listViewItemDraw, item, (int32_t)this, v22),
        (this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.listViewItemDraw) == 0) )
  {
LABEL_29:
    sub_1C2D6EC(this, item);
  }
  EventTradeListViewItemDraw__UpdateItem((EventTradeListViewItemDraw_o *)this, item, v23, v24);
}


void EventTradeSweetsWithdrawalConfirmDialogComponent___Close_b__45_0(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventTradeSweetsWithdrawalConfirmDialogComponent__Init(this, this->fields.eventId, v2);
}


UnityEngine_GameObject_o *EventTradeSweetsWithdrawalConfirmDialogComponent__get_closeBtnObject(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C21CCC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21CCC = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}