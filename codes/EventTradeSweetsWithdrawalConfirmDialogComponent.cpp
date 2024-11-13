void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent___ctor(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11303 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B11303 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    sub_1BCA784(p_onDecide, 0LL);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B11301 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__, v5, v6);
    byte_4B11301 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventTradeSweetsWithdrawalConfirmDialogComponent__Close_b__45_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
    sub_1BCAA3C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1BCA784(&this->fields.tradeGoodsEntity, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__OnClickCancel(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B11300 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__, method, v2);
    byte_4B11300 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    EventTradeSweetsWithdrawalConfirmDialogComponent__Close(this, v6);
  }
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__OnClickDecide(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B112FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__, method, v2);
    byte_4B112FF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventTradeSweetsWithdrawalConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    EventTradeSweetsWithdrawalConfirmDialogComponent__CallOnDecide(this, 1, v6);
  }
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__Open(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        EventTradeListViewItem_o *item,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4B112FB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, onDecide);
    sub_1BCA7E0(&Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__, v7, v8);
    byte_4B112FB = 1;
  }
  if ( !this->fields.state )
  {
    EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(this, item, onDecide, method);
    this->fields.state = 1;
    v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EventTradeSweetsWithdrawalConfirmDialogComponent_EndOpen__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t exchangeOriginLb; // x0
  __int64 v15; // x1
  float y; // s8
  float z; // s9
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v19; // x9
  UserItemMaster_o *v20; // x20
  int v21; // w23
  struct UISprite_array *exchangeOriginItemIcon; // x10
  CommonConsumeEntity_o *v23; // x8
  UISprite_o *v24; // x21
  int32_t v25; // w22
  __int64 v26; // x1
  struct CommonConsumeEntity_array *v27; // x8
  CommonConsumeEntity_o *v28; // x8
  struct UILabel_array *exchangeOriginCounts; // x9
  UILabel_o *v30; // x21
  int64_t v31; // x22
  struct UILabel_array *exchangeOriginCountKinds; // x8
  UILabel_o *v33; // x21
  int v34; // w8
  unsigned int v35; // w23
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v37; // x8
  UISprite_o *v38; // x21
  int32_t objectId; // w22
  __int64 v40; // x1
  struct CommonConsumeEntity_array *v41; // x8
  CommonConsumeEntity_o *v42; // x8
  struct UILabel_array *exchangeOriginCounts2; // x9
  UILabel_o *v44; // x21
  int64_t v45; // x22
  struct UILabel_array *exchangeOriginCountKinds2; // x8
  UILabel_o *v47; // x21
  float v48; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B112FD & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_13574/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, v12, v13);
    byte_4B112FD = 1;
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  exchangeOriginLb = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_67;
  v19 = *(_QWORD *)&exchangeOriginItemList->max_length;
  v20 = (UserItemMaster_o *)exchangeOriginLb;
  if ( (_DWORD)v19 != 3 )
  {
    if ( (int)v19 < 1 )
    {
LABEL_61:
      exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject2;
      if ( exchangeOriginLb )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0LL);
        exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject;
        if ( exchangeOriginLb )
        {
          v34 = -1032847360;
          goto LABEL_64;
        }
      }
    }
    else
    {
      v35 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v35 >= exchangeOriginItemIcon2->max_length || v35 >= (unsigned int)v19 )
LABEL_68:
          sub_1BCAA44(exchangeOriginLb, method);
        v37 = exchangeOriginItemList->m_Items[v35];
        if ( !v37 )
          break;
        v38 = exchangeOriginItemIcon2->m_Items[v35];
        objectId = v37->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
        AtlasManager__SetItem(v38, objectId, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
        exchangeOriginLb = NetworkManager__get_UserId(0LL);
        v41 = this->fields.exchangeOriginItemList;
        if ( !v41 )
          break;
        if ( v35 >= v41->max_length )
          goto LABEL_68;
        v42 = v41->m_Items[v35];
        if ( !v42 )
          break;
        if ( !v20 )
          break;
        exchangeOriginLb = (int64_t)UserItemMaster__GetEntityDefinitely(
                                      v20,
                                      exchangeOriginLb,
                                      v42->fields.objectId,
                                      0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v35 >= exchangeOriginCounts2->max_length )
          goto LABEL_68;
        if ( !exchangeOriginLb )
          break;
        v44 = exchangeOriginCounts2->m_Items[v35];
        v45 = *(int *)(exchangeOriginLb + 28);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        exchangeOriginLb = (int64_t)LocalizationManager__GetNumberFormatLong(v45, 0LL);
        if ( !v44 )
          break;
        UILabel__set_text(v44, (System_String_o *)exchangeOriginLb, 0LL);
        exchangeOriginCountKinds2 = this->fields.exchangeOriginCountKinds2;
        if ( !exchangeOriginCountKinds2 )
          break;
        if ( v35 >= exchangeOriginCountKinds2->max_length )
          goto LABEL_68;
        v47 = exchangeOriginCountKinds2->m_Items[v35];
        exchangeOriginLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13574/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
        if ( !v47 )
          break;
        UILabel__set_text(v47, (System_String_o *)exchangeOriginLb, 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v19) = exchangeOriginItemList->max_length;
        if ( (int)++v35 >= (int)v19 )
          goto LABEL_61;
      }
    }
