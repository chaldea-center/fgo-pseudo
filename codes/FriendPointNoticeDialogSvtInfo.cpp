void FriendPointNoticeDialogSvtInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4CB8B47 & 1) == 0 )
  {
    sub_1C6BA08(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    byte_4CB8B47 = 1;
  }
  LODWORD(FriendPointNoticeDialogSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH) = (struct FriendPointNoticeDialogSvtInfo_StaticFields)1140457472;
}


void FriendPointNoticeDialogSvtInfo___ctor(FriendPointNoticeDialogSvtInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool FriendPointNoticeDialogSvtInfo__Set(
        FriendPointNoticeDialogSvtInfo_o *this,
        int32_t svtId,
        int64_t usrSvtId,
        System_String_o *questName,
        int32_t friendPoint,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x27
  Il2CppObject *v12; // x26
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  ServantExceedMaster_o *v16; // x25
  void *questLabel; // x0
  System_String_o *v18; // x28
  UILabel_o *friendPointLabel; // x24
  Il2CppObject *v20; // x0
  UserServantEntity_o *v21; // x22
  bool v22; // w27
  int32_t Rarity; // w0
  Il2CppObject *ServantShortName; // x23
  System_String_o *v25; // x0
  UILabel_o *supportServantNameLabel; // x24
  Il2CppObject *v27; // x25
  System_String_o *v28; // x26
  Il2CppObject *v29; // x0
  System_String_o *v30; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v32; // x23
  UnityEngine_Object_o *supportServantFaceIcon; // x23
  IconLabelInfo_o *v34; // x23
  bool v35; // w8
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  int32_t lv; // w21
  ServantOverwriteStatus_o *v38; // x20
  int32_t v40; // [xsp+64h] [xbp-7Ch] BYREF
  ServantLimitEntity_o *v41; // [xsp+68h] [xbp-78h] BYREF
  int32_t v42; // [xsp+74h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4CB8B45 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C6BA08(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    sub_1C6BA08(&IconLabelInfo_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1371/*"3"*/);
    sub_1C6BA08(&StringLiteral_1310/*"2"*/);
    sub_1C6BA08(&StringLiteral_6947/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/);
    sub_1C6BA08(&StringLiteral_25691/*"４"*/);
    sub_1C6BA08(&StringLiteral_25690/*"３"*/);
    sub_1C6BA08(&StringLiteral_25688/*"１"*/);
    sub_1C6BA08(&StringLiteral_1396/*"4"*/);
    sub_1C6BA08(&StringLiteral_25692/*"５"*/);
    sub_1C6BA08(&StringLiteral_6938/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/);
    sub_1C6BA08(&StringLiteral_6946/*"GET_FRIEND_POINT_SERVANT_NAME"*/);
    sub_1C6BA08(&StringLiteral_25689/*"２"*/);
    sub_1C6BA08(&StringLiteral_1165/*"1"*/);
    sub_1C6BA08(&StringLiteral_1413/*"5"*/);
    byte_4CB8B45 = 1;
  }
  entity = 0;
  v42 = 0;
  v41 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( svtId < 1 )
    goto LABEL_47;
  v16 = (ServantExceedMaster_o *)v14;
  questLabel = this->fields.questLabel;
  if ( !questLabel )
    goto LABEL_55;
  UILabel__set_text((UILabel_o *)questLabel, questName, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6938/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/, 0);
  friendPointLabel = this->fields.friendPointLabel;
  v40 = friendPoint;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  questLabel = System_String__Format(v18, v20, 0);
  if ( !friendPointLabel )
    goto LABEL_55;
  UILabel__set_text(friendPointLabel, (System_String_o *)questLabel, 0);
  if ( !Master_object )
    goto LABEL_55;
  questLabel = (void *)DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         &entity,
                         svtId,
                         (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)questLabel & 1) == 0 )
  {
LABEL_47:
    LOBYTE(questLabel) = 0;
    return (char)questLabel;
  }
  if ( !v12 )
    goto LABEL_55;
  questLabel = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                 usrSvtId,
                 (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v21 = (UserServantEntity_o *)questLabel;
  v22 = usrSvtId < 1 || questLabel == 0;
  if ( v22 )
  {
    if ( !v16 )
      goto LABEL_55;
    Rarity = ServantExceedMaster__GetRarity(v16, svtId, 0);
  }
  else
  {
    questLabel = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)questLabel, 0, 0);
    if ( !questLabel )
      goto LABEL_55;
    Rarity = *((_DWORD *)questLabel + 6);
  }
  v42 = Rarity;
  ServantShortName = (Il2CppObject *)CombineUtility__GetServantShortName(svtId, 0);
  if ( !v42 )
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    questLabel = LocalizationManager__Get((System_String_o *)StringLiteral_6947/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0);
    if ( entity )
    {
      v30 = (System_String_o *)questLabel;
      ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
      questLabel = System_String__Format_64008100(v30, ServantShortName, ClassName, 0);
      if ( supportServantNameLabel )
        goto LABEL_33;
    }
