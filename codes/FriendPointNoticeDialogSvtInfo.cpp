void __fastcall FriendPointNoticeDialogSvtInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B181DC & 1) == 0 )
  {
    sub_1BCA7E0(&FriendPointNoticeDialogSvtInfo_TypeInfo, v1, v2);
    byte_4B181DC = 1;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  Il2CppObject *Master_object; // x27
  Il2CppObject *v60; // x26
  Il2CppObject *v61; // x22
  Il2CppObject *v62; // x0
  __int64 v63; // x1
  ServantExceedMaster_o *v64; // x25
  UILabel_o *questLabel; // x0
  __int64 v66; // x1
  System_String_o *v67; // x28
  UILabel_o *friendPointLabel; // x24
  Il2CppObject *v69; // x0
  UserServantEntity_o *v70; // x23
  bool v71; // w28
  int32_t Rarity; // w0
  __int64 v73; // x1
  Il2CppObject *ServantShortName; // x24
  System_String_o *v75; // x0
  __int64 v76; // x1
  UILabel_o *supportServantNameLabel; // x25
  Il2CppObject *v78; // x26
  System_String_o *v79; // x27
  Il2CppObject *v80; // x0
  System_String_o *v81; // x26
  Il2CppObject *ClassName; // x0
  UILabel_o *v83; // x24
  __int64 v84; // x1
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  IconLabelInfo_o *v89; // x24
  bool v90; // w8
  int32_t lv; // w20
  int32_t v93; // [xsp+54h] [xbp-7Ch] BYREF
  ServantLimitEntity_o *v94; // [xsp+58h] [xbp-78h] BYREF
  int32_t data; // [xsp+64h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B181DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&svtId, usrSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&FriendPointNoticeDialogSvtInfo_TypeInfo, v23, v24);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v25, v26);
    sub_1BCA7E0(&int_TypeInfo, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_1471/*"3"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1409/*"2"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_7036/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_25718/*"４"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_25717/*"３"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_25715/*"１"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_1489/*"4"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_25719/*"５"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_7027/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_7035/*"GET_FRIEND_POINT_SERVANT_NAME"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_25716/*"２"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_1505/*"5"*/, v57, v58);
    byte_4B181DA = 1;
  }
  entity = 0LL;
  data = 0;
  v94 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v60 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v62 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( svtId < 1 )
    goto LABEL_45;
  v64 = (ServantExceedMaster_o *)v62;
  questLabel = this->fields.questLabel;
  if ( !questLabel )
    goto LABEL_52;
  UILabel__set_text(questLabel, questName, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_7027/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/, 0LL);
  friendPointLabel = this->fields.friendPointLabel;
  v93 = friendPoint;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
  questLabel = (UILabel_o *)System_String__Format(v67, v69, 0LL);
  if ( !friendPointLabel )
    goto LABEL_52;
  UILabel__set_text(friendPointLabel, (System_String_o *)questLabel, 0LL);
  if ( !Master_object )
    goto LABEL_52;
  questLabel = (UILabel_o *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &entity,
                              svtId,
                              (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)questLabel & 1) == 0 )
  {
LABEL_45:
    LOBYTE(questLabel) = 0;
    return (char)questLabel;
  }
  if ( !v60 )
    goto LABEL_52;
  questLabel = (UILabel_o *)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v60,
                              usrSvtId,
                              (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v70 = (UserServantEntity_o *)questLabel;
  v71 = usrSvtId < 1 || questLabel == 0LL;
  if ( v71 )
  {
    if ( !v64 )
      goto LABEL_52;
    Rarity = ServantExceedMaster__GetRarity(v64, svtId, 0LL);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
    questLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7036/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( entity )
    {
      v81 = (System_String_o *)questLabel;
      ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
      questLabel = (UILabel_o *)System_String__Format_62415592(v81, ServantShortName, ClassName, 0LL);
      if ( supportServantNameLabel )
        goto LABEL_32;
    }
LABEL_52:
    sub_1BCAA3C(questLabel, v63);
  }
  questLabel = (UILabel_o *)System_Int32__ToString((int32_t)&data, 0LL);
  if ( !questLabel )
    goto LABEL_52;
  questLabel = (UILabel_o *)System_String__Replace_62420848(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1262/*"1"*/,
                              (System_String_o *)StringLiteral_25715/*"１"*/,
                              0LL);
  if ( !questLabel )
    goto LABEL_52;
  questLabel = (UILabel_o *)System_String__Replace_62420848(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1409/*"2"*/,
                              (System_String_o *)StringLiteral_25716/*"２"*/,
                              0LL);
  if ( !questLabel )
    goto LABEL_52;
  questLabel = (UILabel_o *)System_String__Replace_62420848(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1471/*"3"*/,
                              (System_String_o *)StringLiteral_25717/*"３"*/,
                              0LL);
  if ( !questLabel )
    goto LABEL_52;
  questLabel = (UILabel_o *)System_String__Replace_62420848(
                              (System_String_o *)questLabel,
                              (System_String_o *)StringLiteral_1489/*"4"*/,
                              (System_String_o *)StringLiteral_25718/*"４"*/,
                              0LL);
  if ( !questLabel )
    goto LABEL_52;
  v75 = System_String__Replace_62420848(
          (System_String_o *)questLabel,
          (System_String_o *)StringLiteral_1505/*"5"*/,
          (System_String_o *)StringLiteral_25719/*"５"*/,
          0LL);
  supportServantNameLabel = this->fields.supportServantNameLabel;
  v78 = (Il2CppObject *)v75;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
  questLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7035/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
  if ( !entity )
    goto LABEL_52;
  v79 = (System_String_o *)questLabel;
  v80 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
  questLabel = (UILabel_o *)System_String__Format_62415660(v79, v78, ServantShortName, v80, 0LL);
  if ( !supportServantNameLabel )
    goto LABEL_52;
LABEL_32:
  UILabel__set_text(supportServantNameLabel, (System_String_o *)questLabel, 0LL);
  v83 = this->fields.supportServantNameLabel;
  questLabel = (UILabel_o *)FriendPointNoticeDialogSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDialogSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogSvtInfo_TypeInfo, v63);
  if ( !v83 )
    goto LABEL_52;
  UILabel__SetCondensedScale_47600808(
    v83,
    FriendPointNoticeDialogSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0LL);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v84);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0LL, 0LL) )
    goto LABEL_45;
  v89 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v86, v87, v88);
  IconLabelInfo___ctor(v89, 0LL);
  if ( v71 )
  {
    questLabel = (UILabel_o *)v61;
    if ( !v61 )
      goto LABEL_52;
    v90 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v61, &v94, svtId, 0, 0LL);
    questLabel = 0LL;
    if ( !v90 )
      return (char)questLabel;
    if ( !v94 )
      goto LABEL_52;
    if ( !v89 )
      goto LABEL_52;
    IconLabelInfo__Set_38850420(v89, 2, 1, v94->fields.lvMax, 0, 0, 0, 0, 0LL);
    questLabel = (UILabel_o *)this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_52;
    ServantFaceIconComponent__Set_38928428(
      (ServantFaceIconComponent_o *)questLabel,
      svtId,
      0,
      0,
      0,
      v89,
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
    lv = v70->fields.lv;
    questLabel = (UILabel_o *)UserServantEntity__getLevelMax(v70, 0LL);
    if ( !v89 )
      goto LABEL_52;
    IconLabelInfo__Set_38850420(v89, 2, lv, (int32_t)questLabel, 0, 0, 0, 0, 0LL);
    questLabel = (UILabel_o *)this->fields.supportServantFaceIcon;
    if ( !questLabel )
      goto LABEL_52;
    ServantFaceIconComponent__Set_38931044((ServantFaceIconComponent_o *)questLabel, usrSvtId, v89, 0LL, 0LL);
  }
  questLabel = (UILabel_o *)this->fields.supportServantSubLabel;
  if ( !questLabel )
    goto LABEL_52;
  UIIconLabel__Set_38947284((UIIconLabel_o *)questLabel, 36, data, 0, 0, 0LL, 0, 0, 0, 0LL);
  LOBYTE(questLabel) = 1;
  return (char)questLabel;
}


