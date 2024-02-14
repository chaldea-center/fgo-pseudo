void __fastcall FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421712D & 1) == 0 )
  {
    sub_B0D8A4(&FriendPointNoticeDlgSvtInfo_TypeInfo, v1);
    byte_421712D = 1;
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
  int64_t UserId; // x0
  UserServantCollectionMaster_o *v38; // x25
  UserServantEntity_o *v39; // x23
  bool v40; // w27
  int32_t Rarity; // w0
  Il2CppObject *v42; // x26
  ServantLimitMaster_o *v43; // x21
  UserServantEntity_o *v44; // x22
  int32_t v45; // w25
  struct UILabel_o **p_supportServantNameLabel; // x19
  UILabel_o *v47; // x24
  System_String_o *v48; // x25
  Il2CppObject *v49; // x26
  Il2CppObject *v50; // x0
  UILabel_o *supportServantNameLabel; // x24
  bool v52; // w23
  System_String_o *v53; // x27
  Il2CppObject *v54; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v56; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  __int64 v58; // x1
  __int64 v59; // x2
  IconLabelInfo_o *v60; // x24
  bool v61; // w8
  int32_t lv; // w20
  int64_t v64; // [xsp+48h] [xbp-78h]
  ServantLimitEntity_o *v65; // [xsp+50h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *v66; // [xsp+58h] [xbp-68h] BYREF
  int32_t v67; // [xsp+64h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_421712C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_B0D8A4(&FriendPointNoticeDlgSvtInfo_TypeInfo, v15);
    sub_B0D8A4(&IconLabelInfo_TypeInfo, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&NetworkManager_TypeInfo, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_1160/*"3"*/, v20);
    sub_B0D8A4(&StringLiteral_1111/*"2"*/, v21);
    sub_B0D8A4(&StringLiteral_6889/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, v22);
    sub_B0D8A4(&StringLiteral_24043/*"４"*/, v23);
    sub_B0D8A4(&StringLiteral_24042/*"３"*/, v24);
    sub_B0D8A4(&StringLiteral_24040/*"１"*/, v25);
    sub_B0D8A4(&StringLiteral_1179/*"4"*/, v26);
    sub_B0D8A4(&StringLiteral_24044/*"５"*/, v27);
    sub_B0D8A4(&StringLiteral_6888/*"GET_FRIEND_POINT_SERVANT_NAME"*/, v28);
    sub_B0D8A4(&StringLiteral_24041/*"２"*/, v29);
    sub_B0D8A4(&StringLiteral_1013/*"1"*/, v30);
    sub_B0D8A4(&StringLiteral_1194/*"5"*/, v31);
    byte_421712C = 1;
  }
  entity = 0LL;
  v67 = 0;
  v65 = 0LL;
  v66 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  v33 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  v34 = (ServantLimitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v35 = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v36 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_62;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  v38 = (UserServantCollectionMaster_o *)UserId;
  UserId = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             Master_WarQuestSelectionMaster,
             &entity,
             svtId,
             (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (UserId & 1) == 0 )
    goto LABEL_62;
  if ( !v33 )
    goto LABEL_69;
  UserId = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                      v33,
                      usrSvtId,
                      (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v39 = (UserServantEntity_o *)UserId;
  v40 = usrSvtId < 1 || UserId == 0;
  if ( usrSvtId < 1 || UserId == 0 )
  {
    if ( !v35 )
      goto LABEL_69;
    Rarity = ServantExceedMaster__GetRarity(v35, svtId, 0LL);
  }
  else
  {
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)UserId, 0LL);
  }
  v67 = Rarity;
  if ( Rarity )
  {
    UserId = (int64_t)System_Int32__ToString((int32_t)&v67, 0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_43857140(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1013/*"1"*/,
                        (System_String_o *)StringLiteral_24040/*"１"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_43857140(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1111/*"2"*/,
                        (System_String_o *)StringLiteral_24041/*"２"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_43857140(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1160/*"3"*/,
                        (System_String_o *)StringLiteral_24042/*"３"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_43857140(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1179/*"4"*/,
                        (System_String_o *)StringLiteral_24043/*"４"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    v42 = (Il2CppObject *)System_String__Replace_43857140(
                            (System_String_o *)UserId,
                            (System_String_o *)StringLiteral_1194/*"5"*/,
                            (System_String_o *)StringLiteral_24044/*"５"*/,
                            0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v38 )
      goto LABEL_69;
    UserId = UserServantCollectionMaster__TryGetEntity(v38, &v66, UserId, svtId, 0LL);
    v64 = usrSvtId;
    if ( (UserId & 1) != 0 )
    {
      if ( !v66 )
        goto LABEL_69;
      if ( !v36 )
        goto LABEL_69;
      v43 = v34;
      UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v36, svtId, v66->fields.maxLimitCount, 0LL);
      if ( !v66 )
        goto LABEL_69;
      v44 = v39;
      v45 = (_DWORD)UserId == v66->fields.maxLimitCount ? -1 : UserId;
    }
    else
    {
      v43 = v34;
      v44 = v39;
      v45 = -1;
    }
    p_supportServantNameLabel = &this->fields.supportServantNameLabel;
    supportServantNameLabel = this->fields.supportServantNameLabel;
    v52 = v40;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6888/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
    if ( !entity
      || (v53 = (System_String_o *)UserId,
          UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, v45, -1, 0LL),
          !entity)
      || (v54 = (Il2CppObject *)UserId,
          ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL),
          UserId = (int64_t)System_String__Format_43850968(v53, v42, v54, ClassName, 0LL),
          !supportServantNameLabel) )
    {
LABEL_69:
      sub_B0D97C(UserId);
    }
    UILabel__set_text(supportServantNameLabel, (System_String_o *)UserId, 0LL);
    v40 = v52;
    v39 = v44;
    v34 = v43;
    usrSvtId = v64;
  }
  else
  {
    p_supportServantNameLabel = &this->fields.supportServantNameLabel;
    v47 = this->fields.supportServantNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6889/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( !entity )
      goto LABEL_69;
    v48 = (System_String_o *)UserId;
    UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
    if ( !entity )
      goto LABEL_69;
    v49 = (Il2CppObject *)UserId;
    v50 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
    UserId = (int64_t)System_String__Format_43845440(v48, v49, v50, 0LL);
    if ( !v47 )
      goto LABEL_69;
    UILabel__set_text(v47, (System_String_o *)UserId, 0LL);
  }
  v56 = *p_supportServantNameLabel;
  UserId = (int64_t)FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( (BYTE3(FriendPointNoticeDlgSvtInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  }
  if ( !v56 )
    goto LABEL_69;
  UILabel__SetCondensedScale_41140248(
    v56,
    FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0LL);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0LL, 0LL) )
  {
LABEL_62:
    LOBYTE(UserId) = 0;
    return UserId;
  }
  v60 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v58, v59);
  IconLabelInfo___ctor(v60, 0LL);
  if ( v40 )
  {
    if ( entity )
    {
      if ( v34 )
      {
        v61 = ServantLimitMaster__TryGetEntity(v34, &v65, svtId, 0, 0LL);
        UserId = 0LL;
        if ( !v61 )
          return UserId;
        if ( v65 )
        {
          if ( v60 )
          {
            IconLabelInfo__Set_26821248(v60, 2, 1, v65->fields.lvMax, 0, 0, 0, 0, 0LL);
            UserId = (int64_t)this->fields.supportServantFaceIcon;
            if ( UserId )
            {
              ServantFaceIconComponent__Set_29623744(
                (ServantFaceIconComponent_o *)UserId,
                svtId,
                0,
                0,
                0,
                v60,
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
              goto LABEL_67;
            }
          }
        }
      }
      goto LABEL_69;
    }
    goto LABEL_62;
  }
  lv = v39->fields.lv;
  UserId = UserServantEntity__getLevelMax(v39, 0LL);
  if ( !v60 )
    goto LABEL_69;
  IconLabelInfo__Set_26821248(v60, 2, lv, UserId, 0, 0, 0, 0, 0LL);
  UserId = (int64_t)this->fields.supportServantFaceIcon;
  if ( !UserId )
    goto LABEL_69;
  ServantFaceIconComponent__Set_29626568((ServantFaceIconComponent_o *)UserId, usrSvtId, v60, 0LL, 0LL);
LABEL_67:
  UserId = (int64_t)this->fields.supportServantSubLabel;
  if ( !UserId )
    goto LABEL_69;
  UIIconLabel__Set_41076120((UIIconLabel_o *)UserId, 36, v67, 0, 0, 0LL, 0, 0, 0, 0LL);
  LOBYTE(UserId) = 1;
  return UserId;
}