void FriendPointNoticeDialogSvtInfo___cctor(const MethodInfo *method)
{
  if ( (byte_593ADEC & 1) == 0 )
  {
    sub_21FFC50(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    byte_593ADEC = 1;
  }
  LODWORD(FriendPointNoticeDialogSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH) = (struct FriendPointNoticeDialogSvtInfo_StaticFields)1140457472;
}


void FriendPointNoticeDialogSvtInfo___ctor(FriendPointNoticeDialogSvtInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool FriendPointNoticeDialogSvtInfo__Set(
        FriendPointNoticeDialogSvtInfo_o *this,
        int32_t svtId,
        int64_t usrSvtId,
        System_String_o *questName,
        int32_t friendPoint,
        const MethodInfo *method)
{
  int v11; // w8
  Il2CppObject *Master_object; // x27
  Il2CppObject *v13; // x26
  Il2CppObject *v14; // x20
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  ServantExceedMaster_o *v17; // x25
  UILabel_o *questLabel; // x0
  __int64 v19; // x1
  System_String_o *v20; // x28
  UILabel_o *friendPointLabel; // x24
  Il2CppObject *v22; // x0
  UserServantEntity_o *v23; // x21
  bool v24; // zf
  char v25; // w27
  int32_t Rarity; // w0
  int32_t v27; // w22
  intptr_t m_CachedPtr; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  __int64 v30; // x1
  Il2CppObject *ServantShortName; // x23
  System_String_o *v32; // x0
  __int64 v33; // x1
  UILabel_o *supportServantNameLabel; // x24
  Il2CppObject *v35; // x25
  System_String_o *v36; // x26
  Il2CppObject *v37; // x0
  System_String_o *v38; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v40; // x23
  __int64 v41; // x1
  UnityEngine_Object_o *supportServantFaceIcon; // x23
  IconLabelInfo_o *v43; // x23
  bool v44; // w8
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  int32_t lv; // w22
  ServantOverwriteStatus_o *v47; // x20
  int32_t v49; // [xsp+64h] [xbp-7Ch] BYREF
  ServantLimitEntity_o *v50; // [xsp+68h] [xbp-78h] BYREF
  int32_t v51; // [xsp+74h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_593ADEA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&StringLiteral_1454/*"3"*/);
    sub_21FFC50(&StringLiteral_1393/*"2"*/);
    sub_21FFC50(&StringLiteral_7235/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/);
    sub_21FFC50(&StringLiteral_26929/*"４"*/);
    sub_21FFC50(&StringLiteral_26928/*"３"*/);
    sub_21FFC50(&StringLiteral_26926/*"１"*/);
    sub_21FFC50(&StringLiteral_1479/*"4"*/);
    sub_21FFC50(&StringLiteral_26930/*"５"*/);
    sub_21FFC50(&StringLiteral_7226/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/);
    sub_21FFC50(&StringLiteral_7234/*"GET_FRIEND_POINT_SERVANT_NAME"*/);
    sub_21FFC50(&StringLiteral_26927/*"２"*/);
    sub_21FFC50(&StringLiteral_1248/*"1"*/);
    sub_21FFC50(&StringLiteral_1496/*"5"*/);
    byte_593ADEA = 1;
  }
  entity = 0;
  v11 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v51 = 0;
  v50 = 0;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( svtId < 1 )
    goto LABEL_57;
  v17 = (ServantExceedMaster_o *)v15;
  questLabel = this->fields.questLabel;
  if ( !questLabel )
    goto LABEL_65;
  UILabel__set_text(questLabel, questName, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_7226/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/, 0);
  friendPointLabel = this->fields.friendPointLabel;
  v49 = friendPoint;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v49);
  questLabel = (UILabel_o *)System_String__Format(v20, v22, 0);
  if ( !friendPointLabel )
    goto LABEL_65;
  UILabel__set_text(friendPointLabel, (System_String_o *)questLabel, 0);
  if ( !Master_object )
    goto LABEL_65;
  questLabel = (UILabel_o *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &entity,
                              svtId,
                              (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)questLabel & 1) == 0 )
  {
LABEL_57:
    LOBYTE(questLabel) = 0;
    return (char)questLabel;
  }
  if ( !v13 )
    goto LABEL_65;
  questLabel = (UILabel_o *)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                              usrSvtId,
                              (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v23 = (UserServantEntity_o *)questLabel;
  v24 = usrSvtId < 1 || questLabel == 0;
  v25 = v24;
  if ( v24 )
  {
    if ( !v17 )
      goto LABEL_65;
    Rarity = ServantExceedMaster__GetRarity(v17, svtId, 0);
    v27 = svtId;
  }
  else
  {
    questLabel = (UILabel_o *)UserServantEntity__GetServantEntity((UserServantEntity_o *)questLabel, -1, 0);
    entity = (Il2CppObject *)questLabel;
    if ( !questLabel )
      goto LABEL_65;
    m_CachedPtr = questLabel->fields.m_CachedPtr;
    m_CancellationTokenSource = questLabel->fields.m_CancellationTokenSource;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    *(_QWORD *)&v53.fields.currentCryptoKey = m_CachedPtr;
    *(_QWORD *)&v53.fields.fakeValue = m_CancellationTokenSource;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v53, 0);
    questLabel = (UILabel_o *)UserServantEntity__GetOverwriteStatus(v23, 0, 0);
    if ( !questLabel )
      goto LABEL_65;
    Rarity = (int32_t)questLabel->fields.m_CancellationTokenSource;
  }
  v51 = Rarity;
  ServantShortName = (Il2CppObject *)CombineUtility__GetServantShortName(svtId, v27, 0, 0);
  if ( !v51 )
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
    questLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7235/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0);
    if ( entity )
    {
      v38 = (System_String_o *)questLabel;
      ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
      questLabel = (UILabel_o *)System_String__Format_75484576(v38, ServantShortName, ClassName, 0);
      if ( supportServantNameLabel )
        goto LABEL_43;
    }
