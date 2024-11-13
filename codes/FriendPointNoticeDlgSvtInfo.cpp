void __fastcall FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B181DF & 1) == 0 )
  {
    sub_1BCA7E0(&FriendPointNoticeDlgSvtInfo_TypeInfo, v1, v2);
    byte_4B181DF = 1;
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  Il2CppObject *Master_object; // x27
  Il2CppObject *v58; // x23
  Il2CppObject *v59; // x22
  Il2CppObject *v60; // x26
  Il2CppObject *v61; // x24
  int64_t UserId; // x0
  __int64 v63; // x1
  UserServantCollectionMaster_o *v64; // x25
  UserServantEntity_o *v65; // x23
  bool v66; // w28
  int32_t Rarity; // w0
  __int64 v68; // x1
  __int64 v69; // x1
  Il2CppObject *v70; // x26
  int32_t v71; // w25
  UILabel_o *supportServantNameLabel; // x24
  System_String_o *v73; // x25
  Il2CppObject *v74; // x26
  Il2CppObject *v75; // x0
  System_String_o *v76; // x27
  Il2CppObject *v77; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v79; // x24
  __int64 v80; // x1
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  IconLabelInfo_o *v85; // x24
  bool v86; // w8
  int32_t lv; // w20
  ServantLimitEntity_o *v89; // [xsp+48h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *v90; // [xsp+50h] [xbp-70h] BYREF
  int32_t data; // [xsp+5Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4B181DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&svtId, usrSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&FriendPointNoticeDlgSvtInfo_TypeInfo, v23, v24);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_1471/*"3"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1409/*"2"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_7036/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_25718/*"４"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_25717/*"３"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_25715/*"１"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_1489/*"4"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_25719/*"５"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_7035/*"GET_FRIEND_POINT_SERVANT_NAME"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_25716/*"２"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_1505/*"5"*/, v55, v56);
    byte_4B181DD = 1;
  }
  entity = 0LL;
  data = 0;
  v89 = 0LL;
  v90 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v58 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  v59 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v60 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  UserId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_55;
  if ( !Master_object )
    goto LABEL_62;
  v64 = (UserServantCollectionMaster_o *)UserId;
  UserId = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             svtId,
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (UserId & 1) == 0 )
    goto LABEL_55;
  if ( !v58 )
    goto LABEL_62;
  UserId = (int64_t)DataMasterBase_object__object__long___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v58,
                      usrSvtId,
                      (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v65 = (UserServantEntity_o *)UserId;
  v66 = usrSvtId < 1 || UserId == 0;
  if ( v66 )
  {
    if ( !v60 )
      goto LABEL_62;
    Rarity = ServantExceedMaster__GetRarity((ServantExceedMaster_o *)v60, svtId, 0LL);
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
    UserId = (int64_t)System_String__Replace_62420848(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1262/*"1"*/,
                        (System_String_o *)StringLiteral_25715/*"１"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_62420848(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1409/*"2"*/,
                        (System_String_o *)StringLiteral_25716/*"２"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_62420848(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1471/*"3"*/,
                        (System_String_o *)StringLiteral_25717/*"３"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    UserId = (int64_t)System_String__Replace_62420848(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1489/*"4"*/,
                        (System_String_o *)StringLiteral_25718/*"４"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_62;
    v70 = (Il2CppObject *)System_String__Replace_62420848(
                            (System_String_o *)UserId,
                            (System_String_o *)StringLiteral_1505/*"5"*/,
                            (System_String_o *)StringLiteral_25719/*"５"*/,
                            0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v69);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v64 )
      goto LABEL_62;
    UserId = UserServantCollectionMaster__TryGetEntity(v64, &v90, UserId, svtId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v90 )
        goto LABEL_62;
      if ( !v61 )
        goto LABEL_62;
      UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                 (ServantLimitImageMaster_o *)v61,
                 svtId,
                 v90->fields.maxLimitCount,
                 0LL);
      if ( !v90 )
        goto LABEL_62;
      v71 = (_DWORD)UserId == v90->fields.maxLimitCount ? -1 : UserId;
    }
    else
    {
      v71 = -1;
    }
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63);
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7035/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
    if ( !entity
      || (v76 = (System_String_o *)UserId,
          UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, v71, -1, 0LL),
          !entity)
      || (v77 = (Il2CppObject *)UserId,
          ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL),
          UserId = (int64_t)System_String__Format_62415660(v76, v70, v77, ClassName, 0LL),
          !supportServantNameLabel) )
    {
LABEL_62:
      sub_1BCAA3C(UserId, v63);
    }
  }
  else
  {
    supportServantNameLabel = this->fields.supportServantNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7036/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( !entity )
      goto LABEL_62;
    v73 = (System_String_o *)UserId;
    UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
    if ( !entity )
      goto LABEL_62;
    v74 = (Il2CppObject *)UserId;
    v75 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
    UserId = (int64_t)System_String__Format_62415592(v73, v74, v75, 0LL);
    if ( !supportServantNameLabel )
      goto LABEL_62;
  }
  UILabel__set_text(supportServantNameLabel, (System_String_o *)UserId, 0LL);
  v79 = this->fields.supportServantNameLabel;
  UserId = (int64_t)FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo, v63);
  if ( !v79 )
    goto LABEL_62;
  UILabel__SetCondensedScale_47600808(
    v79,
    FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0LL);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0LL, 0LL) )
  {
LABEL_55:
    LOBYTE(UserId) = 0;
    return UserId;
  }
  v85 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v82, v83, v84);
  IconLabelInfo___ctor(v85, 0LL);
  if ( v66 )
  {
    if ( entity )
    {
      if ( v59 )
      {
        v86 = ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v59, &v89, svtId, 0, 0LL);
        UserId = 0LL;
        if ( !v86 )
          return UserId;
        if ( v89 )
        {
          if ( v85 )
          {
            IconLabelInfo__Set_38850420(v85, 2, 1, v89->fields.lvMax, 0, 0, 0, 0, 0LL);
            UserId = (int64_t)this->fields.supportServantFaceIcon;
            if ( UserId )
            {
              ServantFaceIconComponent__Set_38928428(
                (ServantFaceIconComponent_o *)UserId,
                svtId,
                0,
                0,
                0,
                v85,
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
  lv = v65->fields.lv;
  UserId = UserServantEntity__getLevelMax(v65, 0LL);
  if ( !v85 )
    goto LABEL_62;
  IconLabelInfo__Set_38850420(v85, 2, lv, UserId, 0, 0, 0, 0, 0LL);
  UserId = (int64_t)this->fields.supportServantFaceIcon;
  if ( !UserId )
    goto LABEL_62;
  ServantFaceIconComponent__Set_38931044((ServantFaceIconComponent_o *)UserId, usrSvtId, v85, 0LL, 0LL);
LABEL_60:
  UserId = (int64_t)this->fields.supportServantSubLabel;
  if ( !UserId )
    goto LABEL_62;
  UIIconLabel__Set_38947284((UIIconLabel_o *)UserId, 36, data, 0, 0, 0LL, 0, 0, 0, 0LL);
  LOBYTE(UserId) = 1;
  return UserId;
}


void __fastcall FriendPointNoticeDlgSvtInfo__SetServantNameCondensedScale(
        FriendPointNoticeDlgSvtInfo_o *this,
        float maxWidth,
        const MethodInfo *method)
{
  __int64 v3; // x2
  FriendPointNoticeDlgSvtInfo_c *v6; // x0
  UILabel_o *supportServantNameLabel; // x0

  if ( (byte_4B181DE & 1) == 0 )
  {
    sub_1BCA7E0(&FriendPointNoticeDlgSvtInfo_TypeInfo, method, v3);
    byte_4B181DE = 1;
  }
  if ( maxWidth <= 0.0 )
  {
    v6 = FriendPointNoticeDlgSvtInfo_TypeInfo;
    if ( !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo, method);
      v6 = FriendPointNoticeDlgSvtInfo_TypeInfo;
    }
    maxWidth = v6->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH;
  }
  supportServantNameLabel = this->fields.supportServantNameLabel;
  if ( !supportServantNameLabel )
    sub_1BCAA3C(0LL, method);
  UILabel__SetCondensedScale_47600808(supportServantNameLabel, maxWidth, 0LL);
}