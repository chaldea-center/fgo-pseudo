void EventInfoAreaImproveResultInfoComponent___ctor(
        EventInfoAreaImproveResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoAreaImproveResultInfoComponent__CheckSerializeFieldSetting(
        EventInfoAreaImproveResultInfoComponent_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *EventInfoAreaImproveResultInfoComponent__GetChangeColorText(
        EventInfoAreaImproveResultInfoComponent_o *this,
        System_String_o *str,
        bool isChangeColor,
        const MethodInfo *method)
{
  System_String_o *v6; // x0

  if ( (byte_59386FC & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5706/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/);
    byte_59386FC = 1;
  }
  if ( !isChangeColor )
    return str;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, str);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5706/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, 0);
  return System_String__Format(v6, (Il2CppObject *)str, 0);
}


void EventInfoAreaImproveResultInfoComponent__Init(
        EventInfoAreaImproveResultInfoComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void EventInfoAreaImproveResultInfoComponent__SetAddEventPointRateLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t addEventPointRate,
        bool isChangeColor,
        const MethodInfo *method)
{
  int v7; // w22
  int v8; // w23
  System_String_o *v9; // x21
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x0
  EventInfoAreaImproveResultInfoComponent_o *v12; // x0
  UILabel_o *addEventPointRateLabel; // x20
  const MethodInfo *v14; // x3
  System_String_o *v15; // x0
  __int64 v16; // x1
  int v17; // [xsp+8h] [xbp-38h] BYREF
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59386F7 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5700/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/);
    byte_59386F7 = 1;
  }
  v7 = addEventPointRate / 1000;
  v8 = addEventPointRate / 100 % 10;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&addEventPointRate);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5700/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, 0);
  v18 = v7;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v18);
  v17 = v8;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17);
  v12 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format_75484576(v9, v10, v11, 0);
  addEventPointRateLabel = this->fields.addEventPointRateLabel;
  v15 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v12, (System_String_o *)v12, isChangeColor, v14);
  if ( !addEventPointRateLabel )
    sub_21FFECC(v15, v16);
  UILabel__set_text(addEventPointRateLabel, v15, 0);
}


