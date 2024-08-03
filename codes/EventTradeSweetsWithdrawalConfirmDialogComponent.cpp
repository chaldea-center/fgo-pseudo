void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent___ctor(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A00716 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_4A00716 = 1;
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
    sub_1B6406C(p_onDecide, 0, (int32_t)method, v3);
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4A00714 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__, v4);
    byte_4A00714 = 1;
  }
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
  int32_t v6; // w2
  int32_t v7; // w3

  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tradeGoodsEntity, 0, v6, v7);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__OnClickCancel(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A00713 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__, method);
    byte_4A00713 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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

  if ( (byte_4A00712 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__, method);
    byte_4A00712 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x20

  if ( (byte_4A0070E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, item);
    sub_1B640C8(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__, v7);
    byte_4A0070E = 1;
  }
  if ( !this->fields.state )
  {
    EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(this, item, onDecide, method);
    this->fields.state = 1;
    v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v10, 0, 0LL);
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
  __int64 v11; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v13; // x9
  UserItemMaster_o *v14; // x20
  int v15; // w23
  struct UISprite_array *exchangeOriginItemIcon; // x10
  CommonConsumeEntity_o *v17; // x8
  UISprite_o *v18; // x21
  int32_t v19; // w22
  struct CommonConsumeEntity_array *v20; // x8
  CommonConsumeEntity_o *v21; // x8
  struct UILabel_array *exchangeOriginCounts; // x9
  UILabel_o *v23; // x21
  int64_t v24; // x22
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v26; // x21
  int v27; // w8
  unsigned int v28; // w23
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v30; // x8
  UISprite_o *v31; // x21
  int32_t objectId; // w22
  struct CommonConsumeEntity_array *v33; // x8
  CommonConsumeEntity_o *v34; // x8
  struct UILabel_array *exchangeOriginCounts2; // x9
  UILabel_o *v36; // x21
  int64_t v37; // x22
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v39; // x21
  float v40; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A00710 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_13342/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, v7);
    byte_4A00710 = 1;
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
  exchangeOriginLb = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_67;
  v13 = *(_QWORD *)&exchangeOriginItemList->max_length;
  v14 = (UserItemMaster_o *)exchangeOriginLb;
  if ( (_DWORD)v13 != 3 )
  {
    if ( (int)v13 < 1 )
    {
LABEL_61:
      exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject2;
      if ( exchangeOriginLb )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0LL);
        exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject;
        if ( exchangeOriginLb )
        {
          v27 = -1032847360;
          goto LABEL_64;
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
LABEL_68:
          sub_1B6432C(exchangeOriginLb, v11);
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
        exchangeOriginLb = NetworkManager__get_UserId(0LL);
        v33 = this->fields.exchangeOriginItemList;
        if ( !v33 )
          break;
        if ( v28 >= v33->max_length )
          goto LABEL_68;
        v34 = v33->m_Items[v28];
        if ( !v34 )
          break;
        if ( !v14 )
          break;
        exchangeOriginLb = (int64_t)UserItemMaster__GetEntityDefinitely(
                                      v14,
                                      exchangeOriginLb,
                                      v34->fields.objectId,
                                      0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v28 >= exchangeOriginCounts2->max_length )
          goto LABEL_68;
        if ( !exchangeOriginLb )
          break;
        v36 = exchangeOriginCounts2->m_Items[v28];
        v37 = *(int *)(exchangeOriginLb + 28);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        exchangeOriginLb = (int64_t)LocalizationManager__GetNumberFormatLong(v37, 0LL);
        if ( !v36 )
          break;
        UILabel__set_text(v36, (System_String_o *)exchangeOriginLb, 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v28 >= exchangeOriginCountKinds2->max_length )
          goto LABEL_68;
        v39 = exchangeOriginCountKinds2->m_Items[v28];
        exchangeOriginLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13342/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
        if ( !v39 )
          break;
        UILabel__set_text(v39, (System_String_o *)exchangeOriginLb, 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v13) = exchangeOriginItemList->max_length;
        if ( (int)++v28 >= (int)v13 )
          goto LABEL_61;
      }
    }
