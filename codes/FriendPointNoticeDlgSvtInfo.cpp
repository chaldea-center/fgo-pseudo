void __fastcall FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A504C9 & 1) == 0 )
  {
    sub_1B863B8(&FriendPointNoticeDlgSvtInfo_TypeInfo, v1);
    byte_4A504C9 = 1;
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
    sub_1B86614(0LL, method);
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
  void *Name; // x0
  __int64 v38; // x1
  UserServantCollectionMaster_o *v39; // x25
  UserServantEntity_o *v40; // x23
  bool v41; // w28
  int32_t Rarity; // w29
  Il2CppObject *v43; // x26
  int32_t v44; // w25
  UILabel_o *supportServantNameLabel; // x24
  System_String_o *v46; // x25
  Il2CppObject *v47; // x26
  Il2CppObject *ClassName; // x0
  UILabel_o *v49; // x24
  System_String_o *v50; // x27
  Il2CppObject *v51; // x25
  Il2CppObject *v52; // x0
  UILabel_o *v53; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  IconLabelInfo_o *v55; // x24
  bool v56; // w8
  int32_t lv; // w20
  ServantLimitEntity_o *v59; // [xsp+50h] [xbp-80h] BYREF
  UserServantCollectionEntity_o *v60; // [xsp+58h] [xbp-78h] BYREF
  int32_t data; // [xsp+64h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A504C7 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1B863B8(&DataManager_TypeInfo, v12);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_1B863B8(&FriendPointNoticeDlgSvtInfo_TypeInfo, v15);
    sub_1B863B8(&IconLabelInfo_TypeInfo, v16);
    sub_1B863B8(&LocalizationManager_TypeInfo, v17);
    sub_1B863B8(&NetworkManager_TypeInfo, v18);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B863B8(&StringLiteral_1397/*"3"*/, v20);
    sub_1B863B8(&StringLiteral_1336/*"2"*/, v21);
    sub_1B863B8(&StringLiteral_6878/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, v22);
    sub_1B863B8(&StringLiteral_25305/*"４"*/, v23);
    sub_1B863B8(&StringLiteral_25304/*"３"*/, v24);
    sub_1B863B8(&StringLiteral_25302/*"１"*/, v25);
    sub_1B863B8(&StringLiteral_1415/*"4"*/, v26);
    sub_1B863B8(&StringLiteral_25306/*"５"*/, v27);
    sub_1B863B8(&StringLiteral_6877/*"GET_FRIEND_POINT_SERVANT_NAME"*/, v28);
    sub_1B863B8(&StringLiteral_25303/*"２"*/, v29);
    sub_1B863B8(&StringLiteral_1191/*"1"*/, v30);
    sub_1B863B8(&StringLiteral_1432/*"5"*/, v31);
    byte_4A504C7 = 1;
  }
  entity = 0LL;
  data = 0;
  v59 = 0LL;
  v60 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
  v34 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v35 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v36 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Name = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_60;
  if ( !Master_object )
    goto LABEL_67;
  v39 = (UserServantCollectionMaster_o *)Name;
  Name = (void *)DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   &entity,
                   svtId,
                   (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Name & 1) == 0 )
    goto LABEL_60;
  if ( !v33 )
    goto LABEL_67;
  Name = DataMasterBase_object__object__long___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
           usrSvtId,
           (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v40 = (UserServantEntity_o *)Name;
  v41 = usrSvtId < 1 || Name == 0LL;
  if ( usrSvtId < 1 || Name == 0LL )
  {
    if ( !v35 )
      goto LABEL_67;
    Rarity = ServantExceedMaster__GetRarity((ServantExceedMaster_o *)v35, svtId, 0LL);
    data = Rarity;
    if ( Rarity )
      goto LABEL_12;
LABEL_33:
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Name = LocalizationManager__Get((System_String_o *)StringLiteral_6878/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( !entity )
      goto LABEL_67;
    v46 = (System_String_o *)Name;
    Name = ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0, 0LL);
    if ( !entity )
      goto LABEL_67;
    v47 = (Il2CppObject *)Name;
    ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
    Name = System_String__Format_61686468(v46, v47, ClassName, 0LL);
    if ( !supportServantNameLabel )
      goto LABEL_67;
    UILabel__set_text(supportServantNameLabel, (System_String_o *)Name, 0LL);
    goto LABEL_46;
  }
  Name = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Name, 0LL, 0LL);
  if ( !Name )
    goto LABEL_67;
  data = *((_DWORD *)Name + 6);
  Rarity = *((_DWORD *)Name + 10);
  if ( !data )
    goto LABEL_33;