LABEL_67:
    sub_1BCAA3C(exchangeOriginLb, method);
  }
  v21 = 0;
  do
  {
    exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
    if ( !exchangeOriginItemIcon )
      goto LABEL_67;
    if ( v21 >= exchangeOriginItemIcon->max_length || v21 >= (unsigned int)v19 )
      goto LABEL_68;
    v23 = exchangeOriginItemList->m_Items[v21];
    if ( !v23 )
      goto LABEL_67;
    v24 = exchangeOriginItemIcon->m_Items[v21];
    v25 = v23->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
    AtlasManager__SetItem(v24, v25, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
    exchangeOriginLb = NetworkManager__get_UserId(0LL);
    v27 = this->fields.exchangeOriginItemList;
    if ( !v27 )
      goto LABEL_67;
    if ( v21 >= v27->max_length )
      goto LABEL_68;
    v28 = v27->m_Items[v21];
    if ( !v28 )
      goto LABEL_67;
    if ( !v20 )
      goto LABEL_67;
    exchangeOriginLb = (int64_t)UserItemMaster__GetEntityDefinitely(v20, exchangeOriginLb, v28->fields.objectId, 0LL);
    exchangeOriginCounts = this->fields.exchangeOriginCounts;
    if ( !exchangeOriginCounts )
      goto LABEL_67;
    if ( v21 >= exchangeOriginCounts->max_length )
      goto LABEL_68;
    if ( !exchangeOriginLb )
      goto LABEL_67;
    v30 = exchangeOriginCounts->m_Items[v21];
    v31 = *(int *)(exchangeOriginLb + 28);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    exchangeOriginLb = (int64_t)LocalizationManager__GetNumberFormatLong(v31, 0LL);
    if ( !v30 )
      goto LABEL_67;
    UILabel__set_text(v30, (System_String_o *)exchangeOriginLb, 0LL);
    exchangeOriginCountKinds = this->fields.exchangeOriginCountKinds;
    if ( !exchangeOriginCountKinds )
      goto LABEL_67;
    if ( v21 >= exchangeOriginCountKinds->max_length )
      goto LABEL_68;
    v33 = exchangeOriginCountKinds->m_Items[v21];
    exchangeOriginLb = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13574/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
    if ( !v33 )
      goto LABEL_67;
    UILabel__set_text(v33, (System_String_o *)exchangeOriginLb, 0LL);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_67;
    LODWORD(v19) = exchangeOriginItemList->max_length;
    ++v21;
  }
  while ( v21 < (int)v19 );
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 1, 0LL);
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginDispObject2;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  v34 = -1023279104;
LABEL_64:
  v48 = *(float *)&v34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLb, 0, 0LL);
  exchangeOriginLb = (int64_t)this->fields.exchangeOriginLb;
  if ( !exchangeOriginLb )
    goto LABEL_67;
  exchangeOriginLb = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)exchangeOriginLb, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_67;
  v50.fields.y = y;
  v50.fields.z = z;
  v50.fields.x = v48;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLb, v50, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBaseAfter(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        int32_t completeNum,
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
  int64_t exchangeOriginLbAfter; // x0
  __int64 v16; // x1
  float y; // s8
  float z; // s9
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v20; // x9
  UserItemMaster_o *v21; // x21
  int v22; // w24
  struct UISprite_array *exchangeOriginItemIconAfter; // x10
  CommonConsumeEntity_o *v24; // x8
  int32_t v25; // w23
  UISprite_o *v26; // x22
  __int64 v27; // x1
  struct CommonConsumeEntity_array *v28; // x8
  CommonConsumeEntity_o *v29; // x8
  struct UILabel_array *exchangeOriginCountsAfter; // x9
  struct CommonConsumeEntity_array *v31; // x8
  CommonConsumeEntity_o *v32; // x10
  UILabel_o *v33; // x22
  int v34; // w23
  int32_t v35; // w25
  struct UILabel_array *exchangeOriginCountKindsAfter; // x8
  UILabel_o *v37; // x22
  int v38; // w8
  unsigned int v39; // w24
  struct UISprite_array *exchangeOriginItemIcon2After; // x10
  CommonConsumeEntity_o *v41; // x8
  int32_t objectId; // w23
  UISprite_o *v43; // x22
  __int64 v44; // x1
  struct CommonConsumeEntity_array *v45; // x8
  CommonConsumeEntity_o *v46; // x8
  struct UILabel_array *exchangeOriginCounts2After; // x9
  struct CommonConsumeEntity_array *v48; // x8
  CommonConsumeEntity_o *v49; // x10
  UILabel_o *v50; // x22
  int v51; // w23
  int32_t num; // w25
  struct UILabel_array *exchangeOriginCountKinds2After; // x8
  UILabel_o *v54; // x22
  float v55; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B112FE & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&completeNum, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_13574/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, v13, v14);
    byte_4B112FE = 1;
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
  exchangeOriginLbAfter = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_73;
  v20 = *(_QWORD *)&exchangeOriginItemList->max_length;
  v21 = (UserItemMaster_o *)exchangeOriginLbAfter;
  if ( (_DWORD)v20 != 3 )
  {
    if ( (int)v20 < 1 )
    {
LABEL_67:
      exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObject2After;
      if ( exchangeOriginLbAfter )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0LL);
        exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObjectAfter;
        if ( exchangeOriginLbAfter )
        {
          v38 = -1032847360;
          goto LABEL_70;
        }
      }
    }
    else
    {
      v39 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2After = this->fields.exchangeOriginItemIcon2After;
        if ( !exchangeOriginItemIcon2After )
          break;
        if ( v39 >= exchangeOriginItemIcon2After->max_length || v39 >= (unsigned int)v20 )
LABEL_74:
          sub_1BCAA44(exchangeOriginLbAfter, *(_QWORD *)&completeNum);
        v41 = exchangeOriginItemList->m_Items[v39];
        if ( !v41 )
          break;
        objectId = v41->fields.objectId;
        v43 = exchangeOriginItemIcon2After->m_Items[v39];
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&completeNum);
        AtlasManager__SetItem(v43, objectId, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v44);
        exchangeOriginLbAfter = NetworkManager__get_UserId(0LL);
        v45 = this->fields.exchangeOriginItemList;
        if ( !v45 )
          break;
        if ( v39 >= v45->max_length )
          goto LABEL_74;
        v46 = v45->m_Items[v39];
        if ( !v46 )
          break;
        if ( !v21 )
          break;
        exchangeOriginLbAfter = (int64_t)UserItemMaster__GetEntityDefinitely(
                                           v21,
                                           exchangeOriginLbAfter,
                                           v46->fields.objectId,
                                           0LL);
        exchangeOriginCounts2After = this->fields.exchangeOriginCounts2After;
        if ( !exchangeOriginCounts2After )
          break;
        if ( v39 >= exchangeOriginCounts2After->max_length )
          goto LABEL_74;
        if ( !exchangeOriginLbAfter )
          break;
        v48 = this->fields.exchangeOriginItemList;
        if ( !v48 )
          break;
        if ( v39 >= v48->max_length )
          goto LABEL_74;
        v49 = v48->m_Items[v39];
        if ( !v49 )
          break;
        v50 = exchangeOriginCounts2After->m_Items[v39];
        v51 = *(_DWORD *)(exchangeOriginLbAfter + 28);
        num = v49->fields.num;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&completeNum);
        exchangeOriginLbAfter = (int64_t)LocalizationManager__GetNumberFormatLong(v51 + num * completeNum, 0LL);
        if ( !v50 )
          break;
        UILabel__set_text(v50, (System_String_o *)exchangeOriginLbAfter, 0LL);
        exchangeOriginCountKinds2After = this->fields.exchangeOriginCountKinds2After;
        if ( !exchangeOriginCountKinds2After )
          break;
        if ( v39 >= exchangeOriginCountKinds2After->max_length )
          goto LABEL_74;
        v54 = exchangeOriginCountKinds2After->m_Items[v39];
        exchangeOriginLbAfter = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13574/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
        if ( !v54 )
          break;
        UILabel__set_text(v54, (System_String_o *)exchangeOriginLbAfter, 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v20) = exchangeOriginItemList->max_length;
        if ( (int)++v39 >= (int)v20 )
          goto LABEL_67;
      }
    }
