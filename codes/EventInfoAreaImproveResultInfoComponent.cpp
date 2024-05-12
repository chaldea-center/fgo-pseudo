void __fastcall EventInfoAreaImproveResultInfoComponent___ctor(
        EventInfoAreaImproveResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__CheckSerializeFieldSetting(
        EventInfoAreaImproveResultInfoComponent_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
        EventInfoAreaImproveResultInfoComponent_o *this,
        System_String_o *str,
        bool isChangeColor,
        const MethodInfo *method)
{
  System_String_o *v6; // x0

  if ( (byte_438CC15 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_5693/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/);
    byte_438CC15 = 1;
  }
  if ( !isChangeColor )
    return str;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5693/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, 0LL);
  return System_String__Format(v6, (Il2CppObject *)str, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__Init(
        EventInfoAreaImproveResultInfoComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetAddEventPointRateLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t addEventPointRate,
        bool isChangeColor,
        const MethodInfo *method)
{
  int v7; // w23
  int v8; // w22
  System_String_o *v9; // x21
  __int64 v10; // x2
  Il2CppObject *v11; // x22
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UILabel_o *addEventPointRateLabel; // x20
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  __int64 v18; // x1
  int v19; // [xsp+8h] [xbp-38h] BYREF
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438CC10 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_5687/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/);
    byte_438CC10 = 1;
  }
  v7 = addEventPointRate / 100 % 10;
  v8 = addEventPointRate / 1000;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5687/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, 0LL);
  v20 = v8;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v10);
  v19 = v7;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v12);
  v14 = System_String__Format_44897472(v9, v11, v13, 0LL);
  addEventPointRateLabel = this->fields.addEventPointRateLabel;
  v17 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v14,
          v14,
          isChangeColor,
          v16);
  if ( !addEventPointRateLabel )
    sub_B7769C(v17, v18);
  UILabel__set_text(addEventPointRateLabel, v17, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetIcon(
        EventInfoAreaImproveResultInfoComponent_o *this,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  EventInfoAreaImproveResultInfoComponent_o *v4; // x20
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x21
  UserItemEntity_o *Entity; // x0
  UserItemEntity_o *v7; // x21
  int32_t num; // w21

  v4 = this;
  if ( (byte_438CC14 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    this = (EventInfoAreaImproveResultInfoComponent_o *)sub_B775C4(&NetworkManager_TypeInfo);
    byte_438CC14 = 1;
  }
  if ( !giftEnt )
    goto LABEL_24;
  if ( !GiftEntity__checkGiftType(giftEnt, 2, 0LL) )
    goto LABEL_18;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (EventInfoAreaImproveResultInfoComponent_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_24;
  Entity = UserItemMaster__GetEntity(Master_WarQuestSelectionMaster, (int64_t)this, giftEnt->fields.objectId, 0LL);
  if ( !Entity )
    goto LABEL_18;
  v7 = Entity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventInfoAreaImproveResultInfoComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
LABEL_24:
    sub_B7769C(this, giftEnt);
  if ( !ItemMaster__isQP((ItemMaster_o *)this, giftEnt->fields.objectId, 0LL) )
  {
    num = v7->fields.num;
    goto LABEL_19;
  }
LABEL_18:
  num = -1;
LABEL_19:
  this = (EventInfoAreaImproveResultInfoComponent_o *)v4->fields.itemIcon;
  if ( !this )
    goto LABEL_24;
  ItemIconComponent__SetCountLabelActivation((ItemIconComponent_o *)this, num > 0, 0LL);
  this = (EventInfoAreaImproveResultInfoComponent_o *)v4->fields.itemIcon;
  if ( !this )
    goto LABEL_24;
  ItemIconComponent__SetPossessionTitleActivation((ItemIconComponent_o *)this, num > 0, 0LL);
  this = (EventInfoAreaImproveResultInfoComponent_o *)v4->fields.itemIcon;
  if ( !this )
    goto LABEL_24;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, giftEnt->fields.type, giftEnt->fields.objectId, num, 0, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetLevelLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t lv,
        bool isChangeColor,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  UILabel_o *levelLabel; // x20
  const MethodInfo *v12; // x3
  System_String_o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438CC0F & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_5689/*"EVENT_AREA_IMPROVE_LEVEL"*/);
    byte_438CC0F = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5689/*"EVENT_AREA_IMPROVE_LEVEL"*/, 0LL);
  v15 = lv;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v8);
  v10 = System_String__Format(v7, v9, 0LL);
  levelLabel = this->fields.levelLabel;
  v13 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v10,
          v10,
          isChangeColor,
          v12);
  if ( !levelLabel )
    sub_B7769C(v13, v14);
  UILabel__set_text(levelLabel, v13, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetMaxRewardTimeLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t coolTime,
        bool isChangeColor,
        const MethodInfo *method)
{
  int v7; // w22
  int v8; // w24
  int v9; // w23
  System_String_o *v10; // x21
  __int64 v11; // x2
  Il2CppObject *v12; // x22
  __int64 v13; // x2
  Il2CppObject *v14; // x23
  __int64 v15; // x2
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UILabel_o *maxRewardTimeLabel; // x20
  System_String_o *v19; // x21
  System_String_o *v20; // x22
  const MethodInfo *v21; // x3
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  int v25; // [xsp+Ch] [xbp-44h] BYREF
  int v26; // [xsp+18h] [xbp-38h] BYREF
  int v27; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_438CC13 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_5694/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/);
    sub_B775C4(&StringLiteral_5691/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/);
    byte_438CC13 = 1;
  }
  v7 = coolTime / 3600;
  v8 = coolTime % 60;
  v9 = coolTime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5694/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
  v27 = v7;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v11);
  v26 = v9;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v13);
  v25 = v8;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v15);
  v17 = System_String__Format_44903000(v10, v12, v14, v16, 0LL);
  maxRewardTimeLabel = this->fields.maxRewardTimeLabel;
  v19 = v17;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5691/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/, 0LL);
  v22 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v20,
          v19,
          isChangeColor,
          v21);
  v23 = System_String__Concat_44901936(v20, v22, 0LL);
  if ( !maxRewardTimeLabel )
    sub_B7769C(v23, v24);
  UILabel__set_text(maxRewardTimeLabel, v23, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetRewardNumLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t unitNum,
        bool isUnitNumChanged,
        int32_t maxNum,
        bool isMaxNumChanged,
        const MethodInfo *method)
{
  System_String_o *v11; // x24
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x3
  System_String_o *v16; // x22
  System_String_o *v17; // x23
  __int64 v18; // x2
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  const MethodInfo *v21; // x3
  System_String_o *v22; // x0
  UILabel_o *rewardNumLabel; // x19
  System_String_o *v24; // x0
  __int64 v25; // x1
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438CC12 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_5690/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/);
    sub_B775C4(&StringLiteral_5688/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/);
    byte_438CC12 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5688/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, 0LL);
  v27 = unitNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v12);
  v14 = System_String__Format(v11, v13, 0LL);
  v16 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v14,
          v14,
          isUnitNumChanged,
          v15);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5690/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, 0LL);
  v26 = maxNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v18);
  v20 = System_String__Format(v17, v19, 0LL);
  v22 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v20,
          v20,
          isMaxNumChanged,
          v21);
  rewardNumLabel = this->fields.rewardNumLabel;
  v24 = System_String__Concat_44901936(v16, v22, 0LL);
  if ( !rewardNumLabel )
    sub_B7769C(v24, v25);
  UILabel__set_text(rewardNumLabel, v24, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t coolUnitTime,
        bool isQP,
        bool isChangeColor,
        const MethodInfo *method)
{
  System_String_o *v9; // x22
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x3
  int v14; // w22
  int v15; // w24
  int v16; // w23
  System_String_o *v17; // x21
  __int64 v18; // x2
  Il2CppObject *v19; // x22
  __int64 v20; // x2
  Il2CppObject *v21; // x23
  __int64 v22; // x2
  Il2CppObject *v23; // x0
  UILabel_o *getRewardUnitTimeLabel; // x20
  System_String_o *v25; // x19
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x1
  int v29; // [xsp+Ch] [xbp-44h] BYREF
  int v30; // [xsp+18h] [xbp-38h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_438CC11 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_5694/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/);
    sub_B775C4(&StringLiteral_5680/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/);
    sub_B775C4(&StringLiteral_5695/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/);
    byte_438CC11 = 1;
  }
  if ( isQP )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5695/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, 0LL);
    v31 = coolUnitTime;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v10);
    v12 = System_String__Format(v9, v11, 0LL);
  }
  else
  {
    v14 = coolUnitTime / 3600;
    v15 = coolUnitTime % 60;
    v16 = coolUnitTime % 3600 / 60;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5694/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
    v31 = v14;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v18);
    v30 = v16;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v20);
    v29 = v15;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v22);
    v12 = System_String__Format_44903000(v17, v19, v21, v23, 0LL);
  }
  getRewardUnitTimeLabel = this->fields.getRewardUnitTimeLabel;
  v25 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v12,
          v12,
          isChangeColor,
          v13);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5680/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, 0LL);
  v27 = System_String__Concat_44901936(v25, v26, 0LL);
  if ( !getRewardUnitTimeLabel )
    sub_B7769C(v27, v28);
  UILabel__set_text(getRewardUnitTimeLabel, v27, 0LL);
}