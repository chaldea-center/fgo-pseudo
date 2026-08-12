void MstHaveItemInfoComponent___ctor(MstHaveItemInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void MstHaveItemInfoComponent___setInfoTxt_b__4_0(
        MstHaveItemInfoComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *itemNumTxt; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_596B648 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B648 = 1;
  }
  itemNumTxt = this->fields.itemNumTxt;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0);
  if ( !itemNumTxt )
    sub_2213CDC(UnitInfo, v7);
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
  int32_t Count; // w23
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *itemNumTxt; // x21
  System_String_o *v12; // x22
  int32_t svtEquipKeep; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x2
  BalanceConfig_c *v20; // x0
  Il2CppObject *v21; // x0
  __int64 v22; // x2
  int32_t mana; // w20
  __int64 v24; // x2
  UILabel_o *v25; // x21
  int32_t stone; // w20
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  System_String_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *v35; // x0
  int64_t qp; // [xsp+0h] [xbp-50h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-44h] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596B647 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_21546/*"img_servant"*/);
    sub_2213A60(&StringLiteral_21487/*"img_qp"*/);
    sub_2213A60(&StringLiteral_4081/*"CURRENT_QP_UNIT"*/);
    sub_2213A60(&StringLiteral_21375/*"img_fp"*/);
    sub_2213A60(&StringLiteral_4079/*"CURRENT_FRIEND_POINT_UNIT"*/);
    sub_2213A60(&StringLiteral_21368/*"img_craftessence"*/);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    sub_2213A60(&StringLiteral_21327/*"img_cc"*/);
    sub_2213A60(&StringLiteral_21580/*"img_sq"*/);
    sub_2213A60(&StringLiteral_21543/*"img_rp"*/);
    sub_2213A60(&StringLiteral_21449/*"img_mp"*/);
    byte_596B647 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  if ( (unsigned int)(imgId - 8008) < 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_73;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_73;
    UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
    goto LABEL_12;
  }
  if ( imgId == 8014 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_73;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !Instance )
      goto LABEL_73;
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0);
    goto LABEL_27;
  }
  if ( imgId > 18 )
  {
LABEL_12:
    if ( imgId != 8014 )
    {
      if ( imgId == 8009 )
      {
        Instance = (DataManager_o *)this->fields.itemNameImg;
        if ( Instance )
        {
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21368/*"img_craftessence"*/, 0);
          itemNumTxt = this->fields.itemNumTxt;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
          v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
          LODWORD(qp) = servantEquipSum[0];
          Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_5984348, &qp);
          if ( info )
          {
            svtEquipKeep = info->fields.svtEquipKeep;
            goto LABEL_25;
          }
        }
      }
      else
      {
        if ( imgId != 8008 )
          goto LABEL_38;
        Instance = (DataManager_o *)this->fields.itemNameImg;
        if ( Instance )
        {
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21546/*"img_servant"*/, 0);
          itemNumTxt = this->fields.itemNumTxt;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
          v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
          LODWORD(qp) = servantEquipSum[1];
          Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_5984348, &qp);
          if ( info )
          {
            svtEquipKeep = info->fields.svtKeep;
LABEL_25:
            v16 = (Il2CppObject *)Instance;
            goto LABEL_36;
          }
        }
      }
LABEL_73:
      sub_2213CDC(Instance, *(_QWORD *)&imgId);
    }
    Count = 0;
LABEL_27:
    Instance = (DataManager_o *)this->fields.itemNameImg;
    if ( Instance )
    {
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21327/*"img_cc"*/, 0);
      itemNumTxt = this->fields.itemNumTxt;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
      LODWORD(qp) = Count;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_5984348, &qp);
      if ( info )
      {
        v16 = (Il2CppObject *)Instance;
        if ( !byte_596A5C7 )
        {
          sub_2213A60(&BalanceConfig_TypeInfo);
          byte_596A5C7 = 1;
        }
        v20 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&imgId, v19);
          v20 = BalanceConfig_TypeInfo;
        }
        svtEquipKeep = v20->static_fields->CommandCodeFrameMax;