void EventInfoAreaImproveResultInfoComponent__SetIcon(
        EventInfoAreaImproveResultInfoComponent_o *this,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  EventInfoAreaImproveResultInfoComponent_o *v4; // x20
  Il2CppObject *Master_object; // x21
  UserItemEntity_o *Entity; // x0
  UserItemEntity_o *v7; // x21
  int num; // w21

  v4 = this;
  if ( (byte_59386FB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    this = (EventInfoAreaImproveResultInfoComponent_o *)sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59386FB = 1;
  }
  if ( !giftEnt )
    goto LABEL_25;
  if ( !GiftEntity__checkGiftType(giftEnt, 2, 0) )
    goto LABEL_19;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftEnt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, giftEnt);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  this = (EventInfoAreaImproveResultInfoComponent_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, giftEnt);
    this = (EventInfoAreaImproveResultInfoComponent_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_25;
  Entity = UserItemMaster__GetEntity(
             (UserItemMaster_o *)Master_object,
             (int64_t)this[2].fields.m_CancellationTokenSource[1].klass,
             giftEnt->fields.objectId,
             0);
  if ( !Entity )
    goto LABEL_19;
  v7 = Entity;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftEnt);
  this = (EventInfoAreaImproveResultInfoComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
LABEL_25:
    sub_21FFECC(this, giftEnt);
  if ( !ItemMaster__isQP((ItemMaster_o *)this, giftEnt->fields.objectId, 0) )
  {
    num = v7->fields.num;
    goto LABEL_20;
  }
LABEL_19:
  num = -1;
LABEL_20:
  this = (EventInfoAreaImproveResultInfoComponent_o *)v4->fields.itemIcon;
  if ( !this )
    goto LABEL_25;
  ItemIconComponent__SetCountLabelActivation((ItemIconComponent_o *)this, num > 0, 0);
  this = (EventInfoAreaImproveResultInfoComponent_o *)v4->fields.itemIcon;
  if ( !this )
    goto LABEL_25;
  ItemIconComponent__SetPossessionTitleActivation((ItemIconComponent_o *)this, num > 0, 0);
  this = (EventInfoAreaImproveResultInfoComponent_o *)v4->fields.itemIcon;
  if ( !this )
    goto LABEL_25;
  ItemIconComponent__SetGift_47936840(
    (ItemIconComponent_o *)this,
    giftEnt->fields.type,
    giftEnt->fields.objectId,
    num,
    0,
    0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoAreaImproveResultInfoComponent__SetLevelLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t lv,
        bool isChangeColor,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  Il2CppObject *v8; // x0
  EventInfoAreaImproveResultInfoComponent_o *v9; // x0
  UILabel_o *levelLabel; // x20
  const MethodInfo *v11; // x3
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59386F6 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5702/*"EVENT_AREA_IMPROVE_LEVEL"*/);
    byte_59386F6 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&lv);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5702/*"EVENT_AREA_IMPROVE_LEVEL"*/, 0);
  v14 = lv;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v14);
  v9 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v7, v8, 0);
  levelLabel = this->fields.levelLabel;
  v12 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v9, (System_String_o *)v9, isChangeColor, v11);
  if ( !levelLabel )
    sub_21FFECC(v12, v13);
  UILabel__set_text(levelLabel, v12, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoAreaImproveResultInfoComponent__SetMaxRewardTimeLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t coolTime,
        bool isChangeColor,
        const MethodInfo *method)
{
  int v7; // w23
  int v8; // w25
  unsigned int v9; // w26
  System_String_o *v10; // x21
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x23
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UILabel_o *maxRewardTimeLabel; // x20
  System_String_o *v16; // x21
  EventInfoAreaImproveResultInfoComponent_o *v17; // x22
  const MethodInfo *v18; // x3
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  int v22; // [xsp+4h] [xbp-5Ch] BYREF
  unsigned int v23; // [xsp+8h] [xbp-58h] BYREF
  int v24; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_59386FA & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5707/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/);
    sub_21FFC50(&StringLiteral_5704/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/);
    byte_59386FA = 1;
  }
  v7 = coolTime / 3600;
  v8 = coolTime % 60;
  v9 = ((__int16)((unsigned int)(34953 * (coolTime % 3600)) >> 16) >> 5)
     + (((coolTime % 3600 + ((unsigned int)(-30583 * (coolTime % 3600)) >> 16)) & 0x8000) >> 15);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&coolTime);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5707/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0);
  v24 = v7;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v24);
  v23 = v9;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v23);
  v22 = v8;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v22);
  v14 = System_String__Format_75484644(v10, v11, v12, v13, 0);
  maxRewardTimeLabel = this->fields.maxRewardTimeLabel;
  v16 = v14;
  v17 = (EventInfoAreaImproveResultInfoComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5704/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/, 0);
  v19 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v17, v16, isChangeColor, v18);
  v20 = System_String__Concat_75438412((System_String_o *)v17, v19, 0);
  if ( !maxRewardTimeLabel )
    sub_21FFECC(v20, v21);
  UILabel__set_text(maxRewardTimeLabel, v20, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoAreaImproveResultInfoComponent__SetRewardNumLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t unitNum,
        bool isUnitNumChanged,
        int32_t maxNum,
        bool isMaxNumChanged,
        const MethodInfo *method)
{
  System_String_o *v11; // x24
  Il2CppObject *v12; // x0
  EventInfoAreaImproveResultInfoComponent_o *v13; // x0
  const MethodInfo *v14; // x3
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  Il2CppObject *v17; // x0
  EventInfoAreaImproveResultInfoComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  System_String_o *v20; // x0
  UILabel_o *rewardNumLabel; // x19
  System_String_o *v22; // x0
  __int64 v23; // x1
  int32_t v24; // [xsp+8h] [xbp-48h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_59386F9 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5703/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/);
    sub_21FFC50(&StringLiteral_5701/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/);
    byte_59386F9 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&unitNum);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5701/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, 0);
  v25 = unitNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v25);
  v13 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v11, v12, 0);
  v15 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v13, (System_String_o *)v13, isUnitNumChanged, v14);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, 0);
  v24 = maxNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v24);
  v18 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v16, v17, 0);
  v20 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v18, (System_String_o *)v18, isMaxNumChanged, v19);
  rewardNumLabel = this->fields.rewardNumLabel;
  v22 = System_String__Concat_75438412(v15, v20, 0);
  if ( !rewardNumLabel )
    sub_21FFECC(v22, v23);
  UILabel__set_text(rewardNumLabel, v22, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t coolUnitTime,
        bool isQP,
        bool isChangeColor,
        const MethodInfo *method)
{
  System_String_o *v9; // x22
  Il2CppObject *v10; // x0
  EventInfoAreaImproveResultInfoComponent_o *v11; // x0
  const MethodInfo *v12; // x3
  int v13; // w22
  int v14; // w25
  unsigned int v15; // w23
  System_String_o *v16; // x21
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  UILabel_o *getRewardUnitTimeLabel; // x20
  __int64 v21; // x1
  System_String_o *v22; // x19
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  int v26; // [xsp+Ch] [xbp-54h] BYREF
  unsigned int v27; // [xsp+18h] [xbp-48h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_59386F8 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5707/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/);
    sub_21FFC50(&StringLiteral_5693/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_5708/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/);
    byte_59386F8 = 1;
  }
  if ( isQP )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&coolUnitTime);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5708/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, 0);
    v28 = coolUnitTime;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v28);
    v11 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v9, v10, 0);
  }
  else
  {
    v13 = coolUnitTime / 3600;
    v14 = coolUnitTime % 60;
    v15 = ((__int16)((unsigned int)(34953 * (coolUnitTime % 3600)) >> 16) >> 5)
        + (((coolUnitTime % 3600 + ((unsigned int)(-30583 * (coolUnitTime % 3600)) >> 16)) & 0x8000) >> 15);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&coolUnitTime);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5707/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0);
    v28 = v13;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v28);
    v27 = v15;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v27);
    v26 = v14;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v26);
    v11 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format_75484644(v16, v17, v18, v19, 0);
  }
  getRewardUnitTimeLabel = this->fields.getRewardUnitTimeLabel;
  v22 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v11, (System_String_o *)v11, isChangeColor, v12);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5693/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, 0);
  v24 = System_String__Concat_75438412(v22, v23, 0);
  if ( !getRewardUnitTimeLabel )
    sub_21FFECC(v24, v25);
  UILabel__set_text(getRewardUnitTimeLabel, v24, 0);
}