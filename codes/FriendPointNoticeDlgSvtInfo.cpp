void FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4D2EFF6 & 1) == 0 )
  {
    sub_1C94098(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    byte_4D2EFF6 = 1;
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
    sub_1C942F0(0, method);
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
  __int64 v13; // x1
  UserServantCollectionMaster_o *v14; // x25
  UserServantEntity_o *v15; // x23
  bool v16; // w28
  int32_t Rarity; // w29
  Il2CppObject *v18; // x26
  int32_t v19; // w25
  UILabel_o *supportServantNameLabel; // x24
  System_String_o *v21; // x25
  Il2CppObject *v22; // x26
  Il2CppObject *ClassName; // x0
  UILabel_o *v24; // x24
  System_String_o *v25; // x27
  Il2CppObject *v26; // x25
  Il2CppObject *v27; // x0
  UILabel_o *v28; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  IconLabelInfo_o *v30; // x24
  bool v31; // w8
  int32_t lv; // w20
  ServantLimitEntity_o *v34; // [xsp+60h] [xbp-80h] BYREF
  UserServantCollectionEntity_o *v35; // [xsp+68h] [xbp-78h] BYREF
  int32_t data; // [xsp+74h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4D2EFF4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    sub_1C94098(&IconLabelInfo_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1371/*"3"*/);
    sub_1C94098(&StringLiteral_1310/*"2"*/);
    sub_1C94098(&StringLiteral_6964/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/);
    sub_1C94098(&StringLiteral_25834/*"４"*/);
    sub_1C94098(&StringLiteral_25833/*"３"*/);
    sub_1C94098(&StringLiteral_25831/*"１"*/);
    sub_1C94098(&StringLiteral_1397/*"4"*/);
    sub_1C94098(&StringLiteral_25835/*"５"*/);
    sub_1C94098(&StringLiteral_6963/*"GET_FRIEND_POINT_SERVANT_NAME"*/);
    sub_1C94098(&StringLiteral_25832/*"２"*/);
    sub_1C94098(&StringLiteral_1165/*"1"*/);
    sub_1C94098(&StringLiteral_1414/*"5"*/);
    byte_4D2EFF4 = 1;
  }
  entity = 0;
  data = 0;
  v34 = 0;
  v35 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Name = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_60;
  if ( !Master_object )
    goto LABEL_67;
  v14 = (UserServantCollectionMaster_o *)Name;
  Name = (void *)DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   &entity,
                   svtId,
                   (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Name & 1) == 0 )
    goto LABEL_60;
  if ( !v8 )
    goto LABEL_67;
  Name = DataMasterBase_object__object__long___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
           usrSvtId,
           (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v15 = (UserServantEntity_o *)Name;
  v16 = usrSvtId < 1 || Name == 0;
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
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_6964/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0);
    if ( !entity )
      goto LABEL_67;
    v21 = (System_String_o *)Name;
    Name = ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0, 0);
    if ( !entity )
      goto LABEL_67;
    v22 = (Il2CppObject *)Name;
    ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0);
    Name = System_String__Format_64459052(v21, v22, ClassName, 0);
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
  Name = System_String__Replace_64464308(
           (System_String_o *)Name,
           (System_String_o *)StringLiteral_1165/*"1"*/,
           (System_String_o *)StringLiteral_25831/*"１"*/,
           0);
  if ( !Name )
    goto LABEL_67;
  Name = System_String__Replace_64464308(
           (System_String_o *)Name,
           (System_String_o *)StringLiteral_1310/*"2"*/,
           (System_String_o *)StringLiteral_25832/*"２"*/,
           0);
  if ( !Name )
    goto LABEL_67;
  Name = System_String__Replace_64464308(
           (System_String_o *)Name,
           (System_String_o *)StringLiteral_1371/*"3"*/,
           (System_String_o *)StringLiteral_25833/*"３"*/,
           0);
  if ( !Name )
    goto LABEL_67;
  Name = System_String__Replace_64464308(
           (System_String_o *)Name,
           (System_String_o *)StringLiteral_1397/*"4"*/,
           (System_String_o *)StringLiteral_25834/*"４"*/,
           0);
  if ( !Name )
    goto LABEL_67;
  v18 = (Il2CppObject *)System_String__Replace_64464308(
                          (System_String_o *)Name,
                          (System_String_o *)StringLiteral_1414/*"5"*/,
                          (System_String_o *)StringLiteral_25835/*"５"*/,
                          0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  Name = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Name = NetworkManager_TypeInfo;
  }
  if ( !v14 )
    goto LABEL_67;
  Name = (void *)UserServantCollectionMaster__TryGetEntity(
                   v14,
                   &v35,
                   *(_QWORD *)(*((_QWORD *)Name + 23) + 64LL),
                   svtId,
                   0);
  if ( ((unsigned __int8)Name & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_67;
    if ( !v11 )
      goto LABEL_67;
    Name = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                     (ServantLimitImageMaster_o *)v11,
                     svtId,
                     v35->fields.maxLimitCount,
                     0);
    if ( !v35 )
      goto LABEL_67;
    v19 = (_DWORD)Name == v35->fields.maxLimitCount ? -1 : (int)Name;
  }
  else
  {
    v19 = -1;
  }
  v24 = this->fields.supportServantNameLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_6963/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0);
  if ( !entity
    || (v25 = (System_String_o *)Name, Name = ServantEntity__getName((ServantEntity_o *)entity, v19, -1, 0, 0), !entity)
    || (v26 = (Il2CppObject *)Name,
        v27 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0),
        Name = System_String__Format_64459120(v25, v18, v26, v27, 0),
        !v24) )
  {
LABEL_67:
    sub_1C942F0(Name, v13);
  }
  UILabel__set_text(v24, (System_String_o *)Name, 0);
