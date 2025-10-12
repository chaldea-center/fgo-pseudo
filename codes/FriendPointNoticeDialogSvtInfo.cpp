void FriendPointNoticeDialogSvtInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4C3A2F0 & 1) == 0 )
  {
    sub_1C32C20(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    byte_4C3A2F0 = 1;
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
  ServantExceedMaster_o *v15; // x25
  void *questLabel; // x0
  System_String_o *v17; // x28
  UILabel_o *friendPointLabel; // x24
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x0
  UserServantEntity_o *v26; // x22
  bool v27; // w27
  int32_t Rarity; // w0
  Il2CppObject *ServantShortName; // x23
  System_String_o *v30; // x0
  UILabel_o *supportServantNameLabel; // x24
  Il2CppObject *v32; // x25
  System_String_o *v33; // x26
  Il2CppObject *v34; // x0
  System_String_o *v35; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v37; // x23
  UnityEngine_Object_o *supportServantFaceIcon; // x23
  IconLabelInfo_o *v39; // x23
  bool v40; // w8
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  int32_t lv; // w21
  ServantOverwriteStatus_o *v43; // x20
  int32_t v45; // [xsp+64h] [xbp-7Ch] BYREF
  ServantLimitEntity_o *v46; // [xsp+68h] [xbp-78h] BYREF
  int32_t v47; // [xsp+74h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4C3A2EE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    sub_1C32C20(&IconLabelInfo_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1379/*"3"*/);
    sub_1C32C20(&StringLiteral_1318/*"2"*/);
    sub_1C32C20(&StringLiteral_6953/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/);
    sub_1C32C20(&StringLiteral_25576/*"４"*/);
    sub_1C32C20(&StringLiteral_25575/*"３"*/);
    sub_1C32C20(&StringLiteral_25573/*"１"*/);
    sub_1C32C20(&StringLiteral_1404/*"4"*/);
    sub_1C32C20(&StringLiteral_25577/*"５"*/);
    sub_1C32C20(&StringLiteral_6944/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/);
    sub_1C32C20(&StringLiteral_6952/*"GET_FRIEND_POINT_SERVANT_NAME"*/);
    sub_1C32C20(&StringLiteral_25574/*"２"*/);
    sub_1C32C20(&StringLiteral_1172/*"1"*/);
    sub_1C32C20(&StringLiteral_1421/*"5"*/);
    byte_4C3A2EE = 1;
  }
  entity = 0;
  v47 = 0;
  v46 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( svtId < 1 )
    goto LABEL_47;
  v15 = (ServantExceedMaster_o *)v14;
  questLabel = this->fields.questLabel;
  if ( !questLabel )
    goto LABEL_55;
  UILabel__set_text((UILabel_o *)questLabel, questName, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6944/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/, 0);
  friendPointLabel = this->fields.friendPointLabel;
  v45 = friendPoint;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v19, v20, v21, v22, v23, v24);
  questLabel = System_String__Format(v17, v25, 0);
  if ( !friendPointLabel )
    goto LABEL_55;
  UILabel__set_text(friendPointLabel, (System_String_o *)questLabel, 0);
  if ( !Master_object )
    goto LABEL_55;
  questLabel = (void *)DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         &entity,
                         svtId,
                         (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
                 (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v26 = (UserServantEntity_o *)questLabel;
  v27 = usrSvtId < 1 || questLabel == 0;
  if ( v27 )
  {
    if ( !v15 )
      goto LABEL_55;
    Rarity = ServantExceedMaster__GetRarity(v15, svtId, 0);
  }
  else
  {
    questLabel = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)questLabel, 0, 0);
    if ( !questLabel )
      goto LABEL_55;
    Rarity = *((_DWORD *)questLabel + 6);
  }
  v47 = Rarity;
  ServantShortName = (Il2CppObject *)CombineUtility__GetServantShortName(svtId, 0);
  if ( !v47 )
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    questLabel = LocalizationManager__Get((System_String_o *)StringLiteral_6953/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0);
    if ( entity )
    {
      v35 = (System_String_o *)questLabel;
      ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
      questLabel = System_String__Format_63559836(v35, ServantShortName, ClassName, 0);
      if ( supportServantNameLabel )
        goto LABEL_33;
    }
