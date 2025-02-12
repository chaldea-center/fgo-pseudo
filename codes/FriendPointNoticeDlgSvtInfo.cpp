void __fastcall FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB675D & 1) == 0 )
  {
    sub_1C13D24(&FriendPointNoticeDlgSvtInfo_TypeInfo, v1);
    byte_4BB675D = 1;
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
    sub_1C13F80(0LL, method);
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
  UserServantCollectionMaster_o *ServantLimitCountSealAfter; // x0
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
  ServantLimitEntity_o *v58; // [xsp+50h] [xbp-80h] BYREF
  UserServantCollectionEntity_o *v59; // [xsp+58h] [xbp-78h] BYREF
  int32_t data; // [xsp+64h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4BB675B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1C13D24(&DataManager_TypeInfo, v12);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_1C13D24(&FriendPointNoticeDlgSvtInfo_TypeInfo, v15);
    sub_1C13D24(&IconLabelInfo_TypeInfo, v16);
    sub_1C13D24(&LocalizationManager_TypeInfo, v17);
    sub_1C13D24(&NetworkManager_TypeInfo, v18);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v19);
    sub_1C13D24(&StringLiteral_1474/*"2pC0bIYM"*/, v20);
    sub_1C13D24(&StringLiteral_1412/*"1st Attack"*/, v21);
    sub_1C13D24(&StringLiteral_7076/*"GET_FRIEND_POINT_NO_DATA"*/, v22);
    sub_1C13D24(&StringLiteral_25869/*"􏿽"*/, v23);
    sub_1C13D24(&StringLiteral_25868/*"􀀀"*/, v24);
    sub_1C13D24(&StringLiteral_25866/*"󰀀"*/, v25);
    sub_1C13D24(&StringLiteral_1492/*"3rd Attack"*/, v26);
    sub_1C13D24(&StringLiteral_25870/*"�"*/, v27);
    sub_1C13D24(&StringLiteral_7075/*"GET_FRIEND_POINT_NOW_POINT"*/, v28);
    sub_1C13D24(&StringLiteral_25867/*"󿿽"*/, v29);
    sub_1C13D24(&StringLiteral_1265/*"0x{0:X}"*/, v30);
    sub_1C13D24(&StringLiteral_1509/*"460"*/, v31);
    byte_4BB675B = 1;
  }
  entity = 0LL;
  data = 0;
  v58 = 0LL;
  v59 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
  v33 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserServantMaster___);
  v34 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v35 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v36 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_59;
  if ( !Master_object )
    goto LABEL_66;
  v39 = ServantLimitCountSealAfter;
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                  &entity,
                                                                  svtId,
                                                                  (const MethodInfo_3238670 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)ServantLimitCountSealAfter & 1) == 0 )
    goto LABEL_59;
  if ( !v33 )
    goto LABEL_66;
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)DataMasterBase_object__object__long___GetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                                                                  usrSvtId,
                                                                  (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v40 = (UserServantEntity_o *)ServantLimitCountSealAfter;
  v41 = usrSvtId < 1 || ServantLimitCountSealAfter == 0LL;
  if ( v41 )
  {
    if ( !v35 )
      goto LABEL_66;
    Rarity = ServantExceedMaster__GetRarity((ServantExceedMaster_o *)v35, svtId, 0LL);
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
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_String__Replace_62987572(
                                                                    (System_String_o *)ServantLimitCountSealAfter,
                                                                    (System_String_o *)StringLiteral_1265/*"0x{0:X}"*/,
                                                                    (System_String_o *)StringLiteral_25866/*"󰀀"*/,
                                                                    0LL);
    if ( !ServantLimitCountSealAfter )
      goto LABEL_66;
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_String__Replace_62987572(
                                                                    (System_String_o *)ServantLimitCountSealAfter,
                                                                    (System_String_o *)StringLiteral_1412/*"1st Attack"*/,
                                                                    (System_String_o *)StringLiteral_25867/*"󿿽"*/,
                                                                    0LL);
    if ( !ServantLimitCountSealAfter )
      goto LABEL_66;
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_String__Replace_62987572(
                                                                    (System_String_o *)ServantLimitCountSealAfter,
                                                                    (System_String_o *)StringLiteral_1474/*"2pC0bIYM"*/,
                                                                    (System_String_o *)StringLiteral_25868/*"􀀀"*/,
                                                                    0LL);
    if ( !ServantLimitCountSealAfter )
      goto LABEL_66;
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_String__Replace_62987572(
                                                                    (System_String_o *)ServantLimitCountSealAfter,
                                                                    (System_String_o *)StringLiteral_1492/*"3rd Attack"*/,
                                                                    (System_String_o *)StringLiteral_25869/*"􏿽"*/,
                                                                    0LL);
    if ( !ServantLimitCountSealAfter )
      goto LABEL_66;
    v43 = (Il2CppObject *)System_String__Replace_62987572(
                            (System_String_o *)ServantLimitCountSealAfter,
                            (System_String_o *)StringLiteral_1509/*"460"*/,
                            (System_String_o *)StringLiteral_25870/*"�"*/,
                            0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BAF1E5 )
    {
      sub_1C13D24(&NetworkManager_TypeInfo, v38);
      byte_4BAF1E5 = 1;
    }
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)NetworkManager_TypeInfo;
    }
    if ( !v39 )
      goto LABEL_66;
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)UserServantCollectionMaster__TryGetEntity(
                                                                    v39,
                                                                    &v59,
                                                                    *(_QWORD *)&ServantLimitCountSealAfter[2].fields._MasterName_k__BackingField[2].fields,
                                                                    svtId,
                                                                    0LL);
    if ( ((unsigned __int8)ServantLimitCountSealAfter & 1) != 0 )
    {
      if ( !v59 )
        goto LABEL_66;
      if ( !v36 )
        goto LABEL_66;
      ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                      (ServantLimitImageMaster_o *)v36,
                                                                      svtId,
                                                                      v59->fields.maxLimitCount,
                                                                      0LL);
      if ( !v59 )
        goto LABEL_66;
      v44 = (_DWORD)ServantLimitCountSealAfter == v59->fields.maxLimitCount ? -1 : (int)ServantLimitCountSealAfter;
    }
    else
    {
      v44 = -1;
    }
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_7075/*"GET_FRIEND_POINT_NOW_POINT"*/,
                                                                    0LL);
    if ( !entity
      || (v49 = (System_String_o *)ServantLimitCountSealAfter,
          ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)ServantEntity__getName(
                                                                          (ServantEntity_o *)entity,
                                                                          v44,
                                                                          -1,
                                                                          0LL),
          !entity)
      || (v50 = (Il2CppObject *)ServantLimitCountSealAfter,
          ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL),
          ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_String__Format_62982384(
                                                                          v49,
                                                                          v43,
                                                                          v50,
                                                                          ClassName,
                                                                          0LL),
          !supportServantNameLabel) )
    {
LABEL_66:
      sub_1C13F80(ServantLimitCountSealAfter, v38);
    }
  }
  else
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_7076/*"GET_FRIEND_POINT_NO_DATA"*/,
                                                                    0LL);
    if ( !entity )
      goto LABEL_66;
    v46 = (System_String_o *)ServantLimitCountSealAfter;
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)ServantEntity__getName(
                                                                    (ServantEntity_o *)entity,
                                                                    -1,
                                                                    -1,
                                                                    0LL);
    if ( !entity )
      goto LABEL_66;
    v47 = (Il2CppObject *)ServantLimitCountSealAfter;
    v48 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
    ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)System_String__Format_62982316(v46, v47, v48, 0LL);
    if ( !supportServantNameLabel )
      goto LABEL_66;
  }
  UILabel__set_text(supportServantNameLabel, (System_String_o *)ServantLimitCountSealAfter, 0LL);
  v52 = this->fields.supportServantNameLabel;
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  if ( !v52 )
    goto LABEL_66;
  UILabel__SetCondensedScale_48079996(
    v52,
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
  v54 = (IconLabelInfo_o *)sub_1C13F70(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v54, 0LL);
  if ( v41 )
  {
    if ( entity )
    {
      if ( v34 )
      {
        v55 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v34, &v58, svtId, 0, 0LL);
        ServantLimitCountSealAfter = 0LL;
        if ( !v55 )
          return (char)ServantLimitCountSealAfter;
        if ( v58 )
        {
          if ( v54 )
          {
            IconLabelInfo__Set_39281744(v54, 2, 1, v58->fields.lvMax, 0, 0, 0, 0, 0LL);
            ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)this->fields.supportServantFaceIcon;
            if ( ServantLimitCountSealAfter )
            {
              ServantFaceIconComponent__Set_39361048(
                (ServantFaceIconComponent_o *)ServantLimitCountSealAfter,
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
  lv = v40->fields.lv;
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)UserServantEntity__getLevelMax(v40, 0LL);
  if ( !v54 )
    goto LABEL_66;
  IconLabelInfo__Set_39281744(v54, 2, lv, (int32_t)ServantLimitCountSealAfter, 0, 0, 0, 0, 0LL);
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)this->fields.supportServantFaceIcon;
  if ( !ServantLimitCountSealAfter )
    goto LABEL_66;
  ServantFaceIconComponent__Set_39363772(
    (ServantFaceIconComponent_o *)ServantLimitCountSealAfter,
    usrSvtId,
    v54,
    0LL,
    0LL);
LABEL_64:
  ServantLimitCountSealAfter = (UserServantCollectionMaster_o *)this->fields.supportServantSubLabel;
  if ( !ServantLimitCountSealAfter )
    goto LABEL_66;
  UIIconLabel__Set_39380320((UIIconLabel_o *)ServantLimitCountSealAfter, 36, data, 0, 0, 0LL, 0, 0, 0, 0LL);
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

  if ( (byte_4BB675C & 1) == 0 )
  {
    sub_1C13D24(&FriendPointNoticeDlgSvtInfo_TypeInfo, method);
    byte_4BB675C = 1;
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
    sub_1C13F80(0LL, method);
  UILabel__SetCondensedScale_48079996(supportServantNameLabel, maxWidth, 0.0, 0LL);
}