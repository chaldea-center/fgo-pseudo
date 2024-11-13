void __fastcall MstHaveItemInfoComponent___ctor(MstHaveItemInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstHaveItemInfoComponent___setInfoTxt_b__4_0(
        MstHaveItemInfoComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *itemNumTxt; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_4B116D4 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
    byte_4B116D4 = 1;
  }
  itemNumTxt = this->fields.itemNumTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !itemNumTxt )
    sub_1BCAA3C(UnitInfo, v7);
  UILabel__set_text(itemNumTxt, UnitInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstHaveItemInfoComponent__setInfoTxt(
        MstHaveItemInfoComponent_o *this,
        int32_t imgId,
        UserGameEntity_o *info,
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
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  UILabel_o *itemNumTxt; // x21
  System_String_o *v44; // x22
  int32_t CommandCodeFrameMax; // w8
  int32_t Count; // w23
  __int64 v47; // x1
  System_String_o *v48; // x22
  System_Int32_c *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  Il2CppObject *v52; // x23
  BalanceConfig_c *v53; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x0
  int32_t mana; // w20
  UILabel_o *v57; // x21
  int32_t stone; // w20
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Action_int__o *v63; // x21
  __int64 v64; // x1
  Il2CppObject *v65; // x0
  int32_t v66; // [xsp+8h] [xbp-48h] BYREF
  int32_t qp; // [xsp+Ch] [xbp-44h] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B116D3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, *(_QWORD *)&imgId, info);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_20661/*"img_servant"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_20615/*"img_qp"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_4016/*"CURRENT_QP_UNIT"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_20524/*"img_fp"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_4014/*"CURRENT_FRIEND_POINT_UNIT"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_20520/*"img_craftessence"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_20488/*"img_cc"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_20693/*"img_sq"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_20660/*"img_rp"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_20582/*"img_mp"*/, v39, v40);
    byte_4B116D3 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( (unsigned int)(imgId - 8008) >= 2 )
  {
    if ( imgId == 8014 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_69;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( !Instance )
        goto LABEL_69;
      Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
      goto LABEL_27;
    }
    if ( imgId <= 18 )
    {
      switch ( imgId )
      {
        case 5:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20615/*"img_qp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4016/*"CURRENT_QP_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_69;
          v48 = (System_String_o *)Instance;
          qp = info->fields.qp;
          v49 = int_TypeInfo;
          goto LABEL_68;
        case 6:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20693/*"img_sq"*/, 0LL);
          if ( !info )
            goto LABEL_69;
          v57 = this->fields.itemNumTxt;
          stone = info->fields.stone;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&imgId);
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(stone, 0LL);
          if ( !v57 )
            goto LABEL_69;
          UILabel__set_text(v57, (System_String_o *)Instance, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v63 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v60, v61, v62);
          System_Action_int____ctor(
            v63,
            (Il2CppObject *)this,
            Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__,
            0LL);
          StoneCountRefreshComponent__AttachToGameObject(gameObject, v63, 1, 0LL);
          goto LABEL_44;
        case 7:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20582/*"img_mp"*/, 0LL);
          if ( !info )
            goto LABEL_69;
          itemNumTxt = this->fields.itemNumTxt;
          mana = info->fields.mana;
          goto LABEL_59;
        case 8:
        case 9:
        case 10:
        case 11:
          goto LABEL_44;
        case 12:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20524/*"img_fp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4014/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_69;
          v48 = (System_String_o *)Instance;
          qp = UserGameEntity__GetFriendPoint(info, 0LL);
          v49 = int_TypeInfo;
LABEL_68:
          v65 = (Il2CppObject *)j_il2cpp_value_box_0(v49, &qp);
          Instance = (DataManager_o *)System_String__Format(v48, v65, 0LL);
          if ( !itemNumTxt )
            goto LABEL_69;
          goto LABEL_43;
        default:
          if ( imgId != 18 )
            goto LABEL_44;
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20660/*"img_rp"*/, 0LL);
          if ( !info )
            goto LABEL_69;
          itemNumTxt = this->fields.itemNumTxt;
          mana = info->fields.rarePri;
LABEL_59:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&imgId);
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(mana, 0LL);
          if ( !itemNumTxt )
            goto LABEL_69;
          goto LABEL_43;
      }
    }
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_69;
    UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  }
  if ( imgId == 8014 )
  {
    Count = 0;
LABEL_27:
    Instance = (DataManager_o *)this->fields.itemNameImg;
    if ( Instance )
    {
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20488/*"img_cc"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
      qp = Count;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
      if ( info )
      {
        v52 = (Il2CppObject *)Instance;
        if ( !byte_4B112D7 )
        {
          sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&imgId, v51);
          byte_4B112D7 = 1;
        }
        v53 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&imgId);
          v53 = BalanceConfig_TypeInfo;
        }
        CommandCodeFrameMax = v53->static_fields->CommandCodeFrameMax;
        goto LABEL_42;
      }
    }
    goto LABEL_69;
  }
  if ( imgId == 8009 )
  {
    Instance = (DataManager_o *)this->fields.itemNameImg;
    if ( Instance )
    {
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20520/*"img_craftessence"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
      qp = servantEquipSum[0];
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
      if ( info )
      {
        CommandCodeFrameMax = info->fields.svtEquipKeep;
        goto LABEL_41;
      }
    }
LABEL_69:
    sub_1BCAA3C(Instance, *(_QWORD *)&imgId);
  }
  if ( imgId != 8008 )
    goto LABEL_44;
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_69;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20661/*"img_servant"*/, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  qp = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  if ( !info )
    goto LABEL_69;
  CommandCodeFrameMax = info->fields.svtKeep;
LABEL_41:
  v52 = (Il2CppObject *)Instance;
LABEL_42:
  v66 = CommandCodeFrameMax;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
  Instance = (DataManager_o *)System_String__Format_62415592(v44, v52, v55, 0LL);
  if ( !itemNumTxt )
    goto LABEL_69;
LABEL_43:
  UILabel__set_text(itemNumTxt, (System_String_o *)Instance, 0LL);
LABEL_44:
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_69;
  ((void (__fastcall *)(DataManager_o *, void *, UserGameEntity_o *, const MethodInfo *))Instance->klass[2]._1.typeMetadataHandle)(
    Instance,
    Instance->klass[2]._1.interopData,
    info,
    method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstHaveItemInfoComponent__setItemInfo(
        MstHaveItemInfoComponent_o *this,
        int32_t itemImgId,
        UserGameEntity_o *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UISprite_o *itemIcon; // x22
  __int64 v10; // x1
  UILabel_o *itemNumTxt; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4B116D2 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&itemImgId, data);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B116D2 = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&itemImgId);
  AtlasManager__SetItem(itemIcon, itemImgId, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !itemNumTxt )
    sub_1BCAA3C(0LL, v10);
  UILabel__set_text(itemNumTxt, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  MstHaveItemInfoComponent__setInfoTxt(this, itemImgId, data, v12);
}