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
  __int64 v6; // x1
  System_String_o *v7; // x0

  if ( (byte_42161F2 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, str);
    sub_B0D8A4(&StringLiteral_5566/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, v6);
    byte_42161F2 = 1;
  }
  if ( !isChangeColor )
    return str;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5566/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, 0LL);
  return System_String__Format(v7, (Il2CppObject *)str, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__Init(
        EventInfoAreaImproveResultInfoComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImproveResultInfoComponent__SetAddEventPointRateLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t addEventPointRate,
        bool isChangeColor,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int v9; // w23
  int v10; // w22
  System_String_o *v11; // x21
  Il2CppObject *v12; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UILabel_o *addEventPointRateLabel; // x20
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  int v18; // [xsp+8h] [xbp-38h] BYREF
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42161ED & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&addEventPointRate);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_5560/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, v8);
    byte_42161ED = 1;
  }
  v9 = addEventPointRate / 100 % 10;
  v10 = addEventPointRate / 1000;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, 0LL);
  v19 = v10;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v18 = v9;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v14 = System_String__Format_43845440(v11, v12, v13, 0LL);
  addEventPointRateLabel = this->fields.addEventPointRateLabel;
  v17 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v14,
          v14,
          isChangeColor,
          v16);
  if ( !addEventPointRateLabel )
    sub_B0D97C(v17);
  UILabel__set_text(addEventPointRateLabel, v17, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetIcon(
        EventInfoAreaImproveResultInfoComponent_o *this,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  EventInfoAreaImproveResultInfoComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x21
  UserItemEntity_o *Entity; // x0
  UserItemEntity_o *v10; // x21
  int32_t num; // w21

  v4 = this;
  if ( (byte_42161F1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, giftEnt);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    this = (EventInfoAreaImproveResultInfoComponent_o *)sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    byte_42161F1 = 1;
  }
  if ( !giftEnt )
    goto LABEL_24;
  if ( !GiftEntity__checkGiftType(giftEnt, 2, 0LL) )
    goto LABEL_18;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserItemMaster___);
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
  v10 = Entity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventInfoAreaImproveResultInfoComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
LABEL_24:
    sub_B0D97C(this);
  if ( !ItemMaster__isQP((ItemMaster_o *)this, giftEnt->fields.objectId, 0LL) )
  {
    num = v10->fields.num;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImproveResultInfoComponent__SetLevelLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t lv,
        bool isChangeColor,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  UILabel_o *levelLabel; // x20
  const MethodInfo *v13; // x3
  System_String_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42161EC & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&lv);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_5562/*"EVENT_AREA_IMPROVE_LEVEL"*/, v8);
    byte_42161EC = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5562/*"EVENT_AREA_IMPROVE_LEVEL"*/, 0LL);
  v15 = lv;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v11 = System_String__Format(v9, v10, 0LL);
  levelLabel = this->fields.levelLabel;
  v14 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v11,
          v11,
          isChangeColor,
          v13);
  if ( !levelLabel )
    sub_B0D97C(v14);
  UILabel__set_text(levelLabel, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImproveResultInfoComponent__SetMaxRewardTimeLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t coolTime,
        bool isChangeColor,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int v10; // w22
  int v11; // w24
  int v12; // w23
  System_String_o *v13; // x21
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x23
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UILabel_o *maxRewardTimeLabel; // x20
  System_String_o *v19; // x21
  System_String_o *v20; // x22
  const MethodInfo *v21; // x3
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  int v24; // [xsp+Ch] [xbp-44h] BYREF
  int v25; // [xsp+18h] [xbp-38h] BYREF
  int v26; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42161F0 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&coolTime);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_5567/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, v8);
    sub_B0D8A4(&StringLiteral_5564/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/, v9);
    byte_42161F0 = 1;
  }
  v10 = coolTime / 3600;
  v11 = coolTime % 60;
  v12 = coolTime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
  v26 = v10;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v25 = v12;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v24 = v11;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v17 = System_String__Format_43850968(v13, v14, v15, v16, 0LL);
  maxRewardTimeLabel = this->fields.maxRewardTimeLabel;
  v19 = v17;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5564/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/, 0LL);
  v22 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v20,
          v19,
          isChangeColor,
          v21);
  v23 = System_String__Concat_43849904(v20, v22, 0LL);
  if ( !maxRewardTimeLabel )
    sub_B0D97C(v23);
  UILabel__set_text(maxRewardTimeLabel, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImproveResultInfoComponent__SetRewardNumLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t unitNum,
        bool isUnitNumChanged,
        int32_t maxNum,
        bool isMaxNumChanged,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *v14; // x24
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x3
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x3
  System_String_o *v23; // x0
  UILabel_o *rewardNumLabel; // x19
  System_String_o *v25; // x0
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42161EF & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&unitNum);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_5563/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, v12);
    sub_B0D8A4(&StringLiteral_5561/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, v13);
    byte_42161EF = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5561/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, 0LL);
  v27 = unitNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v16 = System_String__Format(v14, v15, 0LL);
  v18 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v16,
          v16,
          isUnitNumChanged,
          v17);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5563/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, 0LL);
  v26 = maxNum;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v21 = System_String__Format(v19, v20, 0LL);
  v23 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v21,
          v21,
          isMaxNumChanged,
          v22);
  rewardNumLabel = this->fields.rewardNumLabel;
  v25 = System_String__Concat_43849904(v18, v23, 0LL);
  if ( !rewardNumLabel )
    sub_B0D97C(v25);
  UILabel__set_text(rewardNumLabel, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t coolUnitTime,
        bool isQP,
        bool isChangeColor,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *v14; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x3
  int v18; // w22
  int v19; // w24
  int v20; // w23
  System_String_o *v21; // x21
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x0
  UILabel_o *getRewardUnitTimeLabel; // x20
  System_String_o *v26; // x19
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  int v29; // [xsp+Ch] [xbp-44h] BYREF
  int v30; // [xsp+18h] [xbp-38h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42161EE & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&coolUnitTime);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&string_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_5567/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, v11);
    sub_B0D8A4(&StringLiteral_5553/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, v12);
    sub_B0D8A4(&StringLiteral_5568/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, v13);
    byte_42161EE = 1;
  }
  if ( isQP )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5568/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, 0LL);
    v31 = coolUnitTime;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v16 = System_String__Format(v14, v15, 0LL);
  }
  else
  {
    v18 = coolUnitTime / 3600;
    v19 = coolUnitTime % 60;
    v20 = coolUnitTime % 3600 / 60;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
    v31 = v18;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v30 = v20;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v29 = v19;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v16 = System_String__Format_43850968(v21, v22, v23, v24, 0LL);
  }
  getRewardUnitTimeLabel = this->fields.getRewardUnitTimeLabel;
  v26 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v16,
          v16,
          isChangeColor,
          v17);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5553/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, 0LL);
  v28 = System_String__Concat_43849904(v26, v27, 0LL);
  if ( !getRewardUnitTimeLabel )
    sub_B0D97C(v28);
  UILabel__set_text(getRewardUnitTimeLabel, v28, 0LL);
}