LABEL_73:
    sub_1BCAA3C(exchangeOriginLbAfter, *(_QWORD *)&completeNum);
  }
  v22 = 0;
  do
  {
    exchangeOriginItemIconAfter = this->fields.exchangeOriginItemIconAfter;
    if ( !exchangeOriginItemIconAfter )
      goto LABEL_73;
    if ( v22 >= exchangeOriginItemIconAfter->max_length || v22 >= (unsigned int)v20 )
      goto LABEL_74;
    v24 = exchangeOriginItemList->m_Items[v22];
    if ( !v24 )
      goto LABEL_73;
    v25 = v24->fields.objectId;
    v26 = exchangeOriginItemIconAfter->m_Items[v22];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&completeNum);
    AtlasManager__SetItem(v26, v25, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
    exchangeOriginLbAfter = NetworkManager__get_UserId(0LL);
    v28 = this->fields.exchangeOriginItemList;
    if ( !v28 )
      goto LABEL_73;
    if ( v22 >= v28->max_length )
      goto LABEL_74;
    v29 = v28->m_Items[v22];
    if ( !v29 )
      goto LABEL_73;
    if ( !v21 )
      goto LABEL_73;
    exchangeOriginLbAfter = (int64_t)UserItemMaster__GetEntityDefinitely(
                                       v21,
                                       exchangeOriginLbAfter,
                                       v29->fields.objectId,
                                       0LL);
    exchangeOriginCountsAfter = this->fields.exchangeOriginCountsAfter;
    if ( !exchangeOriginCountsAfter )
      goto LABEL_73;
    if ( v22 >= exchangeOriginCountsAfter->max_length )
      goto LABEL_74;
    if ( !exchangeOriginLbAfter )
      goto LABEL_73;
    v31 = this->fields.exchangeOriginItemList;
    if ( !v31 )
      goto LABEL_73;
    if ( v22 >= v31->max_length )
      goto LABEL_74;
    v32 = v31->m_Items[v22];
    if ( !v32 )
      goto LABEL_73;
    v33 = exchangeOriginCountsAfter->m_Items[v22];
    v34 = *(_DWORD *)(exchangeOriginLbAfter + 28);
    v35 = v32->fields.num;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&completeNum);
    exchangeOriginLbAfter = (int64_t)LocalizationManager__GetNumberFormatLong(v34 + v35 * completeNum, 0LL);
    if ( !v33 )
      goto LABEL_73;
    UILabel__set_text(v33, (System_String_o *)exchangeOriginLbAfter, 0LL);
    exchangeOriginCountKindsAfter = this->fields.exchangeOriginCountKindsAfter;
    if ( !exchangeOriginCountKindsAfter )
      goto LABEL_73;
    if ( v22 >= exchangeOriginCountKindsAfter->max_length )
      goto LABEL_74;
    v37 = exchangeOriginCountKindsAfter->m_Items[v22];
    exchangeOriginLbAfter = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13574/*"TRADE_EVENT_WITHDRAWAL_DIALOG_COUNT_KIND"*/, 0LL);
    if ( !v37 )
      goto LABEL_73;
    UILabel__set_text(v37, (System_String_o *)exchangeOriginLbAfter, 0LL);
    exchangeOriginItemList = this->fields.exchangeOriginItemList;
    if ( !exchangeOriginItemList )
      goto LABEL_73;
    LODWORD(v20) = exchangeOriginItemList->max_length;
    ++v22;
  }
  while ( v22 < (int)v20 );
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObjectAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 1, 0LL);
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginDispObject2After;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  v38 = -1023279104;
LABEL_70:
  v55 = *(float *)&v38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exchangeOriginLbAfter, 0, 0LL);
  exchangeOriginLbAfter = (int64_t)this->fields.exchangeOriginLbAfter;
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  exchangeOriginLbAfter = (int64_t)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)exchangeOriginLbAfter,
                                     0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_73;
  v57.fields.y = y;
  v57.fields.z = z;
  v57.fields.x = v55;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)exchangeOriginLbAfter, v57, 0LL);
}