LABEL_67:
    sub_1B64324(exchangeOriginLb);
  }
  v15 = 0;
  do
  {
    exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
    if ( !exchangeOriginItemIcon )
      goto LABEL_67;
    if ( v15 >= exchangeOriginItemIcon->max_length || v15 >= (unsigned int)v13 )
      goto LABEL_68;
    v17 = exchangeOriginItemList->m_Items[v15];
    if ( !v17 )
      goto LABEL_67;
    v18 = exchangeOriginItemIcon->m_Items[v15];
    v19 = v17->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v18, v19, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    exchangeOriginLb = NetworkManager__get_UserId(0LL);
    v20 = this->fields.exchangeOriginItemList;
    if ( !v20 )
      goto LABEL_67;
    if ( v15 >= v20->max_length )
      goto LABEL_68;
    v21 = v20->m_Items[v15];
    if ( !v21 )
      goto LABEL_67;
    if ( !v14 )
      goto LABEL_67;
    exchangeOriginLb = (int64_t)UserItemMaster__GetEntityDefinitely(v14, exchangeOriginLb, v21->fields.objectId, 0LL);
    exchangeOriginCounts = this->fields.exchangeOriginCounts;
    if ( !exchangeOriginCounts )
      goto LABEL_67;
    if ( v15 >= exchangeOriginCounts->max_length )
      goto LABEL_68;
    if ( !exchangeOriginLb )
      goto LABEL_67;
    v23 = exchangeOriginCounts->m_Items[v15];
    v24 = *(int *)(exchangeOriginLb + 28);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    exchangeOriginLb = (int64_t)LocalizationManager__GetNumberFormatLong(v24, 0LL);
    if ( !v23 )
      goto LABEL_67;
    UILabel__set_text(v23, (System_String_o *)exchangeOriginLb, 0LL);
    exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
    if ( !exchangeOriginCountKinds )
      goto LABEL_67;
    if ( v15 >= exchangeOriginCountKinds->max_length )
      goto LABEL_68;
    v26 = exchangeOriginCountKinds->m_Items[v15];
    exchangeOriginLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13342/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
    if ( !v26 )
      goto LABEL_67;
    UILabel__set_text(v26, (System_String_o *)exchangeOriginLb, 0LL);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_67;
    LODWORD(v13) = exchangeOriginItemList->max_length;
    ++v15;
  }
  while ( v15 < (int)v13 );
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0LL);
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject2;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  v27 = -1023279104;
LABEL_64:
  v40 = *(float *)&v27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 0, 0LL);
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginLb;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  exchangeOriginLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)exchangeOriginLb, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_67;
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
  int64_t exchangeOriginLbAfter; // x0
  float y; // s8
  float z; // s9
  __int64 v13; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v15; // x9
  UserItemMaster_o *v16; // x21
  int v17; // w24
  struct UISprite_array *exchangeOriginItemIconAfter; // x10
  CommonConsumeEntity_o *v19; // x8
  int32_t v20; // w23
  UISprite_o *v21; // x22
  struct CommonConsumeEntity_array *v22; // x8
  CommonConsumeEntity_o *v23; // x8
  struct UILabel_array *exchangeOriginCountsAfter; // x9
  struct CommonConsumeEntity_array *v25; // x8
  CommonConsumeEntity_o *v26; // x10
  UILabel_o *v27; // x22
  int v28; // w23
  int32_t v29; // w25
  struct UILabel_array *exchangeOriginCountKindsAfter; // x8
  UILabel_o *v31; // x22
  int v32; // w8
  unsigned int v33; // w24
  struct UISprite_array *exchangeOriginItemIcon2After; // x10
  CommonConsumeEntity_o *v35; // x8
  int32_t objectId; // w23
  UISprite_o *v37; // x22
  struct CommonConsumeEntity_array *v38; // x8
  CommonConsumeEntity_o *v39; // x8
  struct UILabel_array *exchangeOriginCounts2After; // x9
  struct CommonConsumeEntity_array *v41; // x8
  CommonConsumeEntity_o *v42; // x10
  UILabel_o *v43; // x22
  int v44; // w23
  int32_t num; // w25
  struct UILabel_array *exchangeOriginCountKinds2After; // x8
  UILabel_o *v47; // x22
  float v48; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A00711 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&completeNum);
    sub_1B640C8(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_13342/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, v9);
    byte_4A00711 = 1;
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
  exchangeOriginLbAfter = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_73;
  v15 = *(_QWORD *)&exchangeOriginItemList->max_length;
  v16 = (UserItemMaster_o *)exchangeOriginLbAfter;
  if ( (_DWORD)v15 != 3 )
  {
    if ( (int)v15 < 1 )
    {
LABEL_67:
      exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObject2After;
      if ( exchangeOriginLbAfter )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0LL);
        exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObjectAfter;
        if ( exchangeOriginLbAfter )
        {
          v32 = -1032847360;
          goto LABEL_70;
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
LABEL_74:
          sub_1B6432C(exchangeOriginLbAfter, v13);
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
        exchangeOriginLbAfter = NetworkManager__get_UserId(0LL);
        v38 = this->fields.exchangeOriginItemList;
        if ( !v38 )
          break;
        if ( v33 >= v38->max_length )
          goto LABEL_74;
        v39 = v38->m_Items[v33];
        if ( !v39 )
          break;
        if ( !v16 )
          break;
        exchangeOriginLbAfter = (int64_t)UserItemMaster__GetEntityDefinitely(
                                           v16,
                                           exchangeOriginLbAfter,
                                           v39->fields.objectId,
                                           0LL);
        exchangeOriginCounts2After = this->fields.exchangeOriginCounts2After;
        if ( !exchangeOriginCounts2After )
          break;
        if ( v33 >= exchangeOriginCounts2After->max_length )
          goto LABEL_74;
        if ( !exchangeOriginLbAfter )
          break;
        v41 = this->fields.exchangeOriginItemList;
        if ( !v41 )
          break;
        if ( v33 >= v41->max_length )
          goto LABEL_74;
        v42 = v41->m_Items[v33];
        if ( !v42 )
          break;
        v43 = exchangeOriginCounts2After->m_Items[v33];
        v44 = *(_DWORD *)(exchangeOriginLbAfter + 28);
        num = v42->fields.num;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        exchangeOriginLbAfter = (int64_t)LocalizationManager__GetNumberFormatLong(v44 + num * completeNum, 0LL);
        if ( !v43 )
          break;
        UILabel__set_text(v43, (System_String_o *)exchangeOriginLbAfter, 0LL);
        exchangeOriginCountKinds2After = this->fields.exchangeOriginCountKinds2After;
        if ( !exchangeOriginCountKinds2After )
          break;
        if ( v33 >= exchangeOriginCountKinds2After->max_length )
          goto LABEL_74;
        v47 = exchangeOriginCountKinds2After->m_Items[v33];
        exchangeOriginLbAfter = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13342/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
        if ( !v47 )
          break;
        UILabel__set_text(v47, (System_String_o *)exchangeOriginLbAfter, 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v15) = exchangeOriginItemList->max_length;
        if ( (int)++v33 >= (int)v15 )
          goto LABEL_67;
      }
    }
