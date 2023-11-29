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

  if ( (byte_40F7DA5 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_40F7DA5 = 1;
  }
  itemNumTxt = this->fields.itemNumTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !itemNumTxt )
    sub_B170D4();
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
  WebViewManager_o *v25; // x0
  UserServantMaster_o *v26; // x0
  WebViewManager_o *Instance; // x0
  UserCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t Count; // w23
  UISprite_o *v30; // x0
  UILabel_o *itemNumTxt; // x21
  System_String_o *v32; // x22
  __int64 v33; // x0
  int32_t CommandCodeFrameMax; // w8
  UISprite_o *v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  Il2CppObject *v38; // x23
  BalanceConfig_c *v39; // x0
  UISprite_o *v40; // x0
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  struct UISprite_o *v43; // x0
  UISprite_o *itemNameImg; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x22
  System_Int32_c *v47; // x0
  UISprite_o *v48; // x0
  int32_t mana; // w20
  UISprite_o *v50; // x0
  UILabel_o *v51; // x21
  int32_t stone; // w20
  System_String_o *UnitInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Action_int__o *v59; // x21
  UISprite_o *v60; // x0
  UISprite_o *v61; // x0
  System_String_o *v62; // x0
  Il2CppObject *v63; // x0
  int32_t v64; // [xsp+0h] [xbp-40h] BYREF
  int32_t qp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F7DA4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, *(_QWORD *)&imgId);
    sub_B16FFC(&System_Action_int__TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_19531, v14);
    sub_B16FFC(&StringLiteral_19488, v15);
    sub_B16FFC(&StringLiteral_3441, v16);
    sub_B16FFC(&StringLiteral_19408, v17);
    sub_B16FFC(&StringLiteral_3439, v18);
    sub_B16FFC(&StringLiteral_19405, v19);
    sub_B16FFC(&StringLiteral_12413, v20);
    sub_B16FFC(&StringLiteral_19378, v21);
    sub_B16FFC(&StringLiteral_19563, v22);
    sub_B16FFC(&StringLiteral_19530, v23);
    sub_B16FFC(&StringLiteral_19460, v24);
    byte_40F7DA4 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( (unsigned int)(imgId - 8008) >= 2 )
  {
    if ( imgId == 8014 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_77;
      MasterData_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_77;
      Count = UserCommandCodeMaster__getCount(MasterData_WarQuestSelectionMaster, 0LL);
      goto LABEL_22;
    }
    if ( imgId <= 18 )
    {
      switch ( imgId )
      {
        case 5:
          itemNameImg = this->fields.itemNameImg;
          if ( !itemNameImg )
            goto LABEL_77;
          UISprite__set_spriteName(itemNameImg, (System_String_o *)StringLiteral_19488, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3441, 0LL);
          if ( !info )
            goto LABEL_77;
          v46 = v45;
          qp = info->fields.qp;
          v47 = int_TypeInfo;
          goto LABEL_76;
        case 6:
          v50 = this->fields.itemNameImg;
          if ( !v50 )
            goto LABEL_77;
          UISprite__set_spriteName(v50, (System_String_o *)StringLiteral_19563, 0LL);
          if ( !info )
            goto LABEL_77;
          v51 = this->fields.itemNumTxt;
          stone = info->fields.stone;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          UnitInfo = LocalizationManager__GetUnitInfo(stone, 0LL);
          if ( !v51 )
            goto LABEL_77;
          UILabel__set_text(v51, UnitInfo, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v59 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v55, v56, v57, v58);
          System_Action_int____ctor(
            v59,
            (Il2CppObject *)this,
            Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__,
            (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
          StoneCountRefreshComponent__AttachToGameObject(gameObject, v59, 1, 0LL);
          goto LABEL_42;
        case 7:
          v60 = this->fields.itemNameImg;
          if ( !v60 )
            goto LABEL_77;
          UISprite__set_spriteName(v60, (System_String_o *)StringLiteral_19460, 0LL);
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
          v61 = this->fields.itemNameImg;
          if ( !v61 )
            goto LABEL_77;
          UISprite__set_spriteName(v61, (System_String_o *)StringLiteral_19408, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v62 = LocalizationManager__Get((System_String_o *)StringLiteral_3439, 0LL);
          if ( !info )
            goto LABEL_77;
          v46 = v62;
          qp = UserGameEntity__GetFriendPoint(info, 0LL);
          v47 = int_TypeInfo;
LABEL_76:
          v63 = (Il2CppObject *)j_il2cpp_value_box_0(v47, &qp);
          v42 = System_String__Format(v46, v63, 0LL);
          if ( !itemNumTxt )
            goto LABEL_77;
          goto LABEL_41;
        default:
          if ( imgId != 18 )
            goto LABEL_42;
          v48 = this->fields.itemNameImg;
          if ( !v48 )
            goto LABEL_77;
          UISprite__set_spriteName(v48, (System_String_o *)StringLiteral_19530, 0LL);
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
          v42 = LocalizationManager__GetUnitInfo(mana, 0LL);
          if ( !itemNumTxt )
            goto LABEL_77;
          goto LABEL_41;
      }
    }
  }
  else
  {
    v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v25 )
      goto LABEL_77;
    v26 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v25,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !v26 )
      goto LABEL_77;
    UserServantMaster__getCount(v26, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  }
  if ( imgId == 8014 )
  {
    Count = 0;
LABEL_22:
    v35 = this->fields.itemNameImg;
    if ( v35 )
    {
      UISprite__set_spriteName(v35, (System_String_o *)StringLiteral_19378, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
      qp = Count;
      v36 = j_il2cpp_value_box_0(int_TypeInfo, &qp);
      if ( info )
      {
        v38 = (Il2CppObject *)v36;
        if ( !byte_40F6094 )
        {
          sub_B16FFC(&BalanceConfig_TypeInfo, v37);
          byte_40F6094 = 1;
        }
        v39 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v39 = BalanceConfig_TypeInfo;
        }
        CommandCodeFrameMax = v39->static_fields->CommandCodeFrameMax;
        goto LABEL_40;
      }
    }
    goto LABEL_77;
  }
  if ( imgId == 8009 )
  {
    v40 = this->fields.itemNameImg;
    if ( v40 )
    {
      UISprite__set_spriteName(v40, (System_String_o *)StringLiteral_19405, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
      qp = servantEquipSum[0];
      v33 = j_il2cpp_value_box_0(int_TypeInfo, &qp);
      if ( info )
      {
        CommandCodeFrameMax = info->fields.svtEquipKeep;
        goto LABEL_39;
      }
    }
LABEL_77:
    sub_B170D4();
  }
  if ( imgId != 8008 )
    goto LABEL_42;
  v30 = this->fields.itemNameImg;
  if ( !v30 )
    goto LABEL_77;
  UISprite__set_spriteName(v30, (System_String_o *)StringLiteral_19531, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12413, 0LL);
  qp = servantEquipSum[1];
  v33 = j_il2cpp_value_box_0(int_TypeInfo, &qp);
  if ( !info )
    goto LABEL_77;
  CommandCodeFrameMax = info->fields.svtKeep;
LABEL_39:
  v38 = (Il2CppObject *)v33;
LABEL_40:
  v64 = CommandCodeFrameMax;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
  v42 = System_String__Format_43739268(v32, v38, v41, 0LL);
  if ( !itemNumTxt )
    goto LABEL_77;
LABEL_41:
  UILabel__set_text(itemNumTxt, v42, 0LL);
LABEL_42:
  v43 = this->fields.itemNameImg;
  if ( !v43 )
    goto LABEL_77;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v43->klass->vtable._33_MakePixelPerfect.method)(
    v43,
    v43->klass->vtable._34_get_minWidth.methodPtr);
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
  UILabel_o *itemNumTxt; // x0
  const MethodInfo *v10; // x3

  if ( (byte_40F7DA3 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&itemImgId);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40F7DA3 = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemIcon, itemImgId, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !itemNumTxt )
    sub_B170D4();
  UILabel__set_text(itemNumTxt, (System_String_o *)StringLiteral_1, 0LL);
  MstHaveItemInfoComponent__setInfoTxt(this, itemImgId, data, v10);
}