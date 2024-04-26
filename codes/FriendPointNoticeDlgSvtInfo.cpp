void __fastcall FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4353FFB & 1) == 0 )
  {
    sub_B70694(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    byte_4353FFB = 1;
  }
  LODWORD(FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH) = (struct FriendPointNoticeDlgSvtInfo_StaticFields)1140457472;
}


void __fastcall FriendPointNoticeDlgSvtInfo___ctor(FriendPointNoticeDlgSvtInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall FriendPointNoticeDlgSvtInfo__Set(
        FriendPointNoticeDlgSvtInfo_o *this,
        int32_t svtId,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x27
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v8; // x23
  ServantLimitMaster_o *v9; // x22
  ServantExceedMaster_o *v10; // x26
  ServantLimitImageMaster_o *v11; // x24
  int64_t UserId; // x0
  __int64 v13; // x1
  UserServantCollectionMaster_o *v14; // x25
  UserServantEntity_o *v15; // x23
  bool v16; // w27
  int32_t Rarity; // w0
  Il2CppObject *v18; // x26
  ServantLimitMaster_o *v19; // x21
  UserServantEntity_o *v20; // x22
  int32_t v21; // w25
  struct UILabel_o **p_supportServantNameLabel; // x19
  UILabel_o *v23; // x24
  System_String_o *v24; // x25
  Il2CppObject *v25; // x26
  Il2CppObject *v26; // x0
  UILabel_o *supportServantNameLabel; // x24
  bool v28; // w23
  System_String_o *v29; // x27
  Il2CppObject *v30; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v32; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  IconLabelInfo_o *v34; // x24
  bool v35; // w8
  int32_t lv; // w20
  int64_t v38; // [xsp+48h] [xbp-78h]
  ServantLimitEntity_o *v39; // [xsp+50h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *v40; // [xsp+58h] [xbp-68h] BYREF
  int32_t v41; // [xsp+64h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4353FFA & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    sub_B70694(&IconLabelInfo_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1179/*"3"*/);
    sub_B70694(&StringLiteral_1130/*"2"*/);
    sub_B70694(&StringLiteral_6966/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/);
    sub_B70694(&StringLiteral_24361/*"４"*/);
    sub_B70694(&StringLiteral_24360/*"３"*/);
    sub_B70694(&StringLiteral_24358/*"１"*/);
    sub_B70694(&StringLiteral_1197/*"4"*/);
    sub_B70694(&StringLiteral_24362/*"５"*/);
    sub_B70694(&StringLiteral_6965/*"GET_FRIEND_POINT_SERVANT_NAME"*/);
    sub_B70694(&StringLiteral_24359/*"２"*/);
    sub_B70694(&StringLiteral_1031/*"1"*/);
    sub_B70694(&StringLiteral_1212/*"5"*/);
    byte_4353FFA = 1;
  }
  entity = 0LL;
  v41 = 0;
  v39 = 0LL;
  v40 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
  v8 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
  v9 = (ServantLimitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v10 = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v11 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_62;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  v14 = (UserServantCollectionMaster_o *)UserId;
  UserId = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             Master_WarQuestSelectionMaster,
             &entity,
             svtId,
             (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (UserId & 1) == 0 )
    goto LABEL_62;
  if ( !v8 )
    goto LABEL_69;
  UserId = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                      v8,
                      usrSvtId,
                      (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v15 = (UserServantEntity_o *)UserId;
  v16 = usrSvtId < 1 || UserId == 0;
  if ( usrSvtId < 1 || UserId == 0 )
  {
    if ( !v10 )
      goto LABEL_69;
    Rarity = ServantExceedMaster__GetRarity(v10, svtId, 0LL);
  }
  else
  {
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)UserId, 0LL);
  }
  v41 = Rarity;
  if ( Rarity )
  {
    UserId = (int64_t)System_Int32__ToString((int32_t)&v41, 0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_44765404(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1031/*"1"*/,
                        (System_String_o *)StringLiteral_24358/*"１"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_44765404(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1130/*"2"*/,
                        (System_String_o *)StringLiteral_24359/*"２"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_44765404(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1179/*"3"*/,
                        (System_String_o *)StringLiteral_24360/*"３"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_44765404(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1197/*"4"*/,
                        (System_String_o *)StringLiteral_24361/*"４"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    v18 = (Il2CppObject *)System_String__Replace_44765404(
                            (System_String_o *)UserId,
                            (System_String_o *)StringLiteral_1212/*"5"*/,
                            (System_String_o *)StringLiteral_24362/*"５"*/,
                            0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v14 )
      goto LABEL_69;
    UserId = UserServantCollectionMaster__TryGetEntity(v14, &v40, UserId, svtId, 0LL);
    v38 = usrSvtId;
    if ( (UserId & 1) != 0 )
    {
      if ( !v40 )
        goto LABEL_69;
      if ( !v11 )
        goto LABEL_69;
      v19 = v9;
      UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v11, svtId, v40->fields.maxLimitCount, 0LL);
      if ( !v40 )
        goto LABEL_69;
      v20 = v15;
      v21 = (_DWORD)UserId == v40->fields.maxLimitCount ? -1 : UserId;
    }
    else
    {
      v19 = v9;
      v20 = v15;
      v21 = -1;
    }
    p_supportServantNameLabel = &this->fields.supportServantNameLabel;
    supportServantNameLabel = this->fields.supportServantNameLabel;
    v28 = v16;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6965/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
    if ( !entity
      || (v29 = (System_String_o *)UserId,
          UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, v21, -1, 0LL),
          !entity)
      || (v30 = (Il2CppObject *)UserId,
          ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL),
          UserId = (int64_t)System_String__Format_44759232(v29, v18, v30, ClassName, 0LL),
          !supportServantNameLabel) )
    {
LABEL_69:
      sub_B7076C(UserId, v13);
    }
    UILabel__set_text(supportServantNameLabel, (System_String_o *)UserId, 0LL);
    v16 = v28;
    v15 = v20;
    v9 = v19;
    usrSvtId = v38;
  }
  else
  {
    p_supportServantNameLabel = &this->fields.supportServantNameLabel;
    v23 = this->fields.supportServantNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6966/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( !entity )
      goto LABEL_69;
    v24 = (System_String_o *)UserId;
    UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
    if ( !entity )
      goto LABEL_69;
    v25 = (Il2CppObject *)UserId;
    v26 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
    UserId = (int64_t)System_String__Format_44753704(v24, v25, v26, 0LL);
    if ( !v23 )
      goto LABEL_69;
    UILabel__set_text(v23, (System_String_o *)UserId, 0LL);
  }
  v32 = *p_supportServantNameLabel;
  UserId = (int64_t)FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( (BYTE3(FriendPointNoticeDlgSvtInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  }
  if ( !v32 )
    goto LABEL_69;
  UILabel__SetCondensedScale_41496620(
    v32,
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
  v34 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v34, 0LL);
  if ( v16 )
  {
    if ( entity )
    {
      if ( v9 )
      {
        v35 = ServantLimitMaster__TryGetEntity(v9, &v39, svtId, 0, 0LL);
        UserId = 0LL;
        if ( !v35 )
          return UserId;
        if ( v39 )
        {
          if ( v34 )
          {
            IconLabelInfo__Set_27789840(v34, 2, 1, v39->fields.lvMax, 0, 0, 0, 0, 0LL);
            UserId = (int64_t)this->fields.supportServantFaceIcon;
            if ( UserId )
            {
              ServantFaceIconComponent__Set_31478240(
                (ServantFaceIconComponent_o *)UserId,
                svtId,
                0,
                0,
                0,
                v34,
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
  lv = v15->fields.lv;
  UserId = UserServantEntity__getLevelMax(v15, 0LL);
  if ( !v34 )
    goto LABEL_69;
  IconLabelInfo__Set_27789840(v34, 2, lv, UserId, 0, 0, 0, 0, 0LL);
  UserId = (int64_t)this->fields.supportServantFaceIcon;
  if ( !UserId )
    goto LABEL_69;
  ServantFaceIconComponent__Set_31481092((ServantFaceIconComponent_o *)UserId, usrSvtId, v34, 0LL, 0LL);
LABEL_67:
  UserId = (int64_t)this->fields.supportServantSubLabel;
  if ( !UserId )
    goto LABEL_69;
  UIIconLabel__Set_41432452((UIIconLabel_o *)UserId, 36, v41, 0, 0, 0LL, 0, 0, 0, 0LL);
  LOBYTE(UserId) = 1;
  return UserId;
}