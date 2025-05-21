void __fastcall FriendPointNoticeDialogSvtInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B46A7A & 1) == 0 )
  {
    sub_1BDB878(&FriendPointNoticeDialogSvtInfo_TypeInfo, v1);
    byte_4B46A7A = 1;
  }
  LODWORD(FriendPointNoticeDialogSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH) = (struct FriendPointNoticeDialogSvtInfo_StaticFields)1140457472;
}


void __fastcall FriendPointNoticeDialogSvtInfo___ctor(FriendPointNoticeDialogSvtInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FriendPointNoticeDialogSvtInfo__Set(
        FriendPointNoticeDialogSvtInfo_o *this,
        int32_t svtId,
        int64_t usrSvtId,
        System_String_o *questName,
        int32_t friendPoint,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  Il2CppObject *Master_object; // x27
  Il2CppObject *v36; // x26
  Il2CppObject *v37; // x21
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  ServantExceedMaster_o *v40; // x25
  void *questLabel; // x0
  System_String_o *v42; // x28
  UILabel_o *friendPointLabel; // x24
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  UserServantEntity_o *v48; // x22
  bool v49; // w27
  int32_t Rarity; // w0
  Il2CppObject *ServantShortName; // x23
  System_String_o *v52; // x0
  UILabel_o *supportServantNameLabel; // x24
  Il2CppObject *v54; // x25
  System_String_o *v55; // x26
  Il2CppObject *v56; // x0
  System_String_o *v57; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v59; // x23
  UnityEngine_Object_o *supportServantFaceIcon; // x23
  IconLabelInfo_o *v61; // x23
  bool v62; // w8
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  int32_t lv; // w21
  ServantOverwriteStatus_o *v65; // x20
  int32_t v67; // [xsp+64h] [xbp-7Ch] BYREF
  ServantLimitEntity_o *v68; // [xsp+68h] [xbp-78h] BYREF
  int32_t v69; // [xsp+74h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4B46A78 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v13);
    sub_1BDB878(&DataManager_TypeInfo, v14);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v16);
    sub_1BDB878(&FriendPointNoticeDialogSvtInfo_TypeInfo, v17);
    sub_1BDB878(&IconLabelInfo_TypeInfo, v18);
    sub_1BDB878(&int_TypeInfo, v19);
    sub_1BDB878(&LocalizationManager_TypeInfo, v20);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v21);
    sub_1BDB878(&StringLiteral_1400/*"3"*/, v22);
    sub_1BDB878(&StringLiteral_1339/*"2"*/, v23);
    sub_1BDB878(&StringLiteral_6964/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, v24);
    sub_1BDB878(&StringLiteral_25663/*"４"*/, v25);
    sub_1BDB878(&StringLiteral_25662/*"３"*/, v26);
    sub_1BDB878(&StringLiteral_25660/*"１"*/, v27);
    sub_1BDB878(&StringLiteral_1426/*"4"*/, v28);
    sub_1BDB878(&StringLiteral_25664/*"５"*/, v29);
    sub_1BDB878(&StringLiteral_6955/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/, v30);
    sub_1BDB878(&StringLiteral_6963/*"GET_FRIEND_POINT_SERVANT_NAME"*/, v31);
    sub_1BDB878(&StringLiteral_25661/*"２"*/, v32);
    sub_1BDB878(&StringLiteral_1194/*"1"*/, v33);
    sub_1BDB878(&StringLiteral_1443/*"5"*/, v34);
    byte_4B46A78 = 1;
  }
  entity = 0LL;
  v69 = 0;
  v68 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
  v36 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
  v37 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v38 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( svtId < 1 )
    goto LABEL_47;
  v40 = (ServantExceedMaster_o *)v38;
  questLabel = this->fields.questLabel;
  if ( !questLabel )
    goto LABEL_55;
  UILabel__set_text((UILabel_o *)questLabel, questName, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_6955/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/, 0LL);
  friendPointLabel = this->fields.friendPointLabel;
  v67 = friendPoint;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v44, v45, v46);
  questLabel = System_String__Format(v42, v47, 0LL);
  if ( !friendPointLabel )
    goto LABEL_55;
  UILabel__set_text(friendPointLabel, (System_String_o *)questLabel, 0LL);
  if ( !Master_object )
    goto LABEL_55;
  questLabel = (void *)DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         &entity,
                         svtId,
                         (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)questLabel & 1) == 0 )
  {
LABEL_47:
    LOBYTE(questLabel) = 0;
    return (char)questLabel;
  }
  if ( !v36 )
    goto LABEL_55;
  questLabel = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v36,
                 usrSvtId,
                 (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v48 = (UserServantEntity_o *)questLabel;
  v49 = usrSvtId < 1 || questLabel == 0LL;
  if ( v49 )
  {
    if ( !v40 )
      goto LABEL_55;
    Rarity = ServantExceedMaster__GetRarity(v40, svtId, 0LL);
  }
  else
  {
    questLabel = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)questLabel, 0LL, 0LL);
    if ( !questLabel )
      goto LABEL_55;
    Rarity = *((_DWORD *)questLabel + 6);
  }
  v69 = Rarity;
  ServantShortName = (Il2CppObject *)CombineUtility__GetServantShortName(svtId, 0LL);
  if ( !v69 )
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    questLabel = LocalizationManager__Get((System_String_o *)StringLiteral_6964/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( entity )
    {
      v57 = (System_String_o *)questLabel;
      ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
      questLabel = System_String__Format_62613552(v57, ServantShortName, ClassName, 0LL);
      if ( supportServantNameLabel )
        goto LABEL_33;
    }
LABEL_55:
    sub_1BDBAD4(questLabel, v39);
  }
  questLabel = System_Int32__ToString((int32_t)&v69, 0LL);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_62618808(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1194/*"1"*/,
                 (System_String_o *)StringLiteral_25660/*"１"*/,
                 0LL);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_62618808(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1339/*"2"*/,
                 (System_String_o *)StringLiteral_25661/*"２"*/,
                 0LL);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_62618808(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1400/*"3"*/,
                 (System_String_o *)StringLiteral_25662/*"３"*/,
                 0LL);
  if ( !questLabel )
    goto LABEL_55;
  questLabel = System_String__Replace_62618808(
                 (System_String_o *)questLabel,
                 (System_String_o *)StringLiteral_1426/*"4"*/,
                 (System_String_o *)StringLiteral_25663/*"４"*/,
                 0LL);
  if ( !questLabel )
    goto LABEL_55;
  v52 = System_String__Replace_62618808(
          (System_String_o *)questLabel,
          (System_String_o *)StringLiteral_1443/*"5"*/,
          (System_String_o *)StringLiteral_25664/*"５"*/,
          0LL);
  supportServantNameLabel = this->fields.supportServantNameLabel;
  v54 = (Il2CppObject *)v52;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  questLabel = LocalizationManager__Get((System_String_o *)StringLiteral_6963/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
  if ( !entity )
    goto LABEL_55;
  v55 = (System_String_o *)questLabel;
  v56 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
  questLabel = System_String__Format_62613620(v55, v54, ServantShortName, v56, 0LL);
  if ( !supportServantNameLabel )
    goto LABEL_55;
LABEL_33:
  UILabel__set_text(supportServantNameLabel, (System_String_o *)questLabel, 0LL);
  v59 = this->fields.supportServantNameLabel;
  questLabel = FriendPointNoticeDialogSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDialogSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogSvtInfo_TypeInfo);
  if ( !v59 )
    goto LABEL_55;
  UILabel__SetCondensedScale_48820552(
    v59,
    FriendPointNoticeDialogSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0LL, 0LL) )
    goto LABEL_47;
  v61 = (IconLabelInfo_o *)sub_1BDBAC4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v61, 0LL);
  if ( !v49 )
  {
    OverwriteStatus = UserServantEntity__GetOverwriteStatus(v48, 0LL, 0LL);
    lv = v48->fields.lv;
    v65 = OverwriteStatus;
    questLabel = (void *)UserServantEntity__getLevelMax(v48, 0LL);
    if ( !v61 )
      goto LABEL_55;
    IconLabelInfo__Set_39930232(v61, 2, lv, (int32_t)questLabel, 0, 0, 0, 0, 0, 0LL);
    questLabel = this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_55;
    ServantFaceIconComponent__Set((ServantFaceIconComponent_o *)questLabel, v48, 0LL, 0LL, 0LL, 0LL, 0, 1, 0, 0LL);
    if ( !v65 )
      goto LABEL_55;
    questLabel = this->fields.supportServantSubLabel;
    if ( !questLabel )
      goto LABEL_55;
    UIIconLabel__Set_40036752(
      (UIIconLabel_o *)questLabel,
      36,
      v65->fields._Rarity_k__BackingField,
      0,
      0,
      0LL,
      0,
      0,
      0,
      v65->fields._ActualRarity_k__BackingField,
      0LL);
    goto LABEL_54;
  }
  if ( !v37 )
    goto LABEL_55;
  v62 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v37, &v68, svtId, 0, 0LL);
  questLabel = 0LL;
  if ( v62 )
  {
    if ( !v68 )
      goto LABEL_55;
    if ( !v61 )
      goto LABEL_55;
    IconLabelInfo__Set_39930232(v61, 2, 1, v68->fields.lvMax, 0, 0, 0, 0, 0, 0LL);
    questLabel = this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_55;
    ServantFaceIconComponent__Set_40019528(
      (ServantFaceIconComponent_o *)questLabel,
      svtId,
      0,
      0,
      0,
      v61,
      0LL,
      2,
      0,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL,
      0,
      0LL);
    questLabel = this->fields.supportServantSubLabel;
    if ( !questLabel )
      goto LABEL_55;
    UIIconLabel__Set_40036752((UIIconLabel_o *)questLabel, 36, v69, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
LABEL_54:
    LOBYTE(questLabel) = 1;
  }
  return (char)questLabel;
}


