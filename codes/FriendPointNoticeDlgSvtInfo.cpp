void __fastcall FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4BDE5EB & 1) == 0 )
  {
    sub_1C21E38(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    byte_4BDE5EB = 1;
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
    sub_1C22094(0LL, method);
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
  UserServantCollectionMaster_o *ServantLimitCountSealAfter; // x0
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
  ServantLimitEntity_o *v33; // [xsp+50h] [xbp-80h] BYREF
  UserServantCollectionEntity_o *v34; // [xsp+58h] [xbp-78h] BYREF
  int32_t data; // [xsp+64h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4BDE5E9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    sub_1C21E38(&IconLabelInfo_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1474/*"3"*/);
    sub_1C21E38(&StringLiteral_1412/*"2"*/);
    sub_1C21E38(&StringLiteral_7089/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/);
    sub_1C21E38(&StringLiteral_25914/*"４"*/);
    sub_1C21E38(&StringLiteral_25913/*"３"*/);
    sub_1C21E38(&StringLiteral_25911/*"１"*/);
    sub_1C21E38(&StringLiteral_1492/*"4"*/);
    sub_1C21E38(&StringLiteral_25915/*"５"*/);
    sub_1C21E38(&StringLiteral_7088/*"GET_FRIEND_POINT_SERVANT_NAME"*/);
    sub_1C21E38(&StringLiteral_25912/*"２"*/);
    sub_1C21E38(&StringLiteral_1265/*"1"*/);
    sub_1C21E38(&StringLiteral_1509/*"5"*/);
    byte_4BDE5E9 = 1;
  }
  entity = 0LL;
  data = 0;
  v33 = 0LL;
  v34 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_59;
  if ( !Master_object )
    goto LABEL_66;
  v14 = ServantLimitCountSealAfter;
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                  &entity,
                                                                  svtId,
                                                                  (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)ServantLimitCountSealAfter & 1) == 0 )
    goto LABEL_59;
  if ( !v8 )
    goto LABEL_66;
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)DataMasterBase_object__object__long___GetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
                                                                  usrSvtId,
                                                                  (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v15 = (UserServantEntity_o *)ServantLimitCountSealAfter;
  v16 = usrSvtId < 1 || ServantLimitCountSealAfter == 0LL;
  if ( v16 )
  {
    if ( !v10 )
      goto LABEL_66;
    Rarity = ServantExceedMaster__GetRarity((ServantExceedMaster_o *)v10, svtId, 0LL);
  }
  else
  {
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)ServantLimitCountSealAfter, 0LL);
  }
  data = Rarity;
  if ( Rarity )
  {
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_Int32__ToString((int32_t)&data, 0LL);
    if ( !ServantLimitCountSealAfter )
      goto LABEL_66;
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_String__Replace_63135104(
                                                                    (System_String_o *)ServantLimitCountSealAfter,
                                                                    (System_String_o *)StringLiteral_1265/*"1"*/,
                                                                    (System_String_o *)StringLiteral_25911/*"１"*/,
                                                                    0LL);
    if ( !ServantLimitCountSealAfter )
      goto LABEL_66;
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_String__Replace_63135104(
                                                                    (System_String_o *)ServantLimitCountSealAfter,
                                                                    (System_String_o *)StringLiteral_1412/*"2"*/,
                                                                    (System_String_o *)StringLiteral_25912/*"２"*/,
                                                                    0LL);
    if ( !ServantLimitCountSealAfter )
      goto LABEL_66;
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_String__Replace_63135104(
                                                                    (System_String_o *)ServantLimitCountSealAfter,
                                                                    (System_String_o *)StringLiteral_1474/*"3"*/,
                                                                    (System_String_o *)StringLiteral_25913/*"３"*/,
                                                                    0LL);
    if ( !ServantLimitCountSealAfter )
      goto LABEL_66;
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_String__Replace_63135104(
                                                                    (System_String_o *)ServantLimitCountSealAfter,
                                                                    (System_String_o *)StringLiteral_1492/*"4"*/,
                                                                    (System_String_o *)StringLiteral_25914/*"４"*/,
                                                                    0LL);
    if ( !ServantLimitCountSealAfter )
      goto LABEL_66;
    v18 = (Il2CppObject *)System_String__Replace_63135104(
                            (System_String_o *)ServantLimitCountSealAfter,
                            (System_String_o *)StringLiteral_1509/*"5"*/,
                            (System_String_o *)StringLiteral_25915/*"５"*/,
                            0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)NetworkManager_TypeInfo;
    }
    if ( !v14 )
      goto LABEL_66;
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)UserServantCollectionMaster__TryGetEntity(
                                                                    v14,
                                                                    &v34,
                                                                    *(_QWORD *)&ServantLimitCountSealAfter[2].fields._MasterName_k__BackingField[2].fields,
                                                                    svtId,
                                                                    0LL);
    if ( ((unsigned __int8)ServantLimitCountSealAfter & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_66;
      if ( !v11 )
        goto LABEL_66;
      ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                      (ServantLimitImageMaster_o *)v11,
                                                                      svtId,
                                                                      v34->fields.maxLimitCount,
                                                                      0LL);
      if ( !v34 )
        goto LABEL_66;
      v19 = (_DWORD)ServantLimitCountSealAfter == v34->fields.maxLimitCount ? -1 : (int)ServantLimitCountSealAfter;
    }
    else
    {
      v19 = -1;
    }
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_7088/*"GET_FRIEND_POINT_SERVANT_NAME"*/,
                                                                    0LL);
    if ( !entity
      || (v24 = (System_String_o *)ServantLimitCountSealAfter,
          ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)ServantEntity__getName(
                                                                          (ServantEntity_o *)entity,
                                                                          v19,
                                                                          -1,
                                                                          0,
                                                                          0LL),
          !entity)
      || (v25 = (Il2CppObject *)ServantLimitCountSealAfter,
          ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL),
          ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_String__Format_63129916(
                                                                          v24,
                                                                          v18,
                                                                          v25,
                                                                          ClassName,
                                                                          0LL),
          !supportServantNameLabel) )
    {
LABEL_66:
      sub_1C22094(ServantLimitCountSealAfter, v13);
    }
  }
  else
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_7089/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/,
                                                                    0LL);
    if ( !entity )
      goto LABEL_66;
    v21 = (System_String_o *)ServantLimitCountSealAfter;
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)ServantEntity__getName(
                                                                    (ServantEntity_o *)entity,
                                                                    -1,
                                                                    -1,
                                                                    0,
                                                                    0LL);
    if ( !entity )
      goto LABEL_66;
    v22 = (Il2CppObject *)ServantLimitCountSealAfter;
    v23 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_String__Format_63129848(v21, v22, v23, 0LL);
    if ( !supportServantNameLabel )
      goto LABEL_66;
  }
  UILabel__set_text(supportServantNameLabel, (System_String_o *)ServantLimitCountSealAfter, 0LL);
  v27 = this->fields.supportServantNameLabel;
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  if ( !v27 )
    goto LABEL_66;
  UILabel__SetCondensedScale_48213524(
    v27,
    FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0LL, 0LL) )
  {
LABEL_59:
    LOBYTE(ServantLimitCountSealAfter) = 0;
    return (char)ServantLimitCountSealAfter;
  }
  v29 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v29, 0LL);
  if ( v16 )
  {
    if ( entity )
    {
      if ( v9 )
      {
        v30 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v9, &v33, svtId, 0, 0LL);
        ServantLimitCountSealAfter = 0LL;
        if ( !v30 )
          return (char)ServantLimitCountSealAfter;
        if ( v33 )
        {
          if ( v29 )
          {
            IconLabelInfo__Set_39381772(v29, 2, 1, v33->fields.lvMax, 0, 0, 0, 0, 0LL);
            ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)this->fields.supportServantFaceIcon;
            if ( ServantLimitCountSealAfter )
            {
              ServantFaceIconComponent__Set_39461076(
                (ServantFaceIconComponent_o *)ServantLimitCountSealAfter,
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
                0LL,
                0LL);
              goto LABEL_64;
            }
          }
        }
      }
      goto LABEL_66;
    }
    goto LABEL_59;
  }
  lv = v15->fields.lv;
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)UserServantEntity__getLevelMax(v15, 0LL);
  if ( !v29 )
    goto LABEL_66;
  IconLabelInfo__Set_39381772(v29, 2, lv, (int32_t)ServantLimitCountSealAfter, 0, 0, 0, 0, 0LL);
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)this->fields.supportServantFaceIcon;
  if ( !ServantLimitCountSealAfter )
    goto LABEL_66;
  ServantFaceIconComponent__Set_39463800(
    (ServantFaceIconComponent_o *)ServantLimitCountSealAfter,
    usrSvtId,
    v29,
    0LL,
    0LL);
LABEL_64:
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)this->fields.supportServantSubLabel;
  if ( !ServantLimitCountSealAfter )
    goto LABEL_66;
  UIIconLabel__Set_39480396((UIIconLabel_o *)ServantLimitCountSealAfter, 36, data, 0, 0, 0LL, 0, 0, 0, 0LL);
  LOBYTE(ServantLimitCountSealAfter) = 1;
  return (char)ServantLimitCountSealAfter;
}


void __fastcall FriendPointNoticeDlgSvtInfo__SetServantNameCondensedScale(
        FriendPointNoticeDlgSvtInfo_o *this,
        float maxWidth,
        const MethodInfo *method)
{
  FriendPointNoticeDlgSvtInfo_c *v5; // x0
  UILabel_o *supportServantNameLabel; // x0

  if ( (byte_4BDE5EA & 1) == 0 )
  {
    sub_1C21E38(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    byte_4BDE5EA = 1;
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
    sub_1C22094(0LL, method);
  UILabel__SetCondensedScale_48213524(supportServantNameLabel, maxWidth, 0.0, 0LL);
}