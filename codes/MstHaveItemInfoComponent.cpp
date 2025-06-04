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

  if ( (byte_4AFD1E8 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4AFD1E8 = 1;
  }
  itemNumTxt = this->fields.itemNumTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !itemNumTxt )
    sub_1BC3264(UnitInfo, v7);
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
  DataManager_o *Instance; // x0
  UILabel_o *itemNumTxt; // x21
  System_String_o *v27; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int32_t CommandCodeFrameMax; // w8
  int32_t Count; // w23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_String_o *v39; // x22
  void *v40; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x23
  BalanceConfig_c *v45; // x0
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  int32_t mana; // w20
  UILabel_o *v51; // x21
  int32_t stone; // w20
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v54; // x21
  Il2CppObject *v55; // x0
  int64_t qp; // [xsp+0h] [xbp-50h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-44h] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4AFD1E7 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, *(_QWORD *)&imgId);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_1BC3008(&int_TypeInfo, v9);
    sub_1BC3008(&long_TypeInfo, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BC3008(&StringLiteral_20350/*"img_servant"*/, v14);
    sub_1BC3008(&StringLiteral_20296/*"img_qp"*/, v15);
    sub_1BC3008(&StringLiteral_3898/*"CURRENT_QP_UNIT"*/, v16);
    sub_1BC3008(&StringLiteral_20194/*"img_fp"*/, v17);
    sub_1BC3008(&StringLiteral_3896/*"CURRENT_FRIEND_POINT_UNIT"*/, v18);
    sub_1BC3008(&StringLiteral_20188/*"img_craftessence"*/, v19);
    sub_1BC3008(&StringLiteral_12360/*"SUM_INFO"*/, v20);
    sub_1BC3008(&StringLiteral_20147/*"img_cc"*/, v21);
    sub_1BC3008(&StringLiteral_20384/*"img_sq"*/, v22);
    sub_1BC3008(&StringLiteral_20347/*"img_rp"*/, v23);
    sub_1BC3008(&StringLiteral_20260/*"img_mp"*/, v24);
    byte_4AFD1E7 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( (unsigned int)(imgId - 8008) >= 2 )
  {
    if ( imgId == 8014 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_69;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20296/*"img_qp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3898/*"CURRENT_QP_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_69;
          v39 = (System_String_o *)Instance;
          qp = info->fields.qp;
          v40 = long_TypeInfo;
          goto LABEL_68;
        case 6:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20384/*"img_sq"*/, 0LL);
          if ( !info )
            goto LABEL_69;
          v51 = this->fields.itemNumTxt;
          stone = info->fields.stone;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(stone, 0LL);
          if ( !v51 )
            goto LABEL_69;
          UILabel__set_text(v51, (System_String_o *)Instance, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v54 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
          System_Action_int____ctor(
            v54,
            (Il2CppObject *)this,
            Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__,
            0LL);
          StoneCountRefreshComponent__AttachToGameObject(gameObject, v54, 1, 0LL);
          goto LABEL_44;
        case 7:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20260/*"img_mp"*/, 0LL);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20194/*"img_fp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3896/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_69;
          v39 = (System_String_o *)Instance;
          LODWORD(qp) = UserGameEntity__GetFriendPoint(info, 0LL);
          v40 = int_TypeInfo;
LABEL_68:
          v55 = (Il2CppObject *)j_il2cpp_value_box_0(v40, &qp, v36, v37, v38);
          Instance = (DataManager_o *)System_String__Format(v39, v55, 0LL);
          if ( !itemNumTxt )
            goto LABEL_69;
          goto LABEL_43;
        default:
          if ( imgId != 18 )
            goto LABEL_44;
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20347/*"img_rp"*/, 0LL);
          if ( !info )
            goto LABEL_69;
          itemNumTxt = this->fields.itemNumTxt;
          mana = info->fields.rarePri;
LABEL_59:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(mana, 0LL);
          if ( !itemNumTxt )
            goto LABEL_69;
          goto LABEL_43;
      }
    }
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20147/*"img_cc"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SUM_INFO"*/, 0LL);
      LODWORD(qp) = Count;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v41, v42, v43);
      if ( info )
      {
        v44 = (Il2CppObject *)Instance;
        if ( !byte_4AFC80E )
        {
          sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&imgId);
          byte_4AFC80E = 1;
        }
        v45 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v45 = BalanceConfig_TypeInfo;
        }
        CommandCodeFrameMax = v45->static_fields->CommandCodeFrameMax;
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20188/*"img_craftessence"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SUM_INFO"*/, 0LL);
      LODWORD(qp) = servantEquipSum[0];
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v46, v47, v48);
      if ( info )
      {
        CommandCodeFrameMax = info->fields.svtEquipKeep;
        goto LABEL_41;
      }
    }
LABEL_69:
    sub_1BC3264(Instance, *(_QWORD *)&imgId);
  }
  if ( imgId != 8008 )
    goto LABEL_44;
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_69;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20350/*"img_servant"*/, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SUM_INFO"*/, 0LL);
  LODWORD(qp) = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v28, v29, v30);
  if ( !info )
    goto LABEL_69;
  CommandCodeFrameMax = info->fields.svtKeep;
LABEL_41:
  v44 = (Il2CppObject *)Instance;
LABEL_42:
  v57 = CommandCodeFrameMax;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v31, v32, v33);
  Instance = (DataManager_o *)System_String__Format_62389940(v27, v44, v49, 0LL);
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
  UISprite_o *itemIcon; // x22
  __int64 v9; // x1
  UILabel_o *itemNumTxt; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4AFD1E6 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&itemImgId);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    byte_4AFD1E6 = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemIcon, itemImgId, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !itemNumTxt )
    sub_1BC3264(0LL, v9);
  UILabel__set_text(itemNumTxt, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  MstHaveItemInfoComponent__setInfoTxt(this, itemImgId, data, v11);
}