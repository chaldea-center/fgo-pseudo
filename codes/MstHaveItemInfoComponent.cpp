void MstHaveItemInfoComponent___ctor(MstHaveItemInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void MstHaveItemInfoComponent___setInfoTxt_b__4_0(
        MstHaveItemInfoComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *itemNumTxt; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_4CC247E & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    byte_4CC247E = 1;
  }
  itemNumTxt = this->fields.itemNumTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0);
  if ( !itemNumTxt )
    sub_1C71608(UnitInfo, v7);
  UILabel__set_text(itemNumTxt, UnitInfo, 0);
}


// local variable allocation has failed, the output may be wrong!
void MstHaveItemInfoComponent__setInfoTxt(
        MstHaveItemInfoComponent_o *this,
        int32_t imgId,
        UserGameEntity_o *info,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  UILabel_o *itemNumTxt; // x21
  System_String_o *v9; // x22
  int32_t CommandCodeFrameMax; // w8
  int32_t Count; // w23
  System_String_o *v12; // x22
  void *v13; // x0
  Il2CppObject *v14; // x23
  BalanceConfig_c *v15; // x0
  Il2CppObject *v16; // x0
  int32_t mana; // w20
  UILabel_o *v18; // x21
  int32_t stone; // w20
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v21; // x21
  Il2CppObject *v22; // x0
  int64_t qp; // [xsp+0h] [xbp-50h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CC247D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&long_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_20630/*"img_servant"*/);
    sub_1C713B0(&StringLiteral_20575/*"img_qp"*/);
    sub_1C713B0(&StringLiteral_3932/*"CURRENT_QP_UNIT"*/);
    sub_1C713B0(&StringLiteral_20470/*"img_fp"*/);
    sub_1C713B0(&StringLiteral_3930/*"CURRENT_FRIEND_POINT_UNIT"*/);
    sub_1C713B0(&StringLiteral_20463/*"img_craftessence"*/);
    sub_1C713B0(&StringLiteral_12489/*"SUM_INFO"*/);
    sub_1C713B0(&StringLiteral_20422/*"img_cc"*/);
    sub_1C713B0(&StringLiteral_20664/*"img_sq"*/);
    sub_1C713B0(&StringLiteral_20627/*"img_rp"*/);
    sub_1C713B0(&StringLiteral_20539/*"img_mp"*/);
    byte_4CC247D = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  if ( (unsigned int)(imgId - 8008) >= 2 )
  {
    if ( imgId == 8014 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_69;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( !Instance )
        goto LABEL_69;
      Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20575/*"img_qp"*/, 0);
          itemNumTxt = this->fields.itemNumTxt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3932/*"CURRENT_QP_UNIT"*/, 0);
          if ( !info )
            goto LABEL_69;
          v12 = (System_String_o *)Instance;
          qp = info->fields.qp;
          v13 = long_TypeInfo;
          goto LABEL_68;
        case 6:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20664/*"img_sq"*/, 0);
          if ( !info )
            goto LABEL_69;
          v18 = this->fields.itemNumTxt;
          stone = info->fields.stone;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(stone, 0);
          if ( !v18 )
            goto LABEL_69;
          UILabel__set_text(v18, (System_String_o *)Instance, 0);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v21 = (System_Action_int__o *)sub_1C715FC(System_Action_int__TypeInfo);
          System_Action_int____ctor(v21, (Il2CppObject *)this, Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__, 0);
          StoneCountRefreshComponent__AttachToGameObject(gameObject, v21, 1, 0);
          goto LABEL_44;
        case 7:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20539/*"img_mp"*/, 0);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20470/*"img_fp"*/, 0);
          itemNumTxt = this->fields.itemNumTxt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3930/*"CURRENT_FRIEND_POINT_UNIT"*/, 0);
          if ( !info )
            goto LABEL_69;
          v12 = (System_String_o *)Instance;
          LODWORD(qp) = UserGameEntity__GetFriendPoint(info, 0);
          v13 = int_TypeInfo;
LABEL_68:
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(v13, &qp);
          Instance = (DataManager_o *)System_String__Format(v12, v22, 0);
          if ( !itemNumTxt )
            goto LABEL_69;
          goto LABEL_43;
        default:
          if ( imgId != 18 )
            goto LABEL_44;
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20627/*"img_rp"*/, 0);
          if ( !info )
            goto LABEL_69;
          itemNumTxt = this->fields.itemNumTxt;
          mana = info->fields.rarePri;
LABEL_59:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(mana, 0);
          if ( !itemNumTxt )
            goto LABEL_69;
          goto LABEL_43;
      }
    }
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_69;
    UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  }
  if ( imgId == 8014 )
  {
    Count = 0;
LABEL_27:
    Instance = (DataManager_o *)this->fields.itemNameImg;
    if ( Instance )
    {
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20422/*"img_cc"*/, 0);
      itemNumTxt = this->fields.itemNumTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"SUM_INFO"*/, 0);
      LODWORD(qp) = Count;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
      if ( info )
      {
        v14 = (Il2CppObject *)Instance;
        if ( !byte_4CC16AF )
        {
          sub_1C713B0(&BalanceConfig_TypeInfo);
          byte_4CC16AF = 1;
        }
        v15 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v15 = BalanceConfig_TypeInfo;
        }
        CommandCodeFrameMax = v15->static_fields->CommandCodeFrameMax;
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20463/*"img_craftessence"*/, 0);
      itemNumTxt = this->fields.itemNumTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"SUM_INFO"*/, 0);
      LODWORD(qp) = servantEquipSum[0];
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
      if ( info )
      {
        CommandCodeFrameMax = info->fields.svtEquipKeep;
        goto LABEL_41;
      }
    }
LABEL_69:
    sub_1C71608(Instance, *(_QWORD *)&imgId);
  }
  if ( imgId != 8008 )
    goto LABEL_44;
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_69;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20630/*"img_servant"*/, 0);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"SUM_INFO"*/, 0);
  LODWORD(qp) = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  if ( !info )
    goto LABEL_69;
  CommandCodeFrameMax = info->fields.svtKeep;
LABEL_41:
  v14 = (Il2CppObject *)Instance;
LABEL_42:
  v24 = CommandCodeFrameMax;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  Instance = (DataManager_o *)System_String__Format_64073032(v9, v14, v16, 0);
  if ( !itemNumTxt )
    goto LABEL_69;
LABEL_43:
  UILabel__set_text(itemNumTxt, (System_String_o *)Instance, 0);
LABEL_44:
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_69;
  ((void (__fastcall *)(DataManager_o *, void *, UserGameEntity_o *, const MethodInfo *))Instance->klass[2]._1.parent)(
    Instance,
    Instance->klass[2]._1.generic_class,
    info,
    method);
}


void MstHaveItemInfoComponent__setItemInfo(
        MstHaveItemInfoComponent_o *this,
        int32_t itemImgId,
        UserGameEntity_o *data,
        const MethodInfo *method)
{
  UISprite_o *itemIcon; // x22
  __int64 v8; // x1
  UILabel_o *itemNumTxt; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4CC247C & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC247C = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemIcon, itemImgId, 0);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !itemNumTxt )
    sub_1C71608(0, v8);
  UILabel__set_text(itemNumTxt, (System_String_o *)StringLiteral_1/*""*/, 0);
  MstHaveItemInfoComponent__setInfoTxt(this, itemImgId, data, v10);
}