LABEL_36:
        v37 = svtEquipKeep;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v37);
        Instance = (DataManager_o *)System_String__Format_75697880(v12, v16, v21, 0);
        if ( !itemNumTxt )
          goto LABEL_73;
        goto LABEL_37;
      }
    }
    goto LABEL_73;
  }
  if ( imgId <= 6 )
  {
    if ( imgId != 5 )
    {
      if ( imgId == 6 )
      {
        Instance = (DataManager_o *)this->fields.itemNameImg;
        if ( !Instance )
          goto LABEL_73;
        UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21580/*"img_sq"*/, 0);
        if ( !info )
          goto LABEL_73;
        v25 = this->fields.itemNumTxt;
        stone = info->fields.stone;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&imgId, v24);
        Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(stone, 0);
        if ( !v25 )
          goto LABEL_73;
        UILabel__set_text(v25, (System_String_o *)Instance, 0);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v28 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v28, (Il2CppObject *)this, Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__, 0);
        StoneCountRefreshComponent__AttachToGameObject(gameObject, v28, 1, 0);
      }
      goto LABEL_38;
    }
    Instance = (DataManager_o *)this->fields.itemNameImg;
    if ( !Instance )
      goto LABEL_73;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21487/*"img_qp"*/, 0);
    itemNumTxt = this->fields.itemNumTxt;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4081/*"CURRENT_QP_UNIT"*/, 0);
    if ( !info )
      goto LABEL_73;
    v31 = (System_String_o *)Instance;
    v32 = qword_5984368;
    qp = info->fields.qp;
LABEL_72:
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(v32, &qp);
    Instance = (DataManager_o *)System_String__Format(v31, v35, 0);
    if ( !itemNumTxt )
      goto LABEL_73;
    goto LABEL_37;
  }
  switch ( imgId )
  {
    case 7:
      Instance = (DataManager_o *)this->fields.itemNameImg;
      if ( !Instance )
        goto LABEL_73;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21449/*"img_mp"*/, 0);
      if ( !info )
        goto LABEL_73;
      itemNumTxt = this->fields.itemNumTxt;
      mana = info->fields.mana;
LABEL_58:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&imgId, v22);
      Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(mana, 0);
      if ( !itemNumTxt )
        goto LABEL_73;
LABEL_37:
      UILabel__set_text(itemNumTxt, (System_String_o *)Instance, 0);
      break;
    case 12:
      Instance = (DataManager_o *)this->fields.itemNameImg;
      if ( !Instance )
        goto LABEL_73;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21375/*"img_fp"*/, 0);
      itemNumTxt = this->fields.itemNumTxt;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4079/*"CURRENT_FRIEND_POINT_UNIT"*/, 0);
      if ( !info )
        goto LABEL_73;
      v31 = (System_String_o *)Instance;
      LODWORD(qp) = UserGameEntity__GetFriendPoint(info, 0);
      v32 = qword_5984348;
      goto LABEL_72;
    case 18:
      Instance = (DataManager_o *)this->fields.itemNameImg;
      if ( !Instance )
        goto LABEL_73;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21543/*"img_rp"*/, 0);
      if ( !info )
        goto LABEL_73;
      itemNumTxt = this->fields.itemNumTxt;
      mana = info->fields.rarePri;
      goto LABEL_58;
  }
LABEL_38:
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_73;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.parent)(
    Instance,
    Instance->klass[2]._1.generic_class);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_596B646 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B646 = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&itemImgId, data);
  AtlasManager__SetItem(itemIcon, itemImgId, 0);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !itemNumTxt )
    sub_2213CDC(0, v8);
  UILabel__set_text(itemNumTxt, (System_String_o *)StringLiteral_1/*""*/, 0);
  MstHaveItemInfoComponent__setInfoTxt(this, itemImgId, data, v10);
}