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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
        EventInfoAreaImproveResultInfoComponent_o *this,
        System_String_o *str,
        bool isChangeColor,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B169B4 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, str, isChangeColor);
    sub_1BCA7E0(&StringLiteral_5619/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, v8, v9);
    byte_4B169B4 = 1;
    if ( isChangeColor )
      goto LABEL_3;
    return str;
  }
  if ( !isChangeColor )
    return str;
LABEL_3:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, str);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5619/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int v11; // w25
  int v12; // w22
  System_String_o *v13; // x21
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x0
  EventInfoAreaImproveResultInfoComponent_o *v16; // x0
  UILabel_o *addEventPointRateLabel; // x20
  const MethodInfo *v18; // x3
  System_String_o *v19; // x0
  __int64 v20; // x1
  int v21; // [xsp+8h] [xbp-48h] BYREF
  int v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B169AF & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&addEventPointRate, isChangeColor);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5613/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, v9, v10);
    byte_4B169AF = 1;
  }
  v11 = addEventPointRate / 100 % 10;
  v12 = addEventPointRate / 1000;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&addEventPointRate);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5613/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, 0LL);
  v22 = v12;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v21 = v11;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v16 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format_62415592(v13, v14, v15, 0LL);
  addEventPointRateLabel = this->fields.addEventPointRateLabel;
  v19 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v16, (System_String_o *)v16, isChangeColor, v18);
  if ( !addEventPointRateLabel )
    sub_1BCAA3C(v19, v20);
  UILabel__set_text(addEventPointRateLabel, v19, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetIcon(
        EventInfoAreaImproveResultInfoComponent_o *this,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  EventInfoAreaImproveResultInfoComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Master_object; // x21
  UserItemEntity_o *Entity; // x0
  UserItemEntity_o *v14; // x21
  int32_t num; // w21

  v4 = this;
  if ( (byte_4B169B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, giftEnt, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    this = (EventInfoAreaImproveResultInfoComponent_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    byte_4B169B3 = 1;
  }
  if ( !giftEnt )
    goto LABEL_21;
  if ( !GiftEntity__checkGiftType(giftEnt, 2, 0LL) )
    goto LABEL_15;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftEnt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  this = (EventInfoAreaImproveResultInfoComponent_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_21;
  Entity = UserItemMaster__GetEntity((UserItemMaster_o *)Master_object, (int64_t)this, giftEnt->fields.objectId, 0LL);
  if ( !Entity )
    goto LABEL_15;
  v14 = Entity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftEnt);
  this = (EventInfoAreaImproveResultInfoComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
LABEL_21:
    sub_1BCAA3C(this, giftEnt);
  if ( !ItemMaster__isQP((ItemMaster_o *)this, giftEnt->fields.objectId, 0LL) )
  {
    num = v14->fields.num;
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
  ItemIconComponent__SetGift_38855180(
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x22
  Il2CppObject *v12; // x0
  EventInfoAreaImproveResultInfoComponent_o *v13; // x0
  UILabel_o *levelLabel; // x20
  const MethodInfo *v15; // x3
  System_String_o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B169AE & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&lv, isChangeColor);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5615/*"EVENT_AREA_IMPROVE_LEVEL"*/, v9, v10);
    byte_4B169AE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&lv);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5615/*"EVENT_AREA_IMPROVE_LEVEL"*/, 0LL);
  v18 = lv;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v13 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v11, v12, 0LL);
  levelLabel = this->fields.levelLabel;
  v16 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v13, (System_String_o *)v13, isChangeColor, v15);
  if ( !levelLabel )
    sub_1BCAA3C(v16, v17);
  UILabel__set_text(levelLabel, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImproveResultInfoComponent__SetMaxRewardTimeLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t coolTime,
        bool isChangeColor,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int v13; // w28
  int v14; // w26
  int v15; // w27
  System_String_o *v16; // x21
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  UILabel_o *maxRewardTimeLabel; // x20
  System_String_o *v22; // x21
  EventInfoAreaImproveResultInfoComponent_o *v23; // x22
  const MethodInfo *v24; // x3
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x1
  int v28; // [xsp+Ch] [xbp-64h] BYREF
  int v29; // [xsp+18h] [xbp-58h] BYREF
  int v30; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B169B2 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&coolTime, isChangeColor);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5620/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_5617/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/, v11, v12);
    byte_4B169B2 = 1;
  }
  v13 = coolTime / 3600;
  v14 = coolTime % 60;
  v15 = coolTime % 3600 / 60;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&coolTime);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5620/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
  v30 = v13;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v29 = v15;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v28 = v14;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v20 = System_String__Format_62415660(v16, v17, v18, v19, 0LL);
  maxRewardTimeLabel = this->fields.maxRewardTimeLabel;
  v22 = v20;
  v23 = (EventInfoAreaImproveResultInfoComponent_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_5617/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/,
                                                       0LL);
  v25 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v23, v22, isChangeColor, v24);
  v26 = System_String__Concat_62401220((System_String_o *)v23, v25, 0LL);
  if ( !maxRewardTimeLabel )
    sub_1BCAA3C(v26, v27);
  UILabel__set_text(maxRewardTimeLabel, v26, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *v17; // x24
  Il2CppObject *v18; // x0
  EventInfoAreaImproveResultInfoComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  Il2CppObject *v23; // x0
  EventInfoAreaImproveResultInfoComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  System_String_o *v26; // x0
  UILabel_o *rewardNumLabel; // x19
  System_String_o *v28; // x0
  __int64 v29; // x1
  int32_t v30; // [xsp+8h] [xbp-48h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B169B1 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&unitNum, isUnitNumChanged);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_5616/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_5614/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, v15, v16);
    byte_4B169B1 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&unitNum);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5614/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, 0LL);
  v31 = unitNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v19 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v17, v18, 0LL);
  v21 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v19, (System_String_o *)v19, isUnitNumChanged, v20);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5616/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, 0LL);
  v30 = maxNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v24 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v22, v23, 0LL);
  v26 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v24, (System_String_o *)v24, isMaxNumChanged, v25);
  rewardNumLabel = this->fields.rewardNumLabel;
  v28 = System_String__Concat_62401220(v21, v26, 0LL);
  if ( !rewardNumLabel )
    sub_1BCAA3C(v28, v29);
  UILabel__set_text(rewardNumLabel, v28, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x22
  Il2CppObject *v20; // x0
  EventInfoAreaImproveResultInfoComponent_o *v21; // x0
  const MethodInfo *v22; // x3
  int v23; // w22
  int v24; // w25
  int v25; // w23
  System_String_o *v26; // x21
  Il2CppObject *v27; // x22
  Il2CppObject *v28; // x23
  Il2CppObject *v29; // x0
  UILabel_o *getRewardUnitTimeLabel; // x20
  __int64 v31; // x1
  System_String_o *v32; // x19
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  __int64 v35; // x1
  int v36; // [xsp+Ch] [xbp-54h] BYREF
  int v37; // [xsp+18h] [xbp-48h] BYREF
  int32_t v38; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B169B0 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&coolUnitTime, isQP);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&string_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_5620/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_5606/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_5621/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, v17, v18);
    byte_4B169B0 = 1;
  }
  if ( isQP )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&coolUnitTime);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5621/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, 0LL);
    v38 = coolUnitTime;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    v21 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v19, v20, 0LL);
  }
  else
  {
    v23 = coolUnitTime / 3600;
    v24 = coolUnitTime % 60;
    v25 = coolUnitTime % 3600 / 60;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&coolUnitTime);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5620/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
    v38 = v23;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    v37 = v25;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
    v36 = v24;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
    v21 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format_62415660(v26, v27, v28, v29, 0LL);
  }
  getRewardUnitTimeLabel = this->fields.getRewardUnitTimeLabel;
  v32 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v21, (System_String_o *)v21, isChangeColor, v22);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5606/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, 0LL);
  v34 = System_String__Concat_62401220(v32, v33, 0LL);
  if ( !getRewardUnitTimeLabel )
    sub_1BCAA3C(v34, v35);
  UILabel__set_text(getRewardUnitTimeLabel, v34, 0LL);
}