LABEL_65:
    sub_21FFECC(questLabel, v16);
  }
  questLabel = (UILabel_o *)System_Int32__ToString((int32_t)&v51, 0);
  if ( !questLabel )
    goto LABEL_65;
  questLabel = (UILabel_o *)System_String__Replace_75490096(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1248/*"1"*/,
                              (System_String_o *)StringLiteral_26926/*"１"*/,
                              0);
  if ( !questLabel )
    goto LABEL_65;
  questLabel = (UILabel_o *)System_String__Replace_75490096(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1393/*"2"*/,
                              (System_String_o *)StringLiteral_26927/*"２"*/,
                              0);
  if ( !questLabel )
    goto LABEL_65;
  questLabel = (UILabel_o *)System_String__Replace_75490096(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1454/*"3"*/,
                              (System_String_o *)StringLiteral_26928/*"３"*/,
                              0);
  if ( !questLabel )
    goto LABEL_65;
  questLabel = (UILabel_o *)System_String__Replace_75490096(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1479/*"4"*/,
                              (System_String_o *)StringLiteral_26929/*"４"*/,
                              0);
  if ( !questLabel )
    goto LABEL_65;
  v32 = System_String__Replace_75490096(
          (System_String_o *)questLabel,
          (System_String_o *)StringLiteral_1496/*"5"*/,
          (System_String_o *)StringLiteral_26930/*"５"*/,
          0);
  supportServantNameLabel = this->fields.supportServantNameLabel;
  v35 = (Il2CppObject *)v32;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
  questLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7234/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0);
  if ( !entity )
    goto LABEL_65;
  v36 = (System_String_o *)questLabel;
  v37 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
  questLabel = (UILabel_o *)System_String__Format_75484644(v36, v35, ServantShortName, v37, 0);
  if ( !supportServantNameLabel )
    goto LABEL_65;