void __fastcall EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(
        EventTradeSweetsWithdrawalConfirmDialogComponent_o *this,
        EventTradeListViewItem_o *item,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *v6; // x20
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
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  __int64 v29; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *detailLabel; // x22
  UILabel_o *exchangeOriginLb; // x22
  UILabel_o *exchangeOriginLbAfter; // x22
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  UILabel_o *returnItemsLabel; // x22
  UILabel_o *returnItemsNoneLabel; // x22
  __int64 v38; // x1
  CommonConsumeEntity_array *SortedEntityList; // x0
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  bool v41; // w21
  const MethodInfo *v42; // x1
  int32_t NowTradeNum; // w0
  const MethodInfo *v44; // x2
  int32_t v45; // w21

  v6 = this;
  if ( (byte_4B112FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, item, onDecide);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_13573/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_13578/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_13579/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_13576/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_13572/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_13575/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/, v23, v24);
    this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_13577/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/, v25, v26);
    byte_4B112FC = 1;
  }
  if ( !item )
    goto LABEL_29;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  p_tradeGoodsEntity = &v6->fields.tradeGoodsEntity;
  v6->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
  sub_1BCA784(&v6->fields.tradeGoodsEntity, TradeGoodsEntity_k__BackingField);
  v6->fields.onDecide = onDecide;
  sub_1BCA784(&v6->fields.onDecide, onDecide);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)v6,
                                                                 0LL);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  titleLabel = v6->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13579/*"TRADE_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                                 0LL);
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  detailLabel = v6->fields.detailLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13576/*"TRADE_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                                 0LL);
  if ( !detailLabel )
    goto LABEL_29;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
  exchangeOriginLb = v6->fields.exchangeOriginLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13573/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                                 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)this, 0LL);
  exchangeOriginLbAfter = v6->fields.exchangeOriginLbAfter;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13572/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                                 0LL);
  if ( !exchangeOriginLbAfter )
    goto LABEL_29;
  UILabel__set_text(exchangeOriginLbAfter, (System_String_o *)this, 0LL);
  cancelButtonLb = v6->fields.cancelButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/,
                                                                 0LL);
  if ( !cancelButtonLb )
    goto LABEL_29;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
  decideButtonLb = v6->fields.decideButtonLb;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13575/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                                 0LL);
  if ( !decideButtonLb )
    goto LABEL_29;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
  returnItemsLabel = v6->fields.returnItemsLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13577/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                                 0LL);
  if ( !returnItemsLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsLabel, (System_String_o *)this, 0LL);
  returnItemsNoneLabel = v6->fields.returnItemsNoneLabel;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_13578/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                                 0LL);
  if ( !returnItemsNoneLabel )
    goto LABEL_29;
  UILabel__set_text(returnItemsNoneLabel, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_29;
  if ( !this )
    goto LABEL_29;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)this,
                       (*p_tradeGoodsEntity)->fields.commonConsumeId,
                       0LL);
  v6->fields.exchangeOriginItemList = SortedEntityList;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)sub_1BCA784(
                                                                 &v6->fields.exchangeOriginItemList,
                                                                 SortedEntityList);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_29;
  v41 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.returnItemsNoneLabel;
  if ( !this )
    goto LABEL_29;
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v41, 0LL);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.returnItemsBaseObj;
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v41, 0LL);
  EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBase(v6, v42);
  NowTradeNum = EventTradeListViewItem__get_NowTradeNum(item, 0LL);
  EventTradeSweetsWithdrawalConfirmDialogComponent__SetExchangeBaseAfter(v6, NowTradeNum, v44);
  this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)EventTradeListViewItemDraw__GetDisplayMode(3, item, 0LL);
  if ( !v6->fields.listViewItemDraw
    || (v45 = (int)this,
        EventTradeListViewItemDraw__SetItem(v6->fields.listViewItemDraw, item, (int32_t)this, 0LL),
        (this = (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v6->fields.listViewItemDraw) == 0LL) )
  {
LABEL_29:
    sub_1BCAA3C(this, item);
  }
  EventTradeListViewItemDraw__UpdateItem((EventTradeListViewItemDraw_o *)this, item, v45, 0LL);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B11302 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11302 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}