void __fastcall MstHaveItemInfoComponent___ctor(MstHaveItemInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MstHaveItemInfoComponent___setInfoTxt_b__4_0(
        MstHaveItemInfoComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UILabel_o *itemNumTxt; // x20
  System_String_o *UnitInfo; // x0
  __int64 v8; // x1

  if ( (byte_42E7487 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, stoneCount, (_DWORD)method, v3);
    byte_42E7487 = 1;
  }
  itemNumTxt = this->fields.itemNumTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  UnitInfo = LocalizationManager__GetUnitInfo(stoneCount, 0LL);
  if ( !itemNumTxt )
    sub_B5D69C(UnitInfo, v8);
  UILabel__set_text(itemNumTxt, UnitInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MstHaveItemInfoComponent__setInfoTxt(
        MstHaveItemInfoComponent_o *this,
        int32_t imgId,
        UserGameEntity_o *info,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  DataManager_o *Instance; // x0
  int32_t Count; // w23
  UILabel_o *itemNumTxt; // x21
  System_String_o *v64; // x22
  int32_t CommandCodeFrameMax; // w8
  int v66; // w2
  __int64 v67; // x3
  Il2CppObject *v68; // x23
  BalanceConfig_c *v69; // x0
  Il2CppObject *v70; // x0
  System_String_o *v71; // x22
  System_Int32_c *v72; // x0
  int32_t mana; // w20
  UILabel_o *v74; // x21
  int32_t stone; // w20
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v77; // x21
  Il2CppObject *v78; // x0
  int32_t v79; // [xsp+0h] [xbp-40h] BYREF
  int32_t qp; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7486 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, imgId, (_DWORD)info, method);
    sub_B5D5C4(&System_Action_int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_19854/*"img_servant"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_19810/*"img_qp"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_3520/*"CURRENT_QP_UNIT"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_19727/*"img_fp"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_3518/*"CURRENT_FRIEND_POINT_UNIT"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_19724/*"img_craftessence"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_19697/*"img_cc"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_19886/*"img_sq"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_19853/*"img_rp"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_19781/*"img_mp"*/, v58, v59, v60);
    byte_42E7486 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( (unsigned int)(imgId - 8008) >= 2 )
  {
    if ( imgId == 8014 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_77;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19810/*"img_qp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3520/*"CURRENT_QP_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          v71 = (System_String_o *)Instance;
          qp = info->fields.qp;
          v72 = int_TypeInfo;
          goto LABEL_76;
        case 6:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19886/*"img_sq"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          v74 = this->fields.itemNumTxt;
          stone = info->fields.stone;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__GetUnitInfo(stone, 0LL);
          if ( !v74 )
            goto LABEL_77;
          UILabel__set_text(v74, (System_String_o *)Instance, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v77 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
          System_Action_int____ctor(
            v77,
            (Il2CppObject *)this,
            Method_MstHaveItemInfoComponent__setInfoTxt_b__4_0__,
            (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
          StoneCountRefreshComponent__AttachToGameObject(gameObject, v77, 1, 0LL);
          goto LABEL_42;
        case 7:
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19781/*"img_mp"*/, 0LL);
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
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19727/*"img_fp"*/, 0LL);
          itemNumTxt = this->fields.itemNumTxt;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3518/*"CURRENT_FRIEND_POINT_UNIT"*/, 0LL);
          if ( !info )
            goto LABEL_77;
          v71 = (System_String_o *)Instance;
          qp = UserGameEntity__GetFriendPoint(info, 0LL);
          v72 = int_TypeInfo;
LABEL_76:
          v78 = (Il2CppObject *)j_il2cpp_value_box_0(v72, &qp);
          Instance = (DataManager_o *)System_String__Format(v71, v78, 0LL);
          if ( !itemNumTxt )
            goto LABEL_77;
          goto LABEL_41;
        default:
          if ( imgId != 18 )
            goto LABEL_42;
          Instance = (DataManager_o *)this->fields.itemNameImg;
          if ( !Instance )
            goto LABEL_77;
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19853/*"img_rp"*/, 0LL);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19697/*"img_cc"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
      qp = Count;
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
      if ( info )
      {
        v68 = (Il2CppObject *)Instance;
        if ( !byte_42E4B73 )
        {
          sub_B5D5C4(&BalanceConfig_TypeInfo, imgId, v66, v67);
          byte_42E4B73 = 1;
        }
        v69 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v69 = BalanceConfig_TypeInfo;
        }
        CommandCodeFrameMax = v69->static_fields->CommandCodeFrameMax;
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
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19724/*"img_craftessence"*/, 0LL);
      itemNumTxt = this->fields.itemNumTxt;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
      qp = servantEquipSum[0];
      Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
      if ( info )
      {
        CommandCodeFrameMax = info->fields.svtEquipKeep;
        goto LABEL_39;
      }
    }
LABEL_77:
    sub_B5D69C(Instance, *(_QWORD *)&imgId);
  }
  if ( imgId != 8008 )
    goto LABEL_42;
  Instance = (DataManager_o *)this->fields.itemNameImg;
  if ( !Instance )
    goto LABEL_77;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19854/*"img_servant"*/, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  qp = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  if ( !info )
    goto LABEL_77;
  CommandCodeFrameMax = info->fields.svtKeep;
LABEL_39:
  v68 = (Il2CppObject *)Instance;
LABEL_40:
  v79 = CommandCodeFrameMax;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
  Instance = (DataManager_o *)System_String__Format_44573324(v64, v68, v70, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UISprite_o *itemIcon; // x22
  __int64 v11; // x1
  UILabel_o *itemNumTxt; // x0
  const MethodInfo *v13; // x3

  if ( (byte_42E7485 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, itemImgId, (_DWORD)data, method);
    sub_B5D5C4(&StringLiteral_1/*""*/, v7, v8, v9);
    byte_42E7485 = 1;
  }
  itemIcon = this->fields.itemIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(itemIcon, itemImgId, 0LL);
  itemNumTxt = this->fields.itemNumTxt;
  if ( !itemNumTxt )
    sub_B5D69C(0LL, v11);
  UILabel__set_text(itemNumTxt, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  MstHaveItemInfoComponent__setInfoTxt(this, itemImgId, data, v13);
}