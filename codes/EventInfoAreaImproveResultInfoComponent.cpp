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

  if ( (byte_4A20594 & 1) == 0 )
  {
    sub_1B715CC(&LocalizationManager_TypeInfo, str);
    sub_1B715CC(&StringLiteral_5522/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, v8);
    byte_4A20594 = 1;
    if ( isChangeColor )
      goto LABEL_3;
    return str;
  }
  if ( !isChangeColor )
    return str;
LABEL_3:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5522/*"EVENT_AREA_IMPROVE_REWARD_CHANGE_COLOR"*/, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x22
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  EventInfoAreaImproveResultInfoComponent_o *v20; // x0
  UILabel_o *addEventPointRateLabel; // x20
  const MethodInfo *v22; // x3
  System_String_o *v23; // x0
  __int64 v24; // x1
  int v25; // [xsp+8h] [xbp-48h] BYREF
  int v26; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A2058F & 1) == 0 )
  {
    sub_1B715CC(&int_TypeInfo, *(_QWORD *)&addEventPointRate);
    sub_1B715CC(&LocalizationManager_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_5516/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, v8);
    byte_4A2058F = 1;
  }
  v9 = addEventPointRate / 100 % 10;
  v10 = addEventPointRate / 1000;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5516/*"EVENT_AREA_IMPROVE_GET_POINT_RATE"*/, 0LL);
  v26 = v10;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v12, v13, v14);
  v25 = v9;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v16, v17, v18);
  v20 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format_61519876(v11, v15, v19, 0LL);
  addEventPointRateLabel = this->fields.addEventPointRateLabel;
  v23 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v20, (System_String_o *)v20, isChangeColor, v22);
  if ( !addEventPointRateLabel )
    sub_1B71828(v23, v24);
  UILabel__set_text(addEventPointRateLabel, v23, 0LL);
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
  if ( (byte_4A20593 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_ItemMaster___, giftEnt);
    sub_1B715CC(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1B715CC(&DataManager_TypeInfo, v6);
    this = (EventInfoAreaImproveResultInfoComponent_o *)sub_1B715CC(&NetworkManager_TypeInfo, v7);
    byte_4A20593 = 1;
  }
  if ( !giftEnt )
    goto LABEL_21;
  if ( !GiftEntity__checkGiftType(giftEnt, 2, 0LL) )
    goto LABEL_15;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserItemMaster___);
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
  this = (EventInfoAreaImproveResultInfoComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
LABEL_21:
    sub_1B71828(this, giftEnt);
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
  ItemIconComponent__SetGift_37939160(
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  EventInfoAreaImproveResultInfoComponent_o *v14; // x0
  UILabel_o *levelLabel; // x20
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  __int64 v18; // x1
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A2058E & 1) == 0 )
  {
    sub_1B715CC(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1B715CC(&LocalizationManager_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_5518/*"EVENT_AREA_IMPROVE_LEVEL"*/, v8);
    byte_4A2058E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5518/*"EVENT_AREA_IMPROVE_LEVEL"*/, 0LL);
  v19 = lv;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v10, v11, v12);
  v14 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v9, v13, 0LL);
  levelLabel = this->fields.levelLabel;
  v17 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v14, (System_String_o *)v14, isChangeColor, v16);
  if ( !levelLabel )
    sub_1B71828(v17, v18);
  UILabel__set_text(levelLabel, v17, 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  UILabel_o *maxRewardTimeLabel; // x20
  System_String_o *v28; // x21
  EventInfoAreaImproveResultInfoComponent_o *v29; // x22
  const MethodInfo *v30; // x3
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  __int64 v33; // x1
  int v34; // [xsp+Ch] [xbp-64h] BYREF
  int v35; // [xsp+18h] [xbp-58h] BYREF
  int v36; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4A20592 & 1) == 0 )
  {
    sub_1B715CC(&int_TypeInfo, *(_QWORD *)&coolTime);
    sub_1B715CC(&LocalizationManager_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_5523/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, v8);
    sub_1B715CC(&StringLiteral_5520/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/, v9);
    byte_4A20592 = 1;
  }
  v10 = coolTime / 3600;
  v11 = coolTime % 60;
  v12 = coolTime % 3600 / 60;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5523/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
  v36 = v10;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v14, v15, v16);
  v35 = v12;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v18, v19, v20);
  v34 = v11;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v22, v23, v24);
  v26 = System_String__Format_61519944(v13, v17, v21, v25, 0LL);
  maxRewardTimeLabel = this->fields.maxRewardTimeLabel;
  v28 = v26;
  v29 = (EventInfoAreaImproveResultInfoComponent_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_5520/*"EVENT_AREA_IMPROVE_MAX_REWARD_TIME_TEXT"*/,
                                                       0LL);
  v31 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v29, v28, isChangeColor, v30);
  v32 = System_String__Concat_61505504((System_String_o *)v29, v31, 0LL);
  if ( !maxRewardTimeLabel )
    sub_1B71828(v32, v33);
  UILabel__set_text(maxRewardTimeLabel, v32, 0LL);
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
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  EventInfoAreaImproveResultInfoComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  EventInfoAreaImproveResultInfoComponent_o *v27; // x0
  const MethodInfo *v28; // x3
  System_String_o *v29; // x0
  UILabel_o *rewardNumLabel; // x19
  System_String_o *v31; // x0
  __int64 v32; // x1
  int32_t v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A20591 & 1) == 0 )
  {
    sub_1B715CC(&int_TypeInfo, *(_QWORD *)&unitNum);
    sub_1B715CC(&LocalizationManager_TypeInfo, v11);
    sub_1B715CC(&StringLiteral_5519/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, v12);
    sub_1B715CC(&StringLiteral_5517/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, v13);
    byte_4A20591 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5517/*"EVENT_AREA_IMPROVE_GET_REWARD_NUM"*/, 0LL);
  v34 = unitNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v15, v16, v17);
  v19 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v14, v18, 0LL);
  v21 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v19, (System_String_o *)v19, isUnitNumChanged, v20);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5519/*"EVENT_AREA_IMPROVE_MAX_REWARD_NUM"*/, 0LL);
  v33 = maxNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v23, v24, v25);
  v27 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v22, v26, 0LL);
  v29 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v27, (System_String_o *)v27, isMaxNumChanged, v28);
  rewardNumLabel = this->fields.rewardNumLabel;
  v31 = System_String__Concat_61505504(v21, v29, 0LL);
  if ( !rewardNumLabel )
    sub_1B71828(v31, v32);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *v14; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  EventInfoAreaImproveResultInfoComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  int v21; // w22
  int v22; // w25
  int v23; // w23
  System_String_o *v24; // x21
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x22
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  UILabel_o *getRewardUnitTimeLabel; // x20
  System_String_o *v38; // x19
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  __int64 v41; // x1
  int v42; // [xsp+Ch] [xbp-54h] BYREF
  int v43; // [xsp+18h] [xbp-48h] BYREF
  int32_t v44; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A20590 & 1) == 0 )
  {
    sub_1B715CC(&int_TypeInfo, *(_QWORD *)&coolUnitTime);
    sub_1B715CC(&LocalizationManager_TypeInfo, v9);
    sub_1B715CC(&string_TypeInfo, v10);
    sub_1B715CC(&StringLiteral_5523/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, v11);
    sub_1B715CC(&StringLiteral_5509/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, v12);
    sub_1B715CC(&StringLiteral_5524/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, v13);
    byte_4A20590 = 1;
  }
  if ( isQP )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5524/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME_SEC"*/, 0LL);
    v44 = coolUnitTime;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v15, v16, v17);
    v19 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format(v14, v18, 0LL);
  }
  else
  {
    v21 = coolUnitTime / 3600;
    v22 = coolUnitTime % 60;
    v23 = coolUnitTime % 3600 / 60;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5523/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/, 0LL);
    v44 = v21;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v25, v26, v27);
    v43 = v23;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v29, v30, v31);
    v42 = v22;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v33, v34, v35);
    v19 = (EventInfoAreaImproveResultInfoComponent_o *)System_String__Format_61519944(v24, v28, v32, v36, 0LL);
  }
  getRewardUnitTimeLabel = this->fields.getRewardUnitTimeLabel;
  v38 = EventInfoAreaImproveResultInfoComponent__GetChangeColorText(v19, (System_String_o *)v19, isChangeColor, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5509/*"EVENT_AREA_IMPROVE_AFTER_TIME_MESSAGE"*/, 0LL);
  v40 = System_String__Concat_61505504(v38, v39, 0LL);
  if ( !getRewardUnitTimeLabel )
    sub_1B71828(v40, v41);
  UILabel__set_text(getRewardUnitTimeLabel, v40, 0LL);
}