void __fastcall FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(
        FriendPointNoticeDialogSvtInfo_o *this,
        float maxWidth,
        const MethodInfo *method)
{
  __int64 v3; // x2
  FriendPointNoticeDialogSvtInfo_c *v6; // x0
  UILabel_o *supportServantNameLabel; // x0

  if ( (byte_4B181DB & 1) == 0 )
  {
    sub_1BCA7E0(&FriendPointNoticeDialogSvtInfo_TypeInfo, method, v3);
    byte_4B181DB = 1;
  }
  if ( maxWidth <= 0.0 )
  {
    v6 = FriendPointNoticeDialogSvtInfo_TypeInfo;
    if ( !FriendPointNoticeDialogSvtInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogSvtInfo_TypeInfo, method);
      v6 = FriendPointNoticeDialogSvtInfo_TypeInfo;
    }
    maxWidth = v6->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH;
  }
  supportServantNameLabel = this->fields.supportServantNameLabel;
  if ( !supportServantNameLabel
    || (UILabel__SetCondensedScale_47600808(supportServantNameLabel, maxWidth, 0LL),
        (supportServantNameLabel = this->fields.questLabel) == 0LL)
    || (UILabel__SetCondensedScale_47600808(supportServantNameLabel, maxWidth, 0LL),
        (supportServantNameLabel = this->fields.friendPointLabel) == 0LL) )
  {
    sub_1BCAA3C(supportServantNameLabel, method);
  }
  UILabel__SetCondensedScale_47600808(supportServantNameLabel, maxWidth, 0LL);
}