LABEL_43:
  UILabel__set_text(supportServantNameLabel, (System_String_o *)questLabel, 0);
  v40 = this->fields.supportServantNameLabel;
  questLabel = (UILabel_o *)FriendPointNoticeDialogSvtInfo_TypeInfo;
  if ( !*(&FriendPointNoticeDialogSvtInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogSvtInfo_TypeInfo, v16);
  if ( !v40 )
    goto LABEL_65;
  UILabel__SetCondensedScale_56386440(
    v40,
    FriendPointNoticeDialogSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0.0,
    0);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0, 0) )
    goto LABEL_57;
  v43 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v43, 0);
  if ( (v25 & 1) == 0 )
  {
    OverwriteStatus = UserServantEntity__GetOverwriteStatus(v23, 0, 0);
    lv = v23->fields.lv;
    v47 = OverwriteStatus;
    questLabel = (UILabel_o *)UserServantEntity__getLevelMax(v23, 0);
    if ( !v43 )
      goto LABEL_65;
    IconLabelInfo__Set_47932852(v43, 2, lv, (int32_t)questLabel, 0, 0, 0, 0, 0, 0);
    questLabel = (UILabel_o *)this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_65;
    ServantFaceIconComponent__Set((ServantFaceIconComponent_o *)questLabel, v23, 0, 0, 0, 0, 0, 1, 0, 0, 0);
    if ( !v47 )
      goto LABEL_65;
    questLabel = (UILabel_o *)this->fields.supportServantSubLabel;
    if ( !questLabel )
      goto LABEL_65;
    UIIconLabel__Set_48040364(
      (UIIconLabel_o *)questLabel,
      36,
      v47->fields._Rarity_k__BackingField,
      0,
      0,
      0,
      0,
      0,
      0,
      v47->fields._ActualRarity_k__BackingField,
      0);
    goto LABEL_64;
  }
  if ( !v14 )
    goto LABEL_65;
  v44 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v14, &v50, v27, 0, 0);
  questLabel = 0;
  if ( v44 )
  {
    if ( !v50 )
      goto LABEL_65;
    if ( !v43 )
      goto LABEL_65;
    IconLabelInfo__Set_47932852(v43, 2, 1, v50->fields.lvMax, 0, 0, 0, 0, 0, 0);
    questLabel = (UILabel_o *)this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_65;
    ServantFaceIconComponent__Set_48021296(
      (ServantFaceIconComponent_o *)questLabel,
      v27,
      0,
      0,
      0,
      v43,
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
      goto LABEL_65;
    UIIconLabel__Set_48040364((UIIconLabel_o *)questLabel, 36, v51, 0, 0, 0, 0, 0, 0, 0, 0);
LABEL_64:
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
    sub_21FFECC(supportServantFaceIcon, bitmapFont);
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

  if ( (byte_593ADEB & 1) == 0 )
  {
    sub_21FFC50(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    byte_593ADEB = 1;
  }
  if ( maxWidth <= 0.0 )
  {
    v5 = FriendPointNoticeDialogSvtInfo_TypeInfo;
    if ( !*(&FriendPointNoticeDialogSvtInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogSvtInfo_TypeInfo, method);
      v5 = FriendPointNoticeDialogSvtInfo_TypeInfo;
    }
    maxWidth = v5->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH;
  }
  supportServantNameLabel = this->fields.supportServantNameLabel;
  if ( !supportServantNameLabel
    || (UILabel__SetCondensedScale_56386440(supportServantNameLabel, maxWidth, 0.0, 0),
        (supportServantNameLabel = this->fields.questLabel) == 0)
    || (UILabel__SetCondensedScale_56386440(supportServantNameLabel, maxWidth, 0.0, 0),
        (supportServantNameLabel = this->fields.friendPointLabel) == 0) )
  {
    sub_21FFECC(supportServantNameLabel, method);
  }
  UILabel__SetCondensedScale_56386440(supportServantNameLabel, maxWidth, 0.0, 0);
}