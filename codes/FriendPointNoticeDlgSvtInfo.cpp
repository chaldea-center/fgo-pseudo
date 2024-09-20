void __fastcall FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4A5D1D6 & 1) == 0 )
  {
    sub_1B885B0(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    byte_4A5D1D6 = 1;
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
    sub_1B8880C(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(supportServantNameLabel, 0LL);
  *(UnityEngine_Vector3_o *)&v4 = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


bool __fastcall FriendPointNoticeDlgSvtInfo__Set(
        FriendPointNoticeDlgSvtInfo_o *this,
        int32_t svtId,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x27
  Il2CppObject *v8; // x23
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x26
  Il2CppObject *v11; // x24
  int64_t UserId; // x0
  __int64 v13; // x1
  UserServantCollectionMaster_o *v14; // x25
  UserServantEntity_o *v15; // x23
  bool v16; // w28
  int32_t Rarity; // w0
  Il2CppObject *v18; // x26
  int32_t v19; // w25
  UILabel_o *supportServantNameLabel; // x24
  System_String_o *v21; // x25
  Il2CppObject *v22; // x26
  Il2CppObject *v23; // x0
  System_String_o *v24; // x27
  Il2CppObject *v25; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v27; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  IconLabelInfo_o *v29; // x24
  bool v30; // w8
  int32_t lv; // w20
  ServantLimitEntity_o *v33; // [xsp+48h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *v34; // [xsp+50h] [xbp-70h] BYREF
  int32_t data; // [xsp+5Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4A5D1D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1475/*"3"*/);
    sub_1B885B0(&StringLiteral_1413/*"2"*/);
    sub_1B885B0(&StringLiteral_6913/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/);
    sub_1B885B0(&StringLiteral_25463/*"４"*/);
    sub_1B885B0(&StringLiteral_25462/*"３"*/);
    sub_1B885B0(&StringLiteral_25460/*"１"*/);
    sub_1B885B0(&StringLiteral_1493/*"4"*/);
    sub_1B885B0(&StringLiteral_25464/*"５"*/);
    sub_1B885B0(&StringLiteral_6912/*"GET_FRIEND_POINT_SERVANT_NAME"*/);
    sub_1B885B0(&StringLiteral_25461/*"２"*/);
    sub_1B885B0(&StringLiteral_1266/*"1"*/);
    sub_1B885B0(&StringLiteral_1508/*"5"*/);
    byte_4A5D1D4 = 1;
  }
  entity = 0LL;
  data = 0;
  v33 = 0LL;
  v34 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_55;
  if ( !Master_object )
    goto LABEL_62;
  v14 = (UserServantCollectionMaster_o *)UserId;
  UserId = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             svtId,
             (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (UserId & 1) == 0 )
    goto LABEL_55;
  if ( !v8 )
    goto LABEL_62;
  UserId = (int64_t)DataMasterBase_object__object__long___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
                      usrSvtId,
                      (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v15 = (UserServantEntity_o *)UserId;
  v16 = usrSvtId < 1 || UserId == 0;
  if ( v16 )
  {
    if ( !v10 )
      goto LABEL_62;
    Rarity = ServantExceedMaster__GetRarity((ServantExceedMaster_o *)v10, svtId, 0LL);
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
    UserId = (int64_t)System_String__Replace_61726660(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1266/*"1"*/,
                        (System_String_o *)StringLiteral_25460/*"１"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_61726660(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1413/*"2"*/,
                        (System_String_o *)StringLiteral_25461/*"２"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_61726660(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1475/*"3"*/,
                        (System_String_o *)StringLiteral_25462/*"３"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_61726660(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1493/*"4"*/,
                        (System_String_o *)StringLiteral_25463/*"４"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    v18 = (Il2CppObject *)System_String__Replace_61726660(
                            (System_String_o *)UserId,
                            (System_String_o *)StringLiteral_1508/*"5"*/,
                            (System_String_o *)StringLiteral_25464/*"５"*/,
                            0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v14 )
      goto LABEL_62;
    UserId = UserServantCollectionMaster__TryGetEntity(v14, &v34, UserId, svtId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_62;
      if ( !v11 )
        goto LABEL_62;
      UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                 (ServantLimitImageMaster_o *)v11,
                 svtId,
                 v34->fields.maxLimitCount,
                 0LL);
      if ( !v34 )
        goto LABEL_62;
      v19 = (_DWORD)UserId == v34->fields.maxLimitCount ? -1 : UserId;
    }
    else
    {
      v19 = -1;
    }
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6912/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
    if ( !entity
      || (v24 = (System_String_o *)UserId,
          UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, v19, -1, 0LL),
          !entity)
      || (v25 = (Il2CppObject *)UserId,
          ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL),
          UserId = (int64_t)System_String__Format_61721472(v24, v18, v25, ClassName, 0LL),
          !supportServantNameLabel) )
    {
LABEL_62:
      sub_1B8880C(UserId, v13);
    }
  }
  else
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6913/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( !entity )
      goto LABEL_62;
    v21 = (System_String_o *)UserId;
    UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
    if ( !entity )
      goto LABEL_62;
    v22 = (Il2CppObject *)UserId;
    v23 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
    UserId = (int64_t)System_String__Format_61721404(v21, v22, v23, 0LL);
    if ( !supportServantNameLabel )
      goto LABEL_62;
  }
  UILabel__set_text(supportServantNameLabel, (System_String_o *)UserId, 0LL);
  v27 = this->fields.supportServantNameLabel;
  UserId = (int64_t)FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  if ( !v27 )
    goto LABEL_62;
  UILabel__SetCondensedScale_47038932(
    v27,
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
  v29 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v29, 0LL);
  if ( v16 )
  {
    if ( entity )
    {
      if ( v9 )
      {
        v30 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v9, &v33, svtId, 0, 0LL);
        UserId = 0LL;
        if ( !v30 )
          return UserId;
        if ( v33 )
        {
          if ( v29 )
          {
            IconLabelInfo__Set_38140136(v29, 2, 1, v33->fields.lvMax, 0, 0, 0, 0, 0LL);
            UserId = (int64_t)this->fields.supportServantFaceIcon;
            if ( UserId )
            {
              ServantFaceIconComponent__Set_38217436(
                (ServantFaceIconComponent_o *)UserId,
                svtId,
                0,
                0,
                0,
                v29,
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
  lv = v15->fields.lv;
  UserId = UserServantEntity__getLevelMax(v15, 0LL);
  if ( !v29 )
    goto LABEL_62;
  IconLabelInfo__Set_38140136(v29, 2, lv, UserId, 0, 0, 0, 0, 0LL);
  UserId = (int64_t)this->fields.supportServantFaceIcon;
  if ( !UserId )
    goto LABEL_62;
  ServantFaceIconComponent__Set_38220052((ServantFaceIconComponent_o *)UserId, usrSvtId, v29, 0LL, 0LL);
LABEL_60:
  UserId = (int64_t)this->fields.supportServantSubLabel;
  if ( !UserId )
    goto LABEL_62;
  UIIconLabel__Set_38235604((UIIconLabel_o *)UserId, 36, data, 0, 0, 0LL, 0, 0, 0, 0LL);
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

  if ( (byte_4A5D1D5 & 1) == 0 )
  {
    sub_1B885B0(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    byte_4A5D1D5 = 1;
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
    sub_1B8880C(0LL, method);
  UILabel__SetCondensedScale_47038932(supportServantNameLabel, maxWidth, 0LL);
}