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

  if ( (byte_4350D5F & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_4350D5F = 1;
  }
  itemNumTxt = this->fields.itemNumTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !itemNumTxt )
    sub_B7076C(UnitInfo, v7);
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
  __int64 v11; // x2
  __int64 v12; // x2
  int32_t CommandCodeFrameMax; // w8
  __int64 v14; // x2
  Il2CppObject *v15; // x23
  BalanceConfig_c *v16; // x0
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  __int64 v19; // x2
  System_String_o *v20; // x22
  System_Int32_c *v21; // x0
  int32_t mana; // w20
  UILabel_o *v23; // x21
  int32_t stone; // w20
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v26; // x21
  Il2CppObject *v27; // x0
  int32_t v28; // [xsp+0h] [xbp-40h] BYREF
  int32_t qp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4350D5E & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_19913/*"img_servant"*/);
    sub_B70694(&StringLiteral_19869/*"img_qp"*/);
    sub_B70694(&StringLiteral_3529/*"CURRENT_QP_UNIT"*/);
    sub_B70694(&StringLiteral_19786/*"img_fp"*/);
    sub_B70694(&StringLiteral_3527/*"CURRENT_FRIEND_POINT_UNIT"*/);
    sub_B70694(&StringLiteral_19783/*"img_craftessence"*/);
    sub_B70694(&StringLiteral_12638/*"SUM_INFO"*/);
    sub_B70694(&StringLiteral_19756/*"img_cc"*/);
    sub_B70694(&StringLiteral_19945/*"img_sq"*/);
    sub_B70694(&StringLiteral_19912/*"img_rp"*/);
    sub_B70694(&StringLiteral_19840/*"img_mp"*/);
    byte_4350D5E = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( (unsigned int)(imgId - 8008) >= 2 )
  {
    if ( imgId == 8014 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_77;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19869/*"img_qp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3529/*"CURRENT_QP_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          v20 = (System_String_o *)Instance;
          qp = info->fields.qp;
          v21 = int_TypeInfo;
          goto LABEL_76;
        case 6:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19945/*"img_sq"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          v23 = this->fields.itemNumTxt;
          stone = info->fields.stone;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(stone, 0LL);
          if ( !v23 )
            goto LABEL_77;
          UILabel__set_text(v23, (System_String_o *)Instance, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v26 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
          System_Action_int____ctor(
            v26,
            (Il2CppObject *)this,
            Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__,
            (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
          StoneCountRefreshComponent__AttachToGameObject(gameObject, v26, 1, 0LL);
          goto LABEL_42;
        case 7:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19840/*"img_mp"*/, 0LL);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19786/*"img_fp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3527/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          v20 = (System_String_o *)Instance;
          qp = UserGameEntity__GetFriendPoint(info, 0LL);
          v21 = int_TypeInfo;
LABEL_76:
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(v21, &qp, v19);
          Instance = (DataManager_o *)System_String__Format(v20, v27, 0LL);
          if ( !itemNumTxt )
            goto LABEL_77;
          goto LABEL_41;
        default:
          if ( imgId != 18 )
            goto LABEL_42;
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19912/*"img_rp"*/, 0LL);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19756/*"img_cc"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12638/*"SUM_INFO"*/, 0LL);
      qp = Count;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v14);
      if ( info )
      {
        v15 = (Il2CppObject *)Instance;
        if ( !byte_434DEF6 )
        {
          sub_B70694(&BalanceConfig_TypeInfo);
          byte_434DEF6 = 1;
        }
        v16 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v16 = BalanceConfig_TypeInfo;
        }
        CommandCodeFrameMax = v16->static_fields->CommandCodeFrameMax;
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19783/*"img_craftessence"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12638/*"SUM_INFO"*/, 0LL);
      qp = servantEquipSum[0];
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v17);
      if ( info )
      {
        CommandCodeFrameMax = info->fields.svtEquipKeep;
        goto LABEL_39;
      }
    }
LABEL_77:
    sub_B7076C(Instance, *(_QWORD *)&imgId);
  }
  if ( imgId != 8008 )
    goto LABEL_42;
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_77;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19913/*"img_servant"*/, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12638/*"SUM_INFO"*/, 0LL);
  qp = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v11);
  if ( !info )
    goto LABEL_77;
  CommandCodeFrameMax = info->fields.svtKeep;
LABEL_39:
  v15 = (Il2CppObject *)Instance;
LABEL_40:
  v28 = CommandCodeFrameMax;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v12);
  Instance = (DataManager_o *)System_String__Format_44753704(v10, v15, v18, 0LL);
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

  if ( (byte_4350D5D & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350D5D = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemIcon, itemImgId, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !itemNumTxt )
    sub_B7076C(0LL, v8);
  UILabel__set_text(itemNumTxt, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  MstHaveItemInfoComponent__setInfoTxt(this, itemImgId, data, v10);
}