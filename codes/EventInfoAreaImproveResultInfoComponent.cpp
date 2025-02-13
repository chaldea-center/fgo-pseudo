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

  if ( (byte_4BDCD01 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5658/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/);
    byte_4BDCD01 = 1;
    if ( isChangeColor )
      goto LABEL_3;
    return str;
  }
  if ( !isChangeColor )
    return str;
LABEL_3:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5658/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, 0LL);
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
  int v7; // w25
  int v8; // w22
  System_String_o *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x22
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  EventInfoAreaImproveResultInfoComponent_o *v18; // x0
  UILabel_o *addEventPointRateLabel; // x20
  const MethodInfo *v20; // x3
  System_String_o *v21; // x0
  __int64 v22; // x1
  int v23; // [xsp+8h] [xbp-48h] BYREF
  int v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDCCFC & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5652/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/);
    byte_4BDCCFC = 1;
  }
  v7 = addEventPointRate / 100 % 10;
  v8 = addEventPointRate / 1000;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, 0LL);
  v24 = v8;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v10, v11, v12);
  v23 = v7;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v14, v15, v16);
  v18 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format_63129848(v9, v13, v17, 0LL);
  addEventPointRateLabel = this->fields.addEventPointRateLabel;
  v21 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v18, (System_String_o *)v18, isChangeColor, v20);
  if ( !addEventPointRateLabel )
    sub_1C22094(v21, v22);
  UILabel__set_text(addEventPointRateLabel, v21, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetIcon(
        EventInfoAreaImproveResultInfoComponent_o *this,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  EventInfoAreaImproveResultInfoComponent_o *v4; // x20
  Il2CppObject *Master_object; // x21
  UserItemEntity_o *Entity; // x0
  UserItemEntity_o *v7; // x21
  int32_t num; // w21

  v4 = this;
  if ( (byte_4BDCD00 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    this = (EventInfoAreaImproveResultInfoComponent_o *)sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDCD00 = 1;
  }
  if ( !giftEnt )
    goto LABEL_25;
  if ( !GiftEntity__checkGiftType(giftEnt, 2, 0LL) )
    goto LABEL_19;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
             0LL);
  if ( !Entity )
    goto LABEL_19;
  v7 = Entity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventInfoAreaImproveResultInfoComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
LABEL_25:
    sub_1C22094(this, giftEnt);
  if ( !ItemMaster__isQP((ItemMaster_o *)this, giftEnt->fields.objectId, 0LL) )
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
  ItemIconComponent__SetCountLabelActivation((ItemIconComponent_o *)this, num > 0, 0LL);
  this = (EventInfoAreaImproveResultInfoComponent_o *)v4->fields.itemIcon;
  if ( !this )
    goto LABEL_25;
  ItemIconComponent__SetPossessionTitleActivation((ItemIconComponent_o *)this, num > 0, 0LL);
  this = (EventInfoAreaImproveResultInfoComponent_o *)v4->fields.itemIcon;
  if ( !this )
    goto LABEL_25;
  ItemIconComponent__SetGift_39386620(
    (ItemIconComponent_o *)this,
    giftEnt->fields.type,
    giftEnt->fields.objectId,
    num,
    0,
    0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetLevelLabel(
        EventInfoAreaImproveResultInfoComponent_o *this,
        int32_t lv,
        bool isChangeColor,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  EventInfoAreaImproveResultInfoComponent_o *v12; // x0
  UILabel_o *levelLabel; // x20
  const MethodInfo *v14; // x3
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDCCFB & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5654/*"EVENT_AREA_IMPROVE_LEVEL"*/);
    byte_4BDCCFB = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5654/*"EVENT_AREA_IMPROVE_LEVEL"*/, 0LL);
  v17 = lv;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v8, v9, v10);
  v12 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v7, v11, 0LL);
  levelLabel = this->fields.levelLabel;
  v15 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v12, (System_String_o *)v12, isChangeColor, v14);
  if ( !levelLabel )
    sub_1C22094(v15, v16);
  UILabel__set_text(levelLabel, v15, 0LL);
}