LABEL_73:
    sub_1B64324(exchangeOriginLbAfter);
  }
  v17 = 0;
  do
  {
    exchangeOriginItemIconAfter = this->fields.exchangeOriginItemIconAfter;
    if ( !exchangeOriginItemIconAfter )
      goto LABEL_73;
    if ( v17 >= exchangeOriginItemIconAfter->max_length || v17 >= (unsigned int)v15 )
      goto LABEL_74;
    v19 = exchangeOriginItemList->m_Items[v17];
    if ( !v19 )
      goto LABEL_73;
    v20 = v19->fields.objectId;
    v21 = exchangeOriginItemIconAfter->m_Items[v17];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v21, v20, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    exchangeOriginLbAfter = NetworkManager__get_UserId(0LL);
    v22 = this->fields.exchangeOriginItemList;
    if ( !v22 )
      goto LABEL_73;
    if ( v17 >= v22->max_length )
      goto LABEL_74;
    v23 = v22->m_Items[v17];
    if ( !v23 )
      goto LABEL_73;
    if ( !v16 )
      goto LABEL_73;
    exchangeOriginLbAfter = (int64_t)UserItemMaster__GetEntityDefinitely(
                                       v16,
                                       exchangeOriginLbAfter,
                                       v23->fields.objectId,
                                       0LL);
    exchangeOriginCountsAfter = this->fields.exchangeOriginCountsAfter;
    if ( !exchangeOriginCountsAfter )
      goto LABEL_73;
    if ( v17 >= exchangeOriginCountsAfter->max_length )
      goto LABEL_74;
    if ( !exchangeOriginLbAfter )
      goto LABEL_73;
    v25 = this->fields.exchangeOriginItemList;
    if ( !v25 )
      goto LABEL_73;
    if ( v17 >= v25->max_length )
      goto LABEL_74;
    v26 = v25->m_Items[v17];
    if ( !v26 )
      goto LABEL_73;
    v27 = exchangeOriginCountsAfter->m_Items[v17];
    v28 = *(_DWORD *)(exchangeOriginLbAfter + 28);
    v29 = v26->fields.num;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    exchangeOriginLbAfter = (int64_t)LocalizationManager__GetNumberFormatLong(v28 + v29 * completeNum, 0LL);
    if ( !v27 )
      goto LABEL_73;
    UILabel__set_text(v27, (System_String_o *)exchangeOriginLbAfter, 0LL);
    exchangeOriginCountKindsAfter = this->fields.exchangeOriginCountKindsAfter;
    if ( !exchangeOriginCountKindsAfter )
      goto LABEL_73;
    if ( v17 >= exchangeOriginCountKindsAfter->max_length )
      goto LABEL_74;
    v31 = exchangeOriginCountKindsAfter->m_Items[v17];
    exchangeOriginLbAfter = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13342/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
    if ( !v31 )
      goto LABEL_73;
    UILabel__set_text(v31, (System_String_o *)exchangeOriginLbAfter, 0LL);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_73;
    LODWORD(v15) = exchangeOriginItemList->max_length;
    ++v17;
  }
  while ( v17 < (int)v15 );
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObjectAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0LL);
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObject2After;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  v32 = -1023279104;
LABEL_70:
  v48 = *(float *)&v32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 0, 0LL);
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginLbAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  exchangeOriginLbAfter = (int64_t)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)exchangeOriginLbAfter,
                                     0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
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
  if ( (byte_4A0070F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CommonConsumeMaster___, item);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_13341/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/, v9);
    sub_1B640C8(&StringLiteral_13346/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/, v10);
    sub_1B640C8(&StringLiteral_13347/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/, v11);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v12);
    sub_1B640C8(&StringLiteral_13344/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/, v13);
    sub_1B640C8(&StringLiteral_13340/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/, v14);
    sub_1B640C8(&StringLiteral_13343/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/, v15);
    this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_1B640C8(&StringLiteral_13345/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/, v16);
    byte_4A0070F = 1;
  }
  if ( !item )
    goto LABEL_29;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  p_tradeGoodsEntity = &v6->fields.tradeGoodsEntity;
  v6->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v6->fields.tradeGoodsEntity,
    (int32_t)TradeGoodsEntity_k__BackingField,
    (int32_t)onDecide,
    (int32_t)method);
  v6->fields.onDecide = onDecide;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.onDecide, (int32_t)onDecide, v19, v20);
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
                                                                 (System_String_o *)StringLiteral_13347/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                                 0LL);
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  detailLabel = v6->fields.detailLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13344/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                                 0LL);
  if ( !detailLabel )
    goto LABEL_29;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
  exchangeOriginLb = v6->fields.exchangeOriginLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13341/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                                 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0LL);
  exchangeOriginLbAfter = v6->fields.exchangeOriginLbAfter;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13340/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
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
                                                                 (System_String_o *)StringLiteral_13343/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                                 0LL);
  if ( !decideButtonLb )
    goto LABEL_29;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
  returnItemsLabel = v6->fields.returnItemsLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13345/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                                 0LL);
  if ( !returnItemsLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsLabel, (System_String_o *)this, 0LL);
  returnItemsNoneLabel = v6->fields.returnItemsNoneLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13346/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                                 0LL);
  if ( !returnItemsNoneLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsNoneLabel, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_29;
  if ( !this )
    goto LABEL_29;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)this,
                       (*p_tradeGoodsEntity)->fields.commonConsumeId,
                       0LL);
  v6->fields.exchangeOriginItemList = SortedEntityList;
  sub_1B6406C(
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
    sub_1B64324(this);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4A00715 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A00715 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}