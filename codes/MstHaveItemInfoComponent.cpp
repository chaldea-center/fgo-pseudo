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

  if ( (byte_4185BC7 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4185BC7 = 1;
  }
  itemNumTxt = this->fields.itemNumTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !itemNumTxt )
    sub_B2C434(UnitInfo, v7);
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
  int32_t Count; // w23
  UILabel_o *itemNumTxt; // x21
  System_String_o *v28; // x22
  int32_t CommandCodeFrameMax; // w8
  Il2CppObject *v30; // x23
  BalanceConfig_c *v31; // x0
  Il2CppObject *v32; // x0
  System_String_o *v33; // x22
  System_Int32_c *v34; // x0
  int32_t mana; // w20
  UILabel_o *v36; // x21
  int32_t stone; // w20
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v39; // x21
  Il2CppObject *v40; // x0
  int32_t v41; // [xsp+0h] [xbp-40h] BYREF
  int32_t qp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4185BC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, *(_QWORD *)&imgId);
    sub_B2C35C(&System_Action_int__TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&StringLiteral_19605/*"img_servant"*/, v14);
    sub_B2C35C(&StringLiteral_19562/*"img_qp"*/, v15);
    sub_B2C35C(&StringLiteral_3454/*"CURRENT_QP_UNIT"*/, v16);
    sub_B2C35C(&StringLiteral_19482/*"img_fp"*/, v17);
    sub_B2C35C(&StringLiteral_3452/*"CURRENT_FRIEND_POINT_UNIT"*/, v18);
    sub_B2C35C(&StringLiteral_19479/*"img_craftessence"*/, v19);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v20);
    sub_B2C35C(&StringLiteral_19452/*"img_cc"*/, v21);
    sub_B2C35C(&StringLiteral_19637/*"img_sq"*/, v22);
    sub_B2C35C(&StringLiteral_19604/*"img_rp"*/, v23);
    sub_B2C35C(&StringLiteral_19534/*"img_mp"*/, v24);
    byte_4185BC6 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( (unsigned int)(imgId - 8008) >= 2 )
  {
    if ( imgId == 8014 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_77;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19562/*"img_qp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3454/*"CURRENT_QP_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          v33 = (System_String_o *)Instance;
          qp = info->fields.qp;
          v34 = int_TypeInfo;
          goto LABEL_76;
        case 6:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19637/*"img_sq"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          v36 = this->fields.itemNumTxt;
          stone = info->fields.stone;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(stone, 0LL);
          if ( !v36 )
            goto LABEL_77;
          UILabel__set_text(v36, (System_String_o *)Instance, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v39 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
          System_Action_int____ctor(
            v39,
            (Il2CppObject *)this,
            Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__,
            (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
          StoneCountRefreshComponent__AttachToGameObject(gameObject, v39, 1, 0LL);
          goto LABEL_42;
        case 7:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19534/*"img_mp"*/, 0LL);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19482/*"img_fp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3452/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          v33 = (System_String_o *)Instance;
          qp = UserGameEntity__GetFriendPoint(info, 0LL);
          v34 = int_TypeInfo;
LABEL_76:
          v40 = (Il2CppObject *)j_il2cpp_value_box_0(v34, &qp);
          Instance = (DataManager_o *)System_String__Format(v33, v40, 0LL);
          if ( !itemNumTxt )
            goto LABEL_77;
          goto LABEL_41;
        default:
          if ( imgId != 18 )
            goto LABEL_42;
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19604/*"img_rp"*/, 0LL);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19452/*"img_cc"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
      qp = Count;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
      if ( info )
      {
        v30 = (Il2CppObject *)Instance;
        if ( !byte_4183CB7 )
        {
          sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&imgId);
          byte_4183CB7 = 1;
        }
        v31 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v31 = BalanceConfig_TypeInfo;
        }
        CommandCodeFrameMax = v31->static_fields->CommandCodeFrameMax;
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19479/*"img_craftessence"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
      qp = servantEquipSum[0];
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
      if ( info )
      {
        CommandCodeFrameMax = info->fields.svtEquipKeep;
        goto LABEL_39;
      }
    }
LABEL_77:
    sub_B2C434(Instance, *(_QWORD *)&imgId);
  }
  if ( imgId != 8008 )
    goto LABEL_42;
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_77;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19605/*"img_servant"*/, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  qp = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  if ( !info )
    goto LABEL_77;
  CommandCodeFrameMax = info->fields.svtKeep;
LABEL_39:
  v30 = (Il2CppObject *)Instance;
LABEL_40:
  v41 = CommandCodeFrameMax;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
  Instance = (DataManager_o *)System_String__Format_44301068(v28, v30, v32, 0LL);
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

  if ( (byte_4185BC5 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&itemImgId);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4185BC5 = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemIcon, itemImgId, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !itemNumTxt )
    sub_B2C434(0LL, v9);
  UILabel__set_text(itemNumTxt, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  MstHaveItemInfoComponent__setInfoTxt(this, itemImgId, data, v11);
}