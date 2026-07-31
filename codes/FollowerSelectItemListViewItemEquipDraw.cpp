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
  __int64 v7; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *v9; // x21
  bool v10; // w0
  __int64 v11; // x2
  UISprite_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  __int64 v16; // x2
  UnityEngine_Object_o *friendShipSvtEquipSkillIcon; // x20

  if ( (byte_5932E97 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932E97 = 1;
  }
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, noneEquipSpriteName, method);
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
  v9 = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  v10 = UnityEngine_Object__op_Inequality(v9, 0, 0);
  if ( noneEquipSpriteName && v10 )
  {
    v12 = this->fields.noneEquipSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v11);
    AtlasManager__SetPartyOrganizationImage(v12, noneEquipSpriteName, 0);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
LABEL_33:
    sub_21FFECC(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v16);
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
  __int64 v13; // x1
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t v16; // w1
  const MethodInfo *v17; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_5932E95 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5932E95 = 1;
  }
  if ( !equipTarget )
    goto LABEL_10;
  v11 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      equipTarget,
      noneEquipSpriteName);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0) > 0 )
  {
    v14 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, noneEquipSpriteName);
    *(_QWORD *)&v19.fields.currentCryptoKey = v14;
    *(_QWORD *)&v19.fields.fakeValue = v15;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v19, 0);
    FollowerSelectItemListViewItemEquipDraw__SetEquip_39270960(
      this,
      v16,
      equipTarget->fields.limitCount,
      equipTarget->fields._ImagePartsGroupIdxs_k__BackingField,
      isDisplayFriendShipSkillIcon,
      isChangeFriendShipSvtEquipSkill,
      v17);
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


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewItemEquipDraw__SetEquip_39270960(
        FollowerSelectItemListViewItemEquipDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *imagePartsGroupIdxs,
        bool isDisplayFriendShipSkillIcon,
        bool isChangeFriendShipSvtEquipSkill,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x25
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *noneEquipSprite; // x25
  __int64 v17; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  UISprite_o *v21; // x25
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *friendShipSvtEquipSkillIcon; // x24
  __int64 v25; // x2
  UISprite_o *v26; // x23
  int v27; // w8
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_Component_o *v31; // x8
  UnityEngine_Component_o *v32; // x20
  int32_t m_CachedPtr; // w8
  bool v35; // w1

  if ( (byte_5932E96 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_20606/*"func_group_icon_385"*/);
    sub_21FFC50(&StringLiteral_21282/*"img_bond_category"*/);
    byte_5932E96 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0, 0) )
  {
    noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
      if ( !gameObject )
        goto LABEL_47;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v21 = (UISprite_o *)this->fields.equipSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19, v20);
    AtlasManager__SetEquipFace(v21, svtId, imagePartsGroupIdxs, 0);
    friendShipSvtEquipSkillIcon = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipSkillIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
    if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipSkillIcon, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipSkillIcon;
      if ( !gameObject )
        goto LABEL_47;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isDisplayFriendShipSkillIcon, 0);
      if ( isDisplayFriendShipSkillIcon )
      {
        v26 = this->fields.friendShipSvtEquipSkillIcon;
        v27 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
        if ( isChangeFriendShipSvtEquipSkill )
        {
          if ( !v27 )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v25);
          AtlasManager__SetEventUI(v26, (System_String_o *)StringLiteral_20606/*"func_group_icon_385"*/, 0);
        }
        else
        {
          if ( !v27 )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v25);
          AtlasManager__SetCommon(v26, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipSkillIcon;
          if ( !gameObject )
            goto LABEL_47;
          UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_21282/*"img_bond_category"*/, 0);
        }
      }
    }
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v25);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29, v30);
      gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                  svtId,
                                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v31 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
        if ( v31 )
        {
          v32 = gameObject;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v31, 0);
          if ( v32 )
          {
            if ( gameObject )
            {
              m_CachedPtr = v32[3].fields.m_CachedPtr;
              v35 = m_CachedPtr > 0 && m_CachedPtr <= limitCount;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v35, 0);
              return;
            }
          }
        }
      }
LABEL_47:
      sub_21FFECC(gameObject, v17);
    }
  }
}