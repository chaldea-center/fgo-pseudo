void __fastcall FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FE60B & 1) == 0 )
  {
    sub_1B640C8(&FriendPointNoticeDlgSvtInfo_TypeInfo, v1);
    byte_49FE60B = 1;
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
    sub_1B64324(0LL);
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
  UserServantCollectionMaster_o *v38; // x25
  UserServantEntity_o *v39; // x23
  bool v40; // w28
  int32_t Rarity; // w0
  Il2CppObject *v42; // x26
  int32_t v43; // w25
  UILabel_o *supportServantNameLabel; // x24
  System_String_o *v45; // x25
  Il2CppObject *v46; // x26
  Il2CppObject *v47; // x0
  System_String_o *v48; // x27
  Il2CppObject *v49; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v51; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  __int64 v53; // x1
  __int64 v54; // x2
  IconLabelInfo_o *v55; // x24
  bool v56; // w8
  int32_t lv; // w20
  ServantLimitEntity_o *v59; // [xsp+48h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *v60; // [xsp+50h] [xbp-70h] BYREF
  int32_t data; // [xsp+5Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_49FE609 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_1B640C8(&FriendPointNoticeDlgSvtInfo_TypeInfo, v15);
    sub_1B640C8(&IconLabelInfo_TypeInfo, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&NetworkManager_TypeInfo, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_1476/*"3"*/, v20);
    sub_1B640C8(&StringLiteral_1414/*"2"*/, v21);
    sub_1B640C8(&StringLiteral_6885/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, v22);
    sub_1B640C8(&StringLiteral_25361/*"４"*/, v23);
    sub_1B640C8(&StringLiteral_25360/*"３"*/, v24);
    sub_1B640C8(&StringLiteral_25358/*"１"*/, v25);
    sub_1B640C8(&StringLiteral_1494/*"4"*/, v26);
    sub_1B640C8(&StringLiteral_25362/*"５"*/, v27);
    sub_1B640C8(&StringLiteral_6884/*"GET_FRIEND_POINT_SERVANT_NAME"*/, v28);
    sub_1B640C8(&StringLiteral_25359/*"２"*/, v29);
    sub_1B640C8(&StringLiteral_1267/*"1"*/, v30);
    sub_1B640C8(&StringLiteral_1510/*"5"*/, v31);
    byte_49FE609 = 1;
  }
  entity = 0LL;
  data = 0;
  v59 = 0LL;
  v60 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  v34 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v35 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v36 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_55;
  if ( !Master_object )
    goto LABEL_62;
  v38 = (UserServantCollectionMaster_o *)UserId;
  UserId = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             svtId,
             (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (UserId & 1) == 0 )
    goto LABEL_55;
  if ( !v33 )
    goto LABEL_62;
  UserId = (int64_t)DataMasterBase_object__object__long___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                      usrSvtId,
                      (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v39 = (UserServantEntity_o *)UserId;
  v40 = usrSvtId < 1 || UserId == 0;
  if ( v40 )
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
    UserId = (int64_t)System_String__Replace_61395016(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1267/*"1"*/,
                        (System_String_o *)StringLiteral_25358/*"１"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_61395016(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1414/*"2"*/,
                        (System_String_o *)StringLiteral_25359/*"２"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_61395016(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1476/*"3"*/,
                        (System_String_o *)StringLiteral_25360/*"３"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_61395016(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1494/*"4"*/,
                        (System_String_o *)StringLiteral_25361/*"４"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    v42 = (Il2CppObject *)System_String__Replace_61395016(
                            (System_String_o *)UserId,
                            (System_String_o *)StringLiteral_1510/*"5"*/,
                            (System_String_o *)StringLiteral_25362/*"５"*/,
                            0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v38 )
      goto LABEL_62;
    UserId = UserServantCollectionMaster__TryGetEntity(v38, &v60, UserId, svtId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v60 )
        goto LABEL_62;
      if ( !v36 )
        goto LABEL_62;
      UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                 (ServantLimitImageMaster_o *)v36,
                 svtId,
                 v60->fields.maxLimitCount,
                 0LL);
      if ( !v60 )
        goto LABEL_62;
      v43 = (_DWORD)UserId == v60->fields.maxLimitCount ? -1 : UserId;
    }
    else
    {
      v43 = -1;
    }
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6884/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
    if ( !entity
      || (v48 = (System_String_o *)UserId,
          UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, v43, -1, 0LL),
          !entity)
      || (v49 = (Il2CppObject *)UserId,
          ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL),
          UserId = (int64_t)System_String__Format_61389836(v48, v42, v49, ClassName, 0LL),
          !supportServantNameLabel) )
    {
LABEL_62:
      sub_1B64324(UserId);
    }
  }
  else
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6885/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( !entity )
      goto LABEL_62;
    v45 = (System_String_o *)UserId;
    UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
    if ( !entity )
      goto LABEL_62;
    v46 = (Il2CppObject *)UserId;
    v47 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
    UserId = (int64_t)System_String__Format_61389768(v45, v46, v47, 0LL);
    if ( !supportServantNameLabel )
      goto LABEL_62;
  }
  UILabel__set_text(supportServantNameLabel, (System_String_o *)UserId, 0LL);
  v51 = this->fields.supportServantNameLabel;
  UserId = (int64_t)FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  if ( !v51 )
    goto LABEL_62;
  UILabel__SetCondensedScale_46760740(
    v51,
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
  v55 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, v53, v54);
  IconLabelInfo___ctor(v55, 0LL);
  if ( v40 )
  {
    if ( entity )
    {
      if ( v34 )
      {
        v56 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v34, &v59, svtId, 0, 0LL);
        UserId = 0LL;
        if ( !v56 )
          return UserId;
        if ( v59 )
        {
          if ( v55 )
          {
            IconLabelInfo__Set_37825360(v55, 2, 1, v59->fields.lvMax, 0, 0, 0, 0, 0LL);
            UserId = (int64_t)this->fields.supportServantFaceIcon;
            if ( UserId )
            {
              ServantFaceIconComponent__Set_37902064(
                (ServantFaceIconComponent_o *)UserId,
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
  lv = v39->fields.lv;
  UserId = UserServantEntity__getLevelMax(v39, 0LL);
  if ( !v55 )
    goto LABEL_62;
  IconLabelInfo__Set_37825360(v55, 2, lv, UserId, 0, 0, 0, 0, 0LL);
  UserId = (int64_t)this->fields.supportServantFaceIcon;
  if ( !UserId )
    goto LABEL_62;
  ServantFaceIconComponent__Set_37904692((ServantFaceIconComponent_o *)UserId, usrSvtId, v55, 0LL, 0LL);
LABEL_60:
  UserId = (int64_t)this->fields.supportServantSubLabel;
  if ( !UserId )
    goto LABEL_62;
  UIIconLabel__Set_37921148((UIIconLabel_o *)UserId, 36, data, 0, 0, 0LL, 0, 0, 0, 0LL);
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

  if ( (byte_49FE60A & 1) == 0 )
  {
    sub_1B640C8(&FriendPointNoticeDlgSvtInfo_TypeInfo, method);
    byte_49FE60A = 1;
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
    sub_1B64324(0LL);
  UILabel__SetCondensedScale_46760740(supportServantNameLabel, maxWidth, 0LL);
}