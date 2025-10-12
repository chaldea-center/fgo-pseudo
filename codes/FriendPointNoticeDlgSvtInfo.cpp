void FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4C3A2F3 & 1) == 0 )
  {
    sub_1C32C20(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    byte_4C3A2F3 = 1;
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
    sub_1C32E7C(0);
  gameObject = UnityEngine_Component__get_gameObject(supportServantNameLabel, 0);
  return GameObjectExtensions__GetLocalScale(gameObject, 0);
}


bool FriendPointNoticeDlgSvtInfo__Set(
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
  void *Name; // x0
  UserServantCollectionMaster_o *v13; // x25
  UserServantEntity_o *v14; // x23
  bool v15; // w28
  int32_t Rarity; // w29
  Il2CppObject *v17; // x26
  int32_t v18; // w25
  UILabel_o *supportServantNameLabel; // x24
  System_String_o *v20; // x25
  Il2CppObject *v21; // x26
  Il2CppObject *ClassName; // x0
  UILabel_o *v23; // x24
  System_String_o *v24; // x27
  Il2CppObject *v25; // x25
  Il2CppObject *v26; // x0
  UILabel_o *v27; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  IconLabelInfo_o *v29; // x24
  bool v30; // w8
  int32_t lv; // w20
  ServantLimitEntity_o *v33; // [xsp+60h] [xbp-80h] BYREF
  UserServantCollectionEntity_o *v34; // [xsp+68h] [xbp-78h] BYREF
  int32_t data; // [xsp+74h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4C3A2F1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    sub_1C32C20(&IconLabelInfo_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1379/*"3"*/);
    sub_1C32C20(&StringLiteral_1318/*"2"*/);
    sub_1C32C20(&StringLiteral_6953/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/);
    sub_1C32C20(&StringLiteral_25576/*"４"*/);
    sub_1C32C20(&StringLiteral_25575/*"３"*/);
    sub_1C32C20(&StringLiteral_25573/*"１"*/);
    sub_1C32C20(&StringLiteral_1404/*"4"*/);
    sub_1C32C20(&StringLiteral_25577/*"５"*/);
    sub_1C32C20(&StringLiteral_6952/*"GET_FRIEND_POINT_SERVANT_NAME"*/);
    sub_1C32C20(&StringLiteral_25574/*"２"*/);
    sub_1C32C20(&StringLiteral_1172/*"1"*/);
    sub_1C32C20(&StringLiteral_1421/*"5"*/);
    byte_4C3A2F1 = 1;
  }
  entity = 0;
  data = 0;
  v33 = 0;
  v34 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Name = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_60;
  if ( !Master_object )
    goto LABEL_67;
  v13 = (UserServantCollectionMaster_o *)Name;
  Name = (void *)DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   &entity,
                   svtId,
                   (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Name & 1) == 0 )
    goto LABEL_60;
  if ( !v8 )
    goto LABEL_67;
  Name = DataMasterBase_object__object__long___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
           usrSvtId,
           (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v14 = (UserServantEntity_o *)Name;
  v15 = usrSvtId < 1 || Name == 0;
  if ( usrSvtId < 1 || Name == 0 )
  {
    if ( !v10 )
      goto LABEL_67;
    Rarity = ServantExceedMaster__GetRarity((ServantExceedMaster_o *)v10, svtId, 0);
    data = Rarity;
    if ( Rarity )
      goto LABEL_12;
LABEL_33:
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_6953/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0);
    if ( !entity )
      goto LABEL_67;
    v20 = (System_String_o *)Name;
    Name = ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0, 0);
    if ( !entity )
      goto LABEL_67;
    v21 = (Il2CppObject *)Name;
    ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
    Name = System_String__Format_63559836(v20, v21, ClassName, 0);
    if ( !supportServantNameLabel )
      goto LABEL_67;
    UILabel__set_text(supportServantNameLabel, (System_String_o *)Name, 0);
    goto LABEL_46;
  }
  Name = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Name, 0, 0);
  if ( !Name )
    goto LABEL_67;
  data = *((_DWORD *)Name + 6);
  Rarity = *((_DWORD *)Name + 10);
  if ( !data )
    goto LABEL_33;
