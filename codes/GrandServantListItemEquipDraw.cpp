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
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x20
  int v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593322B & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20462/*"formation_blank_grand_{0:D2}"*/);
    byte_593322B = 1;
  }
  noneSprite = this->fields.noneSprite;
  v10 = index + 2;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v10);
  v9 = System_String__Format((System_String_o *)StringLiteral_20462/*"formation_blank_grand_{0:D2}"*/, v6, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v8);
  AtlasManager__SetGrandServantListImage(noneSprite, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v14; // w2
  const MethodInfo *v15; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_593322C & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593322C = 1;
  }
  if ( equipUserServantEntity )
  {
    v9 = *(_QWORD *)&equipUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&equipUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        equipUserServantEntity,
        isFriendShipSvtEquip);
    *(_QWORD *)&v16.fields.currentCryptoKey = v9;
    *(_QWORD *)&v16.fields.fakeValue = v10;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0);
    v12 = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v17.fields.fakeValue = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.fakeValue;
    v13 = v11;
    *(_QWORD *)&v17.fields.currentCryptoKey = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v17, 0);
    GrandServantListItemEquipDraw__Setup_39663892(
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
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20

  if ( (byte_593322F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593322F = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
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
    sub_21FFECC(noneSprite, method);
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


// local variable allocation has failed, the output may be wrong!
void GrandServantListItemEquipDraw__SetupLimitCount(
        GrandServantListItemEquipDraw_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v7; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  _BOOL8 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5933230 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_5933230 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  svtId,
                                                                  (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
    v9 = SLODWORD(entity[5].monitor) >= limitCount;
  }
  else
  {
    v9 = 0;
  }
  if ( !Master_object )
LABEL_15:
    sub_21FFECC(Master_object, v9);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListItemEquipDraw__Setup_39659288(
        GrandServantListItemEquipDraw_o *this,
        EquipTargetInfo_o *equipTarget,
        bool isFriendShipSvtEquip,
        bool equipFriendShipSkillChange,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  __int64 v11; // x2
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t v14; // w1
  const MethodInfo *v15; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_593322D & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593322D = 1;
  }
  if ( !equipTarget )
    goto LABEL_10;
  v9 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      equipTarget,
      isFriendShipSvtEquip);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0) > 0 )
  {
    v12 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTarget, v11);
    *(_QWORD *)&v17.fields.currentCryptoKey = v12;
    *(_QWORD *)&v17.fields.fakeValue = v13;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v17, 0);
    GrandServantListItemEquipDraw__Setup_39663892(
      this,
      v14,
      equipTarget->fields.limitCount,
      isFriendShipSvtEquip,
      equipFriendShipSkillChange,
      equipTarget->fields._ImagePartsGroupIdxs_k__BackingField,
      v15);
  }
  else
  {
LABEL_10:
    GrandServantListItemEquipDraw__SetupEmpty(this, (const MethodInfo *)equipTarget);
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListItemEquipDraw__Setup_39663892(
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
  __int64 v16; // x2
  UISprite_o *v17; // x24
  int v18; // w8
  __int64 v19; // x1
  __int64 v20; // x2
  UISprite_o *equipSprite; // x23
  const MethodInfo *v22; // x3

  if ( (byte_593322E & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_20606/*"func_group_icon_385"*/);
    sub_21FFC50(&StringLiteral_21282/*"img_bond_category"*/);
    byte_593322E = 1;
  }
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isFriendShipSvtEquip, 0);
        if ( !isFriendShipSvtEquip )
          goto LABEL_17;
        v17 = this->fields.friendShipSvtEquipIconSprite;
        v18 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
        if ( equipFriendShipSkillChange )
        {
          if ( !v18 )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v16);
          AtlasManager__SetEventUI(v17, (System_String_o *)StringLiteral_20606/*"func_group_icon_385"*/, 0);
          goto LABEL_17;
        }
        if ( !v18 )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v16);
        AtlasManager__SetCommon(v17, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
        if ( gameObject )
        {
          UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_21282/*"img_bond_category"*/, 0);
          goto LABEL_17;
        }
      }
    }
LABEL_24:
    sub_21FFECC(gameObject, v14);
  }
LABEL_17:
  gameObject = (UnityEngine_Component_o *)this->fields.noneSprite;
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  equipSprite = (UISprite_o *)this->fields.equipSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19, v20);
  AtlasManager__SetEquipFace(equipSprite, svtId, imagePartsGroupIdxs, 0);
  GrandServantListItemEquipDraw__SetupLimitCount(this, svtId, limitCount, v22);
}