LABEL_55:
    sub_1C6BC60(questLabel, v15);
  }
  questLabel = System_Int32__ToString((int32_t)&v42, 0);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_64013356(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1165/*"1"*/,
                 (System_String_o *)StringLiteral_25688/*"１"*/,
                 0);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_64013356(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1310/*"2"*/,
                 (System_String_o *)StringLiteral_25689/*"２"*/,
                 0);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_64013356(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1371/*"3"*/,
                 (System_String_o *)StringLiteral_25690/*"３"*/,
                 0);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_64013356(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1396/*"4"*/,
                 (System_String_o *)StringLiteral_25691/*"４"*/,
                 0);
  if ( !questLabel )
    goto LABEL_55;
  v25 = System_String__Replace_64013356(
          (System_String_o *)questLabel,
          (System_String_o *)StringLiteral_1413/*"5"*/,
          (System_String_o *)StringLiteral_25692/*"５"*/,
          0);
  supportServantNameLabel = this->fields.supportServantNameLabel;
  v27 = (Il2CppObject *)v25;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  questLabel = LocalizationManager__Get((System_String_o *)StringLiteral_6946/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0);
  if ( !entity )
    goto LABEL_55;
  v28 = (System_String_o *)questLabel;
  v29 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
  questLabel = System_String__Format_64008168(v28, v27, ServantShortName, v29, 0);
  if ( !supportServantNameLabel )
    goto LABEL_55;
LABEL_33:
  UILabel__set_text(supportServantNameLabel, (System_String_o *)questLabel, 0);
  v32 = this->fields.supportServantNameLabel;
  questLabel = FriendPointNoticeDialogSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDialogSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogSvtInfo_TypeInfo);
  if ( !v32 )
    goto LABEL_55;
  UILabel__SetCondensedScale_49828120(
    v32,
    FriendPointNoticeDialogSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0.0,
    0);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0, 0) )
    goto LABEL_47;
  v34 = (IconLabelInfo_o *)sub_1C6BC54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v34, 0);
  if ( !v22 )
  {
    OverwriteStatus = UserServantEntity__GetOverwriteStatus(v21, 0, 0);
    lv = v21->fields.lv;
    v38 = OverwriteStatus;
    questLabel = (void *)UserServantEntity__getLevelMax(v21, 0);
    if ( !v34 )
      goto LABEL_55;
    IconLabelInfo__Set_41149608(v34, 2, lv, (int32_t)questLabel, 0, 0, 0, 0, 0, 0);
    questLabel = this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_55;
    ServantFaceIconComponent__Set((ServantFaceIconComponent_o *)questLabel, v21, 0, 0, 0, 0, 0, 1, 0, 0);
    if ( !v38 )
      goto LABEL_55;
    questLabel = this->fields.supportServantSubLabel;
    if ( !questLabel )
      goto LABEL_55;
    UIIconLabel__Set_41344128(
      (UIIconLabel_o *)questLabel,
      36,
      v38->fields._Rarity_k__BackingField,
      0,
      0,
      0,
      0,
      0,
      0,
      v38->fields._ActualRarity_k__BackingField,
      0);
    goto LABEL_54;
  }
  if ( !v13 )
    goto LABEL_55;
  v35 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v13, &v41, svtId, 0, 0);
  questLabel = 0;
  if ( v35 )
  {
    if ( !v41 )
      goto LABEL_55;
    if ( !v34 )
      goto LABEL_55;
    IconLabelInfo__Set_41149608(v34, 2, 1, v41->fields.lvMax, 0, 0, 0, 0, 0, 0);
    questLabel = this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_55;
    ServantFaceIconComponent__Set_41240444(
      (ServantFaceIconComponent_o *)questLabel,
      svtId,
      0,
      0,
      0,
      v34,
      0,
      2,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0);
    questLabel = this->fields.supportServantSubLabel;
    if ( !questLabel )
      goto LABEL_55;
    UIIconLabel__Set_41344128((UIIconLabel_o *)questLabel, 36, v42, 0, 0, 0, 0, 0, 0, 0, 0);
LABEL_54:
    LOBYTE(questLabel) = 1;
  }
  return (char)questLabel;
}


void FriendPointNoticeDialogSvtInfo__SetLabelsBitmapFont(
        FriendPointNoticeDialogSvtInfo_o *this,
        UIFont_o *bitmapFont,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *supportServantFaceIcon; // x0

  supportServantFaceIcon = this->fields.supportServantFaceIcon;
  if ( !supportServantFaceIcon
    || (ServantFaceIconComponent__SetIconLabelBitmapFont(supportServantFaceIcon, bitmapFont, 0),
        (supportServantFaceIcon = (ServantFaceIconComponent_o *)this->fields.supportServantSubLabel) == 0) )
  {
    sub_1C6BC60(supportServantFaceIcon, bitmapFont);
  }
  UIIconLabel__SetTextLabelBitmapFont((UIIconLabel_o *)supportServantFaceIcon, bitmapFont, 0);
}


void FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(
        FriendPointNoticeDialogSvtInfo_o *this,
        float maxWidth,
        const MethodInfo *method)
{
  FriendPointNoticeDialogSvtInfo_c *v5; // x0
  UILabel_o *supportServantNameLabel; // x0

  if ( (byte_4CB8B46 & 1) == 0 )
  {
    sub_1C6BA08(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    byte_4CB8B46 = 1;
  }
  if ( maxWidth <= 0.0 )
  {
    v5 = FriendPointNoticeDialogSvtInfo_TypeInfo;
    if ( !FriendPointNoticeDialogSvtInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogSvtInfo_TypeInfo);
      v5 = FriendPointNoticeDialogSvtInfo_TypeInfo;
    }
    maxWidth = v5->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH;
  }
  supportServantNameLabel = this->fields.supportServantNameLabel;
  if ( !supportServantNameLabel
    || (UILabel__SetCondensedScale_49828120(supportServantNameLabel, maxWidth, 0.0, 0),
        (supportServantNameLabel = this->fields.questLabel) == 0)
    || (UILabel__SetCondensedScale_49828120(supportServantNameLabel, maxWidth, 0.0, 0),
        (supportServantNameLabel = this->fields.friendPointLabel) == 0) )
  {
    sub_1C6BC60(supportServantNameLabel, method);
  }
  UILabel__SetCondensedScale_49828120(supportServantNameLabel, maxWidth, 0.0, 0);
}