void __fastcall FriendPointNoticeDialogSvtInfo__SetLabelsBitmapFont(
        FriendPointNoticeDialogSvtInfo_o *this,
        UIFont_o *bitmapFont,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *supportServantFaceIcon; // x0

  supportServantFaceIcon = this->fields.supportServantFaceIcon;
  if ( !supportServantFaceIcon
    || (ServantFaceIconComponent__SetIconLabelBitmapFont(supportServantFaceIcon, bitmapFont, 0LL),
        (supportServantFaceIcon = (ServantFaceIconComponent_o *)this->fields.supportServantSubLabel) == 0LL) )
  {
    sub_1BDBAD4(supportServantFaceIcon, bitmapFont);
  }
  UIIconLabel__SetTextLabelBitmapFont((UIIconLabel_o *)supportServantFaceIcon, bitmapFont, 0LL);
}


void __fastcall FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(
        FriendPointNoticeDialogSvtInfo_o *this,
        float maxWidth,
        const MethodInfo *method)
{
  FriendPointNoticeDialogSvtInfo_c *v5; // x0
  UILabel_o *supportServantNameLabel; // x0

  if ( (byte_4B46A79 & 1) == 0 )
  {
    sub_1BDB878(&FriendPointNoticeDialogSvtInfo_TypeInfo, method);
    byte_4B46A79 = 1;
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
    || (UILabel__SetCondensedScale_48820552(supportServantNameLabel, maxWidth, 0.0, 0LL),
        (supportServantNameLabel = this->fields.questLabel) == 0LL)
    || (UILabel__SetCondensedScale_48820552(supportServantNameLabel, maxWidth, 0.0, 0LL),
        (supportServantNameLabel = this->fields.friendPointLabel) == 0LL) )
  {
    sub_1BDBAD4(supportServantNameLabel, method);
  }
  UILabel__SetCondensedScale_48820552(supportServantNameLabel, maxWidth, 0.0, 0LL);
}