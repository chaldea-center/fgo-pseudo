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
  __int64 v8; // x1

  if ( (byte_49FCF1E & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, str);
    sub_1B640C8(&StringLiteral_5516/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, v8);
    byte_49FCF1E = 1;
    if ( isChangeColor )
      goto LABEL_3;
    return str;
  }
  if ( !isChangeColor )
    return str;
LABEL_3:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5516/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, 0LL);
  return System_String__Format(v6, (Il2CppObject *)str, 0LL);
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
  int v9; // w25
  int v10; // w22
  System_String_o *v11; // x21
  Il2CppObject *v12; // x22
  Il2CppObject *v13; // x0
  EventInfoAreaImproveResultInfoComponent_o *v14; // x0
  UILabel_o *addEventPointRateLabel; // x20
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  int v18; // [xsp+8h] [xbp-48h] BYREF
  int v19; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FCF19 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&addEventPointRate);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_5510/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, v8);
    byte_49FCF19 = 1;
  }
  v9 = addEventPointRate / 100 % 10;
  v10 = addEventPointRate / 1000;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5510/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, 0LL);
  v19 = v10;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v18 = v9;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v14 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format_61389768(v11, v12, v13, 0LL);
  addEventPointRateLabel = this->fields.addEventPointRateLabel;
  v17 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v14, (System_String_o *)v14, isChangeColor, v16);
  if ( !addEventPointRateLabel )
    sub_1B64324(v17);
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
  Il2CppObject *Master_object; // x21
  UserItemEntity_o *Entity; // x0
  UserItemEntity_o *v10; // x21
  int32_t num; // w21

  v4 = this;
  if ( (byte_49FCF1D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, giftEnt);
    sub_1B640C8(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    this = (EventInfoAreaImproveResultInfoComponent_o *)sub_1B640C8(&NetworkManager_TypeInfo, v7);
    byte_49FCF1D = 1;
  }
  if ( !giftEnt )
    goto LABEL_21;
  if ( !GiftEntity__checkGiftType(giftEnt, 2, 0LL) )
    goto LABEL_15;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (EventInfoAreaImproveResultInfoComponent_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_21;
  Entity = UserItemMaster__GetEntity((UserItemMaster_o *)Master_object, (int64_t)this, giftEnt->fields.objectId, 0LL);
  if ( !Entity )
    goto LABEL_15;
  v10 = Entity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventInfoAreaImproveResultInfoComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
LABEL_21:
    sub_1B64324(this);
  if ( !ItemMaster__isQP((ItemMaster_o *)this, giftEnt->fields.objectId, 0LL) )
  {
    num = v10->fields.num;
    goto LABEL_16;
  }
LABEL_15:
  num = -1;
LABEL_16:
  this = (EventInfoAreaImproveResultInfoComponent_o *)v4->fields.itemIcon;
  if ( !this )
    goto LABEL_21;
  ItemIconComponent__SetCountLabelActivation((ItemIconComponent_o *)this, num > 0, 0LL);
  this = (EventInfoAreaImproveResultInfoComponent_o *)v4->fields.itemIcon;
  if ( !this )
    goto LABEL_21;
  ItemIconComponent__SetPossessionTitleActivation((ItemIconComponent_o *)this, num > 0, 0LL);
  this = (EventInfoAreaImproveResultInfoComponent_o *)v4->fields.itemIcon;
  if ( !this )
    goto LABEL_21;
  ItemIconComponent__SetGift_37829292(
    (ItemIconComponent_o *)this,
    giftEnt->fields.type,
    giftEnt->fields.objectId,
    num,
    0,
    0LL);
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
  EventInfoAreaImproveResultInfoComponent_o *v11; // x0
  UILabel_o *levelLabel; // x20
  const MethodInfo *v13; // x3
  System_String_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FCF18 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_5512/*"EVENT_AREA_IMPROVE_LEVEL"*/, v8);
    byte_49FCF18 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5512/*"EVENT_AREA_IMPROVE_LEVEL"*/, 0LL);
  v15 = lv;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v11 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v9, v10, 0LL);
  levelLabel = this->fields.levelLabel;
  v14 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v11, (System_String_o *)v11, isChangeColor, v13);
  if ( !levelLabel )
    sub_1B64324(v14);
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
  int v10; // w28
  int v11; // w26
  int v12; // w27
  System_String_o *v13; // x21
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x23
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UILabel_o *maxRewardTimeLabel; // x20
  System_String_o *v19; // x21
  EventInfoAreaImproveResultInfoComponent_o *v20; // x22
  const MethodInfo *v21; // x3
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  int v24; // [xsp+Ch] [xbp-64h] BYREF
  int v25; // [xsp+18h] [xbp-58h] BYREF
  int v26; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_49FCF1C & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&coolTime);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_5517/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, v8);
    sub_1B640C8(&StringLiteral_5514/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/, v9);
    byte_49FCF1C = 1;
  }
  v10 = coolTime / 3600;
  v11 = coolTime % 60;
  v12 = coolTime % 3600 / 60;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5517/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
  v26 = v10;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v25 = v12;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v24 = v11;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v17 = System_String__Format_61389836(v13, v14, v15, v16, 0LL);
  maxRewardTimeLabel = this->fields.maxRewardTimeLabel;
  v19 = v17;
  v20 = (EventInfoAreaImproveResultInfoComponent_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_5514/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/,
                                                       0LL);
  v22 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v20, v19, isChangeColor, v21);
  v23 = System_String__Concat_61375396((System_String_o *)v20, v22, 0LL);
  if ( !maxRewardTimeLabel )
    sub_1B64324(v23);
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
  EventInfoAreaImproveResultInfoComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  EventInfoAreaImproveResultInfoComponent_o *v21; // x0
  const MethodInfo *v22; // x3
  System_String_o *v23; // x0
  UILabel_o *rewardNumLabel; // x19
  System_String_o *v25; // x0
  int32_t v26; // [xsp+8h] [xbp-48h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FCF1B & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&unitNum);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_5513/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, v12);
    sub_1B640C8(&StringLiteral_5511/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, v13);
    byte_49FCF1B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5511/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, 0LL);
  v27 = unitNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v16 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v14, v15, 0LL);
  v18 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v16, (System_String_o *)v16, isUnitNumChanged, v17);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5513/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, 0LL);
  v26 = maxNum;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v21 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v19, v20, 0LL);
  v23 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v21, (System_String_o *)v21, isMaxNumChanged, v22);
  rewardNumLabel = this->fields.rewardNumLabel;
  v25 = System_String__Concat_61375396(v18, v23, 0LL);
  if ( !rewardNumLabel )
    sub_1B64324(v25);
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
  EventInfoAreaImproveResultInfoComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  int v18; // w22
  int v19; // w25
  int v20; // w23
  System_String_o *v21; // x21
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x0
  UILabel_o *getRewardUnitTimeLabel; // x20
  System_String_o *v26; // x19
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  int v29; // [xsp+Ch] [xbp-54h] BYREF
  int v30; // [xsp+18h] [xbp-48h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_49FCF1A & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&coolUnitTime);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&string_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_5517/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, v11);
    sub_1B640C8(&StringLiteral_5503/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, v12);
    sub_1B640C8(&StringLiteral_5518/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, v13);
    byte_49FCF1A = 1;
  }
  if ( isQP )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5518/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, 0LL);
    v31 = coolUnitTime;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v16 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v14, v15, 0LL);
  }
  else
  {
    v18 = coolUnitTime / 3600;
    v19 = coolUnitTime % 60;
    v20 = coolUnitTime % 3600 / 60;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5517/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
    v31 = v18;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v30 = v20;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v29 = v19;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v16 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format_61389836(v21, v22, v23, v24, 0LL);
  }
  getRewardUnitTimeLabel = this->fields.getRewardUnitTimeLabel;
  v26 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v16, (System_String_o *)v16, isChangeColor, v17);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5503/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, 0LL);
  v28 = System_String__Concat_61375396(v26, v27, 0LL);
  if ( !getRewardUnitTimeLabel )
    sub_1B64324(v28);
  UILabel__set_text(getRewardUnitTimeLabel, v28, 0LL);
}