void __fastcall EventInfoAreaImproveResultInfoComponent__SetMaxRewardTimeLabel(
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
  Il2CppObject *v14; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  UILabel_o *maxRewardTimeLabel; // x20
  System_String_o *v25; // x21
  EventInfoAreaImproveResultInfoComponent_o *v26; // x22
  const MethodInfo *v27; // x3
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  __int64 v30; // x1
  int v31; // [xsp+Ch] [xbp-64h] BYREF
  int v32; // [xsp+18h] [xbp-58h] BYREF
  int v33; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4BDCCFF & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5659/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/);
    sub_1C21E38(&StringLiteral_5656/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/);
    byte_4BDCCFF = 1;
  }
  v7 = coolTime / 3600;
  v8 = coolTime % 60;
  v9 = coolTime % 3600 / 60;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
  v33 = v7;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v11, v12, v13);
  v32 = v9;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v15, v16, v17);
  v31 = v8;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v19, v20, v21);
  v23 = System_String__Format_63129916(v10, v14, v18, v22, 0LL);
  maxRewardTimeLabel = this->fields.maxRewardTimeLabel;
  v25 = v23;
  v26 = (EventInfoAreaImproveResultInfoComponent_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_5656/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/,
                                                       0LL);
  v28 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v26, v25, isChangeColor, v27);
  v29 = System_String__Concat_63115476((System_String_o *)v26, v28, 0LL);
  if ( !maxRewardTimeLabel )
    sub_1C22094(v29, v30);
  UILabel__set_text(maxRewardTimeLabel, v29, 0LL);
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
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  EventInfoAreaImproveResultInfoComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  EventInfoAreaImproveResultInfoComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  System_String_o *v26; // x0
  UILabel_o *rewardNumLabel; // x19
  System_String_o *v28; // x0
  __int64 v29; // x1
  int32_t v30; // [xsp+8h] [xbp-48h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDCCFE & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5655/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/);
    sub_1C21E38(&StringLiteral_5653/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/);
    byte_4BDCCFE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5653/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, 0LL);
  v31 = unitNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v12, v13, v14);
  v16 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v11, v15, 0LL);
  v18 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v16, (System_String_o *)v16, isUnitNumChanged, v17);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5655/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, 0LL);
  v30 = maxNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v20, v21, v22);
  v24 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v19, v23, 0LL);
  v26 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v24, (System_String_o *)v24, isMaxNumChanged, v25);
  rewardNumLabel = this->fields.rewardNumLabel;
  v28 = System_String__Concat_63115476(v18, v26, 0LL);
  if ( !rewardNumLabel )
    sub_1C22094(v28, v29);
  UILabel__set_text(rewardNumLabel, v28, 0LL);
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
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  EventInfoAreaImproveResultInfoComponent_o *v14; // x0
  const MethodInfo *v15; // x3
  int v16; // w22
  int v17; // w25
  int v18; // w23
  System_String_o *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x23
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  UILabel_o *getRewardUnitTimeLabel; // x20
  System_String_o *v33; // x19
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  __int64 v36; // x1
  int v37; // [xsp+Ch] [xbp-54h] BYREF
  int v38; // [xsp+18h] [xbp-48h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4BDCCFD & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_5659/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/);
    sub_1C21E38(&StringLiteral_5645/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_5660/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/);
    byte_4BDCCFD = 1;
  }
  if ( isQP )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5660/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, 0LL);
    v39 = coolUnitTime;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v10, v11, v12);
    v14 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v9, v13, 0LL);
  }
  else
  {
    v16 = coolUnitTime / 3600;
    v17 = coolUnitTime % 60;
    v18 = coolUnitTime % 3600 / 60;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
    v39 = v16;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v20, v21, v22);
    v38 = v18;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v24, v25, v26);
    v37 = v17;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v28, v29, v30);
    v14 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format_63129916(v19, v23, v27, v31, 0LL);
  }
  getRewardUnitTimeLabel = this->fields.getRewardUnitTimeLabel;
  v33 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v14, (System_String_o *)v14, isChangeColor, v15);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5645/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, 0LL);
  v35 = System_String__Concat_63115476(v33, v34, 0LL);
  if ( !getRewardUnitTimeLabel )
    sub_1C22094(v35, v36);
  UILabel__set_text(getRewardUnitTimeLabel, v35, 0LL);
}