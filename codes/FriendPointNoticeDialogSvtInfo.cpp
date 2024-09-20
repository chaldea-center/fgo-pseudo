void __fastcall FriendPointNoticeDialogSvtInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4A5D1C4 & 1) == 0 )
  {
    sub_1B885B0(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    byte_4A5D1C4 = 1;
  }
  LODWORD(FriendPointNoticeDialogSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH) = (struct FriendPointNoticeDialogSvtInfo_StaticFields)1140457472;
}


void __fastcall FriendPointNoticeDialogSvtInfo___ctor(FriendPointNoticeDialogSvtInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall FriendPointNoticeDialogSvtInfo__Set(
        FriendPointNoticeDialogSvtInfo_o *this,
        int32_t svtId,
        int64_t usrSvtId,
        System_String_o *questName,
        int32_t friendPoint,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x27
  Il2CppObject *v12; // x26
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  ServantExceedMaster_o *v16; // x25
  UILabel_o *questLabel; // x0
  System_String_o *v18; // x28
  UILabel_o *friendPointLabel; // x24
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  UserServantEntity_o *v24; // x23
  bool v25; // w28
  int32_t Rarity; // w0
  Il2CppObject *ServantShortName; // x24
  System_String_o *v28; // x0
  UILabel_o *supportServantNameLabel; // x25
  Il2CppObject *v30; // x26
  System_String_o *v31; // x27
  Il2CppObject *v32; // x0
  System_String_o *v33; // x26
  Il2CppObject *ClassName; // x0
  UILabel_o *v35; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  IconLabelInfo_o *v37; // x24
  bool v38; // w8
  int32_t lv; // w20
  int32_t v41; // [xsp+54h] [xbp-7Ch] BYREF
  ServantLimitEntity_o *v42; // [xsp+58h] [xbp-78h] BYREF
  int32_t data; // [xsp+64h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A5D1C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1475/*"3"*/);
    sub_1B885B0(&StringLiteral_1413/*"2"*/);
    sub_1B885B0(&StringLiteral_6913/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/);
    sub_1B885B0(&StringLiteral_25463/*"４"*/);
    sub_1B885B0(&StringLiteral_25462/*"３"*/);
    sub_1B885B0(&StringLiteral_25460/*"１"*/);
    sub_1B885B0(&StringLiteral_1493/*"4"*/);
    sub_1B885B0(&StringLiteral_25464/*"５"*/);
    sub_1B885B0(&StringLiteral_6904/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/);
    sub_1B885B0(&StringLiteral_6912/*"GET_FRIEND_POINT_SERVANT_NAME"*/);
    sub_1B885B0(&StringLiteral_25461/*"２"*/);
    sub_1B885B0(&StringLiteral_1266/*"1"*/);
    sub_1B885B0(&StringLiteral_1508/*"5"*/);
    byte_4A5D1C2 = 1;
  }
  entity = 0LL;
  data = 0;
  v42 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( svtId < 1 )
    goto LABEL_45;
  v16 = (ServantExceedMaster_o *)v14;
  questLabel = this->fields.questLabel;
  if ( !questLabel )
    goto LABEL_52;
  UILabel__set_text(questLabel, questName, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6904/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/, 0LL);
  friendPointLabel = this->fields.friendPointLabel;
  v41 = friendPoint;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v20, v21, v22);
  questLabel = (UILabel_o *)System_String__Format(v18, v23, 0LL);
  if ( !friendPointLabel )
    goto LABEL_52;
  UILabel__set_text(friendPointLabel, (System_String_o *)questLabel, 0LL);
  if ( !Master_object )
    goto LABEL_52;
  questLabel = (UILabel_o *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &entity,
                              svtId,
                              (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)questLabel & 1) == 0 )
  {
LABEL_45:
    LOBYTE(questLabel) = 0;
    return (char)questLabel;
  }
  if ( !v12 )
    goto LABEL_52;
  questLabel = (UILabel_o *)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                              usrSvtId,
                              (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v24 = (UserServantEntity_o *)questLabel;
  v25 = usrSvtId < 1 || questLabel == 0LL;
  if ( v25 )
  {
    if ( !v16 )
      goto LABEL_52;
    Rarity = ServantExceedMaster__GetRarity(v16, svtId, 0LL);
  }
  else
  {
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)questLabel, 0LL);
  }
  data = Rarity;
  ServantShortName = (Il2CppObject *)CombineUtility__GetServantShortName(svtId, 0LL);
  if ( !data )
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    questLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6913/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( entity )
    {
      v33 = (System_String_o *)questLabel;
      ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
      questLabel = (UILabel_o *)System_String__Format_61721404(v33, ServantShortName, ClassName, 0LL);
      if ( supportServantNameLabel )
        goto LABEL_32;
    }
