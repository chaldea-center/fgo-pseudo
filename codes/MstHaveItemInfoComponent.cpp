void __fastcall MstHaveItemInfoComponent___ctor(MstHaveItemInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MstHaveItemInfoComponent___setInfoTxt_b__4_0(
        MstHaveItemInfoComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *itemNumTxt; // x20
  System_String_o *UnitInfo; // x0
  __int64 v7; // x1

  if ( (byte_42AE87E & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42AE87E = 1;
  }
  itemNumTxt = this->fields.itemNumTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !itemNumTxt )
    sub_B52A5C(UnitInfo, v7);
  UILabel__set_text(itemNumTxt, UnitInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstHaveItemInfoComponent__setInfoTxt(
        MstHaveItemInfoComponent_o *this,
        int32_t imgId,
        UserGameEntity_o *info,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  int32_t Count; // w23
  UILabel_o *itemNumTxt; // x21
  System_String_o *v10; // x22
  int32_t CommandCodeFrameMax; // w8
  Il2CppObject *v12; // x23
  BalanceConfig_c *v13; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  System_Int32_c *v16; // x0
  int32_t mana; // w20
  UILabel_o *v18; // x21
  int32_t stone; // w20
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v21; // x21
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+0h] [xbp-40h] BYREF
  int32_t qp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AE87D & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_19752/*"img_servant"*/);
    sub_B52984(&StringLiteral_19709/*"img_qp"*/);
    sub_B52984(&StringLiteral_3487/*"CURRENT_QP_UNIT"*/);
    sub_B52984(&StringLiteral_19629/*"img_fp"*/);
    sub_B52984(&StringLiteral_3485/*"CURRENT_FRIEND_POINT_UNIT"*/);
    sub_B52984(&StringLiteral_19626/*"img_craftessence"*/);
    sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    sub_B52984(&StringLiteral_19599/*"img_cc"*/);
    sub_B52984(&StringLiteral_19784/*"img_sq"*/);
    sub_B52984(&StringLiteral_19751/*"img_rp"*/);
    sub_B52984(&StringLiteral_19681/*"img_mp"*/);
    byte_42AE87D = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( (unsigned int)(imgId - 8008) >= 2 )
  {
    if ( imgId == 8014 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_77;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( !Instance )
        goto LABEL_77;
      Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
      goto LABEL_22;
    }
    if ( imgId <= 18 )
    {
      switch ( imgId )
      {
        case 5:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19709/*"img_qp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3487/*"CURRENT_QP_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          v15 = (System_String_o *)Instance;
          qp = info->fields.qp;
          v16 = int_TypeInfo;
          goto LABEL_76;
        case 6:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19784/*"img_sq"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          v18 = this->fields.itemNumTxt;
          stone = info->fields.stone;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(stone, 0LL);
          if ( !v18 )
            goto LABEL_77;
          UILabel__set_text(v18, (System_String_o *)Instance, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v21 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
          System_Action_int____ctor(
            v21,
            (Il2CppObject *)this,
            Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__,
            (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
          StoneCountRefreshComponent__AttachToGameObject(gameObject, v21, 1, 0LL);
          goto LABEL_42;
        case 7:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19681/*"img_mp"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          itemNumTxt = this->fields.itemNumTxt;
          mana = info->fields.mana;
          goto LABEL_65;
        case 8:
        case 9:
        case 10:
        case 11:
          goto LABEL_42;
        case 12:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19629/*"img_fp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3485/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          v15 = (System_String_o *)Instance;
          qp = UserGameEntity__GetFriendPoint(info, 0LL);
          v16 = int_TypeInfo;
LABEL_76:
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(v16, &qp);
          Instance = (DataManager_o *)System_String__Format(v15, v22, 0LL);
          if ( !itemNumTxt )
            goto LABEL_77;
          goto LABEL_41;
        default:
          if ( imgId != 18 )
            goto LABEL_42;
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19751/*"img_rp"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          itemNumTxt = this->fields.itemNumTxt;
          mana = info->fields.rarePri;
LABEL_65:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(mana, 0LL);
          if ( !itemNumTxt )
            goto LABEL_77;
          goto LABEL_41;
      }
    }
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_77;
    UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  }
  if ( imgId == 8014 )
  {
    Count = 0;
LABEL_22:
    Instance = (DataManager_o *)this->fields.itemNameImg;
    if ( Instance )
    {
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19599/*"img_cc"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
      qp = Count;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
      if ( info )
      {
        v12 = (Il2CppObject *)Instance;
        if ( !byte_42AC2F5 )
        {
          sub_B52984(&BalanceConfig_TypeInfo);
          byte_42AC2F5 = 1;
        }
        v13 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v13 = BalanceConfig_TypeInfo;
        }
        CommandCodeFrameMax = v13->static_fields->CommandCodeFrameMax;
        goto LABEL_40;
      }
    }
    goto LABEL_77;
  }
  if ( imgId == 8009 )
  {
    Instance = (DataManager_o *)this->fields.itemNameImg;
    if ( Instance )
    {
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19626/*"img_craftessence"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
      qp = servantEquipSum[0];
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
      if ( info )
      {
        CommandCodeFrameMax = info->fields.svtEquipKeep;
        goto LABEL_39;
      }
    }
LABEL_77:
    sub_B52A5C(Instance, *(_QWORD *)&imgId);
  }
  if ( imgId != 8008 )
    goto LABEL_42;
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_77;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19752/*"img_servant"*/, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
  qp = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  if ( !info )
    goto LABEL_77;
  CommandCodeFrameMax = info->fields.svtKeep;
LABEL_39:
  v12 = (Il2CppObject *)Instance;
LABEL_40:
  v23 = CommandCodeFrameMax;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  Instance = (DataManager_o *)System_String__Format_44563852(v10, v12, v14, 0LL);
  if ( !itemNumTxt )
    goto LABEL_77;
LABEL_41:
  UILabel__set_text(itemNumTxt, (System_String_o *)Instance, 0LL);
LABEL_42:
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_77;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
    Instance,
    Instance->klass[2]._1.interopData);
}


void __fastcall MstHaveItemInfoComponent__setItemInfo(
        MstHaveItemInfoComponent_o *this,
        int32_t itemImgId,
        UserGameEntity_o *data,
        const MethodInfo *method)
{
  UISprite_o *itemIcon; // x22
  __int64 v8; // x1
  UILabel_o *itemNumTxt; // x0
  const MethodInfo *v10; // x3

  if ( (byte_42AE87C & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE87C = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemIcon, itemImgId, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !itemNumTxt )
    sub_B52A5C(0LL, v8);
  UILabel__set_text(itemNumTxt, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  MstHaveItemInfoComponent__setInfoTxt(this, itemImgId, data, v10);
}