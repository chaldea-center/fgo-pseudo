void FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  if ( (byte_593ADEF & 1) == 0 )
  {
    sub_21FFC50(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    byte_593ADEF = 1;
  }
  LODWORD(FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH) = (struct FriendPointNoticeDlgSvtInfo_StaticFields)1140457472;
}


void FriendPointNoticeDlgSvtInfo___ctor(FriendPointNoticeDlgSvtInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Vector3_o FriendPointNoticeDlgSvtInfo__GetServantNameCondensedScale(
        FriendPointNoticeDlgSvtInfo_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *supportServantNameLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  supportServantNameLabel = (UnityEngine_Component_o *)this->fields.supportServantNameLabel;
  if ( !supportServantNameLabel )
    sub_21FFECC(0, method);
  gameObject = UnityEngine_Component__get_gameObject(supportServantNameLabel, 0);
  return GameObjectExtensions__GetLocalScale(gameObject, 0);
}


// local variable allocation has failed, the output may be wrong!
bool FriendPointNoticeDlgSvtInfo__Set(
        FriendPointNoticeDlgSvtInfo_o *this,
        int32_t svtId,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *Master_object; // x27
  Il2CppObject *v9; // x23
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x26
  Il2CppObject *v12; // x24
  void *OverwriteStatus; // x0
  __int64 v14; // x1
  UserServantCollectionMaster_o *v15; // x25
  UserServantEntity_o *v16; // x23
  bool v17; // zf
  bool v18; // w28
  int32_t Rarity; // w0
  int32_t v20; // w29
  _DWORD *v21; // x8
  Il2CppObject *v22; // x26
  int32_t v23; // w25
  UILabel_o *v24; // x24
  System_String_o *v25; // x25
  Il2CppObject *v26; // x26
  Il2CppObject *v27; // x0
  UILabel_o *supportServantNameLabel; // x24
  System_String_o *v29; // x27
  Il2CppObject *v30; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v32; // x24
  __int64 v33; // x1
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  IconLabelInfo_o *v35; // x24
  bool v36; // w8
  int32_t lv; // w20
  ServantLimitEntity_o *v39; // [xsp+60h] [xbp-80h] BYREF
  UserServantCollectionEntity_o *v40; // [xsp+68h] [xbp-78h] BYREF
  int32_t data; // [xsp+74h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_593ADED & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1454/*"3"*/);
    sub_21FFC50(&StringLiteral_1393/*"2"*/);
    sub_21FFC50(&StringLiteral_7235/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/);
    sub_21FFC50(&StringLiteral_26929/*"４"*/);
    sub_21FFC50(&StringLiteral_26928/*"３"*/);
    sub_21FFC50(&StringLiteral_26926/*"１"*/);
    sub_21FFC50(&StringLiteral_1479/*"4"*/);
    sub_21FFC50(&StringLiteral_26930/*"５"*/);
    sub_21FFC50(&StringLiteral_7234/*"GET_FRIEND_POINT_SERVANT_NAME"*/);
    sub_21FFC50(&StringLiteral_26927/*"２"*/);
    sub_21FFC50(&StringLiteral_1248/*"1"*/);
    sub_21FFC50(&StringLiteral_1496/*"5"*/);
    byte_593ADED = 1;
  }
  entity = 0;
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  data = 0;
  v39 = 0;
  v40 = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  OverwriteStatus = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_68;
  if ( !Master_object )
    goto LABEL_75;
  v15 = (UserServantCollectionMaster_o *)OverwriteStatus;
  OverwriteStatus = (void *)DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              &entity,
                              svtId,
                              (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)OverwriteStatus & 1) == 0 )
    goto LABEL_68;
  if ( !v9 )
    goto LABEL_75;
  OverwriteStatus = DataMasterBase_object__object__long___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v9,
                      usrSvtId,
                      (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v16 = (UserServantEntity_o *)OverwriteStatus;
  v17 = usrSvtId < 1 || OverwriteStatus == 0;
  v18 = v17;
  if ( v17 )
  {
    if ( !v11 )
      goto LABEL_75;
    Rarity = ServantExceedMaster__GetRarity((ServantExceedMaster_o *)v11, svtId, 0);
    v20 = Rarity;
  }
  else
  {
    OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)OverwriteStatus, 0, 0);
    if ( !OverwriteStatus )
      goto LABEL_75;
    v21 = OverwriteStatus;
    Rarity = *((_DWORD *)OverwriteStatus + 6);
    v20 = v21[10];
  }
  data = Rarity;
  if ( Rarity )
  {
    OverwriteStatus = System_Int32__ToString((int32_t)&data, 0);
    if ( !OverwriteStatus )
      goto LABEL_75;
    OverwriteStatus = System_String__Replace_75490096(
                        (System_String_o *)OverwriteStatus,
                        (System_String_o *)StringLiteral_1248/*"1"*/,
                        (System_String_o *)StringLiteral_26926/*"１"*/,
                        0);
    if ( !OverwriteStatus )
      goto LABEL_75;
    OverwriteStatus = System_String__Replace_75490096(
                        (System_String_o *)OverwriteStatus,
                        (System_String_o *)StringLiteral_1393/*"2"*/,
                        (System_String_o *)StringLiteral_26927/*"２"*/,
                        0);
    if ( !OverwriteStatus )
      goto LABEL_75;
    OverwriteStatus = System_String__Replace_75490096(
                        (System_String_o *)OverwriteStatus,
                        (System_String_o *)StringLiteral_1454/*"3"*/,
                        (System_String_o *)StringLiteral_26928/*"３"*/,
                        0);
    if ( !OverwriteStatus )
      goto LABEL_75;
    OverwriteStatus = System_String__Replace_75490096(
                        (System_String_o *)OverwriteStatus,
                        (System_String_o *)StringLiteral_1479/*"4"*/,
                        (System_String_o *)StringLiteral_26929/*"４"*/,
                        0);
    if ( !OverwriteStatus )
      goto LABEL_75;
    v22 = (Il2CppObject *)System_String__Replace_75490096(
                            (System_String_o *)OverwriteStatus,
                            (System_String_o *)StringLiteral_1496/*"5"*/,
                            (System_String_o *)StringLiteral_26930/*"５"*/,
                            0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    OverwriteStatus = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
      OverwriteStatus = NetworkManager_TypeInfo;
    }
    if ( !v15 )
      goto LABEL_75;
    OverwriteStatus = (void *)UserServantCollectionMaster__TryGetEntity(
                                v15,
                                &v40,
                                *(_QWORD *)(*((_QWORD *)OverwriteStatus + 23) + 64LL),
                                svtId,
                                0);
    if ( ((unsigned __int8)OverwriteStatus & 1) != 0 )
    {
      if ( !v40 )
        goto LABEL_75;
      if ( !v12 )
        goto LABEL_75;
      OverwriteStatus = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                  (ServantLimitImageMaster_o *)v12,
                                  svtId,
                                  v40->fields.maxLimitCount,
                                  0);
      if ( !v40 )
        goto LABEL_75;
      v23 = (_DWORD)OverwriteStatus == v40->fields.maxLimitCount ? -1 : (int)OverwriteStatus;
    }
    else
    {
      v23 = -1;
    }
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
    OverwriteStatus = LocalizationManager__Get((System_String_o *)StringLiteral_7234/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0);
    if ( !entity
      || (v29 = (System_String_o *)OverwriteStatus,
          OverwriteStatus = ServantEntity__getName((ServantEntity_o *)entity, v23, -1, 0, 0, 0),
          !entity)
      || (v30 = (Il2CppObject *)OverwriteStatus,
          ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0),
          OverwriteStatus = System_String__Format_75484644(v29, v22, v30, ClassName, 0),
          !supportServantNameLabel) )
    {
LABEL_75:
      sub_21FFECC(OverwriteStatus, v14);
    }
    UILabel__set_text(supportServantNameLabel, (System_String_o *)OverwriteStatus, 0);
  }
  else
  {
    v24 = this->fields.supportServantNameLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
    OverwriteStatus = LocalizationManager__Get((System_String_o *)StringLiteral_7235/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0);
    if ( !entity )
      goto LABEL_75;
    v25 = (System_String_o *)OverwriteStatus;
    OverwriteStatus = ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0, 0, 0);
    if ( !entity )
      goto LABEL_75;
    v26 = (Il2CppObject *)OverwriteStatus;
    v27 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
    OverwriteStatus = System_String__Format_75484576(v25, v26, v27, 0);
    if ( !v24 )
      goto LABEL_75;
    UILabel__set_text(v24, (System_String_o *)OverwriteStatus, 0);
  }
  v32 = this->fields.supportServantNameLabel;
  OverwriteStatus = FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( !*(&FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo, v14);
  if ( !v32 )
    goto LABEL_75;
  UILabel__SetCondensedScale_56386440(
    v32,
    FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0.0,
    0);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0, 0) )
  {
LABEL_68:
    LOBYTE(OverwriteStatus) = 0;
    return (char)OverwriteStatus;
  }
  v35 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v35, 0);
  if ( v18 )
  {
    if ( entity )
    {
      if ( v10 )
      {
        v36 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v10, &v39, svtId, 0, 0);
        OverwriteStatus = 0;
        if ( !v36 )
          return (char)OverwriteStatus;
        if ( v39 )
        {
          if ( v35 )
          {
            IconLabelInfo__Set_47932852(v35, 2, 1, v39->fields.lvMax, 0, 0, 0, 0, 0, 0);
            OverwriteStatus = this->fields.supportServantFaceIcon;
            if ( OverwriteStatus )
            {
              ServantFaceIconComponent__Set_48021296(
                (ServantFaceIconComponent_o *)OverwriteStatus,
                svtId,
                0,
                0,
                0,
                v35,
                0,
                2,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0);
              goto LABEL_73;
            }
          }
        }
      }
      goto LABEL_75;
    }
    goto LABEL_68;
  }
  lv = v16->fields.lv;
  OverwriteStatus = (void *)UserServantEntity__getLevelMax(v16, 0);
  if ( !v35 )
    goto LABEL_75;
  IconLabelInfo__Set_47932852(v35, 2, lv, (int32_t)OverwriteStatus, 0, 0, 0, 0, 0, 0);
  OverwriteStatus = this->fields.supportServantFaceIcon;
  if ( !OverwriteStatus )
    goto LABEL_75;
  ServantFaceIconComponent__Set_48018012((ServantFaceIconComponent_o *)OverwriteStatus, usrSvtId, v35, 0, 0);
