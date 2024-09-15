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

  if ( (byte_4A295A6 & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4A295A6 = 1;
  }
  itemNumTxt = this->fields.itemNumTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !itemNumTxt )
    sub_1B7641C(UnitInfo, v7);
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
  DataManager_o *Instance; // x0
  UILabel_o *itemNumTxt; // x21
  System_String_o *v26; // x22
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int32_t CommandCodeFrameMax; // w8
  int32_t Count; // w23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_String_o *v38; // x22
  System_Int32_c *v39; // x0
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x23
  BalanceConfig_c *v44; // x0
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  int32_t mana; // w20
  UILabel_o *v50; // x21
  int32_t stone; // w20
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v53; // x21
  Il2CppObject *v54; // x0
  int32_t v55; // [xsp+8h] [xbp-48h] BYREF
  int32_t qp; // [xsp+Ch] [xbp-44h] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A295A5 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_int__TypeInfo, *(_QWORD *)&imgId);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v7);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_1B761C0(&int_TypeInfo, v9);
    sub_1B761C0(&LocalizationManager_TypeInfo, v10);
    sub_1B761C0(&Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__, v11);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B761C0(&StringLiteral_20435/*"img_servant"*/, v13);
    sub_1B761C0(&StringLiteral_20389/*"img_qp"*/, v14);
    sub_1B761C0(&StringLiteral_3949/*"CURRENT_QP_UNIT"*/, v15);
    sub_1B761C0(&StringLiteral_20298/*"img_fp"*/, v16);
    sub_1B761C0(&StringLiteral_3947/*"CURRENT_FRIEND_POINT_UNIT"*/, v17);
    sub_1B761C0(&StringLiteral_20294/*"img_craftessence"*/, v18);
    sub_1B761C0(&StringLiteral_12372/*"SUM_INFO"*/, v19);
    sub_1B761C0(&StringLiteral_20266/*"img_cc"*/, v20);
    sub_1B761C0(&StringLiteral_20467/*"img_sq"*/, v21);
    sub_1B761C0(&StringLiteral_20434/*"img_rp"*/, v22);
    sub_1B761C0(&StringLiteral_20356/*"img_mp"*/, v23);
    byte_4A295A5 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( (unsigned int)(imgId - 8008) >= 2 )
  {
    if ( imgId == 8014 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_69;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20389/*"img_qp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3949/*"CURRENT_QP_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_69;
          v38 = (System_String_o *)Instance;
          qp = info->fields.qp;
          v39 = int_TypeInfo;
          goto LABEL_68;
        case 6:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20467/*"img_sq"*/, 0LL);
          if ( !info )
            goto LABEL_69;
          v50 = this->fields.itemNumTxt;
          stone = info->fields.stone;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(stone, 0LL);
          if ( !v50 )
            goto LABEL_69;
          UILabel__set_text(v50, (System_String_o *)Instance, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v53 = (System_Action_int__o *)sub_1B7640C(System_Action_int__TypeInfo);
          System_Action_int____ctor(
            v53,
            (Il2CppObject *)this,
            Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__,
            0LL);
          StoneCountRefreshComponent__AttachToGameObject(gameObject, v53, 1, 0LL);
          goto LABEL_44;
        case 7:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20356/*"img_mp"*/, 0LL);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20298/*"img_fp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3947/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_69;
          v38 = (System_String_o *)Instance;
          qp = UserGameEntity__GetFriendPoint(info, 0LL);
          v39 = int_TypeInfo;
LABEL_68:
          v54 = (Il2CppObject *)j_il2cpp_value_box_0(v39, &qp, v35, v36, v37);
          Instance = (DataManager_o *)System_String__Format(v38, v54, 0LL);
          if ( !itemNumTxt )
            goto LABEL_69;
          goto LABEL_43;
        default:
          if ( imgId != 18 )
            goto LABEL_44;
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_69;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20434/*"img_rp"*/, 0LL);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20266/*"img_cc"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12372/*"SUM_INFO"*/, 0LL);
      qp = Count;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v40, v41, v42);
      if ( info )
      {
        v43 = (Il2CppObject *)Instance;
        if ( !byte_4A295AF )
        {
          sub_1B761C0(&BalanceConfig_TypeInfo, *(_QWORD *)&imgId);
          byte_4A295AF = 1;
        }
        v44 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v44 = BalanceConfig_TypeInfo;
        }
        CommandCodeFrameMax = v44->static_fields->CommandCodeFrameMax;
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20294/*"img_craftessence"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12372/*"SUM_INFO"*/, 0LL);
      qp = servantEquipSum[0];
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v45, v46, v47);
      if ( info )
      {
        CommandCodeFrameMax = info->fields.svtEquipKeep;
        goto LABEL_41;
      }
    }
LABEL_69:
    sub_1B7641C(Instance, *(_QWORD *)&imgId);
  }
  if ( imgId != 8008 )
    goto LABEL_44;
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_69;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20435/*"img_servant"*/, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12372/*"SUM_INFO"*/, 0LL);
  qp = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v27, v28, v29);
  if ( !info )
    goto LABEL_69;
  CommandCodeFrameMax = info->fields.svtKeep;
LABEL_41:
  v43 = (Il2CppObject *)Instance;
LABEL_42:
  v55 = CommandCodeFrameMax;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v30, v31, v32);
  Instance = (DataManager_o *)System_String__Format_61549432(v26, v43, v48, 0LL);
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

  if ( (byte_4A295A4 & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, *(_QWORD *)&itemImgId);
    sub_1B761C0(&StringLiteral_1/*""*/, v7);
    byte_4A295A4 = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemIcon, itemImgId, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !itemNumTxt )
    sub_1B7641C(0LL, v9);
  UILabel__set_text(itemNumTxt, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  MstHaveItemInfoComponent__setInfoTxt(this, itemImgId, data, v11);
}