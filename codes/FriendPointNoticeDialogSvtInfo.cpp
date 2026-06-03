void FriendPointNoticeDialogSvtInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4E79E1A & 1) == 0 )
  {
    sub_1D0F0B4(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    byte_4E79E1A = 1;
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
  UILabel_o *questLabel; // x0
  System_String_o *v18; // x28
  UILabel_o *friendPointLabel; // x23
  Il2CppObject *v20; // x0
  UserServantEntity_o *v21; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x23
  intptr_t m_CachedPtr; // x25
  int32_t v24; // w23
  int32_t Rarity; // w0
  Il2CppObject *ServantShortName; // x24
  System_String_o *v27; // x0
  UILabel_o *supportServantNameLabel; // x25
  Il2CppObject *v29; // x26
  System_String_o *v30; // x27
  Il2CppObject *v31; // x0
  System_String_o *v32; // x26
  Il2CppObject *ClassName; // x0
  UILabel_o *v34; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  IconLabelInfo_o *v36; // x24
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  int32_t lv; // w21
  ServantOverwriteStatus_o *v39; // x20
  bool v40; // w8
  int32_t v42; // [xsp+64h] [xbp-7Ch] BYREF
  ServantLimitEntity_o *v43; // [xsp+68h] [xbp-78h] BYREF
  int32_t data; // [xsp+74h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4E79E18 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1D0F0B4(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    sub_1D0F0B4(&IconLabelInfo_TypeInfo);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1375/*"3"*/);
    sub_1D0F0B4(&StringLiteral_1313/*"2"*/);
    sub_1D0F0B4(&StringLiteral_7031/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/);
    sub_1D0F0B4(&StringLiteral_26103/*"４"*/);
    sub_1D0F0B4(&StringLiteral_26102/*"３"*/);
    sub_1D0F0B4(&StringLiteral_26100/*"１"*/);
    sub_1D0F0B4(&StringLiteral_1400/*"4"*/);
    sub_1D0F0B4(&StringLiteral_26104/*"５"*/);
    sub_1D0F0B4(&StringLiteral_7022/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/);
    sub_1D0F0B4(&StringLiteral_7030/*"GET_FRIEND_POINT_SERVANT_NAME"*/);
    sub_1D0F0B4(&StringLiteral_26101/*"２"*/);
    sub_1D0F0B4(&StringLiteral_1168/*"1"*/);
    sub_1D0F0B4(&StringLiteral_1417/*"5"*/);
    byte_4E79E18 = 1;
  }
  entity = 0;
  data = 0;
  v43 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( svtId < 1 )
    goto LABEL_50;
  v16 = (ServantExceedMaster_o *)v14;
  questLabel = this->fields.questLabel;
  if ( !questLabel )
    goto LABEL_60;
  UILabel__set_text(questLabel, questName, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_7022/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/, 0);
  friendPointLabel = this->fields.friendPointLabel;
  v42 = friendPoint;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  questLabel = (UILabel_o *)System_String__Format(v18, v20, 0);
  if ( !friendPointLabel )
    goto LABEL_60;
  UILabel__set_text(friendPointLabel, (System_String_o *)questLabel, 0);
  if ( !Master_object )
    goto LABEL_60;
  questLabel = (UILabel_o *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &entity,
                              svtId,
                              (const MethodInfo_3535BC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)questLabel & 1) == 0 )
  {
LABEL_50:
    LOBYTE(questLabel) = 0;
    return (char)questLabel;
  }
  if ( !v12 )
    goto LABEL_60;
  questLabel = (UILabel_o *)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                              usrSvtId,
                              (const MethodInfo_353832C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v21 = (UserServantEntity_o *)questLabel;
  if ( usrSvtId >= 1 && questLabel )
  {
    questLabel = (UILabel_o *)UserServantEntity__GetServantEntity((UserServantEntity_o *)questLabel, -1, 0);
    entity = (Il2CppObject *)questLabel;
    if ( !questLabel )
      goto LABEL_60;
    m_CachedPtr = questLabel->fields.m_CachedPtr;
    m_CancellationTokenSource = questLabel->fields.m_CancellationTokenSource;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v46.fields.currentCryptoKey = m_CachedPtr;
    *(_QWORD *)&v46.fields.fakeValue = m_CancellationTokenSource;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v46, 0);
    questLabel = (UILabel_o *)UserServantEntity__GetOverwriteStatus(v21, 0, 0);
    if ( !questLabel )
      goto LABEL_60;
    Rarity = (int32_t)questLabel->fields.m_CancellationTokenSource;
  }
  else
  {
    if ( !v16 )
      goto LABEL_60;
    Rarity = ServantExceedMaster__GetRarity(v16, svtId, 0);
    v24 = svtId;
  }
  data = Rarity;
  ServantShortName = (Il2CppObject *)CombineUtility__GetServantShortName(svtId, v24, 0, 0);
  if ( !data )
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    questLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7031/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0);
    if ( entity )
    {
      v32 = (System_String_o *)questLabel;
      ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
      questLabel = (UILabel_o *)System_String__Format_65604080(v32, ServantShortName, ClassName, 0);
      if ( supportServantNameLabel )
        goto LABEL_37;
    }