LABEL_73:
  OverwriteStatus = this->fields.supportServantSubLabel;
  if ( !OverwriteStatus )
    goto LABEL_75;
  UIIconLabel__Set_48040364((UIIconLabel_o *)OverwriteStatus, 36, data, 0, 0, 0, 0, 0, 0, v20, 0);
  LOBYTE(OverwriteStatus) = 1;
  return (char)OverwriteStatus;
}


void FriendPointNoticeDlgSvtInfo__SetServantNameCondensedScale(
        FriendPointNoticeDlgSvtInfo_o *this,
        float maxWidth,
        const MethodInfo *method)
{
  FriendPointNoticeDlgSvtInfo_c *v5; // x0
  UILabel_o *supportServantNameLabel; // x0

  if ( (byte_593ADEE & 1) == 0 )
  {
    sub_21FFC50(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    byte_593ADEE = 1;
  }
  if ( maxWidth <= 0.0 )
  {
    v5 = FriendPointNoticeDlgSvtInfo_TypeInfo;
    if ( !*(&FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo, method);
      v5 = FriendPointNoticeDlgSvtInfo_TypeInfo;
    }
    maxWidth = v5->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH;
  }
  supportServantNameLabel = this->fields.supportServantNameLabel;
  if ( !supportServantNameLabel )
    sub_21FFECC(0, method);
  UILabel__SetCondensedScale_56386440(supportServantNameLabel, maxWidth, 0.0, 0);
}