LABEL_55:
    sub_1C32E7C(questLabel);
  }
  questLabel = System_Int32__ToString((int32_t)&v47, 0);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_63565092(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1172/*"1"*/,
                 (System_String_o *)StringLiteral_25573/*"１"*/,
                 0);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_63565092(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1318/*"2"*/,
                 (System_String_o *)StringLiteral_25574/*"２"*/,
                 0);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_63565092(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1379/*"3"*/,
                 (System_String_o *)StringLiteral_25575/*"３"*/,
                 0);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_63565092(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1404/*"4"*/,
                 (System_String_o *)StringLiteral_25576/*"４"*/,
                 0);
  if ( !questLabel )
    goto LABEL_55;
  v30 = System_String__Replace_63565092(
          (System_String_o *)questLabel,
          (System_String_o *)StringLiteral_1421/*"5"*/,
          (System_String_o *)StringLiteral_25577/*"５"*/,
          0);
  supportServantNameLabel = this->fields.supportServantNameLabel;
  v32 = (Il2CppObject *)v30;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  questLabel = LocalizationManager__Get((System_String_o *)StringLiteral_6952/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0);
  if ( !entity )
    goto LABEL_55;
  v33 = (System_String_o *)questLabel;
  v34 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
  questLabel = System_String__Format_63559904(v33, v32, ServantShortName, v34, 0);
  if ( !supportServantNameLabel )
    goto LABEL_55;
LABEL_33:
  UILabel__set_text(supportServantNameLabel, (System_String_o *)questLabel, 0);
  v37 = this->fields.supportServantNameLabel;
  questLabel = FriendPointNoticeDialogSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDialogSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogSvtInfo_TypeInfo);
  if ( !v37 )
    goto LABEL_55;
  UILabel__SetCondensedScale_49482884(
    v37,
    FriendPointNoticeDialogSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0.0,
    0);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0, 0) )
    goto LABEL_47;
  v39 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v39, 0);
  if ( !v27 )
  {
    OverwriteStatus = UserServantEntity__GetOverwriteStatus(v26, 0, 0);
    lv = v26->fields.lv;
    v43 = OverwriteStatus;
    questLabel = (void *)UserServantEntity__getLevelMax(v26, 0);
    if ( !v39 )
      goto LABEL_55;
    IconLabelInfo__Set_40818388(v39, 2, lv, (int32_t)questLabel, 0, 0, 0, 0, 0, 0);
    questLabel = this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_55;
    ServantFaceIconComponent__Set((ServantFaceIconComponent_o *)questLabel, v26, 0, 0, 0, 0, 0, 1, 0, 0);
    if ( !v43 )
      goto LABEL_55;
    questLabel = this->fields.supportServantSubLabel;
    if ( !questLabel )
      goto LABEL_55;
    UIIconLabel__Set_41010828(
      (UIIconLabel_o *)questLabel,
      36,
      v43->fields._Rarity_k__BackingField,
      0,
      0,
      0,
      0,
      0,
      0,
      v43->fields._ActualRarity_k__BackingField,
      0);
    goto LABEL_54;
  }
  if ( !v13 )
    goto LABEL_55;
  v40 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v13, &v46, svtId, 0, 0);
  questLabel = 0;
  if ( v40 )
  {
    if ( !v46 )
      goto LABEL_55;
    if ( !v39 )
      goto LABEL_55;
    IconLabelInfo__Set_40818388(v39, 2, 1, v46->fields.lvMax, 0, 0, 0, 0, 0, 0);
    questLabel = this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_55;
    ServantFaceIconComponent__Set_40907144(
      (ServantFaceIconComponent_o *)questLabel,
      svtId,
      0,
      0,
      0,
      v39,
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
    UIIconLabel__Set_41010828((UIIconLabel_o *)questLabel, 36, v47, 0, 0, 0, 0, 0, 0, 0, 0);
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
    sub_1C32E7C(supportServantFaceIcon);
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

  if ( (byte_4C3A2EF & 1) == 0 )
  {
    sub_1C32C20(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    byte_4C3A2EF = 1;
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
    || (UILabel__SetCondensedScale_49482884(supportServantNameLabel, maxWidth, 0.0, 0),
        (supportServantNameLabel = this->fields.questLabel) == 0)
    || (UILabel__SetCondensedScale_49482884(supportServantNameLabel, maxWidth, 0.0, 0),
        (supportServantNameLabel = this->fields.friendPointLabel) == 0) )
  {
    sub_1C32E7C(supportServantNameLabel);
  }
  UILabel__SetCondensedScale_49482884(supportServantNameLabel, maxWidth, 0.0, 0);
}