LABEL_46:
  v28 = this->fields.supportServantNameLabel;
  Name = FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  if ( !v28 )
    goto LABEL_67;
  UILabel__SetCondensedScale_50219732(
    v28,
    FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0.0,
    0);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0, 0) )
    goto LABEL_60;
  v30 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v30, 0);
  if ( v16 )
  {
    if ( entity )
    {
      if ( v9 )
      {
        v31 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v9, &v34, svtId, 0, 0);
        Name = 0;
        if ( !v31 )
          return (char)Name;
        if ( v34 )
        {
          if ( v30 )
          {
            IconLabelInfo__Set_41670428(v30, 2, 1, v34->fields.lvMax, 0, 0, 0, 0, 0, 0);
            Name = this->fields.supportServantFaceIcon;
            if ( Name )
            {
              ServantFaceIconComponent__Set_41846260(
                (ServantFaceIconComponent_o *)Name,
                svtId,
                0,
                0,
                0,
                v30,
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
  lv = v15->fields.lv;
  Name = (void *)UserServantEntity__getLevelMax(v15, 0);
  if ( !v30 )
    goto LABEL_67;
  IconLabelInfo__Set_41670428(v30, 2, lv, (int32_t)Name, 0, 0, 0, 0, 0, 0);
  Name = this->fields.supportServantFaceIcon;
  if ( !Name )
    goto LABEL_67;
  ServantFaceIconComponent__Set_41844756((ServantFaceIconComponent_o *)Name, usrSvtId, v30, 0, 0);
LABEL_65:
  Name = this->fields.supportServantSubLabel;
  if ( !Name )
    goto LABEL_67;
  UIIconLabel__Set_41867060((UIIconLabel_o *)Name, 36, data, 0, 0, 0, 0, 0, 0, Rarity, 0);
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

  if ( (byte_4D2EFF5 & 1) == 0 )
  {
    sub_1C94098(&FriendPointNoticeDlgSvtInfo_TypeInfo);
    byte_4D2EFF5 = 1;
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
    sub_1C942F0(0, method);
  UILabel__SetCondensedScale_50219732(supportServantNameLabel, maxWidth, 0.0, 0);
}