LABEL_12:
  Name = System_Int32__ToString((int32_t)&data, 0);
  if ( !Name )
    goto LABEL_67;
  Name = System_String__Replace_63565092(
           (System_String_o *)Name,
           (System_String_o *)StringLiteral_1172/*"1"*/,
           (System_String_o *)StringLiteral_25573/*"１"*/,
           0);
  if ( !Name )
    goto LABEL_67;
  Name = System_String__Replace_63565092(
           (System_String_o *)Name,
           (System_String_o *)StringLiteral_1318/*"2"*/,
           (System_String_o *)StringLiteral_25574/*"２"*/,
           0);
  if ( !Name )
    goto LABEL_67;
  Name = System_String__Replace_63565092(
           (System_String_o *)Name,
           (System_String_o *)StringLiteral_1379/*"3"*/,
           (System_String_o *)StringLiteral_25575/*"３"*/,
           0);
  if ( !Name )
    goto LABEL_67;
  Name = System_String__Replace_63565092(
           (System_String_o *)Name,
           (System_String_o *)StringLiteral_1404/*"4"*/,
           (System_String_o *)StringLiteral_25576/*"４"*/,
           0);
  if ( !Name )
    goto LABEL_67;
  v17 = (Il2CppObject *)System_String__Replace_63565092(
                          (System_String_o *)Name,
                          (System_String_o *)StringLiteral_1421/*"5"*/,
                          (System_String_o *)StringLiteral_25577/*"５"*/,
                          0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Name = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Name = NetworkManager_TypeInfo;
  }
  if ( !v13 )
    goto LABEL_67;
  Name = (void *)UserServantCollectionMaster__TryGetEntity(
                   v13,
                   &v34,
                   *(_QWORD *)(*((_QWORD *)Name + 23) + 64LL),
                   svtId,
                   0);
  if ( ((unsigned __int8)Name & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_67;
    if ( !v11 )
      goto LABEL_67;
    Name = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                     (ServantLimitImageMaster_o *)v11,
                     svtId,
                     v34->fields.maxLimitCount,
                     0);
    if ( !v34 )
      goto LABEL_67;
    v18 = (_DWORD)Name == v34->fields.maxLimitCount ? -1 : (int)Name;
  }
  else
  {
    v18 = -1;
  }
  v23 = this->fields.supportServantNameLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_6952/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0);
  if ( !entity
    || (v24 = (System_String_o *)Name, Name = ServantEntity__getName((ServantEntity_o *)entity, v18, -1, 0, 0), !entity)
    || (v25 = (Il2CppObject *)Name,
        v26 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0),
        Name = System_String__Format_63559904(v24, v17, v25, v26, 0),
        !v23) )
  {
LABEL_67:
    sub_1C32E7C(Name);
  }
  UILabel__set_text(v23, (System_String_o *)Name, 0);
LABEL_46:
  v27 = this->fields.supportServantNameLabel;
  Name = FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  if ( !v27 )
    goto LABEL_67;
  UILabel__SetCondensedScale_49482884(
    v27,
    FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0.0,
    0);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0, 0) )
    goto LABEL_60;
  v29 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v29, 0);
  if ( v15 )
  {
    if ( entity )
    {
      if ( v9 )
      {
        v30 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v9, &v33, svtId, 0, 0);
        Name = 0;
        if ( !v30 )
          return (char)Name;
        if ( v33 )
        {
          if ( v29 )
          {
            IconLabelInfo__Set_40818388(v29, 2, 1, v33->fields.lvMax, 0, 0, 0, 0, 0, 0);
            Name = this->fields.supportServantFaceIcon;
            if ( Name )
            {
              ServantFaceIconComponent__Set_40907144(
                (ServantFaceIconComponent_o *)Name,
                svtId,
                0,
                0,
                0,
                v29,
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
                0);
              goto LABEL_65;
            }
          }
        }
      }
      goto LABEL_67;
    }
LABEL_60:
    LOBYTE(Name) = 0;
    return (char)Name;
  }
  lv = v14->fields.lv;
  Name = (void *)UserServantEntity__getLevelMax(v14, 0);
  if ( !v29 )
    goto LABEL_67;
  IconLabelInfo__Set_40818388(v29, 2, lv, (int32_t)Name, 0, 0, 0, 0, 0, 0);
  Name = this->fields.supportServantFaceIcon;
  if ( !Name )
    goto LABEL_67;
  ServantFaceIconComponent__Set_40905640((ServantFaceIconComponent_o *)Name, usrSvtId, v29, 0, 0);
LABEL_65:
  Name = this->fields.supportServantSubLabel;
  if ( !Name )
    goto LABEL_67;
  UIIconLabel__Set_41010828((UIIconLabel_o *)Name, 36, data, 0, 0, 0, 0, 0, 0, Rarity, 0);
  LOBYTE(Name) = 1;
  return (char)Name;
}


void FriendPointNoticeDlgSvtInfo__SetServantNameCondensedScale(
        FriendPointNoticeDlgSvtInfo_o *this,
        float maxWidth,
        const MethodInfo *method)
{
  FriendPointNoticeDlgSvtInfo_c *v5; // x0
  UILabel_o *supportServantNameLabel; // x0

  if ( (byte_4C3A2F2 & 1) == 0 )
  {
    sub_1C32C20(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    byte_4C3A2F2 = 1;
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
    sub_1C32E7C(0);
  UILabel__SetCondensedScale_49482884(supportServantNameLabel, maxWidth, 0.0, 0);
}