void __fastcall GrandServantListItemEquipDraw___ctor(GrandServantListItemEquipDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListItemEquipDraw__Initialize(
        GrandServantListItemEquipDraw_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  UISprite_o *noneSprite; // x19
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  int v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B173BE & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&int_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_19402/*"formation_blank_grand_{0:D2}"*/, v8);
    byte_4B173BE = 1;
  }
  noneSprite = this->fields.noneSprite;
  v12 = index + 2;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method, v3, v4);
  v11 = System_String__Format((System_String_o *)StringLiteral_19402/*"formation_blank_grand_{0:D2}"*/, v10, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(noneSprite, v11, 0LL);
}


void __fastcall GrandServantListItemEquipDraw__Setup(
        GrandServantListItemEquipDraw_o *this,
        UserServantEntity_o *equipUserServantEntity,
        bool isFriendShipSvtEquip,
        bool equipFriendShipSkillChange,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x23
  __int64 v14; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v16; // x22
  UISprite_o *equipSprite; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  int32_t v20; // w22
  int32_t v21; // w0
  __int64 v22; // x8
  int32_t v23; // w20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B173BF & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, equipUserServantEntity);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_19543/*"func_group_icon_385"*/, v11);
    sub_1BCAFF8(&StringLiteral_20158/*"img_bond_category"*/, v12);
    byte_4B173BF = 1;
  }
  if ( !equipUserServantEntity )
  {
    GrandServantListItemEquipDraw__SetupEmpty(this, (const MethodInfo *)equipUserServantEntity);
    return;
  }
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
LABEL_26:
      sub_1BCB254(gameObject, v14);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isFriendShipSvtEquip, 0LL);
    if ( isFriendShipSvtEquip )
    {
      v16 = this->fields.friendShipSvtEquipIconSprite;
      if ( AtlasManager_TypeInfo->_2.cctor_finished )
      {
        if ( equipFriendShipSkillChange )
        {
LABEL_12:
          AtlasManager__SetEventUI(v16, (System_String_o *)StringLiteral_19543/*"func_group_icon_385"*/, 0LL);
          goto LABEL_17;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( equipFriendShipSkillChange )
          goto LABEL_12;
      }
      AtlasManager__SetCommon(v16, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
      if ( !gameObject )
        goto LABEL_26;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20158/*"img_bond_category"*/, 0LL);
    }
  }
LABEL_17:
  gameObject = (UnityEngine_Component_o *)this->fields.noneSprite;
  if ( !gameObject )
    goto LABEL_26;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_26;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  equipSprite = (UISprite_o *)this->fields.equipSprite;
  v19 = *(_QWORD *)&equipUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&equipUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v19;
  *(_QWORD *)&v26.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v26, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(equipSprite, v20, 0LL, 0LL);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(equipUserServantEntity->fields.svtId, 0LL);
  v22 = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v27.fields.fakeValue = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.fakeValue;
  v23 = v21;
  *(_QWORD *)&v27.fields.currentCryptoKey = v22;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v27, 0LL);
  GrandServantListItemEquipDraw__SetupLimitCount(this, v23, v24, v25);
}


void __fastcall GrandServantListItemEquipDraw__SetupEmpty(
        GrandServantListItemEquipDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *noneSprite; // x0
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20

  if ( (byte_4B173C0 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v3);
    byte_4B173C0 = 1;
  }
  noneSprite = (UnityEngine_Component_o *)this->fields.noneSprite;
  if ( !noneSprite )
    goto LABEL_18;
  noneSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneSprite, 0LL);
  if ( !noneSprite )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneSprite, 1, 0LL);
  noneSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !noneSprite )
    goto LABEL_18;
  noneSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneSprite, 0LL);
  if ( !noneSprite )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneSprite, 0, 0LL);
  noneSprite = (UnityEngine_Component_o *)this->fields.limitCountSprite;
  if ( !noneSprite )
    goto LABEL_18;
  noneSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneSprite, 0LL);
  if ( !noneSprite )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneSprite, 0, 0LL);
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0LL, 0LL) )
  {
    noneSprite = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( noneSprite )
    {
      noneSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneSprite, 0LL);
      if ( noneSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneSprite, 0, 0LL);
        goto LABEL_15;
      }
    }
LABEL_18:
    sub_1BCB254(noneSprite, method);
  }
LABEL_15:
  noneSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !noneSprite )
    goto LABEL_18;
  UISprite__set_atlas((UISprite_o *)noneSprite, 0LL, 0LL);
  noneSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !noneSprite )
    goto LABEL_18;
  UISprite__set_spriteName((UISprite_o *)noneSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListItemEquipDraw__SetupLimitCount(
        GrandServantListItemEquipDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  _BOOL8 v10; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B173C1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    byte_4B173C1 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  svtId,
                                                                  (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 && !entity )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.limitCountSprite;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0LL);
  if ( limitCount >= 4 )
  {
    if ( !entity )
      goto LABEL_15;
    v10 = SLODWORD(entity[5].monitor) >= limitCount;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !Master_object )
LABEL_15:
    sub_1BCB254(Master_object, v10);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v10, 0LL);
}