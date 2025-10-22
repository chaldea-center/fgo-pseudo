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

  if ( (byte_4C570FB & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_5518/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/);
    byte_4C570FB = 1;
    if ( isChangeColor )
      goto LABEL_3;
    return str;
  }
  if ( !isChangeColor )
    return str;
LABEL_3:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5518/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, 0);
  return System_String__Format(v6, (Il2CppObject *)str, 0);
}


void EventInfoAreaImproveResultInfoComponent__Init(
        EventInfoAreaImproveResultInfoComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void EventInfoAreaImproveResultInfoComponent__SetAddEventPointRateLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t addEventPointRate,
        bool isChangeColor,
        const MethodInfo *method)
{
  int v7; // w25
  int v8; // w22
  System_String_o *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  EventInfoAreaImproveResultInfoComponent_o *v24; // x0
  UILabel_o *addEventPointRateLabel; // x20
  const MethodInfo *v26; // x3
  System_String_o *v27; // x0
  __int64 v28; // x1
  int v29; // [xsp+8h] [xbp-48h] BYREF
  int v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C570F6 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_5512/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/);
    byte_4C570F6 = 1;
  }
  v7 = addEventPointRate / 100 % 10;
  v8 = addEventPointRate / 1000;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5512/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, 0);
  v30 = v8;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v10, v11, v12, v13, v14, v15);
  v29 = v7;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v17, v18, v19, v20, v21, v22);
  v24 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format_63677760(v9, v16, v23, 0);
  addEventPointRateLabel = this->fields.addEventPointRateLabel;
  v27 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v24, (System_String_o *)v24, isChangeColor, v26);
  if ( !addEventPointRateLabel )
    sub_1C3E7C0(v27, v28);
  UILabel__set_text(addEventPointRateLabel, v27, 0);
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
  if ( (byte_4C570FA & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    this = (EventInfoAreaImproveResultInfoComponent_o *)sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C570FA = 1;
  }
  if ( !giftEnt )
    goto LABEL_25;
  if ( !GiftEntity__checkGiftType(giftEnt, 2, 0) )
    goto LABEL_19;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  this = (EventInfoAreaImproveResultInfoComponent_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventInfoAreaImproveResultInfoComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
LABEL_25:
    sub_1C3E7C0(this, giftEnt);
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
  ItemIconComponent__SetGift_40968388(
    (ItemIconComponent_o *)this,
    giftEnt->fields.type,
    giftEnt->fields.objectId,
    num,
    0,
    0);
}


void EventInfoAreaImproveResultInfoComponent__SetLevelLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t lv,
        bool isChangeColor,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  EventInfoAreaImproveResultInfoComponent_o *v15; // x0
  UILabel_o *levelLabel; // x20
  const MethodInfo *v17; // x3
  System_String_o *v18; // x0
  __int64 v19; // x1
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C570F5 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_5514/*"EVENT_AREA_IMPROVE_LEVEL"*/);
    byte_4C570F5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5514/*"EVENT_AREA_IMPROVE_LEVEL"*/, 0);
  v20 = lv;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v8, v9, v10, v11, v12, v13);
  v15 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v7, v14, 0);
  levelLabel = this->fields.levelLabel;
  v18 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v15, (System_String_o *)v15, isChangeColor, v17);
  if ( !levelLabel )
    sub_1C3E7C0(v18, v19);
  UILabel__set_text(levelLabel, v18, 0);
}


void EventInfoAreaImproveResultInfoComponent__SetMaxRewardTimeLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t coolTime,
        bool isChangeColor,
        const MethodInfo *method)
{
  int v7; // w28
  int v8; // w26
  int v9; // w27
  System_String_o *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x23
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  UILabel_o *maxRewardTimeLabel; // x20
  System_String_o *v34; // x21
  EventInfoAreaImproveResultInfoComponent_o *v35; // x22
  const MethodInfo *v36; // x3
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  __int64 v39; // x1
  int v40; // [xsp+Ch] [xbp-64h] BYREF
  int v41; // [xsp+18h] [xbp-58h] BYREF
  int v42; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C570F9 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_5519/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/);
    sub_1C3E564(&StringLiteral_5516/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/);
    byte_4C570F9 = 1;
  }
  v7 = coolTime / 3600;
  v8 = coolTime % 60;
  v9 = coolTime % 3600 / 60;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5519/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0);
  v42 = v7;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v11, v12, v13, v14, v15, v16);
  v41 = v9;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v18, v19, v20, v21, v22, v23);
  v40 = v8;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v25, v26, v27, v28, v29, v30);
  v32 = System_String__Format_63677828(v10, v17, v24, v31, 0);
  maxRewardTimeLabel = this->fields.maxRewardTimeLabel;
  v34 = v32;
  v35 = (EventInfoAreaImproveResultInfoComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5516/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/, 0);
  v37 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v35, v34, isChangeColor, v36);
  v38 = System_String__Concat_63636468((System_String_o *)v35, v37, 0);
  if ( !maxRewardTimeLabel )
    sub_1C3E7C0(v38, v39);
  UILabel__set_text(maxRewardTimeLabel, v38, 0);
}


