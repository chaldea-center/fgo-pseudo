void EventTradeSweetsWithdrawalConfirmDialogComponent___ctor(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596ADA4 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596ADA4 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__CallOnDecide(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_bool__o *onDecide; // x20

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_596ADA2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__);
    byte_596ADA2 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__EndOpen(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__Init(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tradeGoodsEntity, 0, v7, v8, v9, v10, v11, v12);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__OnClickCancel(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596ADA1 & 1) == 0 )
  {
    sub_2213A60(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__);
    byte_596ADA1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596ADA0 & 1) == 0 )
  {
    sub_2213A60(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__);
    byte_596ADA0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596AD9C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__);
    byte_596AD9C = 1;
  }
  if ( !this->fields.state )
  {
    EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(this, item, onDecide, method);
    this->fields.state = 1;
    v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v7, 0, 0, 0);
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


void EventTradeSweetsWithdrawalConfirmDialogComponent__SerializeFieldNotNullCheck(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0);
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBase(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *exchangeOriginLb; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  UserItemMaster_o *v8; // x20
  unsigned int v9; // w25
  unsigned int v10; // w10
  struct UISprite_array *exchangeOriginItemIcon; // x9
  CommonConsumeEntity_o *v12; // x8
  int32_t v13; // w23
  UISprite_o *v14; // x22
  __int64 v15; // x2
  struct CommonConsumeEntity_array *v16; // x8
  CommonConsumeEntity_o *v17; // x8
  __int64 v18; // x2
  struct UILabel_array *exchangeOriginCounts; // x9
  int64_t v20; // x23
  UILabel_o *v21; // x22
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v23; // x22
  unsigned int max_length; // w10
  struct UISprite_array *exchangeOriginItemIcon2; // x9
  CommonConsumeEntity_o *v26; // x8
  int32_t objectId; // w23
  UISprite_o *v28; // x22
  __int64 v29; // x2
  struct CommonConsumeEntity_array *v30; // x8
  CommonConsumeEntity_o *v31; // x8
  __int64 v32; // x2
  struct UILabel_array *exchangeOriginCounts2; // x9
  int64_t klass_high; // x23
  UILabel_o *v35; // x22
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v37; // x22
  int v38; // w8
  float v39; // s10
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596AD9E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_14059/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/);
    byte_596AD9E = 1;
  }
  exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginLb;
  if ( !exchangeOriginLb )
    goto LABEL_64;
  exchangeOriginLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(exchangeOriginLb, 0);
  if ( !exchangeOriginLb )
    goto LABEL_64;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)exchangeOriginLb, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  exchangeOriginLb = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_64;
  v8 = (UserItemMaster_o *)exchangeOriginLb;
  v9 = 0;
  if ( LODWORD(exchangeOriginItemList->max_length) != 3 )
  {
    while ( 1 )
    {
      max_length = exchangeOriginItemList->max_length;
      if ( (int)v9 >= (int)max_length )
        break;
      exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
      if ( !exchangeOriginItemIcon2 )
        goto LABEL_64;
      if ( v9 >= LODWORD(exchangeOriginItemIcon2->max_length) || v9 >= max_length )
LABEL_74:
        sub_2213CE4(exchangeOriginLb);
      v26 = exchangeOriginItemList->m_Items[v9];
      if ( v26 )
      {
        objectId = v26->fields.objectId;
        v28 = exchangeOriginItemIcon2->m_Items[v9];
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v6);
        AtlasManager__SetItem(v28, objectId, 0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v29);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        exchangeOriginLb = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v29);
          exchangeOriginLb = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
        }
        v30 = this->fields.exchangeOriginItemList;
        if ( v30 )
        {
          if ( v9 >= LODWORD(v30->max_length) )
            goto LABEL_74;
          v31 = v30->m_Items[v9];
          if ( v31 )
          {
            if ( v8 )
            {
              exchangeOriginLb = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                              v8,
                                                              *(_QWORD *)(exchangeOriginLb[7].fields.m_CachedPtr + 64),
                                                              v31->fields.objectId,
                                                              0);
              exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
              if ( exchangeOriginCounts2 )
              {
                if ( v9 >= LODWORD(exchangeOriginCounts2->max_length) )
                  goto LABEL_74;
                if ( exchangeOriginLb )
                {
                  klass_high = SHIDWORD(exchangeOriginLb[1].klass);
                  v35 = exchangeOriginCounts2->m_Items[v9];
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v32);
                  exchangeOriginLb = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormatLong(klass_high, 0);
                  if ( v35 )
                  {
                    UILabel__set_text(v35, (System_String_o *)exchangeOriginLb, 0);
                    exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
                    if ( exchangeOriginCountKinds2 )
                    {
                      if ( v9 >= LODWORD(exchangeOriginCountKinds2->max_length) )
                        goto LABEL_74;
                      v37 = exchangeOriginCountKinds2->m_Items[v9];
                      exchangeOriginLb = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_14059/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/,
                                                                      0);
                      if ( v37 )
                      {
                        ++v9;
                        UILabel__set_text(v37, (System_String_o *)exchangeOriginLb, 0);
                        exchangeOriginItemList = this->fields.exchangeOriginItemList;
                        if ( exchangeOriginItemList )
                          continue;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_64;
    }
    exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject2;
    if ( exchangeOriginLb )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0);
      exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject;
      if ( exchangeOriginLb )
      {
        v38 = -1032847360;
        goto LABEL_71;
      }
    }
LABEL_64:
    sub_2213CDC(exchangeOriginLb, method);
  }
  while ( 1 )
  {
    v10 = exchangeOriginItemList->max_length;
    if ( (int)v9 >= (int)v10 )
      break;
    exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
    if ( !exchangeOriginItemIcon )
      goto LABEL_64;
    if ( v9 >= LODWORD(exchangeOriginItemIcon->max_length) || v9 >= v10 )
      goto LABEL_74;
    v12 = exchangeOriginItemList->m_Items[v9];
    if ( v12 )
    {
      v13 = v12->fields.objectId;
      v14 = exchangeOriginItemIcon->m_Items[v9];
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v6);
      AtlasManager__SetItem(v14, v13, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v15);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      exchangeOriginLb = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v15);
        exchangeOriginLb = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
      }
      v16 = this->fields.exchangeOriginItemList;
      if ( v16 )
      {
        if ( v9 >= LODWORD(v16->max_length) )
          goto LABEL_74;
        v17 = v16->m_Items[v9];
        if ( v17 )
        {
          if ( v8 )
          {
            exchangeOriginLb = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                            v8,
                                                            *(_QWORD *)(exchangeOriginLb[7].fields.m_CachedPtr + 64),
                                                            v17->fields.objectId,
                                                            0);
            exchangeOriginCounts = this->fields.exchangeOriginCounts;
            if ( exchangeOriginCounts )
            {
              if ( v9 >= LODWORD(exchangeOriginCounts->max_length) )
                goto LABEL_74;
              if ( exchangeOriginLb )
              {
                v20 = SHIDWORD(exchangeOriginLb[1].klass);
                v21 = exchangeOriginCounts->m_Items[v9];
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v18);
                exchangeOriginLb = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormatLong(v20, 0);
                if ( v21 )
                {
                  UILabel__set_text(v21, (System_String_o *)exchangeOriginLb, 0);
                  exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
                  if ( exchangeOriginCountKinds )
                  {
                    if ( v9 >= LODWORD(exchangeOriginCountKinds->max_length) )
                      goto LABEL_74;
                    v23 = exchangeOriginCountKinds->m_Items[v9];
                    exchangeOriginLb = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_14059/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/,
                                                                    0);
                    if ( v23 )
                    {
                      ++v9;
                      UILabel__set_text(v23, (System_String_o *)exchangeOriginLb, 0);
                      exchangeOriginItemList = this->fields.exchangeOriginItemList;
                      if ( exchangeOriginItemList )
                        continue;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_64;
  }
  exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject;
  if ( !exchangeOriginLb )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0);
  exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject2;
  if ( !exchangeOriginLb )
    goto LABEL_64;
  v38 = -1023279104;
LABEL_71:
  v39 = *(float *)&v38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 0, 0);
  exchangeOriginLb = (UnityEngine_Component_o *)this->fields.exchangeOriginLb;
  if ( !exchangeOriginLb )
    goto LABEL_64;
  exchangeOriginLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(exchangeOriginLb, 0);
  if ( !exchangeOriginLb )
    goto LABEL_64;
  v41.fields.y = localPosition.fields.y;
  v41.fields.z = localPosition.fields.z;
  v41.fields.x = v39;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLb, v41, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBaseAfter(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        int32_t completeNum,
        const MethodInfo *method)
{
  UnityEngine_Component_o *exchangeOriginLbAfter; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x2
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  UserItemMaster_o *v10; // x21
  unsigned int v11; // w25
  unsigned int v12; // w10
  struct UISprite_array *exchangeOriginItemIconAfter; // x9
  CommonConsumeEntity_o *v14; // x8
  int32_t v15; // w24
  UISprite_o *v16; // x23
  __int64 v17; // x2
  struct CommonConsumeEntity_array *v18; // x8
  CommonConsumeEntity_o *v19; // x8
  __int64 v20; // x2
  struct UILabel_array *exchangeOriginCountsAfter; // x9
  struct CommonConsumeEntity_array *v22; // x8
  CommonConsumeEntity_o *v23; // x10
  int v24; // w24
  int32_t v25; // w27
  UILabel_o *v26; // x23
  struct UILabel_array *exchangeOriginCountKindsAfter; // x8
  UILabel_o *v28; // x23
  unsigned int v29; // w25
  unsigned int max_length; // w10
  struct UISprite_array *exchangeOriginItemIcon2After; // x9
  CommonConsumeEntity_o *v32; // x8
  int32_t objectId; // w24
  UISprite_o *v34; // x23
  __int64 v35; // x2
  struct CommonConsumeEntity_array *v36; // x8
  CommonConsumeEntity_o *v37; // x8
  __int64 v38; // x2
  struct UILabel_array *exchangeOriginCounts2After; // x9
  struct CommonConsumeEntity_array *v40; // x8
  CommonConsumeEntity_o *v41; // x10
  int klass_high; // w24
  int32_t num; // w27
  UILabel_o *v44; // x23
  struct UILabel_array *exchangeOriginCountKinds2After; // x8
  UILabel_o *v46; // x23
  int v47; // w8
  float v48; // s10
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596AD9F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_14059/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/);
    byte_596AD9F = 1;
  }
  exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginLbAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_72;
  exchangeOriginLbAfter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(exchangeOriginLbAfter, 0);
  if ( !exchangeOriginLbAfter )
    goto LABEL_72;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)exchangeOriginLbAfter, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  exchangeOriginLbAfter = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_72;
  v10 = (UserItemMaster_o *)exchangeOriginLbAfter;
  if ( LODWORD(exchangeOriginItemList->max_length) != 3 )
  {
    v29 = 0;
    while ( 1 )
    {
      max_length = exchangeOriginItemList->max_length;
      if ( (int)v29 >= (int)max_length )
        break;
      exchangeOriginItemIcon2After = this->fields.exchangeOriginItemIcon2After;
      if ( !exchangeOriginItemIcon2After )
        goto LABEL_72;
      if ( v29 >= LODWORD(exchangeOriginItemIcon2After->max_length) || v29 >= max_length )
LABEL_82:
        sub_2213CE4(exchangeOriginLbAfter);
      v32 = exchangeOriginItemList->m_Items[v29];
      if ( v32 )
      {
        objectId = v32->fields.objectId;
        v34 = exchangeOriginItemIcon2After->m_Items[v29];
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&completeNum, v8);
        AtlasManager__SetItem(v34, objectId, 0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&completeNum, v35);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        exchangeOriginLbAfter = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&completeNum, v35);
          exchangeOriginLbAfter = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
        }
        v36 = this->fields.exchangeOriginItemList;
        if ( v36 )
        {
          if ( v29 >= LODWORD(v36->max_length) )
            goto LABEL_82;
          v37 = v36->m_Items[v29];
          if ( v37 )
          {
            if ( v10 )
            {
              exchangeOriginLbAfter = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                                   v10,
                                                                   *(_QWORD *)(exchangeOriginLbAfter[7].fields.m_CachedPtr
                                                                             + 64),
                                                                   v37->fields.objectId,
                                                                   0);
              exchangeOriginCounts2After = this->fields.exchangeOriginCounts2After;
              if ( exchangeOriginCounts2After )
              {
                if ( v29 >= LODWORD(exchangeOriginCounts2After->max_length) )
                  goto LABEL_82;
                if ( exchangeOriginLbAfter )
                {
                  v40 = this->fields.exchangeOriginItemList;
                  if ( v40 )
                  {
                    if ( v29 >= LODWORD(v40->max_length) )
                      goto LABEL_82;
                    v41 = v40->m_Items[v29];
                    if ( v41 )
                    {
                      klass_high = HIDWORD(exchangeOriginLbAfter[1].klass);
                      num = v41->fields.num;
                      v44 = exchangeOriginCounts2After->m_Items[v29];
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&completeNum, v38);
                      exchangeOriginLbAfter = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormatLong(
                                                                           klass_high + num * completeNum,
                                                                           0);
                      if ( v44 )
                      {
                        UILabel__set_text(v44, (System_String_o *)exchangeOriginLbAfter, 0);
                        exchangeOriginCountKinds2After = this->fields.exchangeOriginCountKinds2After;
                        if ( exchangeOriginCountKinds2After )
                        {
                          if ( v29 >= LODWORD(exchangeOriginCountKinds2After->max_length) )
                            goto LABEL_82;
                          v46 = exchangeOriginCountKinds2After->m_Items[v29];
                          exchangeOriginLbAfter = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_14059/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/,
                                                                               0);
                          if ( v46 )
                          {
                            ++v29;
                            UILabel__set_text(v46, (System_String_o *)exchangeOriginLbAfter, 0);
                            exchangeOriginItemList = this->fields.exchangeOriginItemList;
                            if ( exchangeOriginItemList )
                              continue;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_72;
    }
    exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject2After;
    if ( exchangeOriginLbAfter )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0);
      exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObjectAfter;
      if ( exchangeOriginLbAfter )
      {
        v47 = -1032847360;
        goto LABEL_79;
      }
    }
LABEL_72:
    sub_2213CDC(exchangeOriginLbAfter, *(_QWORD *)&completeNum);
  }
  v11 = 0;
  while ( 1 )
  {
    v12 = exchangeOriginItemList->max_length;
    if ( (int)v11 >= (int)v12 )
      break;
    exchangeOriginItemIconAfter = this->fields.exchangeOriginItemIconAfter;
    if ( !exchangeOriginItemIconAfter )
      goto LABEL_72;
    if ( v11 >= LODWORD(exchangeOriginItemIconAfter->max_length) || v11 >= v12 )
      goto LABEL_82;
    v14 = exchangeOriginItemList->m_Items[v11];
    if ( v14 )
    {
      v15 = v14->fields.objectId;
      v16 = exchangeOriginItemIconAfter->m_Items[v11];
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&completeNum, v8);
      AtlasManager__SetItem(v16, v15, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&completeNum, v17);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      exchangeOriginLbAfter = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&completeNum, v17);
        exchangeOriginLbAfter = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
      }
      v18 = this->fields.exchangeOriginItemList;
      if ( v18 )
      {
        if ( v11 >= LODWORD(v18->max_length) )
          goto LABEL_82;
        v19 = v18->m_Items[v11];
        if ( v19 )
        {
          if ( v10 )
          {
            exchangeOriginLbAfter = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                                 v10,
                                                                 *(_QWORD *)(exchangeOriginLbAfter[7].fields.m_CachedPtr
                                                                           + 64),
                                                                 v19->fields.objectId,
                                                                 0);
            exchangeOriginCountsAfter = this->fields.exchangeOriginCountsAfter;
            if ( exchangeOriginCountsAfter )
            {
              if ( v11 >= LODWORD(exchangeOriginCountsAfter->max_length) )
                goto LABEL_82;
              if ( exchangeOriginLbAfter )
              {
                v22 = this->fields.exchangeOriginItemList;
                if ( v22 )
                {
                  if ( v11 >= LODWORD(v22->max_length) )
                    goto LABEL_82;
                  v23 = v22->m_Items[v11];
                  if ( v23 )
                  {
                    v24 = HIDWORD(exchangeOriginLbAfter[1].klass);
                    v25 = v23->fields.num;
                    v26 = exchangeOriginCountsAfter->m_Items[v11];
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&completeNum, v20);
                    exchangeOriginLbAfter = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormatLong(
                                                                         v24 + v25 * completeNum,
                                                                         0);
                    if ( v26 )
                    {
                      UILabel__set_text(v26, (System_String_o *)exchangeOriginLbAfter, 0);
                      exchangeOriginCountKindsAfter = this->fields.exchangeOriginCountKindsAfter;
                      if ( exchangeOriginCountKindsAfter )
                      {
                        if ( v11 >= LODWORD(exchangeOriginCountKindsAfter->max_length) )
                          goto LABEL_82;
                        v28 = exchangeOriginCountKindsAfter->m_Items[v11];
                        exchangeOriginLbAfter = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_14059/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/,
                                                                             0);
                        if ( v28 )
                        {
                          ++v11;
                          UILabel__set_text(v28, (System_String_o *)exchangeOriginLbAfter, 0);
                          exchangeOriginItemList = this->fields.exchangeOriginItemList;
                          if ( exchangeOriginItemList )
                            continue;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_72;
  }
  exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObjectAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0);
  exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginDispObject2After;
  if ( !exchangeOriginLbAfter )
    goto LABEL_72;
  v47 = -1023279104;
LABEL_79:
  v48 = *(float *)&v47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 0, 0);
  exchangeOriginLbAfter = (UnityEngine_Component_o *)this->fields.exchangeOriginLbAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_72;
  exchangeOriginLbAfter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(exchangeOriginLbAfter, 0);
  if ( !exchangeOriginLbAfter )
    goto LABEL_72;
  v50.fields.y = localPosition.fields.y;
  v50.fields.z = localPosition.fields.z;
  v50.fields.x = v48;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLbAfter, v50, 0);
}


void EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        EventTradeListViewItem_o *item,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *v10; // x20
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *titleLabel; // x21
  UILabel_o *detailLabel; // x21
  UILabel_o *exchangeOriginLb; // x21
  UILabel_o *exchangeOriginLbAfter; // x21
  UILabel_o *cancelButtonLb; // x21
  UILabel_o *decideButtonLb; // x21
  UILabel_o *returnItemsLabel; // x21
  UILabel_o *returnItemsNoneLabel; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  bool v39; // w21
  const MethodInfo *v40; // x1
  int32_t NowTradeNum; // w0
  const MethodInfo *v42; // x2
  int32_t v43; // w21

  v10 = this;
  if ( (byte_596AD9D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_14058/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/);
    sub_2213A60(&StringLiteral_14063/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/);
    sub_2213A60(&StringLiteral_14064/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_14061/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_14057/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/);
    sub_2213A60(&StringLiteral_14060/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/);
    this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_2213A60(&StringLiteral_14062/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/);
    byte_596AD9D = 1;
  }
  if ( !item )
    goto LABEL_29;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  v10->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.tradeGoodsEntity,
    (int32_t)TradeGoodsEntity_k__BackingField,
    (System_String_o *)onDecide,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.onDecide = onDecide;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.onDecide,
    (int32_t)onDecide,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)v10,
                                                                 0);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  titleLabel = v10->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_14064/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                                 0);
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0);
  detailLabel = v10->fields.detailLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_14061/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                                 0);
  if ( !detailLabel )
    goto LABEL_29;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0);
  exchangeOriginLb = v10->fields.exchangeOriginLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_14058/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                                 0);
  if ( !exchangeOriginLb )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0);
  exchangeOriginLbAfter = v10->fields.exchangeOriginLbAfter;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_14057/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                                 0);
  if ( !exchangeOriginLbAfter )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLbAfter, (System_String_o *)this, 0);
  cancelButtonLb = v10->fields.cancelButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/,
                                                                 0);
  if ( !cancelButtonLb )
    goto LABEL_29;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
  decideButtonLb = v10->fields.decideButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_14060/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                                 0);
  if ( !decideButtonLb )
    goto LABEL_29;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0);
  returnItemsLabel = v10->fields.returnItemsLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_14062/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                                 0);
  if ( !returnItemsLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsLabel, (System_String_o *)this, 0);
  returnItemsNoneLabel = v10->fields.returnItemsNoneLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_14063/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                                 0);
  if ( !returnItemsNoneLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsNoneLabel, (System_String_o *)this, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28, v29);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  tradeGoodsEntity = v10->fields.tradeGoodsEntity;
  if ( !tradeGoodsEntity )
    goto LABEL_29;
  if ( !this )
    goto LABEL_29;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)this,
                       tradeGoodsEntity->fields.commonConsumeId,
                       0);
  v10->fields.exchangeOriginItemList = SortedEntityList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.exchangeOriginItemList,
    (int32_t)SortedEntityList,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_29;
  v39 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v10->fields.returnItemsNoneLabel;
  if ( !this )
    goto LABEL_29;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v39, 0);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v10->fields.returnItemsBaseObj;
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v39, 0);
  EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBase(v10, v40);
  NowTradeNum = EventTradeListViewItem__get_NowTradeNum(item, 0);
  EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBaseAfter(v10, NowTradeNum, v42);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)EventTradeListViewItemDraw__GetDisplayMode(3, item, 0);
  if ( !v10->fields.listViewItemDraw
    || (v43 = (int)this,
        EventTradeListViewItemDraw__SetItem(v10->fields.listViewItemDraw, item, (int32_t)this, 0),
        (this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v10->fields.listViewItemDraw) == 0) )
  {
LABEL_29:
    sub_2213CDC(this, item);
  }
  EventTradeListViewItemDraw__UpdateItem((EventTradeListViewItemDraw_o *)this, item, v43, 0);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596ADA3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ADA3 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}