LABEL_60:
    sub_1D0F30C(questLabel, v15);
  }
  questLabel = (UILabel_o *)System_Int32__ToString((int32_t)&data, 0);
  if ( !questLabel )
    goto LABEL_60;
  questLabel = (UILabel_o *)System_String__Replace_65609336(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1168/*"1"*/,
                              (System_String_o *)StringLiteral_26100/*"１"*/,
                              0);
  if ( !questLabel )
    goto LABEL_60;
  questLabel = (UILabel_o *)System_String__Replace_65609336(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1313/*"2"*/,
                              (System_String_o *)StringLiteral_26101/*"２"*/,
                              0);
  if ( !questLabel )
    goto LABEL_60;
  questLabel = (UILabel_o *)System_String__Replace_65609336(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1375/*"3"*/,
                              (System_String_o *)StringLiteral_26102/*"３"*/,
                              0);
  if ( !questLabel )
    goto LABEL_60;
  questLabel = (UILabel_o *)System_String__Replace_65609336(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1400/*"4"*/,
                              (System_String_o *)StringLiteral_26103/*"４"*/,
                              0);
  if ( !questLabel )
    goto LABEL_60;
  v27 = System_String__Replace_65609336(
          (System_String_o *)questLabel,
          (System_String_o *)StringLiteral_1417/*"5"*/,
          (System_String_o *)StringLiteral_26104/*"５"*/,
          0);
  supportServantNameLabel = this->fields.supportServantNameLabel;
  v29 = (Il2CppObject *)v27;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  questLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7030/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0);
  if ( !entity )
    goto LABEL_60;
  v30 = (System_String_o *)questLabel;
  v31 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
  questLabel = (UILabel_o *)System_String__Format_65604148(v30, v29, ServantShortName, v31, 0);
  if ( !supportServantNameLabel )
    goto LABEL_60;
LABEL_37:
  UILabel__set_text(supportServantNameLabel, (System_String_o *)questLabel, 0);
  v34 = this->fields.supportServantNameLabel;
  questLabel = (UILabel_o *)FriendPointNoticeDialogSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDialogSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogSvtInfo_TypeInfo);
  if ( !v34 )
    goto LABEL_60;
  UILabel__SetCondensedScale_50929924(
    v34,
    FriendPointNoticeDialogSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0.0,
    0);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0, 0) )
    goto LABEL_50;
  v36 = (IconLabelInfo_o *)sub_1D0F300(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v36, 0);
  if ( usrSvtId >= 1 && v21 )
  {
    OverwriteStatus = UserServantEntity__GetOverwriteStatus(v21, 0, 0);
    lv = v21->fields.lv;
    v39 = OverwriteStatus;
    questLabel = (UILabel_o *)UserServantEntity__getLevelMax(v21, 0);
    if ( !v36 )
      goto LABEL_60;
    IconLabelInfo__Set_42279788(v36, 2, lv, (int32_t)questLabel, 0, 0, 0, 0, 0, 0);
    questLabel = (UILabel_o *)this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_60;
    ServantFaceIconComponent__Set((ServantFaceIconComponent_o *)questLabel, v21, 0, 0, 0, 0, 0, 1, 0, 0, 0);
    if ( !v39 )
      goto LABEL_60;
    questLabel = (UILabel_o *)this->fields.supportServantSubLabel;
    if ( !questLabel )
      goto LABEL_60;
    UIIconLabel__Set_42477084(
      (UIIconLabel_o *)questLabel,
      36,
      v39->fields._Rarity_k__BackingField,
      0,
      0,
      0,
      0,
      0,
      0,
      v39->fields._ActualRarity_k__BackingField,
      0);
LABEL_59:
    LOBYTE(questLabel) = 1;
    return (char)questLabel;
  }
  if ( !v13 )
    goto LABEL_60;
  v40 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v13, &v43, v24, 0, 0);
  questLabel = 0;
  if ( v40 )
  {
    if ( !v43 )
      goto LABEL_60;
    if ( !v36 )
      goto LABEL_60;
    IconLabelInfo__Set_42279788(v36, 2, 1, v43->fields.lvMax, 0, 0, 0, 0, 0, 0);
    questLabel = (UILabel_o *)this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_60;
    ServantFaceIconComponent__Set_42458076(
      (ServantFaceIconComponent_o *)questLabel,
      v24,
      0,
      0,
      0,
      v36,
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
      0,
      0);
    questLabel = (UILabel_o *)this->fields.supportServantSubLabel;
    if ( !questLabel )
      goto LABEL_60;
    UIIconLabel__Set_42477084((UIIconLabel_o *)questLabel, 36, data, 0, 0, 0, 0, 0, 0, 0, 0);
    goto LABEL_59;
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
    sub_1D0F30C(supportServantFaceIcon, bitmapFont);
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

  if ( (byte_4E79E19 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    byte_4E79E19 = 1;
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
    || (UILabel__SetCondensedScale_50929924(supportServantNameLabel, maxWidth, 0.0, 0),
        (supportServantNameLabel = this->fields.questLabel) == 0)
    || (UILabel__SetCondensedScale_50929924(supportServantNameLabel, maxWidth, 0.0, 0),
        (supportServantNameLabel = this->fields.friendPointLabel) == 0) )
  {
    sub_1D0F30C(supportServantNameLabel, method);
  }
  UILabel__SetCondensedScale_50929924(supportServantNameLabel, maxWidth, 0.0, 0);
}