void EventInfoAreaImproveResultInfoComponent__SetRewardNumLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t unitNum,
        bool isUnitNumChanged,
        int32_t maxNum,
        bool isMaxNumChanged,
        const MethodInfo *method)
{
  System_String_o *v11; // x24
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x0
  EventInfoAreaImproveResultInfoComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  Il2CppObject *v29; // x0
  EventInfoAreaImproveResultInfoComponent_o *v30; // x0
  const MethodInfo *v31; // x3
  System_String_o *v32; // x0
  UILabel_o *rewardNumLabel; // x19
  System_String_o *v34; // x0
  __int64 v35; // x1
  int32_t v36; // [xsp+8h] [xbp-48h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C570F8 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_5515/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/);
    sub_1C3E564(&StringLiteral_5513/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/);
    byte_4C570F8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5513/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, 0);
  v37 = unitNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v12, v13, v14, v15, v16, v17);
  v19 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v11, v18, 0);
  v21 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v19, (System_String_o *)v19, isUnitNumChanged, v20);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5515/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, 0);
  v36 = maxNum;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v23, v24, v25, v26, v27, v28);
  v30 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v22, v29, 0);
  v32 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v30, (System_String_o *)v30, isMaxNumChanged, v31);
  rewardNumLabel = this->fields.rewardNumLabel;
  v34 = System_String__Concat_63636468(v21, v32, 0);
  if ( !rewardNumLabel )
    sub_1C3E7C0(v34, v35);
  UILabel__set_text(rewardNumLabel, v34, 0);
}


void EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t coolUnitTime,
        bool isQP,
        bool isChangeColor,
        const MethodInfo *method)
{
  System_String_o *v9; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x0
  EventInfoAreaImproveResultInfoComponent_o *v17; // x0
  const MethodInfo *v18; // x3
  int v19; // w22
  int v20; // w25
  int v21; // w23
  System_String_o *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  Il2CppObject *v29; // x22
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  Il2CppObject *v36; // x23
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  Il2CppObject *v43; // x0
  UILabel_o *getRewardUnitTimeLabel; // x20
  System_String_o *v45; // x19
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  __int64 v48; // x1
  int v49; // [xsp+Ch] [xbp-54h] BYREF
  int v50; // [xsp+18h] [xbp-48h] BYREF
  int32_t v51; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C570F7 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&StringLiteral_5519/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/);
    sub_1C3E564(&StringLiteral_5505/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_5520/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/);
    byte_4C570F7 = 1;
  }
  if ( isQP )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5520/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, 0);
    v51 = coolUnitTime;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v10, v11, v12, v13, v14, v15);
    v17 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v9, v16, 0);
  }
  else
  {
    v19 = coolUnitTime / 3600;
    v20 = coolUnitTime % 60;
    v21 = coolUnitTime % 3600 / 60;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5519/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0);
    v51 = v19;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v23, v24, v25, v26, v27, v28);
    v50 = v21;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v30, v31, v32, v33, v34, v35);
    v49 = v20;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v37, v38, v39, v40, v41, v42);
    v17 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format_63677828(v22, v29, v36, v43, 0);
  }
  getRewardUnitTimeLabel = this->fields.getRewardUnitTimeLabel;
  v45 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v17, (System_String_o *)v17, isChangeColor, v18);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_5505/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, 0);
  v47 = System_String__Concat_63636468(v45, v46, 0);
  if ( !getRewardUnitTimeLabel )
    sub_1C3E7C0(v47, v48);
  UILabel__set_text(getRewardUnitTimeLabel, v47, 0);
}