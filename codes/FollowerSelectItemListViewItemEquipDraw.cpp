void FollowerSelectItemListViewItemEquipDraw___ctor(
        FollowerSelectItemListViewItemEquipDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FollowerSelectItemListViewItemEquipDraw__SetEmpty(
        FollowerSelectItemListViewItemEquipDraw_o *this,
        System_String_o *noneEquipSpriteName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *noneEquipSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *v8; // x21
  bool v9; // w0
  UISprite_o *v10; // x21
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *friendShipSvtEquipSkillIcon; // x20

  if ( (byte_4CB0DA8 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB0DA8 = 1;
  }
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  v8 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( noneEquipSpriteName && v9 )
  {
    v10 = this->fields.noneEquipSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v10, noneEquipSpriteName, 0);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
LABEL_33:
    sub_1C6BC60(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  friendShipSvtEquipSkillIcon = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipSkillIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipSkillIcon, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipSkillIcon;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        goto LABEL_30;
      }
    }
    goto LABEL_33;
  }
LABEL_30:
  gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void FollowerSelectItemListViewItemEquipDraw__SetEquip(
        FollowerSelectItemListViewItemEquipDraw_o *this,
        EquipTargetInfo_o *equipTarget,
        System_String_o *noneEquipSpriteName,
        bool isDisplayFriendShipSkillIcon,
        bool isChangeFriendShipSvtEquipSkill,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x25
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w0
  const MethodInfo *v16; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4CB0DA6 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB0DA6 = 1;
  }
  if ( !equipTarget )
    goto LABEL_10;
  v12 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v17, 0) > 0 )
  {
    v14 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v14;
    *(_QWORD *)&v18.fields.fakeValue = v13;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v18, 0);
    FollowerSelectItemListViewItemEquipDraw__SetEquip_32923468(
      this,
      v15,
      equipTarget->fields.limitCount,
      equipTarget->fields._ImagePartsGroupIdxs_k__BackingField,
      isDisplayFriendShipSkillIcon,
      isChangeFriendShipSvtEquipSkill,
      v16);
  }
  else
  {
LABEL_10:
    FollowerSelectItemListViewItemEquipDraw__SetEmpty(
      this,
      noneEquipSpriteName,
      (const MethodInfo *)noneEquipSpriteName);
  }
}


void FollowerSelectItemListViewItemEquipDraw__SetEquip_32923468(
        FollowerSelectItemListViewItemEquipDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *imagePartsGroupIdxs,
        bool isDisplayFriendShipSkillIcon,
        bool isChangeFriendShipSvtEquipSkill,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x25
  UnityEngine_Object_o *noneEquipSprite; // x25
  __int64 v15; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v17; // x25
  UnityEngine_Object_o *friendShipSvtEquipSkillIcon; // x24
  UISprite_o *v19; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Component_o *v21; // x8
  UnityEngine_Component_o *v22; // x20

  if ( (byte_4CB0DA7 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_19780/*"func_group_icon_385"*/);
    sub_1C6BA08(&StringLiteral_20405/*"img_bond_category"*/);
    byte_4CB0DA7 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(equipSprite, 0, 0) )
    return;
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_39;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v17 = (UISprite_o *)this->fields.equipSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v17, svtId, imagePartsGroupIdxs, 0);
  friendShipSvtEquipSkillIcon = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipSkillIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipSkillIcon, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipSkillIcon;
    if ( !gameObject )
      goto LABEL_39;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isDisplayFriendShipSkillIcon, 0);
    if ( isDisplayFriendShipSkillIcon )
    {
      v19 = this->fields.friendShipSvtEquipSkillIcon;
      if ( AtlasManager_TypeInfo->_2.cctor_finished )
      {
        if ( isChangeFriendShipSvtEquipSkill )
        {
LABEL_24:
          AtlasManager__SetEventUI(v19, (System_String_o *)StringLiteral_19780/*"func_group_icon_385"*/, 0);
          goto LABEL_28;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( isChangeFriendShipSvtEquipSkill )
          goto LABEL_24;
      }
      AtlasManager__SetCommon(v19, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipSkillIcon;
      if ( !gameObject )
        goto LABEL_39;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20405/*"img_bond_category"*/, 0);
    }
  }
LABEL_28:
  equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                svtId,
                                                (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v21 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( v21 )
      {
        v22 = gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v21, 0);
        if ( v22 )
        {
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)gameObject,
              SLODWORD(v22[3].fields.m_CachedPtr) > 0 && SLODWORD(v22[3].fields.m_CachedPtr) <= limitCount,
              0);
            return;
          }
        }
      }
    }
LABEL_39:
    sub_1C6BC60(gameObject, v15);
  }
}