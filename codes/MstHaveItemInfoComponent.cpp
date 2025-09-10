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

  if ( (byte_4C223F0 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C223F0 = 1;
  }
  itemNumTxt = this->fields.itemNumTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0);
  if ( !itemNumTxt )
    sub_1C2D6EC(UnitInfo, v7);
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t CommandCodeFrameMax; // w8
  int32_t Count; // w23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_String_o *v21; // x22
  void *v22; // x0
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x23
  BalanceConfig_c *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  int32_t mana; // w20
  UILabel_o *v33; // x21
  int32_t stone; // w20
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v36; // x21
  Il2CppObject *v37; // x0
  int64_t qp; // [xsp+0h] [xbp-50h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C223EF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_20537/*"img_servant"*/);
    sub_1C2D490(&StringLiteral_20482/*"img_qp"*/);
    sub_1C2D490(&StringLiteral_3930/*"CURRENT_QP_UNIT"*/);
    sub_1C2D490(&StringLiteral_20377/*"img_fp"*/);
    sub_1C2D490(&StringLiteral_3928/*"CURRENT_FRIEND_POINT_UNIT"*/);
    sub_1C2D490(&StringLiteral_20370/*"img_craftessence"*/);
    sub_1C2D490(&StringLiteral_12474/*"SUM_INFO"*/);
    sub_1C2D490(&StringLiteral_20329/*"img_cc"*/);
    sub_1C2D490(&StringLiteral_20571/*"img_sq"*/);
    sub_1C2D490(&StringLiteral_20534/*"img_rp"*/);
    sub_1C2D490(&StringLiteral_20446/*"img_mp"*/);
    byte_4C223EF = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  if ( (unsigned int)(imgId - 8008) >= 2 )
  {
    if ( imgId == 8014 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_69;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20482/*"img_qp"*/, 0);
          itemNumTxt = this->fields.itemNumTxt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3930/*"CURRENT_QP_UNIT"*/, 0);
          if ( !info )
            goto LABEL_69;
          v21 = (System_String_o *)Instance;
          qp = info->fields.qp;
          v22 = long_TypeInfo;
          goto LABEL_68;
        case 6:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20571/*"img_sq"*/, 0);
          if ( !info )
            goto LABEL_69;
          v33 = this->fields.itemNumTxt;
          stone = info->fields.stone;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(stone, 0);
          if ( !v33 )
            goto LABEL_69;
          UILabel__set_text(v33, (System_String_o *)Instance, 0);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v36 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
          System_Action_int____ctor(v36, (Il2CppObject *)this, Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__, 0);
          StoneCountRefreshComponent__AttachToGameObject(gameObject, v36, 1, 0);
          goto LABEL_44;
        case 7:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20446/*"img_mp"*/, 0);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20377/*"img_fp"*/, 0);
          itemNumTxt = this->fields.itemNumTxt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3928/*"CURRENT_FRIEND_POINT_UNIT"*/, 0);
          if ( !info )
            goto LABEL_69;
          v21 = (System_String_o *)Instance;
          LODWORD(qp) = UserGameEntity__GetFriendPoint(info, 0);
          v22 = int_TypeInfo;
LABEL_68:
          v37 = (Il2CppObject *)j_il2cpp_value_box_0(v22, &qp, v18, v19, v20);
          Instance = (DataManager_o *)System_String__Format(v21, v37, 0);
          if ( !itemNumTxt )
            goto LABEL_69;
          goto LABEL_43;
        default:
          if ( imgId != 18 )
            goto LABEL_44;
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20534/*"img_rp"*/, 0);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20329/*"img_cc"*/, 0);
      itemNumTxt = this->fields.itemNumTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
      LODWORD(qp) = Count;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v23, v24, v25);
      if ( info )
      {
        v26 = (Il2CppObject *)Instance;
        if ( !byte_4C2162B )
        {
          sub_1C2D490(&BalanceConfig_TypeInfo);
          byte_4C2162B = 1;
        }
        v27 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v27 = BalanceConfig_TypeInfo;
        }
        CommandCodeFrameMax = v27->static_fields->CommandCodeFrameMax;
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20370/*"img_craftessence"*/, 0);
      itemNumTxt = this->fields.itemNumTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
      LODWORD(qp) = servantEquipSum[0];
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v28, v29, v30);
      if ( info )
      {
        CommandCodeFrameMax = info->fields.svtEquipKeep;
        goto LABEL_41;
      }
    }
LABEL_69:
    sub_1C2D6EC(Instance, *(_QWORD *)&imgId);
  }
  if ( imgId != 8008 )
    goto LABEL_44;
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_69;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20537/*"img_servant"*/, 0);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
  LODWORD(qp) = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v10, v11, v12);
  if ( !info )
    goto LABEL_69;
  CommandCodeFrameMax = info->fields.svtKeep;
LABEL_41:
  v26 = (Il2CppObject *)Instance;
LABEL_42:
  v39 = CommandCodeFrameMax;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v13, v14, v15);
  Instance = (DataManager_o *)System_String__Format_63499156(v9, v26, v31, 0);
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

  if ( (byte_4C223EE & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C223EE = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemIcon, itemImgId, 0);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !itemNumTxt )
    sub_1C2D6EC(0, v8);
  UILabel__set_text(itemNumTxt, (System_String_o *)StringLiteral_1/*""*/, 0);
  MstHaveItemInfoComponent__setInfoTxt(this, itemImgId, data, v10);
}