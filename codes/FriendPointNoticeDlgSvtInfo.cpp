void __fastcall FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A406 & 1) == 0 )
  {
    sub_B2C35C(&FriendPointNoticeDlgSvtInfo_TypeInfo, v1);
    byte_418A406 = 1;
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
  __int64 v38; // x1
  UserServantCollectionMaster_o *v39; // x25
  UserServantEntity_o *v40; // x23
  bool v41; // w27
  int32_t Rarity; // w0
  Il2CppObject *v43; // x26
  ServantLimitMaster_o *v44; // x21
  UserServantEntity_o *v45; // x22
  int32_t v46; // w25
  struct UILabel_o **p_supportServantNameLabel; // x19
  UILabel_o *v48; // x24
  System_String_o *v49; // x25
  Il2CppObject *v50; // x26
  Il2CppObject *v51; // x0
  UILabel_o *supportServantNameLabel; // x24
  bool v53; // w23
  System_String_o *v54; // x27
  Il2CppObject *v55; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v57; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  IconLabelInfo_o *v59; // x24
  bool v60; // w8
  int32_t lv; // w20
  int64_t v63; // [xsp+48h] [xbp-78h]
  ServantLimitEntity_o *v64; // [xsp+50h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *v65; // [xsp+58h] [xbp-68h] BYREF
  int32_t v66; // [xsp+64h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_418A405 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_B2C35C(&FriendPointNoticeDlgSvtInfo_TypeInfo, v15);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_1154/*"3"*/, v20);
    sub_B2C35C(&StringLiteral_1104/*"2"*/, v21);
    sub_B2C35C(&StringLiteral_6869/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, v22);
    sub_B2C35C(&StringLiteral_23961/*"４"*/, v23);
    sub_B2C35C(&StringLiteral_23960/*"３"*/, v24);
    sub_B2C35C(&StringLiteral_23958/*"１"*/, v25);
    sub_B2C35C(&StringLiteral_1172/*"4"*/, v26);
    sub_B2C35C(&StringLiteral_23962/*"５"*/, v27);
    sub_B2C35C(&StringLiteral_6868/*"GET_FRIEND_POINT_SERVANT_NAME"*/, v28);
    sub_B2C35C(&StringLiteral_23959/*"２"*/, v29);
    sub_B2C35C(&StringLiteral_1006/*"1"*/, v30);
    sub_B2C35C(&StringLiteral_1187/*"5"*/, v31);
    byte_418A405 = 1;
  }
  entity = 0LL;
  v66 = 0;
  v64 = 0LL;
  v65 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v33 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  v34 = (ServantLimitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v35 = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v36 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_62;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  v39 = (UserServantCollectionMaster_o *)UserId;
  UserId = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             Master_WarQuestSelectionMaster,
             &entity,
             svtId,
             (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (UserId & 1) == 0 )
    goto LABEL_62;
  if ( !v33 )
    goto LABEL_69;
  UserId = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                      v33,
                      usrSvtId,
                      (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v40 = (UserServantEntity_o *)UserId;
  v41 = usrSvtId < 1 || UserId == 0;
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
  v66 = Rarity;
  if ( Rarity )
  {
    UserId = (int64_t)System_Int32__ToString((int32_t)&v66, 0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_44312768(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1006/*"1"*/,
                        (System_String_o *)StringLiteral_23958/*"１"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_44312768(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1104/*"2"*/,
                        (System_String_o *)StringLiteral_23959/*"２"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_44312768(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1154/*"3"*/,
                        (System_String_o *)StringLiteral_23960/*"３"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_44312768(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1172/*"4"*/,
                        (System_String_o *)StringLiteral_23961/*"４"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    v43 = (Il2CppObject *)System_String__Replace_44312768(
                            (System_String_o *)UserId,
                            (System_String_o *)StringLiteral_1187/*"5"*/,
                            (System_String_o *)StringLiteral_23962/*"５"*/,
                            0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v39 )
      goto LABEL_69;
    UserId = UserServantCollectionMaster__TryGetEntity(v39, &v65, UserId, svtId, 0LL);
    v63 = usrSvtId;
    if ( (UserId & 1) != 0 )
    {
      if ( !v65 )
        goto LABEL_69;
      if ( !v36 )
        goto LABEL_69;
      v44 = v34;
      UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v36, svtId, v65->fields.maxLimitCount, 0LL);
      if ( !v65 )
        goto LABEL_69;
      v45 = v40;
      v46 = (_DWORD)UserId == v65->fields.maxLimitCount ? -1 : UserId;
    }
    else
    {
      v44 = v34;
      v45 = v40;
      v46 = -1;
    }
    p_supportServantNameLabel = &this->fields.supportServantNameLabel;
    supportServantNameLabel = this->fields.supportServantNameLabel;
    v53 = v41;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6868/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
    if ( !entity
      || (v54 = (System_String_o *)UserId,
          UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, v46, -1, 0LL),
          !entity)
      || (v55 = (Il2CppObject *)UserId,
          ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL),
          UserId = (int64_t)System_String__Format_44306596(v54, v43, v55, ClassName, 0LL),
          !supportServantNameLabel) )
    {
LABEL_69:
      sub_B2C434(UserId, v38);
    }
    UILabel__set_text(supportServantNameLabel, (System_String_o *)UserId, 0LL);
    v41 = v53;
    v40 = v45;
    v34 = v44;
    usrSvtId = v63;
  }
  else
  {
    p_supportServantNameLabel = &this->fields.supportServantNameLabel;
    v48 = this->fields.supportServantNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6869/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( !entity )
      goto LABEL_69;
    v49 = (System_String_o *)UserId;
    UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
    if ( !entity )
      goto LABEL_69;
    v50 = (Il2CppObject *)UserId;
    v51 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
    UserId = (int64_t)System_String__Format_44301068(v49, v50, v51, 0LL);
    if ( !v48 )
      goto LABEL_69;
    UILabel__set_text(v48, (System_String_o *)UserId, 0LL);
  }
  v57 = *p_supportServantNameLabel;
  UserId = (int64_t)FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( (BYTE3(FriendPointNoticeDlgSvtInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  }
  if ( !v57 )
    goto LABEL_69;
  UILabel__SetCondensedScale_41673556(
    v57,
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
  v59 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v59, 0LL);
  if ( v41 )
  {
    if ( entity )
    {
      if ( v34 )
      {
        v60 = ServantLimitMaster__TryGetEntity(v34, &v64, svtId, 0, 0LL);
        UserId = 0LL;
        if ( !v60 )
          return UserId;
        if ( v64 )
        {
          if ( v59 )
          {
            IconLabelInfo__Set_27362128(v59, 2, 1, v64->fields.lvMax, 0, 0, 0, 0, 0LL);
            UserId = (int64_t)this->fields.supportServantFaceIcon;
            if ( UserId )
            {
              ServantFaceIconComponent__Set_30790452(
                (ServantFaceIconComponent_o *)UserId,
                svtId,
                0,
                0,
                0,
                v59,
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
  lv = v40->fields.lv;
  UserId = UserServantEntity__getLevelMax(v40, 0LL);
  if ( !v59 )
    goto LABEL_69;
  IconLabelInfo__Set_27362128(v59, 2, lv, UserId, 0, 0, 0, 0, 0LL);
  UserId = (int64_t)this->fields.supportServantFaceIcon;
  if ( !UserId )
    goto LABEL_69;
  ServantFaceIconComponent__Set_30793276((ServantFaceIconComponent_o *)UserId, usrSvtId, v59, 0LL, 0LL);
LABEL_67:
  UserId = (int64_t)this->fields.supportServantSubLabel;
  if ( !UserId )
    goto LABEL_69;
  UIIconLabel__Set_41609428((UIIconLabel_o *)UserId, 36, v66, 0, 0, 0LL, 0, 0, 0, 0LL);
  LOBYTE(UserId) = 1;
  return UserId;
}