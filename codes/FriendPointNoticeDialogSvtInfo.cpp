void FriendPointNoticeDialogSvtInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4C29BDE & 1) == 0 )
  {
    sub_1C2D490(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    byte_4C29BDE = 1;
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
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  UserServantEntity_o *v24; // x22
  bool v25; // w27
  int32_t Rarity; // w0
  Il2CppObject *ServantShortName; // x23
  System_String_o *v28; // x0
  UILabel_o *supportServantNameLabel; // x24
  Il2CppObject *v30; // x25
  System_String_o *v31; // x26
  Il2CppObject *v32; // x0
  System_String_o *v33; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v35; // x23
  UnityEngine_Object_o *supportServantFaceIcon; // x23
  IconLabelInfo_o *v37; // x23
  bool v38; // w8
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  int32_t lv; // w21
  ServantOverwriteStatus_o *v41; // x20
  int32_t v43; // [xsp+64h] [xbp-7Ch] BYREF
  ServantLimitEntity_o *v44; // [xsp+68h] [xbp-78h] BYREF
  int32_t v45; // [xsp+74h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4C29BDC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1378/*"3"*/);
    sub_1C2D490(&StringLiteral_1317/*"2"*/);
    sub_1C2D490(&StringLiteral_6948/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/);
    sub_1C2D490(&StringLiteral_25556/*"４"*/);
    sub_1C2D490(&StringLiteral_25555/*"３"*/);
    sub_1C2D490(&StringLiteral_25553/*"１"*/);
    sub_1C2D490(&StringLiteral_1403/*"4"*/);
    sub_1C2D490(&StringLiteral_25557/*"５"*/);
    sub_1C2D490(&StringLiteral_6939/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/);
    sub_1C2D490(&StringLiteral_6947/*"GET_FRIEND_POINT_SERVANT_NAME"*/);
    sub_1C2D490(&StringLiteral_25554/*"２"*/);
    sub_1C2D490(&StringLiteral_1172/*"1"*/);
    sub_1C2D490(&StringLiteral_1420/*"5"*/);
    byte_4C29BDC = 1;
  }
  entity = 0;
  v45 = 0;
  v44 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( svtId < 1 )
    goto LABEL_47;
  v16 = (ServantExceedMaster_o *)v14;
  questLabel = this->fields.questLabel;
  if ( !questLabel )
    goto LABEL_55;
  UILabel__set_text((UILabel_o *)questLabel, questName, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6939/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/, 0);
  friendPointLabel = this->fields.friendPointLabel;
  v43 = friendPoint;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v20, v21, v22);
  questLabel = System_String__Format(v18, v23, 0);
  if ( !friendPointLabel )
    goto LABEL_55;
  UILabel__set_text(friendPointLabel, (System_String_o *)questLabel, 0);
  if ( !Master_object )
    goto LABEL_55;
  questLabel = (void *)DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         &entity,
                         svtId,
                         (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
                 (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v24 = (UserServantEntity_o *)questLabel;
  v25 = usrSvtId < 1 || questLabel == 0;
  if ( v25 )
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
  v45 = Rarity;
  ServantShortName = (Il2CppObject *)CombineUtility__GetServantShortName(svtId, 0);
  if ( !v45 )
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    questLabel = LocalizationManager__Get((System_String_o *)StringLiteral_6948/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0);
    if ( entity )
    {
      v33 = (System_String_o *)questLabel;
      ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
      questLabel = System_String__Format_63499156(v33, ServantShortName, ClassName, 0);
      if ( supportServantNameLabel )
        goto LABEL_33;
    }
LABEL_55:
    sub_1C2D6EC(questLabel, v15);
  }
  questLabel = System_Int32__ToString((int32_t)&v45, 0);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_63504412(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1172/*"1"*/,
                 (System_String_o *)StringLiteral_25553/*"１"*/,
                 0);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_63504412(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1317/*"2"*/,
                 (System_String_o *)StringLiteral_25554/*"２"*/,
                 0);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_63504412(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1378/*"3"*/,
                 (System_String_o *)StringLiteral_25555/*"３"*/,
                 0);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_63504412(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1403/*"4"*/,
                 (System_String_o *)StringLiteral_25556/*"４"*/,
                 0);
  if ( !questLabel )
    goto LABEL_55;
  v28 = System_String__Replace_63504412(
          (System_String_o *)questLabel,
          (System_String_o *)StringLiteral_1420/*"5"*/,
          (System_String_o *)StringLiteral_25557/*"５"*/,
          0);
  supportServantNameLabel = this->fields.supportServantNameLabel;
  v30 = (Il2CppObject *)v28;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  questLabel = LocalizationManager__Get((System_String_o *)StringLiteral_6947/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0);
  if ( !entity )
    goto LABEL_55;
  v31 = (System_String_o *)questLabel;
  v32 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
  questLabel = System_String__Format_63499224(v31, v30, ServantShortName, v32, 0);
  if ( !supportServantNameLabel )
    goto LABEL_55;
LABEL_33:
  UILabel__set_text(supportServantNameLabel, (System_String_o *)questLabel, 0);
  v35 = this->fields.supportServantNameLabel;
  questLabel = FriendPointNoticeDialogSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDialogSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogSvtInfo_TypeInfo);
  if ( !v35 )
    goto LABEL_55;
  UILabel__SetCondensedScale_49422820(
    v35,
    FriendPointNoticeDialogSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0.0,
    0);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0, 0) )
    goto LABEL_47;
  v37 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v37, 0);
  if ( !v25 )
  {
    OverwriteStatus = UserServantEntity__GetOverwriteStatus(v24, 0, 0);
    lv = v24->fields.lv;
    v41 = OverwriteStatus;
    questLabel = (void *)UserServantEntity__getLevelMax(v24, 0);
    if ( !v37 )
      goto LABEL_55;
    IconLabelInfo__Set_40696284(v37, 2, lv, (int32_t)questLabel, 0, 0, 0, 0, 0, 0);
    questLabel = this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_55;
    ServantFaceIconComponent__Set((ServantFaceIconComponent_o *)questLabel, v24, 0, 0, 0, 0, 0, 1, 0, 0);
    if ( !v41 )
      goto LABEL_55;
    questLabel = this->fields.supportServantSubLabel;
    if ( !questLabel )
      goto LABEL_55;
    UIIconLabel__Set_40889008(
      (UIIconLabel_o *)questLabel,
      36,
      v41->fields._Rarity_k__BackingField,
      0,
      0,
      0,
      0,
      0,
      0,
      v41->fields._ActualRarity_k__BackingField,
      0);
    goto LABEL_54;
  }
  if ( !v13 )
    goto LABEL_55;
  v38 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v13, &v44, svtId, 0, 0);
  questLabel = 0;
  if ( v38 )
  {
    if ( !v44 )
      goto LABEL_55;
    if ( !v37 )
      goto LABEL_55;
    IconLabelInfo__Set_40696284(v37, 2, 1, v44->fields.lvMax, 0, 0, 0, 0, 0, 0);
    questLabel = this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_55;
    ServantFaceIconComponent__Set_40785040(
      (ServantFaceIconComponent_o *)questLabel,
      svtId,
      0,
      0,
      0,
      v37,
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
    UIIconLabel__Set_40889008((UIIconLabel_o *)questLabel, 36, v45, 0, 0, 0, 0, 0, 0, 0, 0);
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
    sub_1C2D6EC(supportServantFaceIcon, bitmapFont);
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

  if ( (byte_4C29BDD & 1) == 0 )
  {
    sub_1C2D490(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    byte_4C29BDD = 1;
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
    || (UILabel__SetCondensedScale_49422820(supportServantNameLabel, maxWidth, 0.0, 0),
        (supportServantNameLabel = this->fields.questLabel) == 0)
    || (UILabel__SetCondensedScale_49422820(supportServantNameLabel, maxWidth, 0.0, 0),
        (supportServantNameLabel = this->fields.friendPointLabel) == 0) )
  {
    sub_1C2D6EC(supportServantNameLabel, method);
  }
  UILabel__SetCondensedScale_49422820(supportServantNameLabel, maxWidth, 0.0, 0);
}