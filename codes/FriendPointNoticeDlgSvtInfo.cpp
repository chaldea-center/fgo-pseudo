void __fastcall FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A71EED & 1) == 0 )
  {
    sub_1B90010(&FriendPointNoticeDlgSvtInfo_TypeInfo, v1);
    byte_4A71EED = 1;
  }
  LODWORD(FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH) = (struct FriendPointNoticeDlgSvtInfo_StaticFields)1140457472;
}


void __fastcall FriendPointNoticeDlgSvtInfo___ctor(FriendPointNoticeDlgSvtInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall FriendPointNoticeDlgSvtInfo__GetServantNameCondensedScale(
        FriendPointNoticeDlgSvtInfo_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *supportServantNameLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  supportServantNameLabel = (UnityEngine_Component_o *)this->fields.supportServantNameLabel;
  if ( !supportServantNameLabel )
    sub_1B9026C(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(supportServantNameLabel, 0LL);
  *(UnityEngine_Vector3_o *)&v4 = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
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
  Il2CppObject *Master_object; // x27
  Il2CppObject *v33; // x23
  Il2CppObject *v34; // x22
  Il2CppObject *v35; // x26
  Il2CppObject *v36; // x24
  int64_t UserId; // x0
  __int64 v38; // x1
  UserServantCollectionMaster_o *v39; // x25
  UserServantEntity_o *v40; // x23
  bool v41; // w28
  int32_t Rarity; // w0
  Il2CppObject *v43; // x26
  int32_t v44; // w25
  UILabel_o *supportServantNameLabel; // x24
  System_String_o *v46; // x25
  Il2CppObject *v47; // x26
  Il2CppObject *v48; // x0
  System_String_o *v49; // x27
  Il2CppObject *v50; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v52; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  IconLabelInfo_o *v54; // x24
  bool v55; // w8
  int32_t lv; // w20
  ServantLimitEntity_o *v58; // [xsp+48h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *v59; // [xsp+50h] [xbp-70h] BYREF
  int32_t data; // [xsp+5Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4A71EEB & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_1B90010(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B90010(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_1B90010(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B90010(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1B90010(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1B90010(&DataManager_TypeInfo, v12);
    sub_1B90010(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_1B90010(&FriendPointNoticeDlgSvtInfo_TypeInfo, v15);
    sub_1B90010(&IconLabelInfo_TypeInfo, v16);
    sub_1B90010(&LocalizationManager_TypeInfo, v17);
    sub_1B90010(&NetworkManager_TypeInfo, v18);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v19);
    sub_1B90010(&StringLiteral_1475/*"3"*/, v20);
    sub_1B90010(&StringLiteral_1413/*"2"*/, v21);
    sub_1B90010(&StringLiteral_6916/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, v22);
    sub_1B90010(&StringLiteral_25503/*"４"*/, v23);
    sub_1B90010(&StringLiteral_25502/*"３"*/, v24);
    sub_1B90010(&StringLiteral_25500/*"１"*/, v25);
    sub_1B90010(&StringLiteral_1493/*"4"*/, v26);
    sub_1B90010(&StringLiteral_25504/*"５"*/, v27);
    sub_1B90010(&StringLiteral_6915/*"GET_FRIEND_POINT_SERVANT_NAME"*/, v28);
    sub_1B90010(&StringLiteral_25501/*"２"*/, v29);
    sub_1B90010(&StringLiteral_1266/*"1"*/, v30);
    sub_1B90010(&StringLiteral_1508/*"5"*/, v31);
    byte_4A71EEB = 1;
  }
  entity = 0LL;
  data = 0;
  v58 = 0LL;
  v59 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantMaster___);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantMaster___);
  v34 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v35 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v36 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_55;
  if ( !Master_object )
    goto LABEL_62;
  v39 = (UserServantCollectionMaster_o *)UserId;
  UserId = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             svtId,
             (const MethodInfo_312C5FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (UserId & 1) == 0 )
    goto LABEL_55;
  if ( !v33 )
    goto LABEL_62;
  UserId = (int64_t)DataMasterBase_object__object__long___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                      usrSvtId,
                      (const MethodInfo_312C754 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v40 = (UserServantEntity_o *)UserId;
  v41 = usrSvtId < 1 || UserId == 0;
  if ( v41 )
  {
    if ( !v35 )
      goto LABEL_62;
    Rarity = ServantExceedMaster__GetRarity((ServantExceedMaster_o *)v35, svtId, 0LL);
  }
  else
  {
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)UserId, 0LL);
  }
  data = Rarity;
  if ( Rarity )
  {
    UserId = (int64_t)System_Int32__ToString((int32_t)&data, 0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_61806720(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1266/*"1"*/,
                        (System_String_o *)StringLiteral_25500/*"１"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_61806720(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1413/*"2"*/,
                        (System_String_o *)StringLiteral_25501/*"２"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_61806720(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1475/*"3"*/,
                        (System_String_o *)StringLiteral_25502/*"３"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_61806720(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1493/*"4"*/,
                        (System_String_o *)StringLiteral_25503/*"４"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    v43 = (Il2CppObject *)System_String__Replace_61806720(
                            (System_String_o *)UserId,
                            (System_String_o *)StringLiteral_1508/*"5"*/,
                            (System_String_o *)StringLiteral_25504/*"５"*/,
                            0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v39 )
      goto LABEL_62;
    UserId = UserServantCollectionMaster__TryGetEntity(v39, &v59, UserId, svtId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v59 )
        goto LABEL_62;
      if ( !v36 )
        goto LABEL_62;
      UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                 (ServantLimitImageMaster_o *)v36,
                 svtId,
                 v59->fields.maxLimitCount,
                 0LL);
      if ( !v59 )
        goto LABEL_62;
      v44 = (_DWORD)UserId == v59->fields.maxLimitCount ? -1 : UserId;
    }
    else
    {
      v44 = -1;
    }
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6915/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
    if ( !entity
      || (v49 = (System_String_o *)UserId,
          UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, v44, -1, 0LL),
          !entity)
      || (v50 = (Il2CppObject *)UserId,
          ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL),
          UserId = (int64_t)System_String__Format_61801532(v49, v43, v50, ClassName, 0LL),
          !supportServantNameLabel) )
    {
LABEL_62:
      sub_1B9026C(UserId, v38);
    }
  }
  else
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6916/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( !entity )
      goto LABEL_62;
    v46 = (System_String_o *)UserId;
    UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
    if ( !entity )
      goto LABEL_62;
    v47 = (Il2CppObject *)UserId;
    v48 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
    UserId = (int64_t)System_String__Format_61801464(v46, v47, v48, 0LL);
    if ( !supportServantNameLabel )
      goto LABEL_62;
  }
  UILabel__set_text(supportServantNameLabel, (System_String_o *)UserId, 0LL);
  v52 = this->fields.supportServantNameLabel;
  UserId = (int64_t)FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  if ( !v52 )
    goto LABEL_62;
  UILabel__SetCondensedScale_47095508(
    v52,
    FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0LL);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0LL, 0LL) )
  {
LABEL_55:
    LOBYTE(UserId) = 0;
    return UserId;
  }
  v54 = (IconLabelInfo_o *)sub_1B9025C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v54, 0LL);
  if ( v41 )
  {
    if ( entity )
    {
      if ( v34 )
      {
        v55 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v34, &v58, svtId, 0, 0LL);
        UserId = 0LL;
        if ( !v55 )
          return UserId;
        if ( v58 )
        {
          if ( v54 )
          {
            IconLabelInfo__Set_38192256(v54, 2, 1, v58->fields.lvMax, 0, 0, 0, 0, 0LL);
            UserId = (int64_t)this->fields.supportServantFaceIcon;
            if ( UserId )
            {
              ServantFaceIconComponent__Set_38269556(
                (ServantFaceIconComponent_o *)UserId,
                svtId,
                0,
                0,
                0,
                v54,
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
              goto LABEL_60;
            }
          }
        }
      }
      goto LABEL_62;
    }
    goto LABEL_55;
  }
  lv = v40->fields.lv;
  UserId = UserServantEntity__getLevelMax(v40, 0LL);
  if ( !v54 )
    goto LABEL_62;
  IconLabelInfo__Set_38192256(v54, 2, lv, UserId, 0, 0, 0, 0, 0LL);
  UserId = (int64_t)this->fields.supportServantFaceIcon;
  if ( !UserId )
    goto LABEL_62;
  ServantFaceIconComponent__Set_38272172((ServantFaceIconComponent_o *)UserId, usrSvtId, v54, 0LL, 0LL);
