void GrandServantListItemEquipDraw___ctor(GrandServantListItemEquipDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListItemEquipDraw__Initialize(
        GrandServantListItemEquipDraw_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UISprite_o *noneSprite; // x19
  Il2CppObject *v6; // x0
  System_String_o *v7; // x20
  int v8; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC2166 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_19649/*"formation_blank_grand_{0:D2}"*/);
    byte_4CC2166 = 1;
  }
  noneSprite = this->fields.noneSprite;
  v8 = index + 2;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  v7 = System_String__Format((System_String_o *)StringLiteral_19649/*"formation_blank_grand_{0:D2}"*/, v6, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(noneSprite, v7, 0);
}


void GrandServantListItemEquipDraw__Setup(
        GrandServantListItemEquipDraw_o *this,
        UserServantEntity_o *equipUserServantEntity,
        bool isFriendShipSvtEquip,
        bool equipFriendShipSkillChange,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  __int64 v12; // x8
  int32_t v13; // w22
  int32_t v14; // w0
  const MethodInfo *v15; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CC2167 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC2167 = 1;
  }
  if ( equipUserServantEntity )
  {
    v10 = *(_QWORD *)&equipUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&equipUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v10;
    *(_QWORD *)&v16.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v16, 0);
    v12 = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v17.fields.fakeValue = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.fakeValue;
    v13 = v11;
    *(_QWORD *)&v17.fields.currentCryptoKey = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v17, 0);
    GrandServantListItemEquipDraw__Setup_33206336(
      this,
      v13,
      v14,
      isFriendShipSvtEquip,
      equipFriendShipSkillChange,
      0,
      v15);
  }
  else
  {
    GrandServantListItemEquipDraw__SetupEmpty(this, (const MethodInfo *)equipUserServantEntity);
  }
}


void GrandServantListItemEquipDraw__SetupEmpty(GrandServantListItemEquipDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *noneSprite; // x0
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20

  if ( (byte_4CC216A & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC216A = 1;
  }
  noneSprite = (UnityEngine_Component_o *)this->fields.noneSprite;
  if ( !noneSprite )
    goto LABEL_18;
  noneSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneSprite, 0);
  if ( !noneSprite )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneSprite, 1, 0);
  noneSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !noneSprite )
    goto LABEL_18;
  noneSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneSprite, 0);
  if ( !noneSprite )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneSprite, 0, 0);
  noneSprite = (UnityEngine_Component_o *)this->fields.limitCountSprite;
  if ( !noneSprite )
    goto LABEL_18;
  noneSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneSprite, 0);
  if ( !noneSprite )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneSprite, 0, 0);
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
  {
    noneSprite = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( noneSprite )
    {
      noneSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneSprite, 0);
      if ( noneSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneSprite, 0, 0);
        goto LABEL_15;
      }
    }
LABEL_18:
    sub_1C71608(noneSprite, method);
  }
LABEL_15:
  noneSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !noneSprite )
    goto LABEL_18;
  UISprite__set_atlas((UISprite_o *)noneSprite, 0, 0);
  noneSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !noneSprite )
    goto LABEL_18;
  UISprite__set_spriteName((UISprite_o *)noneSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void GrandServantListItemEquipDraw__SetupLimitCount(
        GrandServantListItemEquipDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  _BOOL8 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC216B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_4CC216B = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  svtId,
                                                                  (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 && !entity )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.limitCountSprite;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( limitCount >= 4 )
  {
    if ( !entity )
      goto LABEL_15;
    v8 = SLODWORD(entity[5].monitor) >= limitCount;
  }
  else
  {
    v8 = 0;
  }
  if ( !Master_object )
LABEL_15:
    sub_1C71608(Master_object, v8);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v8, 0);
}


void GrandServantListItemEquipDraw__Setup_33201480(
        GrandServantListItemEquipDraw_o *this,
        EquipTargetInfo_o *equipTarget,
        bool isFriendShipSvtEquip,
        bool equipFriendShipSkillChange,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w0
  const MethodInfo *v14; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4CC2168 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC2168 = 1;
  }
  if ( !equipTarget )
    goto LABEL_10;
  v10 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v15, 0) > 0 )
  {
    v12 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v16, 0);
    GrandServantListItemEquipDraw__Setup_33206336(
      this,
      v13,
      equipTarget->fields.limitCount,
      isFriendShipSvtEquip,
      equipFriendShipSkillChange,
      equipTarget->fields._ImagePartsGroupIdxs_k__BackingField,
      v14);
  }
  else
  {
LABEL_10:
    GrandServantListItemEquipDraw__SetupEmpty(this, (const MethodInfo *)equipTarget);
  }
}


void GrandServantListItemEquipDraw__Setup_33206336(
        GrandServantListItemEquipDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isFriendShipSvtEquip,
        bool equipFriendShipSkillChange,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x25
  __int64 v14; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v16; // x24
  UISprite_o *equipSprite; // x23
  const MethodInfo *v18; // x3

  if ( (byte_4CC2169 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_19791/*"func_group_icon_385"*/);
    sub_1C713B0(&StringLiteral_20418/*"img_bond_category"*/);
    byte_4CC2169 = 1;
  }
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
LABEL_22:
      sub_1C71608(gameObject, v14);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isFriendShipSvtEquip, 0);
    if ( isFriendShipSvtEquip )
    {
      v16 = this->fields.friendShipSvtEquipIconSprite;
      if ( AtlasManager_TypeInfo->_2.cctor_finished )
      {
        if ( equipFriendShipSkillChange )
        {
LABEL_11:
          AtlasManager__SetEventUI(v16, (System_String_o *)StringLiteral_19791/*"func_group_icon_385"*/, 0);
          goto LABEL_15;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( equipFriendShipSkillChange )
          goto LABEL_11;
      }
      AtlasManager__SetCommon(v16, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
      if ( !gameObject )
        goto LABEL_22;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20418/*"img_bond_category"*/, 0);
    }
  }
LABEL_15:
  gameObject = (UnityEngine_Component_o *)this->fields.noneSprite;
  if ( !gameObject )
    goto LABEL_22;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_22;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  equipSprite = (UISprite_o *)this->fields.equipSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(equipSprite, svtId, imagePartsGroupIdxs, 0);
  GrandServantListItemEquipDraw__SetupLimitCount(this, svtId, limitCount, v18);
}