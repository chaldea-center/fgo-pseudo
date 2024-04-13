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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  System_String_o *v9; // x0

  if ( (byte_42E9F9B & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)str, isChangeColor, method);
    sub_B5D5C4(&StringLiteral_5627/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, v6, v7, v8);
    byte_42E9F9B = 1;
  }
  if ( !isChangeColor )
    return str;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5627/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, 0LL);
  return System_String__Format(v9, (Il2CppObject *)str, 0LL);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w23
  int v14; // w22
  System_String_o *v15; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  UILabel_o *addEventPointRateLabel; // x20
  const MethodInfo *v20; // x3
  System_String_o *v21; // x0
  __int64 v22; // x1
  int v23; // [xsp+8h] [xbp-38h] BYREF
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E9F96 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, addEventPointRate, isChangeColor, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_5621/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, v10, v11, v12);
    byte_42E9F96 = 1;
  }
  v13 = addEventPointRate / 100 % 10;
  v14 = addEventPointRate / 1000;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5621/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, 0LL);
  v24 = v14;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = v13;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v18 = System_String__Format_44573324(v15, v16, v17, 0LL);
  addEventPointRateLabel = this->fields.addEventPointRateLabel;
  v21 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v18,
          v18,
          isChangeColor,
          v20);
  if ( !addEventPointRateLabel )
    sub_B5D69C(v21, v22);
  UILabel__set_text(addEventPointRateLabel, v21, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetIcon(
        EventInfoAreaImproveResultInfoComponent_o *this,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoAreaImproveResultInfoComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x21
  UserItemEntity_o *Entity; // x0
  UserItemEntity_o *v17; // x21
  int32_t num; // w21

  v5 = this;
  if ( (byte_42E9F9A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, (_DWORD)giftEnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    this = (EventInfoAreaImproveResultInfoComponent_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    byte_42E9F9A = 1;
  }
  if ( !giftEnt )
    goto LABEL_24;
  if ( !GiftEntity__checkGiftType(giftEnt, 2, 0LL) )
    goto LABEL_18;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
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
  v17 = Entity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventInfoAreaImproveResultInfoComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
LABEL_24:
    sub_B5D69C(this, giftEnt);
  if ( !ItemMaster__isQP((ItemMaster_o *)this, giftEnt->fields.objectId, 0LL) )
  {
    num = v17->fields.num;
    goto LABEL_19;
  }
LABEL_18:
  num = -1;
LABEL_19:
  this = (EventInfoAreaImproveResultInfoComponent_o *)v5->fields.itemIcon;
  if ( !this )
    goto LABEL_24;
  ItemIconComponent__SetCountLabelActivation((ItemIconComponent_o *)this, num > 0, 0LL);
  this = (EventInfoAreaImproveResultInfoComponent_o *)v5->fields.itemIcon;
  if ( !this )
    goto LABEL_24;
  ItemIconComponent__SetPossessionTitleActivation((ItemIconComponent_o *)this, num > 0, 0LL);
  this = (EventInfoAreaImproveResultInfoComponent_o *)v5->fields.itemIcon;
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  System_String_o *v13; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  UILabel_o *levelLabel; // x20
  const MethodInfo *v17; // x3
  System_String_o *v18; // x0
  __int64 v19; // x1
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9F95 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, lv, isChangeColor, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_5623/*"EVENT_AREA_IMPROVE_LEVEL"*/, v10, v11, v12);
    byte_42E9F95 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5623/*"EVENT_AREA_IMPROVE_LEVEL"*/, 0LL);
  v20 = lv;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v15 = System_String__Format(v13, v14, 0LL);
  levelLabel = this->fields.levelLabel;
  v18 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v15,
          v15,
          isChangeColor,
          v17);
  if ( !levelLabel )
    sub_B5D69C(v18, v19);
  UILabel__set_text(levelLabel, v18, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetMaxRewardTimeLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t coolTime,
        bool isChangeColor,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w22
  int v17; // w24
  int v18; // w23
  System_String_o *v19; // x21
  Il2CppObject *v20; // x22
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  UILabel_o *maxRewardTimeLabel; // x20
  System_String_o *v25; // x21
  System_String_o *v26; // x22
  const MethodInfo *v27; // x3
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  __int64 v30; // x1
  int v31; // [xsp+Ch] [xbp-44h] BYREF
  int v32; // [xsp+18h] [xbp-38h] BYREF
  int v33; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42E9F99 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, coolTime, isChangeColor, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_5628/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_5625/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/, v13, v14, v15);
    byte_42E9F99 = 1;
  }
  v16 = coolTime / 3600;
  v17 = coolTime % 60;
  v18 = coolTime % 3600 / 60;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5628/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
  v33 = v16;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v32 = v18;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v31 = v17;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v23 = System_String__Format_44578852(v19, v20, v21, v22, 0LL);
  maxRewardTimeLabel = this->fields.maxRewardTimeLabel;
  v25 = v23;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5625/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/, 0LL);
  v28 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v26,
          v25,
          isChangeColor,
          v27);
  v29 = System_String__Concat_44577788(v26, v28, 0LL);
  if ( !maxRewardTimeLabel )
    sub_B5D69C(v29, v30);
  UILabel__set_text(maxRewardTimeLabel, v29, 0LL);
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
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  System_String_o *v20; // x24
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  const MethodInfo *v23; // x3
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  System_String_o *v29; // x0
  UILabel_o *rewardNumLabel; // x19
  System_String_o *v31; // x0
  __int64 v32; // x1
  int32_t v33; // [xsp+8h] [xbp-38h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E9F98 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, unitNum, isUnitNumChanged, *(_QWORD *)&maxNum);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5624/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_5622/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, v17, v18, v19);
    byte_42E9F98 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5622/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, 0LL);
  v34 = unitNum;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v22 = System_String__Format(v20, v21, 0LL);
  v24 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v22,
          v22,
          isUnitNumChanged,
          v23);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5624/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, 0LL);
  v33 = maxNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v27 = System_String__Format(v25, v26, 0LL);
  v29 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v27,
          v27,
          isMaxNumChanged,
          v28);
  rewardNumLabel = this->fields.rewardNumLabel;
  v31 = System_String__Concat_44577788(v24, v29, 0LL);
  if ( !rewardNumLabel )
    sub_B5D69C(v31, v32);
  UILabel__set_text(rewardNumLabel, v31, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t coolUnitTime,
        bool isQP,
        bool isChangeColor,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  System_String_o *v24; // x22
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  const MethodInfo *v27; // x3
  int v28; // w22
  int v29; // w24
  int v30; // w23
  System_String_o *v31; // x21
  Il2CppObject *v32; // x22
  Il2CppObject *v33; // x23
  Il2CppObject *v34; // x0
  UILabel_o *getRewardUnitTimeLabel; // x20
  System_String_o *v36; // x19
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  __int64 v39; // x1
  int v40; // [xsp+Ch] [xbp-44h] BYREF
  int v41; // [xsp+18h] [xbp-38h] BYREF
  int32_t v42; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42E9F97 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, coolUnitTime, isQP, isChangeColor);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&string_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5628/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_5614/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5629/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, v21, v22, v23);
    byte_42E9F97 = 1;
  }
  if ( isQP )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5629/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, 0LL);
    v42 = coolUnitTime;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
    v26 = System_String__Format(v24, v25, 0LL);
  }
  else
  {
    v28 = coolUnitTime / 3600;
    v29 = coolUnitTime % 60;
    v30 = coolUnitTime % 3600 / 60;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5628/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
    v42 = v28;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
    v41 = v30;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    v40 = v29;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    v26 = System_String__Format_44578852(v31, v32, v33, v34, 0LL);
  }
  getRewardUnitTimeLabel = this->fields.getRewardUnitTimeLabel;
  v36 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
          (EventInfoAreaImproveResultInfoComponent_o *)v26,
          v26,
          isChangeColor,
          v27);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_5614/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, 0LL);
  v38 = System_String__Concat_44577788(v36, v37, 0LL);
  if ( !getRewardUnitTimeLabel )
    sub_B5D69C(v38, v39);
  UILabel__set_text(getRewardUnitTimeLabel, v38, 0LL);
}