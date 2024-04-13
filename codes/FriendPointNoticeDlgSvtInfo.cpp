void __fastcall FriendPointNoticeDlgSvtInfo___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB457 & 1) == 0 )
  {
    sub_B5D5C4(&FriendPointNoticeDlgSvtInfo_TypeInfo, v1, v2, v3);
    byte_42EB457 = 1;
  }
  LODWORD(FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH) = (struct FriendPointNoticeDlgSvtInfo_StaticFields)1140457472;
}


void __fastcall FriendPointNoticeDlgSvtInfo___ctor(FriendPointNoticeDlgSvtInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall FriendPointNoticeDlgSvtInfo__Set(
        FriendPointNoticeDlgSvtInfo_o *this,
        int32_t svtId,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  int64_t v4; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x27
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v83; // x23
  ServantLimitMaster_o *v84; // x22
  ServantExceedMaster_o *v85; // x26
  ServantLimitImageMaster_o *v86; // x24
  int64_t UserId; // x0
  __int64 v88; // x1
  UserServantCollectionMaster_o *v89; // x25
  UserServantEntity_o *v90; // x23
  bool v91; // w27
  int32_t Rarity; // w0
  Il2CppObject *v93; // x26
  ServantLimitMaster_o *v94; // x21
  UserServantEntity_o *v95; // x22
  int32_t v96; // w25
  struct UILabel_o **p_supportServantNameLabel; // x19
  UILabel_o *v98; // x24
  System_String_o *v99; // x25
  Il2CppObject *v100; // x26
  Il2CppObject *v101; // x0
  UILabel_o *supportServantNameLabel; // x24
  bool v103; // w23
  System_String_o *v104; // x27
  Il2CppObject *v105; // x25
  Il2CppObject *ClassName; // x0
  UILabel_o *v107; // x24
  UnityEngine_Object_o *supportServantFaceIcon; // x24
  IconLabelInfo_o *v109; // x24
  bool v110; // w8
  int32_t lv; // w20
  int64_t v113; // [xsp+48h] [xbp-78h]
  ServantLimitEntity_o *v114; // [xsp+50h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *v115; // [xsp+58h] [xbp-68h] BYREF
  int32_t v116; // [xsp+64h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  v4 = usrSvtId;
  if ( (byte_42EB456 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantExceedMaster___, svtId, usrSvtId, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v28, v29, v30);
    sub_B5D5C4(&FriendPointNoticeDlgSvtInfo_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&NetworkManager_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_1174/*"3"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_1124/*"2"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_6952/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_24284/*"４"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_24283/*"３"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_24281/*"１"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_1192/*"4"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_24285/*"５"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_6951/*"GET_FRIEND_POINT_SERVANT_NAME"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_24282/*"２"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_1026/*"1"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_1207/*"5"*/, v79, v80, v81);
    byte_42EB456 = 1;
  }
  entity = 0LL;
  v116 = 0;
  v114 = 0LL;
  v115 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v83 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  v84 = (ServantLimitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v85 = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v86 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  UserId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( svtId < 1 )
    goto LABEL_62;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  v89 = (UserServantCollectionMaster_o *)UserId;
  UserId = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             Master_WarQuestSelectionMaster,
             &entity,
             svtId,
             (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (UserId & 1) == 0 )
    goto LABEL_62;
  if ( !v83 )
    goto LABEL_69;
  UserId = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                      v83,
                      v4,
                      (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v90 = (UserServantEntity_o *)UserId;
  v91 = v4 < 1 || UserId == 0;
  if ( v4 < 1 || UserId == 0 )
  {
    if ( !v85 )
      goto LABEL_69;
    Rarity = ServantExceedMaster__GetRarity(v85, svtId, 0LL);
  }
  else
  {
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)UserId, 0LL);
  }
  v116 = Rarity;
  if ( Rarity )
  {
    UserId = (int64_t)System_Int32__ToString((int32_t)&v116, 0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_44585024(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1026/*"1"*/,
                        (System_String_o *)StringLiteral_24281/*"１"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_44585024(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1124/*"2"*/,
                        (System_String_o *)StringLiteral_24282/*"２"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_44585024(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1174/*"3"*/,
                        (System_String_o *)StringLiteral_24283/*"３"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    UserId = (int64_t)System_String__Replace_44585024(
                        (System_String_o *)UserId,
                        (System_String_o *)StringLiteral_1192/*"4"*/,
                        (System_String_o *)StringLiteral_24284/*"４"*/,
                        0LL);
    if ( !UserId )
      goto LABEL_69;
    v93 = (Il2CppObject *)System_String__Replace_44585024(
                            (System_String_o *)UserId,
                            (System_String_o *)StringLiteral_1207/*"5"*/,
                            (System_String_o *)StringLiteral_24285/*"５"*/,
                            0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v89 )
      goto LABEL_69;
    UserId = UserServantCollectionMaster__TryGetEntity(v89, &v115, UserId, svtId, 0LL);
    v113 = v4;
    if ( (UserId & 1) != 0 )
    {
      if ( !v115 )
        goto LABEL_69;
      if ( !v86 )
        goto LABEL_69;
      v94 = v84;
      UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v86, svtId, v115->fields.maxLimitCount, 0LL);
      if ( !v115 )
        goto LABEL_69;
      v95 = v90;
      v96 = (_DWORD)UserId == v115->fields.maxLimitCount ? -1 : UserId;
    }
    else
    {
      v94 = v84;
      v95 = v90;
      v96 = -1;
    }
    p_supportServantNameLabel = &this->fields.supportServantNameLabel;
    supportServantNameLabel = this->fields.supportServantNameLabel;
    v103 = v91;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6951/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
    if ( !entity
      || (v104 = (System_String_o *)UserId,
          UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, v96, -1, 0LL),
          !entity)
      || (v105 = (Il2CppObject *)UserId,
          ClassName = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL),
          UserId = (int64_t)System_String__Format_44578852(v104, v93, v105, ClassName, 0LL),
          !supportServantNameLabel) )
    {
LABEL_69:
      sub_B5D69C(UserId, v88);
    }
    UILabel__set_text(supportServantNameLabel, (System_String_o *)UserId, 0LL);
    v91 = v103;
    v90 = v95;
    v84 = v94;
    v4 = v113;
  }
  else
  {
    p_supportServantNameLabel = &this->fields.supportServantNameLabel;
    v98 = this->fields.supportServantNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6952/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
    if ( !entity )
      goto LABEL_69;
    v99 = (System_String_o *)UserId;
    UserId = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
    if ( !entity )
      goto LABEL_69;
    v100 = (Il2CppObject *)UserId;
    v101 = (Il2CppObject *)ServantEntity__getClassName((ServantEntity_o *)entity, 0LL);
    UserId = (int64_t)System_String__Format_44573324(v99, v100, v101, 0LL);
    if ( !v98 )
      goto LABEL_69;
    UILabel__set_text(v98, (System_String_o *)UserId, 0LL);
  }
  v107 = *p_supportServantNameLabel;
  UserId = (int64_t)FriendPointNoticeDlgSvtInfo_TypeInfo;
  if ( (BYTE3(FriendPointNoticeDlgSvtInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendPointNoticeDlgSvtInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgSvtInfo_TypeInfo);
  }
  if ( !v107 )
    goto LABEL_69;
  UILabel__SetCondensedScale_41950620(
    v107,
    FriendPointNoticeDlgSvtInfo_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH,
    0LL);
  supportServantFaceIcon = (UnityEngine_Object_o *)this->fields.supportServantFaceIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(supportServantFaceIcon, 0LL, 0LL) )
  {
LABEL_62:
    LOBYTE(UserId) = 0;
    return UserId;
  }
  v109 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v109, 0LL);
  if ( v91 )
  {
    if ( entity )
    {
      if ( v84 )
      {
        v110 = ServantLimitMaster__TryGetEntity(v84, &v114, svtId, 0, 0LL);
        UserId = 0LL;
        if ( !v110 )
          return UserId;
        if ( v114 )
        {
          if ( v109 )
          {
            IconLabelInfo__Set_28463004(v109, 2, 1, v114->fields.lvMax, 0, 0, 0, 0, 0LL);
            UserId = (int64_t)this->fields.supportServantFaceIcon;
            if ( UserId )
            {
              ServantFaceIconComponent__Set_30846632(
                (ServantFaceIconComponent_o *)UserId,
                svtId,
                0,
                0,
                0,
                v109,
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
              goto LABEL_67;
            }
          }
        }
      }
      goto LABEL_69;
    }
    goto LABEL_62;
  }
  lv = v90->fields.lv;
  UserId = UserServantEntity__getLevelMax(v90, 0LL);
  if ( !v109 )
    goto LABEL_69;
  IconLabelInfo__Set_28463004(v109, 2, lv, UserId, 0, 0, 0, 0, 0LL);
  UserId = (int64_t)this->fields.supportServantFaceIcon;
  if ( !UserId )
    goto LABEL_69;
  ServantFaceIconComponent__Set_30849484((ServantFaceIconComponent_o *)UserId, v4, v109, 0LL, 0LL);
LABEL_67:
  UserId = (int64_t)this->fields.supportServantSubLabel;
  if ( !UserId )
    goto LABEL_69;
  UIIconLabel__Set_41886452((UIIconLabel_o *)UserId, 36, v116, 0, 0, 0LL, 0, 0, 0, 0LL);
  LOBYTE(UserId) = 1;
  return UserId;
}