LABEL_60:
  UserId = (int64_t)this->fields.supportServantSubLabel;
  if ( !UserId )
    goto LABEL_62;
  UIIconLabel__Set_38287724((UIIconLabel_o *)UserId, 36, data, 0, 0, 0LL, 0, 0, 0, 0LL);
  LOBYTE(UserId) = 1;
  return UserId;
}


void __fastcall FriendPointNoticeDlgSvtInfo__SetServantNameCondensedScale(
        FriendPointNoticeDlgSvtInfo_o *this,
        float maxWidth,
        const MethodInfo *method)
{
  FriendPointNoticeDlgSvtInfo_c *v5; // x0
  UILabel_o *supportServantNameLabel; // x0

  if ( (byte_4A71EEC & 1) == 0 )
  {
    sub_1B90010(&FriendPointNoticeDlgSvtInfo_TypeInfo, method);
    byte_4A71EEC = 1;
  }
  if ( maxWidth <= 0.0 )
  {
    v5 = FriendPointNoticeDlgSvtInfo_TypeInfo;
    if ( !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
      v5 = FriendPointNoticeDlgSvtInfo_TypeInfo;
    }
    maxWidth = v5->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH;
  }
  supportServantNameLabel = this->fields.supportServantNameLabel;
  if ( !supportServantNameLabel )
    sub_1B9026C(0LL, method);
  UILabel__SetCondensedScale_47095508(supportServantNameLabel, maxWidth, 0LL);
}