LABEL_52:
    sub_1B8880C(questLabel, v15);
  }
  questLabel = (UILabel_o *)System_Int32__ToString((int32_t)&data, 0LL);
  if ( !questLabel )
    goto LABEL_52;
  questLabel = (UILabel_o *)System_String__Replace_61726660(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1266/*"1"*/,
                              (System_String_o *)StringLiteral_25460/*"１"*/,
                              0LL);
  if ( !questLabel )
    goto LABEL_52;
  questLabel = (UILabel_o *)System_String__Replace_61726660(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1413/*"2"*/,
                              (System_String_o *)StringLiteral_25461/*"２"*/,
                              0LL);
  if ( !questLabel )
    goto LABEL_52;
  questLabel = (UILabel_o *)System_String__Replace_61726660(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1475/*"3"*/,
                              (System_String_o *)StringLiteral_25462/*"３"*/,
                              0LL);
  if ( !questLabel )
    goto LABEL_52;
  questLabel = (UILabel_o *)System_String__Replace_61726660(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1493/*"4"*/,
                              (System_String_o *)StringLiteral_25463/*"４"*/,
                              0LL);
  if ( !questLabel )
    goto LABEL_52;
  v28 = System_String__Replace_61726660(
          (System_String_o *)questLabel,
          (System_String_o *)StringLiteral_1508/*"5"*/,
          (System_String_o *)StringLiteral_25464/*"５"*/,
          0LL);
  supportServantNameLabel = this->fields.supportServantNameLabel;
  v30 = (Il2CppObject *)v28;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  questLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6912/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
  if ( !entity )
    goto LABEL_52;
  v31 = (System_String_o *)questLabel;
  v32 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
  questLabel = (UILabel_o *)System_String__Format_61721472(v31, v30, ServantShortName, v32, 0LL);
  if ( !supportServantNameLabel )
    goto LABEL_52;
LABEL_32:
  UILabel__set_text(supportServantNameLabel, (System_String_o *)questLabel, 0LL);
  v35 = this->fields.supportServantNameLabel;
  questLabel = (UILabel_o *)FriendPointNoticeDialogSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDialogSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogSvtInfo_TypeInfo);
  if ( !v35 )
    goto LABEL_52;
  UILabel__SetCondensedScale_47038932(
    v35,
    FriendPointNoticeDialogSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0LL);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0LL, 0LL) )
    goto LABEL_45;
  v37 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v37, 0LL);
  if ( v25 )
  {
    questLabel = (UILabel_o *)v13;
    if ( !v13 )
      goto LABEL_52;
    v38 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v13, &v42, svtId, 0, 0LL);
    questLabel = 0LL;
    if ( !v38 )
      return (char)questLabel;
    if ( !v42 )
      goto LABEL_52;
    if ( !v37 )
      goto LABEL_52;
    IconLabelInfo__Set_38140136(v37, 2, 1, v42->fields.lvMax, 0, 0, 0, 0, 0LL);
    questLabel = (UILabel_o *)this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_52;
    ServantFaceIconComponent__Set_38217436(
      (ServantFaceIconComponent_o *)questLabel,
      svtId,
      0,
      0,
      0,
      v37,
      0LL,
      2,
      0,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL);
  }
  else
  {
    lv = v24->fields.lv;
    questLabel = (UILabel_o *)UserServantEntity__getLevelMax(v24, 0LL);
    if ( !v37 )
      goto LABEL_52;
    IconLabelInfo__Set_38140136(v37, 2, lv, (int32_t)questLabel, 0, 0, 0, 0, 0LL);
    questLabel = (UILabel_o *)this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_52;
    ServantFaceIconComponent__Set_38220052((ServantFaceIconComponent_o *)questLabel, usrSvtId, v37, 0LL, 0LL);
  }
  questLabel = (UILabel_o *)this->fields.supportServantSubLabel;
  if ( !questLabel )
    goto LABEL_52;
  UIIconLabel__Set_38235604((UIIconLabel_o *)questLabel, 36, data, 0, 0, 0LL, 0, 0, 0, 0LL);
  LOBYTE(questLabel) = 1;
  return (char)questLabel;
}


void __fastcall FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(
        FriendPointNoticeDialogSvtInfo_o *this,
        float maxWidth,
        const MethodInfo *method)
{
  FriendPointNoticeDialogSvtInfo_c *v5; // x0
  UILabel_o *supportServantNameLabel; // x0

  if ( (byte_4A5D1C3 & 1) == 0 )
  {
    sub_1B885B0(&FriendPointNoticeDialogSvtInfo_TypeInfo);
    byte_4A5D1C3 = 1;
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
    || (UILabel__SetCondensedScale_47038932(supportServantNameLabel, maxWidth, 0LL),
        (supportServantNameLabel = this->fields.questLabel) == 0LL)
    || (UILabel__SetCondensedScale_47038932(supportServantNameLabel, maxWidth, 0LL),
        (supportServantNameLabel = this->fields.friendPointLabel) == 0LL) )
  {
    sub_1B8880C(supportServantNameLabel, method);
  }
  UILabel__SetCondensedScale_47038932(supportServantNameLabel, maxWidth, 0LL);
}