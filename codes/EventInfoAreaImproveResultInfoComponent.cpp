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

  if ( (byte_42B1E0F & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_5592/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/);
    byte_42B1E0F = 1;
  }
  if ( !isChangeColor )
    return str;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5592/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, 0LL);
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
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  UILabel_o *addEventPointRateLabel; // x20
  const MethodInfo *v14; // x3
  System_String_o *v15; // x0
  __int64 v16; // x1
  int v17; // [xsp+8h] [xbp-38h] BYREF
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B1E0A & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_5586/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/);
    byte_42B1E0A = 1;
  }
  v7 = addEventPointRate / 100 % 10;
  v8 = addEventPointRate / 1000;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5586/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, 0LL);
  v18 = v8;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v17 = v7;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v12 = System_String__Format_44563852(v9, v10, v11, 0LL);
  addEventPointRateLabel = this->fields.addEventPointRateLabel;
  v15 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v12,
          v12,
          isChangeColor,
          v14);
  if ( !addEventPointRateLabel )
    sub_B52A5C(v15, v16);
  UILabel__set_text(addEventPointRateLabel, v15, 0LL);
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
  if ( (byte_42B1E0E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B52984(&DataManager_TypeInfo);
    this = (EventInfoAreaImproveResultInfoComponent_o *)sub_B52984(&NetworkManager_TypeInfo);
    byte_42B1E0E = 1;
  }
  if ( !giftEnt )
    goto LABEL_24;
  if ( !GiftEntity__checkGiftType(giftEnt, 2, 0LL) )
    goto LABEL_18;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserItemMaster___);
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
  this = (EventInfoAreaImproveResultInfoComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
LABEL_24:
    sub_B52A5C(this, giftEnt);
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
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  UILabel_o *levelLabel; // x20
  const MethodInfo *v11; // x3
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B1E09 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_5588/*"EVENT_AREA_IMPROVE_LEVEL"*/);
    byte_42B1E09 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5588/*"EVENT_AREA_IMPROVE_LEVEL"*/, 0LL);
  v14 = lv;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v9 = System_String__Format(v7, v8, 0LL);
  levelLabel = this->fields.levelLabel;
  v12 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v9,
          v9,
          isChangeColor,
          v11);
  if ( !levelLabel )
    sub_B52A5C(v12, v13);
  UILabel__set_text(levelLabel, v12, 0LL);
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
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x23
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UILabel_o *maxRewardTimeLabel; // x20
  System_String_o *v16; // x21
  System_String_o *v17; // x22
  const MethodInfo *v18; // x3
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  int v22; // [xsp+Ch] [xbp-44h] BYREF
  int v23; // [xsp+18h] [xbp-38h] BYREF
  int v24; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42B1E0D & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_5593/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/);
    sub_B52984(&StringLiteral_5590/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/);
    byte_42B1E0D = 1;
  }
  v7 = coolTime / 3600;
  v8 = coolTime % 60;
  v9 = coolTime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5593/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
  v24 = v7;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = v9;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v22 = v8;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v14 = System_String__Format_44569380(v10, v11, v12, v13, 0LL);
  maxRewardTimeLabel = this->fields.maxRewardTimeLabel;
  v16 = v14;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5590/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/, 0LL);
  v19 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v17,
          v16,
          isChangeColor,
          v18);
  v20 = System_String__Concat_44568316(v17, v19, 0LL);
  if ( !maxRewardTimeLabel )
    sub_B52A5C(v20, v21);
  UILabel__set_text(maxRewardTimeLabel, v20, 0LL);
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
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x3
  System_String_o *v20; // x0
  UILabel_o *rewardNumLabel; // x19
  System_String_o *v22; // x0
  __int64 v23; // x1
  int32_t v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B1E0C & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_5589/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/);
    sub_B52984(&StringLiteral_5587/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/);
    byte_42B1E0C = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5587/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, 0LL);
  v25 = unitNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v13 = System_String__Format(v11, v12, 0LL);
  v15 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v13,
          v13,
          isUnitNumChanged,
          v14);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5589/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, 0LL);
  v24 = maxNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v18 = System_String__Format(v16, v17, 0LL);
  v20 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v18,
          v18,
          isMaxNumChanged,
          v19);
  rewardNumLabel = this->fields.rewardNumLabel;
  v22 = System_String__Concat_44568316(v15, v20, 0LL);
  if ( !rewardNumLabel )
    sub_B52A5C(v22, v23);
  UILabel__set_text(rewardNumLabel, v22, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t coolUnitTime,
        bool isQP,
        bool isChangeColor,
        const MethodInfo *method)
{
  System_String_o *v9; // x22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  int v13; // w22
  int v14; // w24
  int v15; // w23
  System_String_o *v16; // x21
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  UILabel_o *getRewardUnitTimeLabel; // x20
  System_String_o *v21; // x19
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  int v25; // [xsp+Ch] [xbp-44h] BYREF
  int v26; // [xsp+18h] [xbp-38h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42B1E0B & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_5593/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/);
    sub_B52984(&StringLiteral_5579/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/);
    sub_B52984(&StringLiteral_5594/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/);
    byte_42B1E0B = 1;
  }
  if ( isQP )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5594/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, 0LL);
    v27 = coolUnitTime;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v11 = System_String__Format(v9, v10, 0LL);
  }
  else
  {
    v13 = coolUnitTime / 3600;
    v14 = coolUnitTime % 60;
    v15 = coolUnitTime % 3600 / 60;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5593/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
    v27 = v13;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v26 = v15;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    v25 = v14;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    v11 = System_String__Format_44569380(v16, v17, v18, v19, 0LL);
  }
  getRewardUnitTimeLabel = this->fields.getRewardUnitTimeLabel;
  v21 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v11,
          v11,
          isChangeColor,
          v12);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5579/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, 0LL);
  v23 = System_String__Concat_44568316(v21, v22, 0LL);
  if ( !getRewardUnitTimeLabel )
    sub_B52A5C(v23, v24);
  UILabel__set_text(getRewardUnitTimeLabel, v23, 0LL);
}