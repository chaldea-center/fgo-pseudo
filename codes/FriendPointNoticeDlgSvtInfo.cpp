void __fastcall FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD949 & 1) == 0 )
  {
    sub_B16FFC(&FriendPointNoticeDlgSvtInfo_TypeInfo, v1);
    byte_40FD949 = 1;
  }
  LODWORD(FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH) = (struct FriendPointNoticeDlgSvtInfo_StaticFields)1140457472;
}


void __fastcall FriendPointNoticeDlgSvtInfo___ctor(FriendPointNoticeDlgSvtInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FriendPointNoticeDlgSvtInfo__Set(
        FriendPointNoticeDlgSvtInfo_o *this,
        int32_t svtId,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x27
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v33; // x23
  ServantLimitMaster_o *v34; // x22
  ServantExceedMaster_o *v35; // x26
  ServantLimitImageMaster_o *v36; // x24
  WarQuestSelectionMaster_o *v37; // x0
  UserServantCollectionMaster_o *v38; // x25
  UserServantEntity_o *v39; // x0
  UserServantEntity_o *v40; // x23
  bool v41; // w27
  int32_t Rarity; // w0
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  Il2CppObject *v48; // x26
  int64_t UserId; // x0
  ServantLimitMaster_o *v50; // x21
  int32_t ServantLimitCountSealAfter; // w0
  UserServantEntity_o *v52; // x22
  int32_t v53; // w25
  struct UILabel_o **p_supportServantNameLabel; // x19
  UILabel_o *v55; // x24
  System_String_o *v56; // x0
  System_String_o *v57; // x25
  System_String_o *v58; // x0
  Il2CppObject *v59; // x26
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  UILabel_o *supportServantNameLabel; // x24
  bool v63; // w23
  System_String_o *v64; // x0
  System_String_o *v65; // x27
  System_String_o *Name; // x0
  Il2CppObject *v67; // x25
  Il2CppObject *ClassName; // x0
  System_String_o *v69; // x0
  UILabel_o *v70; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  IconLabelInfo_o *v76; // x24
  bool v77; // w8
  bool result; // w0
  ServantFaceIconComponent_o *v79; // x0
  int32_t lv; // w20
  int32_t LevelMax; // w0
  ServantFaceIconComponent_o *v82; // x0
  UIIconLabel_o *supportServantSubLabel; // x0
  int64_t v84; // [xsp+48h] [xbp-78h]
  ServantLimitEntity_o *v85; // [xsp+50h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *v86; // [xsp+58h] [xbp-68h] BYREF
  int32_t v87; // [xsp+64h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40FD948 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&FriendPointNoticeDlgSvtInfo_TypeInfo, v15);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_1151/*"3"*/, v20);
    sub_B16FFC(&StringLiteral_1102/*"2"*/, v21);
    sub_B16FFC(&StringLiteral_6841/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, v22);
    sub_B16FFC(&StringLiteral_23861/*"４"*/, v23);
    sub_B16FFC(&StringLiteral_23860/*"３"*/, v24);
    sub_B16FFC(&StringLiteral_23858/*"１"*/, v25);
    sub_B16FFC(&StringLiteral_1169/*"4"*/, v26);
    sub_B16FFC(&StringLiteral_23862/*"５"*/, v27);
    sub_B16FFC(&StringLiteral_6840/*"GET_FRIEND_POINT_SERVANT_NAME"*/, v28);
    sub_B16FFC(&StringLiteral_23859/*"２"*/, v29);
    sub_B16FFC(&StringLiteral_1004/*"1"*/, v30);
    sub_B16FFC(&StringLiteral_1184/*"5"*/, v31);
    byte_40FD948 = 1;
  }
  entity = 0LL;
  v87 = 0;
  v85 = 0LL;
  v86 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v33 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  v34 = (ServantLimitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v35 = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v36 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v37 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    return 0;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  v38 = (UserServantCollectionMaster_o *)v37;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          svtId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  if ( !v33 )
    goto LABEL_69;
  v39 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          v33,
          usrSvtId,
          (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v40 = v39;
  v41 = usrSvtId < 1 || v39 == 0LL;
  if ( usrSvtId < 1 || v39 == 0LL )
  {
    if ( !v35 )
      goto LABEL_69;
    Rarity = ServantExceedMaster__GetRarity(v35, svtId, 0LL);
  }
  else
  {
    Rarity = UserServantEntity__getRarity(v39, 0LL);
  }
  v87 = Rarity;
  if ( Rarity )
  {
    v43 = System_Int32__ToString((int32_t)&v87, 0LL);
    if ( !v43 )
      goto LABEL_69;
    v44 = System_String__Replace_43750968(
            v43,
            (System_String_o *)StringLiteral_1004/*"1"*/,
            (System_String_o *)StringLiteral_23858/*"１"*/,
            0LL);
    if ( !v44 )
      goto LABEL_69;
    v45 = System_String__Replace_43750968(
            v44,
            (System_String_o *)StringLiteral_1102/*"2"*/,
            (System_String_o *)StringLiteral_23859/*"２"*/,
            0LL);
    if ( !v45 )
      goto LABEL_69;
    v46 = System_String__Replace_43750968(
            v45,
            (System_String_o *)StringLiteral_1151/*"3"*/,
            (System_String_o *)StringLiteral_23860/*"３"*/,
            0LL);
    if ( !v46 )
      goto LABEL_69;
    v47 = System_String__Replace_43750968(
            v46,
            (System_String_o *)StringLiteral_1169/*"4"*/,
            (System_String_o *)StringLiteral_23861/*"４"*/,
            0LL);
    if ( !v47 )
      goto LABEL_69;
    v48 = (Il2CppObject *)System_String__Replace_43750968(
                            v47,
                            (System_String_o *)StringLiteral_1184/*"5"*/,
                            (System_String_o *)StringLiteral_23862/*"５"*/,
                            0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v38 )
      goto LABEL_69;
    v84 = usrSvtId;
    if ( UserServantCollectionMaster__TryGetEntity(v38, &v86, UserId, svtId, 0LL) )
    {
      if ( !v86 )
        goto LABEL_69;
      if ( !v36 )
        goto LABEL_69;
      v50 = v34;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     v36,
                                     svtId,
                                     v86->fields.maxLimitCount,
                                     0LL);
      if ( !v86 )
        goto LABEL_69;
      v52 = v40;
      v53 = ServantLimitCountSealAfter == v86->fields.maxLimitCount ? -1 : ServantLimitCountSealAfter;
    }
    else
    {
      v50 = v34;
      v52 = v40;
      v53 = -1;
    }
    p_supportServantNameLabel = &this->fields.supportServantNameLabel;
    supportServantNameLabel = this->fields.supportServantNameLabel;
    v63 = v41;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_6840/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
    if ( !entity
      || (v65 = v64, Name = ServantEntity__getName((ServantEntity_o *)entity, v53, -1, 0LL), !entity)
      || (v67 = (Il2CppObject *)Name,
          ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL),
          v69 = System_String__Format_43744796(v65, v48, v67, ClassName, 0LL),
          !supportServantNameLabel) )
    {
LABEL_69:
      sub_B170D4();
    }
    UILabel__set_text(supportServantNameLabel, v69, 0LL);
    v41 = v63;
    v40 = v52;
    v34 = v50;
    usrSvtId = v84;
  }
  else
  {
    p_supportServantNameLabel = &this->fields.supportServantNameLabel;
    v55 = this->fields.supportServantNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_6841/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( !entity )
      goto LABEL_69;
    v57 = v56;
    v58 = ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
    if ( !entity )
      goto LABEL_69;
    v59 = (Il2CppObject *)v58;
    v60 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
    v61 = System_String__Format_43739268(v57, v59, v60, 0LL);
    if ( !v55 )
      goto LABEL_69;
    UILabel__set_text(v55, v61, 0LL);
  }
  v70 = *p_supportServantNameLabel;
  if ( (BYTE3(FriendPointNoticeDlgSvtInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  }
  if ( !v70 )
    goto LABEL_69;
  UILabel__SetCondensedScale_40440812(
    v70,
    FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0LL);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0LL, 0LL) )
    return 0;
  v76 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v72, v73, v74, v75);
  IconLabelInfo___ctor(v76, 0LL);
  if ( !v41 )
  {
    lv = v40->fields.lv;
    LevelMax = UserServantEntity__getLevelMax(v40, 0LL);
    if ( !v76 )
      goto LABEL_69;
    IconLabelInfo__Set_28888132(v76, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
    v82 = this->fields.supportServantFaceIcon;
    if ( !v82 )
      goto LABEL_69;
    ServantFaceIconComponent__Set_30705604(v82, usrSvtId, v76, 0LL, 0LL);
    goto LABEL_67;
  }
  if ( !entity )
    return 0;
  if ( !v34 )
    goto LABEL_69;
  v77 = ServantLimitMaster__TryGetEntity(v34, &v85, svtId, 0, 0LL);
  result = 0;
  if ( v77 )
  {
    if ( !v85 )
      goto LABEL_69;
    if ( !v76 )
      goto LABEL_69;
    IconLabelInfo__Set_28888132(v76, 2, 1, v85->fields.lvMax, 0, 0, 0, 0, 0LL);
    v79 = this->fields.supportServantFaceIcon;
    if ( !v79 )
      goto LABEL_69;
    ServantFaceIconComponent__Set_30702780(v79, svtId, 0, 0, 0, v76, 0LL, 2, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
LABEL_67:
    supportServantSubLabel = this->fields.supportServantSubLabel;
    if ( supportServantSubLabel )
    {
      UIIconLabel__Set_40377052(supportServantSubLabel, 36, v87, 0, 0, 0LL, 0, 0, 0, 0LL);
      return 1;
    }
    goto LABEL_69;
  }
  return result;
}