LABEL_12:
  Name = System_Int32__ToString((int32_t)&data, 0LL);
  if ( !Name )
    goto LABEL_67;
  Name = System_String__Replace_61691724(
           (System_String_o *)Name,
           (System_String_o *)StringLiteral_1191/*"1"*/,
           (System_String_o *)StringLiteral_25302/*"１"*/,
           0LL);
  if ( !Name )
    goto LABEL_67;
  Name = System_String__Replace_61691724(
           (System_String_o *)Name,
           (System_String_o *)StringLiteral_1336/*"2"*/,
           (System_String_o *)StringLiteral_25303/*"２"*/,
           0LL);
  if ( !Name )
    goto LABEL_67;
  Name = System_String__Replace_61691724(
           (System_String_o *)Name,
           (System_String_o *)StringLiteral_1397/*"3"*/,
           (System_String_o *)StringLiteral_25304/*"３"*/,
           0LL);
  if ( !Name )
    goto LABEL_67;
  Name = System_String__Replace_61691724(
           (System_String_o *)Name,
           (System_String_o *)StringLiteral_1415/*"4"*/,
           (System_String_o *)StringLiteral_25305/*"４"*/,
           0LL);
  if ( !Name )
    goto LABEL_67;
  v43 = (Il2CppObject *)System_String__Replace_61691724(
                          (System_String_o *)Name,
                          (System_String_o *)StringLiteral_1432/*"5"*/,
                          (System_String_o *)StringLiteral_25306/*"５"*/,
                          0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v38);
    byte_4A48C25 = 1;
  }
  Name = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Name = NetworkManager_TypeInfo;
  }
  if ( !v39 )
    goto LABEL_67;
  Name = (void *)UserServantCollectionMaster__TryGetEntity(
                   v39,
                   &v60,
                   *(_QWORD *)(*((_QWORD *)Name + 23) + 64LL),
                   svtId,
                   0LL);
  if ( ((unsigned __int8)Name & 1) != 0 )
  {
    if ( !v60 )
      goto LABEL_67;
    if ( !v36 )
      goto LABEL_67;
    Name = (void *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                     (ServantLimitImageMaster_o *)v36,
                     svtId,
                     v60->fields.maxLimitCount,
                     0LL);
    if ( !v60 )
      goto LABEL_67;
    v44 = (_DWORD)Name == v60->fields.maxLimitCount ? -1 : (int)Name;
  }
  else
  {
    v44 = -1;
  }
  v49 = this->fields.supportServantNameLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Name = LocalizationManager__Get((System_String_o *)StringLiteral_6877/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
  if ( !entity
    || (v50 = (System_String_o *)Name, Name = ServantEntity__getName((ServantEntity_o *)entity, v44, -1, 0, 0LL),
                                       !entity)
    || (v51 = (Il2CppObject *)Name,
        v52 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL),
        Name = System_String__Format_61686536(v50, v43, v51, v52, 0LL),
        !v49) )
  {
LABEL_67:
    sub_1B86614(Name, v38);
  }
  UILabel__set_text(v49, (System_String_o *)Name, 0LL);
LABEL_46:
  v53 = this->fields.supportServantNameLabel;
  Name = FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  if ( !v53 )
    goto LABEL_67;
  UILabel__SetCondensedScale_48026468(
    v53,
    FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0LL, 0LL) )
    goto LABEL_60;
  v55 = (IconLabelInfo_o *)sub_1B86604(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v55, 0LL);
  if ( v41 )
  {
    if ( entity )
    {
      if ( v34 )
      {
        v56 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v34, &v59, svtId, 0, 0LL);
        Name = 0LL;
        if ( !v56 )
          return (char)Name;
        if ( v59 )
        {
          if ( v55 )
          {
            IconLabelInfo__Set_39094644(v55, 2, 1, v59->fields.lvMax, 0, 0, 0, 0, 0, 0LL);
            Name = this->fields.supportServantFaceIcon;
            if ( Name )
            {
              ServantFaceIconComponent__Set_39178220(
                (ServantFaceIconComponent_o *)Name,
                svtId,
                0,
                0,
                0,
                v55,
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
  lv = v40->fields.lv;
  Name = (void *)UserServantEntity__getLevelMax(v40, 0LL);
  if ( !v55 )
    goto LABEL_67;
  IconLabelInfo__Set_39094644(v55, 2, lv, (int32_t)Name, 0, 0, 0, 0, 0, 0LL);
  Name = this->fields.supportServantFaceIcon;
  if ( !Name )
    goto LABEL_67;
  ServantFaceIconComponent__Set_39176788((ServantFaceIconComponent_o *)Name, usrSvtId, v55, 0LL, 0LL);
LABEL_65:
  Name = this->fields.supportServantSubLabel;
  if ( !Name )
    goto LABEL_67;
  UIIconLabel__Set_39193520((UIIconLabel_o *)Name, 36, data, 0, 0, 0LL, 0, 0, 0, Rarity, 0LL);
  LOBYTE(Name) = 1;
  return (char)Name;
}


void __fastcall FriendPointNoticeDlgSvtInfo__SetServantNameCondensedScale(
        FriendPointNoticeDlgSvtInfo_o *this,
        float maxWidth,
        const MethodInfo *method)
{
  FriendPointNoticeDlgSvtInfo_c *v5; // x0
  UILabel_o *supportServantNameLabel; // x0

  if ( (byte_4A504C8 & 1) == 0 )
  {
    sub_1B863B8(&FriendPointNoticeDlgSvtInfo_TypeInfo, method);
    byte_4A504C8 = 1;
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
    sub_1B86614(0LL, method);
  UILabel__SetCondensedScale_48026468(supportServantNameLabel, maxWidth, 0.0, 0LL);
}