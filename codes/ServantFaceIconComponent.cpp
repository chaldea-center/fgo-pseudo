void ServantFaceIconComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CC68BD & 1) == 0 )
  {
    sub_1C713B0(&ServantFaceIconComponent_TypeInfo);
    byte_4CC68BD = 1;
  }
  *ServantFaceIconComponent_TypeInfo->static_fields = (struct ServantFaceIconComponent_StaticFields)0x1000186A1LL;
}


void ServantFaceIconComponent___ctor(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC68BC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
    byte_4CC68BC = 1;
  }
  this->fields.collectionStatus = 2;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserSvtEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.equipUserSvtEntityList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
  this->fields.equipTargetInfoList = (struct System_Collections_Generic_List_EquipTargetInfo__o *)v10;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfoList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SwitchParameterDisplayComponent___ctor((SwitchParameterDisplayComponent_o *)this, 0);
}


void ServantFaceIconComponent__AdjustDispLimitCountSpritePosY(
        ServantFaceIconComponent_o *this,
        float posY,
        const MethodInfo *method)
{
  UnityEngine_Object_o *limitCountSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CC68AE & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68AE = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.limitCountSprite;
    if ( !v7 )
      sub_1C71608(0, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, posY, 0);
  }
}


void ServantFaceIconComponent__AdjustIconLabelPos(
        ServantFaceIconComponent_o *this,
        float offsetX,
        float offsetY,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *transform; // x0
  float x; // s11
  float y; // s12
  float z; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC68B1 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68B1 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !transform )
      goto LABEL_14;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_14;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( !this->fields.isAdjustIconLabelPos )
      this->fields.iconLabelInitPos = localPosition;
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !transform || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
LABEL_14:
      sub_1C71608(transform, v8);
    v14.fields.x = x + offsetX;
    v14.fields.y = y + offsetY;
    v14.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v14, 0);
    this->fields.isAdjustIconLabelPos = 1;
  }
}


void ServantFaceIconComponent__AdjustIconLabelScale(
        ServantFaceIconComponent_o *this,
        UnityEngine_Vector3_o scale,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  if ( (byte_4CC68B3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68B3 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0, 0) )
  {
    if ( !this->fields.isAdjustIconLabelScale )
    {
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( !transform )
        goto LABEL_16;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_16;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      this->fields.iconLabelInitScale = localScale;
      if ( !transform )
        goto LABEL_16;
      this->fields.textLabelInitSize = UIIconLabel__GetTextLabelSize((UIIconLabel_o *)transform, 0);
    }
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( transform )
    {
      UIIconLabel__SetTextLabelPixelPerfect((UIIconLabel_o *)transform, 0);
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( transform )
      {
        transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
        if ( transform )
        {
          v11.fields.x = x;
          v11.fields.y = y;
          v11.fields.z = z;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v11, 0);
          this->fields.isAdjustIconLabelScale = 1;
          return;
        }
      }
    }
LABEL_16:
    sub_1C71608(transform, v8);
  }
}


void ServantFaceIconComponent__AdjustRaritySpritePosY(
        ServantFaceIconComponent_o *this,
        float posY,
        const MethodInfo *method)
{
  UnityEngine_Component_o *raritySprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    sub_1C71608(0, method);
  gameObject = UnityEngine_Component__get_gameObject(raritySprite, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, posY, 0);
}


void ServantFaceIconComponent__Awake(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *typeSprite; // x0
  unsigned int localPosition; // s0
  float v5; // s8
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !typeSprite
    || (typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0)) == 0
    || (localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)typeSprite, 0),
        (typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite) == 0)
    || (v5 = *(float *)&localPosition,
        (typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0)) == 0) )
  {
    sub_1C71608(typeSprite, method);
  }
  v6.fields.z = 0.0;
  v6.fields.y = -64.0;
  v6.fields.x = v5;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)typeSprite, v6, 0);
}


void ServantFaceIconComponent__Blank(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *frameSprite; // x0

  if ( (byte_4CC688B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20444/*"img_commonbg_02"*/);
    byte_4CC688B = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  frameSprite = this->fields.frameSprite;
  if ( !frameSprite )
    sub_1C71608(0, v3);
  UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_20444/*"img_commonbg_02"*/, 0);
}


void ServantFaceIconComponent__ChangeClassIcon(
        ServantFaceIconComponent_o *this,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  UISprite_o *classSprite; // x22
  const MethodInfo *v8; // x1

  if ( (byte_4CC68B6 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    byte_4CC68B6 = 1;
  }
  classSprite = this->fields.classSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClass(classSprite, classId, frameType, 0, 0);
  ServantFaceIconComponent__ReSizeClassIcon(this, v8);
}


void ServantFaceIconComponent__ChangeDisplayEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  void *equipUserSvtEntityList; // x0
  const MethodInfo *v4; // x1
  int v5; // w8
  int v6; // w8
  __int64 v7; // x20
  __int64 v8; // x21
  const MethodInfo *v9; // x2
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w20
  _DWORD *v13; // x8
  int32_t v14; // w21
  const MethodInfo *v15; // x5
  __int64 v16; // x20
  __int64 v17; // x21
  const MethodInfo *v18; // x2
  Il2CppObject *Item; // x1
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4CC6887 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC6887 = 1;
  }
  equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
  v4 = (const MethodInfo *)(unsigned int)(this->fields.displayEquipIndex + 1);
  this->fields.displayEquipIndex = (int)v4;
  if ( !equipUserSvtEntityList )
    goto LABEL_35;
  v5 = *((_DWORD *)equipUserSvtEntityList + 6);
  if ( v5 < 2 )
  {
    equipUserSvtEntityList = this->fields.equipTargetInfoList;
    if ( !equipUserSvtEntityList )
      goto LABEL_35;
    v6 = *((_DWORD *)equipUserSvtEntityList + 6);
    if ( v6 >= 2 )
    {
      if ( (int)v4 >= v6 )
      {
        LODWORD(v4) = 0;
        this->fields.displayEquipIndex = 0;
      }
      if ( System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
             (int32_t)v4,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__) )
      {
        equipUserSvtEntityList = this->fields.equipTargetInfoList;
        if ( !equipUserSvtEntityList )
          goto LABEL_35;
        equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
                                   this->fields.displayEquipIndex,
                                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
        if ( !equipUserSvtEntityList )
          goto LABEL_35;
        v8 = *((_QWORD *)equipUserSvtEntityList + 7);
        v7 = *((_QWORD *)equipUserSvtEntityList + 8);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = v8;
        *(_QWORD *)&v21.fields.fakeValue = v7;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v21, 0) >= 1 )
        {
          ServantFaceIconComponent__SetActiveEquipSprite(this, 1, v9);
          equipUserSvtEntityList = this->fields.equipTargetInfoList;
          if ( equipUserSvtEntityList )
          {
            equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
                                       this->fields.displayEquipIndex,
                                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
            if ( equipUserSvtEntityList )
            {
              v11 = *((_QWORD *)equipUserSvtEntityList + 7);
              v10 = *((_QWORD *)equipUserSvtEntityList + 8);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v22.fields.currentCryptoKey = v11;
              *(_QWORD *)&v22.fields.fakeValue = v10;
              equipUserSvtEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                 v22,
                                                 0);
              if ( this->fields.equipTargetInfoList )
              {
                v12 = (int)equipUserSvtEntityList;
                equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)this->fields.equipTargetInfoList,
                                           this->fields.displayEquipIndex,
                                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
                if ( equipUserSvtEntityList )
                {
                  v13 = equipUserSvtEntityList;
                  equipUserSvtEntityList = this->fields.equipTargetInfoList;
                  if ( equipUserSvtEntityList )
                  {
                    v14 = v13[18];
                    equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
                                               this->fields.displayEquipIndex,
                                               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
                    if ( equipUserSvtEntityList )
                    {
                      ServantFaceIconComponent__SetEquip_41273364(
                        this,
                        0,
                        v12,
                        v14,
                        *((System_Int32_array **)equipUserSvtEntityList + 17),
                        v15);
                      return;
                    }
                  }
                }
              }
            }
          }
LABEL_35:
          sub_1C71608(equipUserSvtEntityList, v4);
        }
      }
    }
    goto LABEL_34;
  }
  if ( (int)v4 >= v5 )
  {
    LODWORD(v4) = 0;
    this->fields.displayEquipIndex = 0;
  }
  if ( !System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
          (int32_t)v4,
          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
    goto LABEL_34;
  equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
  if ( !equipUserSvtEntityList )
    goto LABEL_35;
  equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
                             this->fields.displayEquipIndex,
                             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !equipUserSvtEntityList )
    goto LABEL_35;
  v17 = *((_QWORD *)equipUserSvtEntityList + 10);
  v16 = *((_QWORD *)equipUserSvtEntityList + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v17;
  *(_QWORD *)&v23.fields.fakeValue = v16;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v23, 0) < 1 )
  {
LABEL_34:
    ServantFaceIconComponent__SetEmptyEquipSprite(this, v4);
    return;
  }
  ServantFaceIconComponent__SetActiveEquipSprite(this, 1, v18);
  equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
  if ( !equipUserSvtEntityList )
    goto LABEL_35;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
           this->fields.displayEquipIndex,
           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  ServantFaceIconComponent__SetEquip(this, (UserServantEntity_o *)Item, v20);
}


void ServantFaceIconComponent__Clear(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UISprite_o *backSprite; // x20
  const MethodInfo *v16; // x1
  UISprite_o *faceSprite; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *costumeIconSprite; // x20
  UnityEngine_Object_o *limitCountSprite; // x20
  UnityEngine_Object_o *limitCountIcon; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UISprite_o *v23; // x20
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *shiningIcon; // x20
  UnityEngine_Object_o *faceEffectSprite; // x20

  if ( (byte_4CC688A & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC688A = 1;
  }
  this->fields.isGrand = 0;
  this->fields.info1 = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.info1, 0, v2, v3, v4, v5, v6, v7);
  this->fields.info2 = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.info2, 0, v9, v10, v11, v12, v13, v14);
  backSprite = this->fields.backSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(backSprite, 0);
  AtlasManager__SetCommon(this->fields.typeSprite, 0);
  faceSprite = this->fields.backSprite;
  if ( !faceSprite )
    goto LABEL_53;
  UISprite__set_spriteName(faceSprite, 0, 0);
  faceSprite = this->fields.faceSprite;
  if ( !faceSprite )
    goto LABEL_53;
  UISprite__set_spriteName(faceSprite, 0, 0);
  faceSprite = this->fields.frameSprite;
  if ( !faceSprite )
    goto LABEL_53;
  UISprite__set_spriteName(faceSprite, 0, 0);
  faceSprite = this->fields.typeSprite;
  if ( !faceSprite )
    goto LABEL_53;
  UISprite__set_spriteName(faceSprite, 0, 0);
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    faceSprite = this->fields.classSprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0, 0);
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(costumeIconSprite, 0, 0) )
  {
    faceSprite = this->fields.costumeIconSprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0, 0);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0, 0) )
  {
    faceSprite = this->fields.limitCountSprite;
    if ( !faceSprite )
      goto LABEL_53;
    faceSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)faceSprite, 0);
    if ( !faceSprite )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, 0, 0);
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0, 0) )
  {
    faceSprite = (UISprite_o *)this->fields.limitCountIcon;
    if ( !faceSprite )
      goto LABEL_53;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)faceSprite, v16);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    v23 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(v23, 0);
    faceSprite = this->fields.raritySprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0, 0);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) )
  {
    faceSprite = (UISprite_o *)this->fields.iconLabel;
    if ( !faceSprite )
      goto LABEL_53;
    UIIconLabel__Clear((UIIconLabel_o *)faceSprite, 0);
  }
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0, 0) )
  {
    faceSprite = (UISprite_o *)this->fields.shiningIcon;
    if ( !faceSprite )
      goto LABEL_53;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)faceSprite, v16);
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(faceEffectSprite, 0, 0) )
  {
    faceSprite = this->fields.faceEffectSprite;
    if ( faceSprite )
    {
      UISprite__set_spriteName(faceSprite, 0, 0);
      goto LABEL_52;
    }
LABEL_53:
    sub_1C71608(faceSprite, v16);
  }
LABEL_52:
  ServantFaceIconComponent__ClearEquip(this, v16);
}


void ServantFaceIconComponent__ClearEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ServantFaceIconComponent_o *v2; // x19
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  int32_t v7; // w2
  int v8; // w9
  UnityEngine_Object_o *switchEquipInfo; // x20
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20

  v2 = this;
  if ( (byte_4CC68A7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EquipTargetInfo__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    this = (ServantFaceIconComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68A7 = 1;
  }
  equipUserSvtEntityList = v2->fields.equipUserSvtEntityList;
  v2->fields.displayEquipIndex = 0;
  if ( !equipUserSvtEntityList )
    goto LABEL_44;
  size = equipUserSvtEntityList->fields._size;
  v5 = equipUserSvtEntityList->fields._version + 1;
  equipUserSvtEntityList->fields._size = 0;
  equipUserSvtEntityList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipUserSvtEntityList->fields._items, 0, size, 0);
  equipTargetInfoList = v2->fields.equipTargetInfoList;
  if ( !equipTargetInfoList )
    goto LABEL_44;
  v7 = equipTargetInfoList->fields._size;
  v8 = equipTargetInfoList->fields._version + 1;
  equipTargetInfoList->fields._size = 0;
  equipTargetInfoList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)equipTargetInfoList->fields._items, 0, v7, 0);
  switchEquipInfo = (UnityEngine_Object_o *)v2->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchEquipInfo, 0, 0) )
  {
    this = (ServantFaceIconComponent_o *)v2->fields.switchEquipInfo;
    if ( !this )
      goto LABEL_44;
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)this, 0);
  }
  v2->fields.equipFriendShipSkillChange = 0;
  equipSprite = (UnityEngine_Object_o *)v2->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0, 0) )
  {
    this = (ServantFaceIconComponent_o *)v2->fields.noneEquipSprite;
    if ( !this )
      goto LABEL_44;
    this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    hideEquipSprite = (UnityEngine_Object_o *)v2->fields.hideEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
    {
      this = (ServantFaceIconComponent_o *)v2->fields.hideEquipSprite;
      if ( !this )
        goto LABEL_44;
      this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    this = (ServantFaceIconComponent_o *)v2->fields.equipSprite;
    if ( !this )
      goto LABEL_44;
    UISprite__set_spriteName((UISprite_o *)this, 0, 0);
    equipLimitCountSprite = (UnityEngine_Object_o *)v2->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      this = (ServantFaceIconComponent_o *)v2->fields.equipLimitCountSprite;
      if ( !this )
        goto LABEL_44;
      this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    rarity2Sprite = (UnityEngine_Object_o *)v2->fields.rarity2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0, 0) )
    {
      this = (ServantFaceIconComponent_o *)v2->fields.rarity2Sprite;
      if ( !this )
        goto LABEL_44;
      UISprite__set_spriteName((UISprite_o *)this, 0, 0);
    }
    friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)v2->fields.friendShipSvtEquipIconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
    {
      this = (ServantFaceIconComponent_o *)v2->fields.friendShipSvtEquipIconSprite;
      if ( this )
      {
        this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          return;
        }
      }
LABEL_44:
      sub_1C71608(this, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__ClearEquip_41288212(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *v4; // x19
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  int32_t size; // w2
  int v7; // w9
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  int32_t v9; // w2
  int v10; // w9
  UnityEngine_Object_o *switchEquipInfo; // x21
  UnityEngine_Object_o *equipSprite; // x21
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x21
  char v14; // w20
  UISprite_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Object_o *v22; // x20

  v4 = this;
  if ( (byte_4CC68A8 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EquipTargetInfo__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (ServantFaceIconComponent_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC68A8 = 1;
  }
  equipUserSvtEntityList = v4->fields.equipUserSvtEntityList;
  v4->fields.displayEquipIndex = 0;
  if ( !equipUserSvtEntityList )
    goto LABEL_70;
  size = equipUserSvtEntityList->fields._size;
  v7 = equipUserSvtEntityList->fields._version + 1;
  equipUserSvtEntityList->fields._size = 0;
  equipUserSvtEntityList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipUserSvtEntityList->fields._items, 0, size, 0);
  equipTargetInfoList = v4->fields.equipTargetInfoList;
  if ( !equipTargetInfoList )
    goto LABEL_70;
  v9 = equipTargetInfoList->fields._size;
  v10 = equipTargetInfoList->fields._version + 1;
  equipTargetInfoList->fields._size = 0;
  equipTargetInfoList->fields._version = v10;
  if ( v9 >= 1 )
    System_Array__Clear((System_Array_o *)equipTargetInfoList->fields._items, 0, v9, 0);
  switchEquipInfo = (UnityEngine_Object_o *)v4->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchEquipInfo, 0, 0) )
  {
    this = (ServantFaceIconComponent_o *)v4->fields.switchEquipInfo;
    if ( !this )
      goto LABEL_70;
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)this, 0);
  }
  v4->fields.equipFriendShipSkillChange = 0;
  equipSprite = (UnityEngine_Object_o *)v4->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0, 0) )
  {
    friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)v4->fields.friendShipSvtEquipIconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
    {
      this = (ServantFaceIconComponent_o *)v4->fields.friendShipSvtEquipIconSprite;
      if ( !this )
        goto LABEL_70;
      this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    this = (ServantFaceIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ServantFaceIconComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( this )
      {
        this = (ServantFaceIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               baseSvtId,
                                               (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( this )
        {
          this = (ServantFaceIconComponent_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0);
          if ( v4->fields.noneEquipSprite )
          {
            v14 = (char)this;
            this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v4->fields.noneEquipSprite,
                                                   0);
            if ( this )
            {
              if ( (v14 & 1) != 0 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                noneEquipSprite = v4->fields.noneEquipSprite;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEmptyEquipSprite(noneEquipSprite, 0, 1, 0);
                hideEquipSprite = (UnityEngine_Object_o *)v4->fields.hideEquipSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
                {
                  this = (ServantFaceIconComponent_o *)v4->fields.hideEquipSprite;
                  if ( !this )
                    goto LABEL_70;
                  this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
                  if ( !this )
                    goto LABEL_70;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                }
                this = (ServantFaceIconComponent_o *)v4->fields.equipSprite;
                if ( !this )
                  goto LABEL_70;
                UISprite__set_spriteName((UISprite_o *)this, 0, 0);
                equipLimitCountSprite = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
                {
                  this = (ServantFaceIconComponent_o *)v4->fields.equipLimitCountSprite;
                  if ( !this )
                    goto LABEL_70;
                  this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
                  if ( !this )
                    goto LABEL_70;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                }
                rarity2Sprite = (UnityEngine_Object_o *)v4->fields.rarity2Sprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (ServantFaceIconComponent_o *)UnityEngine_Object__op_Inequality(rarity2Sprite, 0, 0);
                if ( ((unsigned __int8)this & 1) == 0 )
                  return;
                raritySprite = v4->fields.raritySprite;
                if ( raritySprite )
                {
                  this = (ServantFaceIconComponent_o *)v4->fields.rarity2Sprite;
                  if ( this )
                  {
                    UISprite__set_spriteName((UISprite_o *)this, raritySprite->fields.mSpriteName, 0);
                    this = (ServantFaceIconComponent_o *)v4->fields.rarity2Sprite;
                    if ( this )
                    {
                      ((void (__fastcall *)(ServantFaceIconComponent_o *, void *))this->klass[2]._1.namespaze)(
                        this,
                        this->klass[2]._1.byval_arg.data);
                      return;
                    }
                  }
                }
              }
              else
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                v20 = (UnityEngine_Object_o *)v4->fields.hideEquipSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
                {
                  this = (ServantFaceIconComponent_o *)v4->fields.hideEquipSprite;
                  if ( !this )
                    goto LABEL_70;
                  this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
                  if ( !this )
                    goto LABEL_70;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                }
                this = (ServantFaceIconComponent_o *)v4->fields.equipSprite;
                if ( !this )
                  goto LABEL_70;
                UISprite__set_spriteName((UISprite_o *)this, 0, 0);
                v21 = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
                {
                  this = (ServantFaceIconComponent_o *)v4->fields.equipLimitCountSprite;
                  if ( !this )
                    goto LABEL_70;
                  this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
                  if ( !this )
                    goto LABEL_70;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                }
                v22 = (UnityEngine_Object_o *)v4->fields.rarity2Sprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(v22, 0, 0) )
                  return;
                this = (ServantFaceIconComponent_o *)v4->fields.rarity2Sprite;
                if ( this )
                {
                  UISprite__set_spriteName((UISprite_o *)this, 0, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_70:
    sub_1C71608(this, *(_QWORD *)&baseSvtId);
  }
}


void ServantFaceIconComponent__ClearFaceAtlas(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *faceSprite; // x0

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite || (UISprite__set_atlas(faceSprite, 0, 0), (faceSprite = this->fields.faceSprite) == 0) )
    sub_1C71608(faceSprite, method);
  UISprite__set_spriteName(faceSprite, 0, 0);
}


void ServantFaceIconComponent__ClearShiningIcon(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ShiningIconComponent_o *shiningIcon; // x0

  shiningIcon = this->fields.shiningIcon;
  if ( !shiningIcon )
    sub_1C71608(0, method);
  ShiningIconComponent__Clear(shiningIcon, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__FaceSpriteDisp(ServantFaceIconComponent_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *faceSprite; // x0
  bool v6; // w1

  faceSprite = (UnityEngine_Component_o *)this->fields.faceSprite;
  if ( !faceSprite )
    goto LABEL_11;
  faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0);
  if ( !faceSprite )
    goto LABEL_11;
  if ( !flag )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, 0, 0);
    faceSprite = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( faceSprite )
    {
      faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0);
      if ( faceSprite )
      {
        v6 = 0;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_1C71608(faceSprite, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, 1, 0);
  faceSprite = (UnityEngine_Component_o *)this->fields.iconLabel;
  if ( !faceSprite )
    goto LABEL_11;
  faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0);
  if ( !faceSprite )
    goto LABEL_11;
  v6 = 1;
LABEL_10:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, v6, 0);
}


void ServantFaceIconComponent__FadeEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ServantFaceIconComponent_o *v2; // x19
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  UnityEngine_Object_o *equipUiWidget; // x20
  struct SwitchUIWidgetComponent_o *switchEquipInfo; // x8
  const MethodInfo *v7; // x1

  v2 = this;
  if ( (byte_4CC6886 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    this = (ServantFaceIconComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC6886 = 1;
  }
  equipUserSvtEntityList = v2->fields.equipUserSvtEntityList;
  if ( !equipUserSvtEntityList )
    goto LABEL_17;
  if ( equipUserSvtEntityList->fields._size <= 1 )
  {
    equipTargetInfoList = v2->fields.equipTargetInfoList;
    if ( !equipTargetInfoList )
      goto LABEL_17;
    if ( equipTargetInfoList->fields._size < 2 )
      return;
  }
  equipUiWidget = (UnityEngine_Object_o *)v2->fields.equipUiWidget;
  if ( equipUiWidget )
  {
    switchEquipInfo = v2->fields.switchEquipInfo;
    if ( switchEquipInfo )
    {
      ((void (__fastcall *)(struct UIWidget_o *, Il2CppClass *, float))equipUiWidget->klass[1]._1.element_class)(
        v2->fields.equipUiWidget,
        equipUiWidget->klass[1]._1.castClass,
        switchEquipInfo->fields._Alpha_k__BackingField);
      equipUiWidget = (UnityEngine_Object_o *)v2->fields.equipUiWidget;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUiWidget, 0, 0) )
  {
    this = (ServantFaceIconComponent_o *)v2->fields.equipUiWidget;
    if ( this )
    {
      if ( ((float (__fastcall *)(ServantFaceIconComponent_o *, const char *))this->klass[1]._1.name)(
             this,
             this->klass[1]._1.namespaze) <= 0.0 )
        ServantFaceIconComponent__ChangeDisplayEquip(v2, v7);
      return;
    }
LABEL_17:
    sub_1C71608(this, method);
  }
}


System_String_o *ServantFaceIconComponent__GetFaceSpriteName(
        ServantFaceIconComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *faceSprite; // x8

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite )
    sub_1C71608(this, method);
  return faceSprite->fields.mSpriteName;
}


int32_t ServantFaceIconComponent__GetIconLimitCountSealAfter(
        ServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t iconLimit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4CC68B7 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC68B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
    sub_1C71608(Instance, v7);
  }
  return ServantLimitImageMaster__GetServantImageLimitSealAfter(
           (ServantLimitImageMaster_o *)Instance,
           svtId,
           iconLimit,
           0);
}


void ServantFaceIconComponent__HideEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20

  if ( (byte_4CC68AC & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68AC = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0, 0) )
  {
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite )
      goto LABEL_27;
    noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0);
    if ( !noneEquipSprite )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
      if ( !noneEquipSprite )
        goto LABEL_27;
      noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0);
      if ( !noneEquipSprite )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 1, 0);
    }
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !noneEquipSprite )
      goto LABEL_27;
    UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0, 0);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !noneEquipSprite )
        goto LABEL_27;
      noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0);
      if ( !noneEquipSprite )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0);
    }
    rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0, 0) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
      if ( noneEquipSprite )
      {
        UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0, 0);
        return;
      }
LABEL_27:
      sub_1C71608(noneEquipSprite, v4);
    }
  }
}


bool ServantFaceIconComponent__IsUseEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Component_o *noneEquipSprite; // x0
  __int64 v5; // x1
  struct UIMeshSprite_o *v6; // x8

  if ( (byte_4CC68AD & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68AD = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(equipSprite, 0, 0);
  if ( ((unsigned __int8)noneEquipSprite & 1) != 0 )
  {
    v6 = this->fields.equipSprite;
    if ( !v6 )
      goto LABEL_13;
    if ( !System_String__IsNullOrEmpty(v6->fields.mSpriteName, 0) )
      return 1;
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite
      || (noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0)) == 0 )
    {
LABEL_13:
      sub_1C71608(noneEquipSprite, v5);
    }
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)noneEquipSprite, 0) )
      return 1;
  }
  return 0;
}


// attributes: thunk
void ServantFaceIconComponent__LateUpdate(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ServantFaceIconComponent__FadeEquip(this, method);
}


void ServantFaceIconComponent__NoMount(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *backSprite; // x0

  if ( (byte_4CC688C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20484/*"img_frames_nodata"*/);
    byte_4CC688C = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_1C71608(0, v3);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_20484/*"img_frames_nodata"*/, 0);
}


void ServantFaceIconComponent__NoMount_41276396(
        ServantFaceIconComponent_o *this,
        System_String_o *imgName,
        bool isDownLoad,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  UISprite_o *backSprite; // x20

  if ( (byte_4CC688D & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    byte_4CC688D = 1;
  }
  ServantFaceIconComponent__Clear(this, (const MethodInfo *)imgName);
  backSprite = this->fields.backSprite;
  if ( isDownLoad )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(backSprite, imgName, 0);
  }
  else
  {
    if ( !backSprite )
      sub_1C71608(v7, v8);
    UISprite__set_spriteName(backSprite, imgName, 0);
  }
}


void ServantFaceIconComponent__NoMount_Support(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *backSprite; // x0

  if ( (byte_4CC688E & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20485/*"img_frames_nodata3"*/);
    byte_4CC688E = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_1C71608(0, v3);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_20485/*"img_frames_nodata3"*/, 0);
}


void ServantFaceIconComponent__NotHaveServantSet(
        ServantFaceIconComponent_o *this,
        ServantLeaderInfo_o *servantData,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w23
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v13; // x3
  int32_t IconLimitCountSealAfter; // w0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // [xsp+48h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CC6891 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC6891 = 1;
  }
  if ( servantData )
  {
    v10 = *(_QWORD *)&servantData->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&servantData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v17, 0);
    IconLimitCount = (ServantFaceIconComponent_o *)ServantLeaderInfo__getIconLimitCount(servantData, 0);
    IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                IconLimitCount,
                                v11,
                                (int32_t)IconLimitCount,
                                v13);
    ServantFaceIconComponent__Set_41283156(
      this,
      v11,
      servantData->fields.limitCount,
      IconLimitCountSealAfter,
      servantData->fields.exceedCount,
      info1,
      info2,
      2,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      v16);
    ServantFaceIconComponent__ClearEquip(this, v15);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)servantData);
  }
}


void ServantFaceIconComponent__OnDestroy(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ;
}


bool ServantFaceIconComponent__ParameterChange(
        ServantFaceIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ServantFaceIconComponent__SetIconLabel(this, count, method);
  return 1;
}


void ServantFaceIconComponent__ReSizeClassIcon(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *classSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC68B9 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68B9 = 1;
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(classSprite, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.classSprite;
    if ( !transform )
      goto LABEL_17;
    if ( transform[19].fields.m_CachedPtr )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( transform )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
        transform = (UnityEngine_Component_o *)this->fields.classSprite;
        if ( transform )
        {
          x = localScale.fields.x;
          y = localScale.fields.y;
          z = localScale.fields.z;
          UIWidget__set_pivot((UIWidget_o *)transform, 4, 0);
          transform = (UnityEngine_Component_o *)this->fields.classSprite;
          if ( transform )
          {
            ((void (__fastcall *)(UnityEngine_Component_o *, void *))transform->klass[2]._1.parent)(
              transform,
              transform->klass[2]._1.generic_class);
            transform = (UnityEngine_Component_o *)this->fields.classSprite;
            if ( transform )
            {
              transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
              if ( transform )
              {
                v10.fields.x = x;
                v10.fields.y = y;
                v10.fields.z = z;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v10, 0);
                transform = (UnityEngine_Component_o *)this->fields.classSprite;
                if ( transform )
                {
                  UIWidget__set_width((UIWidget_o *)transform, SLODWORD(transform[7].klass) / 2, 0);
                  transform = (UnityEngine_Component_o *)this->fields.classSprite;
                  if ( transform )
                  {
                    UIWidget__set_height((UIWidget_o *)transform, SHIDWORD(transform[7].klass) / 2, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_17:
      sub_1C71608(transform, v4);
    }
  }
}


void ServantFaceIconComponent__ResetIconLabelPos(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0

  if ( (byte_4CC68B2 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68B2 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0, 0) )
  {
    if ( this->fields.isAdjustIconLabelPos )
    {
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( !transform
        || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
      {
        sub_1C71608(transform, v4);
      }
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.iconLabelInitPos, 0);
    }
    this->fields.isAdjustIconLabelPos = 0;
  }
}


void ServantFaceIconComponent__ResetIconLabelScale(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v4; // x1
  UIIconLabel_o *transform; // x0
  UnityEngine_Vector2Int_o textLabelInitSize; // x1

  if ( (byte_4CC68B4 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68B4 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0, 0) )
  {
    if ( this->fields.isAdjustIconLabelScale )
    {
      transform = this->fields.iconLabel;
      if ( !transform
        || (textLabelInitSize = this->fields.textLabelInitSize,
            UIIconLabel__SetTextLabelSize(transform, textLabelInitSize, 0),
            (transform = this->fields.iconLabel) == 0)
        || (transform = (UIIconLabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
      {
        sub_1C71608(transform, v4);
      }
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, this->fields.iconLabelInitScale, 0);
    }
    this->fields.isAdjustIconLabelScale = 0;
  }
}


void ServantFaceIconComponent__Set(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isGrand,
        bool forceNotGrand,
        bool isChangeFriendShipSvtEquipSkill,
        const MethodInfo *method)
{
  void *OverwriteStatus; // x0
  __int64 v19; // x1
  bool IsGrandServant; // w0
  __int128 v21; // q0
  bool v22; // w28
  int64_t v23; // x29
  NetworkManager_c *v24; // x0
  bool v25; // w27
  bool v26; // w26
  bool v27; // w24
  int32_t IconLimitCount; // w26
  int32_t v29; // w0
  Il2CppObject *v30; // x0
  __int64 v31; // x27
  __int64 v32; // x28
  ServantLimitImageMaster_o *v33; // x25
  int32_t v34; // w25
  int32_t v35; // w26
  int32_t v36; // w0
  int32_t exceedCount; // w27
  int32_t v38; // w28
  bool IsNew; // w29
  bool IsEventJoin; // w0
  const MethodInfo *v41; // x1
  int32_t FriendIconLimitCount; // w25
  Il2CppObject *MasterData_object; // x0
  __int64 v44; // x27
  __int64 v45; // x28
  ServantLimitImageMaster_o *v46; // x26
  int32_t ServantImageLimitSealAfter; // w25
  int32_t v48; // w26
  int32_t v49; // w0
  __int64 v50; // x21
  __int64 v51; // x22
  int32_t v52; // w0
  const MethodInfo *v53; // x4
  const MethodInfo *v54; // [xsp+50h] [xbp-D0h]
  int32_t actualRarity; // [xsp+70h] [xbp-B0h]
  int32_t v56; // [xsp+74h] [xbp-ACh]
  IconLabelInfo_o *info2a; // [xsp+78h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+A0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4CC688F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC688F = 1;
  }
  if ( !userSvtEntity )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
    return;
  }
  info2a = info2;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(userSvtEntity, questRestrictionInfo, 0);
  if ( !OverwriteStatus )
    goto LABEL_34;
  actualRarity = *((_DWORD *)OverwriteStatus + 10);
  v56 = *((_DWORD *)OverwriteStatus + 6);
  IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0);
  v21 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v22 = IsGrandServant;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v58 = v59;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v58, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v24 = NetworkManager_TypeInfo;
  v25 = v22 || isGrand;
  v26 = !forceNotGrand;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v24 = NetworkManager_TypeInfo;
  }
  v27 = v25 && v26;
  if ( v23 != v24->static_fields->userIdNumber )
  {
    FriendIconLimitCount = UserServantEntity__getFriendIconLimitCount(userSvtEntity, 0, 0);
    OverwriteStatus = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( OverwriteStatus )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)OverwriteStatus,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v45 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v44 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      v46 = (ServantLimitImageMaster_o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v61.fields.currentCryptoKey = v45;
      *(_QWORD *)&v61.fields.fakeValue = v44;
      OverwriteStatus = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v61, 0);
      if ( v46 )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       v46,
                                       (int32_t)OverwriteStatus,
                                       FriendIconLimitCount,
                                       0);
        v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(userSvtEntity->fields.svtId, 0);
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(userSvtEntity->fields.limitCount, 0);
        ServantFaceIconComponent__SetIcon(
          this,
          v48,
          v56,
          v49,
          ServantImageLimitSealAfter,
          userSvtEntity->fields.exceedCount,
          info1,
          info2a,
          2,
          0,
          0,
          0,
          0,
          userSvtEntity->fields.lv,
          0,
          0,
          actualRarity,
          v27,
          v54);
        goto LABEL_28;
      }
    }
LABEL_34:
    sub_1C71608(OverwriteStatus, v19);
  }
  IconLimitCount = UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0);
  if ( questRestrictionInfo )
  {
    v29 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43730380(questRestrictionInfo, userSvtEntity, 0);
    if ( v29 >= 0 )
      IconLimitCount = v29;
  }
  OverwriteStatus = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !OverwriteStatus )
    goto LABEL_34;
  v30 = DataManager__GetMasterData_object_(
          (DataManager_o *)OverwriteStatus,
          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v32 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v33 = (ServantLimitImageMaster_o *)v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v60.fields.currentCryptoKey = v32;
  *(_QWORD *)&v60.fields.fakeValue = v31;
  OverwriteStatus = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v60, 0);
  if ( !v33 )
    goto LABEL_34;
  v34 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v33, (int32_t)OverwriteStatus, IconLimitCount, 0);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(userSvtEntity->fields.svtId, 0);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(userSvtEntity->fields.limitCount, 0);
  exceedCount = userSvtEntity->fields.exceedCount;
  v38 = v36;
  IsNew = UserServantEntity__IsNew(userSvtEntity, 0);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0);
  ServantFaceIconComponent__SetIcon(
    this,
    v35,
    v56,
    v38,
    v34,
    exceedCount,
    info1,
    info2a,
    2,
    IsNew,
    IsEventJoin,
    0,
    0,
    userSvtEntity->fields.lv,
    0,
    0,
    actualRarity,
    v27,
    v54);
LABEL_28:
  if ( equipIdList && equipIdList->max_length )
  {
    v51 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v50 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v62.fields.currentCryptoKey = v51;
    *(_QWORD *)&v62.fields.fakeValue = v50;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v62, 0);
    ServantFaceIconComponent__SetEquip_41280320(this, v52, equipIdList, isChangeFriendShipSvtEquipSkill, v53);
  }
  else
  {
    ServantFaceIconComponent__ClearEquip(this, v41);
  }
}


void ServantFaceIconComponent__SetActiveEquipSprite(
        ServantFaceIconComponent_o *this,
        bool isActiveEquipSprite,
        const MethodInfo *method)
{
  UnityEngine_Object_o *noneEquipSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *equipSprite; // x21
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20

  if ( (byte_4CC6888 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC6888 = 1;
  }
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_29;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, !isActiveEquipSprite, 0);
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_29;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActiveEquipSprite, 0);
  }
  if ( !isActiveEquipSprite )
  {
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !gameObject )
        goto LABEL_29;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          return;
        }
      }
LABEL_29:
      sub_1C71608(gameObject, v6);
    }
  }
}


void ServantFaceIconComponent__SetClassSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        bool isServantEquip,
        int32_t classId,
        int32_t frameType,
        bool isGrandServant,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classSprite; // x25
  UISprite_o *v14; // x0
  __int64 v15; // x1
  int32_t collectionStatus; // w8
  UISprite_o *v17; // x24
  const MethodInfo *v18; // x1

  if ( (byte_4CC68A1 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68A1 = 1;
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = (UISprite_o *)UnityEngine_Object__op_Equality(classSprite, 0, 0);
  if ( ((unsigned __int8)v14 & 1) == 0 )
  {
    if ( isCommandCode
      || (collectionStatus = this->fields.collectionStatus, (collectionStatus | 4) == 4)
      || (collectionStatus & 0xFFFFFFFE) == 6 )
    {
      v14 = this->fields.classSprite;
      if ( v14 )
      {
LABEL_9:
        UISprite__set_spriteName(v14, 0, 0);
        return;
      }
LABEL_17:
      sub_1C71608(v14, v15);
    }
    v17 = this->fields.classSprite;
    if ( isServantEquip )
    {
      if ( v17 )
      {
        v14 = this->fields.classSprite;
        goto LABEL_9;
      }
      goto LABEL_17;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetClass(v17, classId, frameType, isGrandServant, 0);
    ServantFaceIconComponent__ReSizeClassIcon(this, v18);
  }
}


void ServantFaceIconComponent__SetCommandCode(
        ServantFaceIconComponent_o *this,
        int32_t commandCodeId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t collectionStatus,
        bool isNew,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v14; // x1
  DataManager_o *v15; // x23
  Il2CppObject *Component_object; // x26
  const MethodInfo *v17; // x6
  int32_t saveNameList; // w23
  UnityEngine_Object_o *equipSprite; // x24
  UnityEngine_Object_o *hideEquipSprite; // x24
  UnityEngine_Object_o *equipLimitCountSprite; // x24
  UISprite_o *backSprite; // x25
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x6
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *shiningIcon; // x23
  const MethodInfo *v28; // x2
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct IconLabelInfo_o **p_info1; // x0
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct IconLabelInfo_o **p_info2; // x0
  int32_t v44; // w1
  const MethodInfo *v45; // x2

  if ( (byte_4CC68A0 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
    sub_1C713B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C713B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_20484/*"img_frames_nodata"*/);
    sub_1C713B0(&StringLiteral_20250/*"icon_common_new01"*/);
    byte_4CC68A0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                commandCodeId,
                                (const MethodInfo_3408E80 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_60;
  v15 = Instance;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.faceSprite,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_60;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_object, 0);
  }
  if ( !v15 )
LABEL_60:
    sub_1C71608(Instance, v14);
  saveNameList = (int32_t)v15->fields.saveNameList;
  this->fields.collectionStatus = collectionStatus;
  if ( collectionStatus == 2 || collectionStatus == 1 )
  {
    backSprite = this->fields.backSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommandCodeBaseIcon(backSprite, saveNameList, 0);
    AtlasManager__SetCommandCodeImage(this->fields.faceSprite, commandCodeId, 0);
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
    Instance = (DataManager_o *)this->fields.typeSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
  }
  else if ( !collectionStatus )
  {
    Instance = (DataManager_o *)this->fields.backSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20484/*"img_frames_nodata"*/, 0);
    Instance = (DataManager_o *)this->fields.faceSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
    Instance = (DataManager_o *)this->fields.typeSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
    equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_60;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_60;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
      {
        Instance = (DataManager_o *)this->fields.hideEquipSprite;
        if ( !Instance )
          goto LABEL_60;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_60;
      UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
      {
        Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
        if ( !Instance )
          goto LABEL_60;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
    }
  }
  ServantFaceIconComponent__SetClassSprite(this, 1, 0, 0, 0, 0, v17);
  ServantFaceIconComponent__SetLimitCountSprite(this, 1, 0, 0, v23);
  ServantFaceIconComponent__SetLimitCountIcon(this, 1, 0, 0, v24);
  ServantFaceIconComponent__SetRaritySprite(this, 1, saveNameList, 0, 0, 0, v25);
  ServantFaceIconComponent__SetFaceEffectSprite(this, 1, v26);
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0, 0) )
  {
    if ( isNew && this->fields.collectionStatus != 6 )
    {
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( Instance )
      {
        ShiningIconComponent__Set_41293588(
          (ShiningIconComponent_o *)Instance,
          (System_String_o *)StringLiteral_20250/*"icon_common_new01"*/,
          v28);
        goto LABEL_51;
      }
    }
    else
    {
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( Instance )
      {
        ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, v14);
        goto LABEL_51;
      }
    }
    goto LABEL_60;
  }
LABEL_51:
  ServantFaceIconComponent__ClearEquip(this, v14);
  if ( info1 && !IconLabelInfo__IsClear(info1, 0) )
  {
    this->fields.info1 = info1;
    p_info1 = &this->fields.info1;
    v36 = (int)info1;
  }
  else
  {
    this->fields.info1 = 0;
    p_info1 = &this->fields.info1;
    v36 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_info1, v36, v29, v30, v31, v32, v33, v34);
  if ( info2 && !IconLabelInfo__IsClear(info2, 0) )
  {
    this->fields.info2 = info2;
    p_info2 = &this->fields.info2;
    v44 = (int)info2;
  }
  else
  {
    this->fields.info2 = 0;
    p_info2 = &this->fields.info2;
    v44 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_info2, v44, v37, v38, v39, v40, v41, v42);
  ServantFaceIconComponent__SetIconLabel(this, 0, v45);
}


void ServantFaceIconComponent__SetCostumeIcon(
        ServantFaceIconComponent_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *costumeIconSprite; // x21
  __int64 v6; // x1
  UISprite_o *transform; // x0
  int32_t v8; // w20
  int32_t iconId; // t1
  UISprite_o *v10; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC68B8 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_23991/*"svt_costume_icon_"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC68B8 = 1;
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(costumeIconSprite, 0, 0) )
  {
    transform = this->fields.costumeIconSprite;
    if ( !transform )
      goto LABEL_21;
    UISprite__set_spriteName(transform, (System_String_o *)StringLiteral_1/*""*/, 0);
    transform = this->fields.costumeIconSprite;
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v8 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v10 = this->fields.costumeIconSprite;
        v11 = System_Int32__ToString(v8, 0);
        v12 = System_String__Concat_64031724((System_String_o *)StringLiteral_23991/*"svt_costume_icon_"*/, v11, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( AtlasManager__SetEventSprite(v10, v12, 0) )
        {
          transform = this->fields.costumeIconSprite;
          if ( transform )
          {
            UIWidget__set_pivot((UIWidget_o *)transform, 4, 0);
            transform = this->fields.costumeIconSprite;
            if ( transform )
            {
              transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
              if ( transform )
              {
                v13.fields.z = 0.0;
                v13.fields.x = -47.0;
                v13.fields.y = -42.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v13, 0);
                transform = this->fields.costumeIconSprite;
                if ( transform )
                {
                  UIWidget__set_width((UIWidget_o *)transform, 34, 0);
                  transform = this->fields.costumeIconSprite;
                  if ( transform )
                  {
                    UIWidget__set_height((UIWidget_o *)transform, 34, 0);
                    transform = this->fields.costumeIconSprite;
                    if ( transform )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
LABEL_21:
          sub_1C71608(transform, v6);
        }
      }
    }
  }
}


void ServantFaceIconComponent__SetDataNotOpened(
        ServantFaceIconComponent_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *v8; // x21
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  ServantFaceIconComponent_c *v12; // x8
  int32_t limitCount; // w22
  int32_t v14; // w23
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // [xsp+48h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v8 = this;
  if ( (byte_4CC6896 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantFaceIconComponent_o *)sub_1C713B0(&ServantFaceIconComponent_TypeInfo);
    byte_4CC6896 = 1;
  }
  if ( !equipTargetInfo )
    sub_1C71608(this, equipTargetInfo);
  v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v17, 0);
  v12 = ServantFaceIconComponent_TypeInfo;
  limitCount = equipTargetInfo->fields.limitCount;
  v14 = v11;
  if ( !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
    v12 = ServantFaceIconComponent_TypeInfo;
  }
  ServantFaceIconComponent__Set_41283156(
    v8,
    v14,
    limitCount,
    v12->static_fields->SECRET_LIMIT_COUNT,
    0,
    info1,
    info2,
    6,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    v16);
  ServantFaceIconComponent__ClearEquip(v8, v15);
}


void ServantFaceIconComponent__SetDispClassSprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *classSprite; // x0

  classSprite = (UnityEngine_Behaviour_o *)this->fields.classSprite;
  if ( !classSprite )
    sub_1C71608(0, flag);
  UnityEngine_Behaviour__set_enabled(classSprite, flag, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__SetDispLimitCountIcon(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *limitCountIcon; // x0

  limitCountIcon = (UnityEngine_Component_o *)this->fields.limitCountIcon;
  if ( !limitCountIcon
    || (limitCountIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(limitCountIcon, 0)) == 0 )
  {
    sub_1C71608(limitCountIcon, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitCountIcon, flag, 0);
}


void ServantFaceIconComponent__SetDispRaritySprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *raritySprite; // x0

  raritySprite = (UnityEngine_Behaviour_o *)this->fields.raritySprite;
  if ( !raritySprite )
    sub_1C71608(0, flag);
  UnityEngine_Behaviour__set_enabled(raritySprite, flag, 0);
}


void ServantFaceIconComponent__SetEmptyEquipSprite(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *noneEquipSprite; // x20
  UISprite_o *v5; // x20
  int32_t displayEquipIndex; // w19

  if ( (byte_4CC6889 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC6889 = 1;
  }
  ServantFaceIconComponent__SetActiveEquipSprite(this, 0, v2);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(noneEquipSprite, 0, 0) )
  {
    v5 = this->fields.noneEquipSprite;
    displayEquipIndex = this->fields.displayEquipIndex;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEmptyEquipSprite(v5, displayEquipIndex, 1, 0);
  }
}


void ServantFaceIconComponent__SetEquip(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  __int64 v8; // x8
  int32_t v9; // w20
  int32_t v10; // w3
  const MethodInfo *v11; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4CC6893 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC6893 = 1;
  }
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v12.fields.currentCryptoKey = v6;
    *(_QWORD *)&v12.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v12, 0);
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v13.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    v9 = v7;
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v13, 0);
    ServantFaceIconComponent__SetEquip_41273364(this, 0, v9, v10, 0, v11);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userServantEntity);
  }
}


void ServantFaceIconComponent__SetEquipDangling(
        ServantFaceIconComponent_o *this,
        EquipTargetInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4CC68A6 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EquipTargetInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC68A6 = 1;
  }
  ServantFaceIconComponent__NoMount(this, (const MethodInfo *)info);
  if ( info )
  {
    v6 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v6;
    *(_QWORD *)&v21.fields.fakeValue = v5;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v21, 0) )
    {
      v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v7,
        (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
      if ( !v7
        || (items = v7->fields._items,
            v17 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_1C71608(v8, v9);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)info,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v19[4] = (Il2CppClass *)info;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)info, v10, v11, v12, v13, v14, v15);
      }
      ServantFaceIconComponent__SetEquip_41286996(
        this,
        0,
        (System_Collections_Generic_List_EquipTargetInfo__o *)v7,
        0,
        v20);
    }
  }
}


void ServantFaceIconComponent__SetEquip_41273364(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x24
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *noneEquipSprite; // x23
  _BOOL8 v14; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *hideEquipSprite; // x23
  UISprite_o *v17; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  Il2CppObject *Master_object; // x0
  Il2CppObject *Entity; // x21
  int32_t monitor; // w8
  UnityEngine_Object_o *rarity2Sprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  struct UISprite_o *v24; // x8
  int32_t displayEquipIndex; // w21
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20
  UnityEngine_Object_o *v27; // x20
  _BOOL4 equipFriendShipSkillChange; // w21
  UISprite_o *v29; // x20
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  UnityEngine_Object_o *typeSprite; // x20

  if ( (byte_4CC68AB & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_19791/*"func_group_icon_385"*/);
    sub_1C713B0(&StringLiteral_20418/*"img_bond_category"*/);
    byte_4CC68AB = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0, 0) )
  {
    if ( svtId < 1 )
    {
      ServantFaceIconComponent__ClearEquip_41288212(this, baseSvtId, v12);
      return;
    }
    noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(noneEquipSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
      if ( !gameObject )
        goto LABEL_76;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_76;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_76;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
      if ( !gameObject )
        goto LABEL_76;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    v17 = (UISprite_o *)this->fields.equipSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(v17, svtId, imagePartsGroupIdxs, 0);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( Master_object )
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   svtId,
                   (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      else
        Entity = 0;
      gameObject = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !gameObject )
        goto LABEL_76;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      v14 = Entity && (monitor = (int32_t)Entity[5].monitor, monitor >= 1) && monitor <= limitCount;
      if ( !gameObject )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v14, 0);
    }
    rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0, 0) )
    {
      raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(raritySprite, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        v24 = this->fields.raritySprite;
        if ( !v24 )
          goto LABEL_76;
        gameObject = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
        if ( !gameObject )
          goto LABEL_76;
        UISprite__set_spriteName((UISprite_o *)gameObject, v24->fields.mSpriteName, 0);
      }
      gameObject = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
      if ( !gameObject )
        goto LABEL_76;
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
        gameObject,
        gameObject->klass[2]._1.generic_class);
    }
    displayEquipIndex = this->fields.displayEquipIndex;
    friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
      if ( !gameObject )
        goto LABEL_76;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_76;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, displayEquipIndex == 1, 0);
    }
    v27 = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v27, 0, 0);
    if ( displayEquipIndex != 1 || ((unsigned __int8)gameObject & 1) == 0 )
    {
LABEL_66:
      equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
      if ( equipUserSvtEntityList )
      {
        if ( equipUserSvtEntityList->fields._size > 1 )
          return;
        equipTargetInfoList = this->fields.equipTargetInfoList;
        if ( equipTargetInfoList )
        {
          if ( equipTargetInfoList->fields._size > 1 )
            return;
          typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(typeSprite, 0, 0) )
            return;
          gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
          if ( gameObject )
          {
            UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
            return;
          }
        }
      }
LABEL_76:
      sub_1C71608(gameObject, v14);
    }
    equipFriendShipSkillChange = this->fields.equipFriendShipSkillChange;
    v29 = this->fields.friendShipSvtEquipIconSprite;
    if ( AtlasManager_TypeInfo->_2.cctor_finished )
    {
      if ( this->fields.equipFriendShipSkillChange )
      {
LABEL_62:
        gameObject = (UnityEngine_Component_o *)AtlasManager__SetEventUI(v29, (System_String_o *)StringLiteral_19791/*"func_group_icon_385"*/, 0);
        goto LABEL_66;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( equipFriendShipSkillChange )
        goto LABEL_62;
    }
    AtlasManager__SetCommon(v29, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !gameObject )
      goto LABEL_76;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20418/*"img_bond_category"*/, 0);
    goto LABEL_66;
  }
}


void ServantFaceIconComponent__SetEquip_41280320(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        System_Int64_array *userSvtIdList,
        bool isChangeFriendShipSvtEquipSkill,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x23
  __int64 Master_object; // x0
  Il2CppObject *v11; // x1
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  int32_t size; // w2
  int v14; // w9
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  int32_t v16; // w2
  int v17; // w9
  UnityEngine_Object_o *switchEquipInfo; // x23
  const MethodInfo *v19; // x2
  int max_length; // w8
  il2cpp_array_size_t v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x22
  unsigned __int64 i; // x26
  int64_t v24; // x2
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  GrandQuestFolderBoardItem_o *v35; // x0
  struct System_Collections_Generic_List_UserServantEntity__o *v36; // x23
  UserServantEntity_o *v37; // x24
  struct UserServantEntity_array *items; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  __int64 v42; // x8
  struct System_Collections_Generic_List_UserServantEntity__o *v43; // x8
  UnityEngine_Object_o *v44; // x21
  UnityEngine_Object_o *equipUiWidget; // x21
  SwitchUIWidgetComponent_o *v46; // x21
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct UIWidget_o *v53; // x23
  __int64 v54; // x22
  __int64 v55; // x21
  __int64 v56; // x22
  __int64 v57; // x21
  __int64 v58; // x22
  int32_t v59; // w21
  int32_t v60; // w0
  const MethodInfo *v61; // x5
  __int64 v62; // x0
  int32_t v63; // [xsp+4h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4CC68A9 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EquipTargetInfo__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&UIWidget___TypeInfo);
    sub_1C713B0(&UserServantEntity_TypeInfo);
    byte_4CC68A9 = 1;
  }
  entity = 0;
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = UnityEngine_Object__op_Equality(equipSprite, 0, 0);
  if ( (Master_object & 1) == 0 )
  {
    equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
    this->fields.displayEquipIndex = 0;
    if ( !equipUserSvtEntityList )
      goto LABEL_70;
    size = equipUserSvtEntityList->fields._size;
    v14 = equipUserSvtEntityList->fields._version + 1;
    equipUserSvtEntityList->fields._size = 0;
    equipUserSvtEntityList->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)equipUserSvtEntityList->fields._items, 0, size, 0);
    equipTargetInfoList = this->fields.equipTargetInfoList;
    if ( !equipTargetInfoList )
      goto LABEL_70;
    v16 = equipTargetInfoList->fields._size;
    v17 = equipTargetInfoList->fields._version + 1;
    equipTargetInfoList->fields._size = 0;
    equipTargetInfoList->fields._version = v17;
    if ( v16 >= 1 )
      System_Array__Clear((System_Array_o *)equipTargetInfoList->fields._items, 0, v16, 0);
    switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = UnityEngine_Object__op_Inequality(switchEquipInfo, 0, 0);
    if ( (Master_object & 1) != 0 )
    {
      Master_object = (__int64)this->fields.switchEquipInfo;
      if ( !Master_object )
        goto LABEL_70;
      SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)Master_object, 0);
    }
    this->fields.equipFriendShipSkillChange = isChangeFriendShipSvtEquipSkill;
    if ( !userSvtIdList )
LABEL_70:
      sub_1C71608(Master_object, v11);
    max_length = userSvtIdList->max_length;
    if ( max_length <= 1 )
    {
      if ( !max_length )
        goto LABEL_71;
      if ( !userSvtIdList->m_Items[0] )
      {
        ServantFaceIconComponent__ClearEquip_41288212(this, baseSvtId, v19);
        return;
      }
    }
    v63 = baseSvtId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
    v21 = userSvtIdList->max_length;
    if ( (int)v21 >= 1 )
    {
      v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      for ( i = 0; (__int64)i < (int)v21; ++i )
      {
        if ( i >= (unsigned int)v21 )
          goto LABEL_71;
        v24 = userSvtIdList->m_Items[i];
        if ( !v24 )
          goto LABEL_33;
        if ( !v22 )
          goto LABEL_70;
        if ( DataMasterBase_object__object__long___TryGetEntity(
               v22,
               &entity,
               v24,
               (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          Master_object = (__int64)this->fields.equipUserSvtEntityList;
          if ( !Master_object )
            goto LABEL_70;
          v11 = entity;
          v31 = *(_QWORD *)(Master_object + 16);
          v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++*(_DWORD *)(Master_object + 28);
          if ( !v31 )
            goto LABEL_70;
          v33 = *(int *)(Master_object + 24);
          if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
          {
            v42 = v32[4];
            goto LABEL_40;
          }
          v34 = v31 + 8 * v33;
          *(_DWORD *)(Master_object + 24) = v33 + 1;
          *(_QWORD *)(v34 + 32) = v11;
          v35 = (GrandQuestFolderBoardItem_o *)(v34 + 32);
        }
        else
        {
LABEL_33:
          v36 = this->fields.equipUserSvtEntityList;
          v37 = (UserServantEntity_o *)sub_1C715FC(UserServantEntity_TypeInfo);
          UserServantEntity___ctor(v37, 0);
          if ( !v36 )
            goto LABEL_70;
          items = v36->fields._items;
          v39 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v36->fields._version;
          if ( !items )
            goto LABEL_70;
          v40 = v36->fields._size;
          if ( (unsigned int)v40 >= LODWORD(items->max_length) )
          {
            v42 = v39[4];
            Master_object = (__int64)v36;
            v11 = (Il2CppObject *)v37;
LABEL_40:
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              v11,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v42 + 192) + 112LL));
            goto LABEL_41;
          }
          v41 = &items->obj.klass + v40;
          v36->fields._size = v40 + 1;
          v41[4] = (Il2CppClass *)v37;
          v35 = (GrandQuestFolderBoardItem_o *)(v41 + 4);
          LODWORD(v11) = (_DWORD)v37;
        }
        sub_1C71354(v35, (int32_t)v11, v25, v26, v27, v28, v29, v30);
LABEL_41:
        LODWORD(v21) = userSvtIdList->max_length;
      }
    }
    v43 = this->fields.equipUserSvtEntityList;
    if ( !v43 )
      goto LABEL_70;
    if ( v43->fields._size < 2 )
      goto LABEL_60;
    v44 = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v44, 0, 0) )
      goto LABEL_60;
    equipUiWidget = (UnityEngine_Object_o *)this->fields.equipUiWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(equipUiWidget, 0, 0) )
      goto LABEL_60;
    v46 = this->fields.switchEquipInfo;
    Master_object = sub_1C71458(UIWidget___TypeInfo, 1);
    if ( !Master_object )
      goto LABEL_70;
    v53 = this->fields.equipUiWidget;
    v54 = Master_object;
    if ( v53 )
    {
      Master_object = sub_1C714EC(this->fields.equipUiWidget, *(_QWORD *)(*(_QWORD *)Master_object + 64LL));
      if ( !Master_object )
      {
        v62 = sub_1C7162C(0);
        sub_1C714D8(v62, 0);
      }
    }
    if ( *(_DWORD *)(v54 + 24) )
    {
      *(_QWORD *)(v54 + 32) = v53;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v54 + 32), (int32_t)v53, v47, v48, v49, v50, v51, v52);
      if ( !v46 )
        goto LABEL_70;
      SwitchUIWidgetComponent__Set(v46, (UIWidget_array *)v54, 1, 0);
      Master_object = (__int64)this->fields.equipUserSvtEntityList;
      if ( !Master_object )
        goto LABEL_70;
      Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)Master_object,
                                 0,
                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Master_object )
        goto LABEL_70;
      v56 = *(_QWORD *)(Master_object + 80);
      v55 = *(_QWORD *)(Master_object + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v65.fields.currentCryptoKey = v56;
      *(_QWORD *)&v65.fields.fakeValue = v55;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v65, 0) <= 0 )
      {
        ServantFaceIconComponent__SetEmptyEquipSprite(this, (const MethodInfo *)v11);
        return;
      }
LABEL_60:
      Master_object = (__int64)this->fields.equipUserSvtEntityList;
      if ( Master_object )
      {
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)Master_object,
                                   this->fields.displayEquipIndex,
                                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( Master_object )
        {
          v58 = *(_QWORD *)(Master_object + 80);
          v57 = *(_QWORD *)(Master_object + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v66.fields.currentCryptoKey = v58;
          *(_QWORD *)&v66.fields.fakeValue = v57;
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v66, 0);
          if ( this->fields.equipUserSvtEntityList )
          {
            v59 = Master_object;
            Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this->fields.equipUserSvtEntityList,
                                       this->fields.displayEquipIndex,
                                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( Master_object )
            {
              v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(Master_object + 96),
                      0);
              ServantFaceIconComponent__SetEquip_41273364(this, v63, v59, v60, 0, v61);
              return;
            }
          }
        }
      }
      goto LABEL_70;
    }
LABEL_71:
    sub_1C71610(Master_object);
  }
}


void ServantFaceIconComponent__SetEquip_41286996(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        System_Collections_Generic_List_EquipTargetInfo__o *equipTargetList,
        bool isChangeFriendShipSvtEquipSkill,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x23
  const MethodInfo *v10; // x2
  __int64 IsNullOrEmpty; // x0
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x24
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  int32_t size; // w2
  int v17; // w9
  UnityEngine_Object_o *switchEquipInfo; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Collections_Generic_List_EquipTargetInfo__o **p_equipTargetInfoList; // x22
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  UnityEngine_Object_o *v27; // x23
  UnityEngine_Object_o *equipUiWidget; // x23
  SwitchUIWidgetComponent_o *v29; // x23
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct UIWidget_o *v36; // x25
  __int64 v37; // x24
  __int64 v38; // x22
  __int64 v39; // x23
  const MethodInfo *v40; // x1
  __int64 v41; // x22
  __int64 v42; // x23
  int32_t v43; // w22
  int32_t v44; // w23
  const MethodInfo *v45; // x5
  __int64 v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4CC68AA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&UIWidget___TypeInfo);
    byte_4CC68AA = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(equipSprite, 0, 0) )
    goto LABEL_7;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)equipTargetList, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    goto LABEL_7;
  if ( !equipTargetList )
    goto LABEL_47;
  if ( equipTargetList->fields._size <= 1 )
  {
    IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)equipTargetList,
                               0,
                               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    if ( !IsNullOrEmpty )
      goto LABEL_47;
    v14 = *(_QWORD *)(IsNullOrEmpty + 56);
    v13 = *(_QWORD *)(IsNullOrEmpty + 64);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v47.fields.currentCryptoKey = v14;
    *(_QWORD *)&v47.fields.fakeValue = v13;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v47, 0);
    if ( (int)IsNullOrEmpty <= 0 )
    {
LABEL_7:
      ServantFaceIconComponent__ClearEquip_41288212(this, baseSvtId, v10);
      return;
    }
  }
  equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
  this->fields.equipFriendShipSkillChange = isChangeFriendShipSvtEquipSkill;
  this->fields.displayEquipIndex = 0;
  if ( !equipUserSvtEntityList )
    goto LABEL_47;
  size = equipUserSvtEntityList->fields._size;
  v17 = equipUserSvtEntityList->fields._version + 1;
  equipUserSvtEntityList->fields._size = 0;
  equipUserSvtEntityList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipUserSvtEntityList->fields._items, 0, size, 0);
  switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchEquipInfo, 0, 0) )
  {
    IsNullOrEmpty = (__int64)this->fields.switchEquipInfo;
    if ( !IsNullOrEmpty )
      goto LABEL_47;
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)IsNullOrEmpty, 0);
  }
  p_equipTargetInfoList = &this->fields.equipTargetInfoList;
  this->fields.equipTargetInfoList = equipTargetList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfoList,
    (int32_t)equipTargetList,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  equipTargetInfoList = this->fields.equipTargetInfoList;
  if ( !equipTargetInfoList )
LABEL_47:
    sub_1C71608(IsNullOrEmpty, v12);
  if ( equipTargetInfoList->fields._size < 2 )
    goto LABEL_40;
  v27 = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v27, 0, 0) )
    goto LABEL_40;
  equipUiWidget = (UnityEngine_Object_o *)this->fields.equipUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(equipUiWidget, 0, 0) )
    goto LABEL_40;
  v29 = this->fields.switchEquipInfo;
  IsNullOrEmpty = sub_1C71458(UIWidget___TypeInfo, 1);
  if ( !IsNullOrEmpty )
    goto LABEL_47;
  v36 = this->fields.equipUiWidget;
  v37 = IsNullOrEmpty;
  if ( v36 )
  {
    IsNullOrEmpty = sub_1C714EC(this->fields.equipUiWidget, *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 64LL));
    if ( !IsNullOrEmpty )
    {
      v46 = sub_1C7162C(0);
      sub_1C714D8(v46, 0);
    }
  }
  if ( !*(_DWORD *)(v37 + 24) )
    sub_1C71610(IsNullOrEmpty);
  *(_QWORD *)(v37 + 32) = v36;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v37 + 32), (int32_t)v36, v30, v31, v32, v33, v34, v35);
  if ( !v29 )
    goto LABEL_47;
  SwitchUIWidgetComponent__Set(v29, (UIWidget_array *)v37, 1, 0);
  IsNullOrEmpty = (__int64)*p_equipTargetInfoList;
  if ( !*p_equipTargetInfoList )
    goto LABEL_47;
  IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                             0,
                             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
  if ( !IsNullOrEmpty )
    goto LABEL_47;
  v39 = *(_QWORD *)(IsNullOrEmpty + 56);
  v38 = *(_QWORD *)(IsNullOrEmpty + 64);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v39;
  *(_QWORD *)&v48.fields.fakeValue = v38;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v48, 0) > 0 )
  {
LABEL_40:
    IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)equipTargetList,
                               0,
                               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    if ( IsNullOrEmpty )
    {
      v42 = *(_QWORD *)(IsNullOrEmpty + 56);
      v41 = *(_QWORD *)(IsNullOrEmpty + 64);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v49.fields.currentCryptoKey = v42;
      *(_QWORD *)&v49.fields.fakeValue = v41;
      v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v49, 0);
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)equipTargetList,
                                 0,
                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
      if ( IsNullOrEmpty )
      {
        v44 = *(_DWORD *)(IsNullOrEmpty + 72);
        IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipTargetList,
                                   0,
                                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
        if ( IsNullOrEmpty )
        {
          ServantFaceIconComponent__SetEquip_41273364(
            this,
            baseSvtId,
            v43,
            v44,
            *(System_Int32_array **)(IsNullOrEmpty + 136),
            v45);
          return;
        }
      }
    }
    goto LABEL_47;
  }
  ServantFaceIconComponent__SetEmptyEquipSprite(this, v40);
}


void ServantFaceIconComponent__SetEventBonus(
        ServantFaceIconComponent_o *this,
        int32_t iconId,
        int32_t rarity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  int32_t FrameType; // w0
  UISprite_o *backSprite; // x23
  int32_t v11; // w22
  UISprite_o *faceSprite; // x23
  UnityEngine_Object_o *equipSprite; // x21
  UnityEngine_Object_o *hideEquipSprite; // x21
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  UnityEngine_Object_o *classSprite; // x21
  UnityEngine_Object_o *limitCountSprite; // x21
  UnityEngine_Object_o *limitCountIcon; // x21
  UnityEngine_Object_o *raritySprite; // x21
  const MethodInfo *v20; // x1
  UISprite_o *v21; // x21
  const MethodInfo *v22; // x2

  if ( (byte_4CC689F & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Rarity_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_21384/*"listframes_shadow"*/);
    byte_4CC689F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_56;
  FrameType = ServantExceedMaster__GetFrameType((ServantExceedMaster_o *)Instance, rarity, 0, 0, 0);
  backSprite = this->fields.backSprite;
  v11 = FrameType;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( rarity < 1 )
    AtlasManager__SetDataLostFaceBaseIcon(backSprite, 0);
  else
    AtlasManager__SetFaceBaseIcon(backSprite, v11, 0, 0, 0);
  faceSprite = this->fields.faceSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceImage(faceSprite, iconId, 0, 1, 0, 0);
  Instance = (DataManager_o *)this->fields.frameSprite;
  if ( !Instance )
    goto LABEL_56;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21384/*"listframes_shadow"*/, 0);
  AtlasManager__SetServantType(this->fields.typeSprite, 6, v11, 0, 0, 0);
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipSprite, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
    Instance = (DataManager_o *)this->fields.noneEquipSprite;
    if ( !Instance )
      goto LABEL_56;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_56;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
      if ( !Instance )
        goto LABEL_56;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.classSprite;
    if ( !Instance )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.limitCountSprite;
    if ( !Instance )
      goto LABEL_56;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.limitCountIcon;
    if ( !Instance )
      goto LABEL_56;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)Instance, v8);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    v21 = this->fields.raritySprite;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = (DataManager_o *)Rarity__getIcon(rarity, 0);
    if ( v21 )
    {
      UISprite__set_spriteName(v21, (System_String_o *)Instance, 0);
      Instance = (DataManager_o *)this->fields.raritySprite;
      if ( Instance )
      {
        ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.parent)(
          Instance,
          Instance->klass[2]._1.generic_class);
        goto LABEL_55;
      }
    }
LABEL_56:
    sub_1C71608(Instance, v8);
  }
LABEL_55:
  ServantFaceIconComponent__ClearEquip(this, v20);
  ServantFaceIconComponent__SetIconLabel(this, 0, v22);
}


void ServantFaceIconComponent__SetFaceEffectSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *faceEffectSprite; // x21
  __int64 v6; // x1
  UISprite_o *v7; // x0
  int32_t collectionStatus; // w8
  UISprite_o *v9; // x19
  __int64 *v10; // x8

  if ( (byte_4CC68A5 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_21357/*"linklost_svt_material"*/);
    sub_1C713B0(&StringLiteral_21355/*"linkclose_svt_material"*/);
    sub_1C713B0(&StringLiteral_21354/*"linkbad_svt_material"*/);
    byte_4CC68A5 = 1;
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(faceEffectSprite, 0, 0) )
  {
    if ( isCommandCode )
    {
LABEL_7:
      v7 = this->fields.faceEffectSprite;
      if ( !v7 )
        sub_1C71608(0, v6);
      UISprite__set_spriteName(v7, 0, 0);
      return;
    }
    collectionStatus = this->fields.collectionStatus;
    switch ( collectionStatus )
    {
      case 10:
        v9 = this->fields.faceEffectSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v10 = &StringLiteral_21355/*"linkclose_svt_material"*/;
        break;
      case 9:
        v9 = this->fields.faceEffectSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v10 = &StringLiteral_21354/*"linkbad_svt_material"*/;
        break;
      case 8:
        v9 = this->fields.faceEffectSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v10 = &StringLiteral_21357/*"linklost_svt_material"*/;
        break;
      default:
        goto LABEL_7;
    }
    AtlasManager__SetEventSprite(v9, (System_String_o *)*v10, 0);
  }
}


void ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
        ServantFaceIconComponent_o *this,
        UISprite_o *maskSprite,
        System_String_o *defaultSpriteName,
        UIAtlas_o *defaultMaskAtlas,
        const MethodInfo *method)
{
  _BOOL4 isGrand; // w22

  if ( (byte_4CC68BA & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    byte_4CC68BA = 1;
  }
  isGrand = this->fields.isGrand;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandMaskSpriteCommonAtlas(isGrand, maskSprite, defaultSpriteName, defaultMaskAtlas, 0);
}


void ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
        ServantFaceIconComponent_o *this,
        UISprite_o *maskSprite,
        System_String_o *defaultSpriteName,
        UIAtlas_o *defaultMaskAtlas,
        const MethodInfo *method)
{
  _BOOL4 isGrand; // w22

  if ( (byte_4CC68BB & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    byte_4CC68BB = 1;
  }
  isGrand = this->fields.isGrand;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(isGrand, maskSprite, defaultSpriteName, defaultMaskAtlas, 0);
}


void ServantFaceIconComponent__SetIcon(
        ServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t rarity,
        int32_t limitCount,
        int32_t imageLimitCount,
        int32_t exceedCount,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t collectionStatus,
        bool isNew,
        bool isTemporarySubscription,
        ServantCostumeEntity_o *svtCostumeEntity,
        bool isCheckSeal,
        int32_t lv,
        int32_t imageSvtId,
        System_Int32_array *imagePartsGroupIdxs,
        int32_t actualRarity,
        bool isGrandServant,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v24; // x1
  ServantEntity_o *v25; // x27
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *v27; // x22
  int32_t v28; // w22
  int32_t FrameTypeFixRarity; // w29
  int32_t v30; // w21
  int32_t FrameType; // w29
  const MethodInfo *v32; // x2
  UISprite_o *v33; // x25
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x3
  UISprite_o *backSprite; // x20
  UISprite_o *faceSprite; // x20
  UISprite_o *v38; // x26
  const MethodInfo *v39; // x2
  UISprite_o *v40; // x21
  UISprite_o *v41; // x20
  UISprite_o *v42; // x20
  ServantFaceIconComponent_c *v43; // x0
  UnityEngine_Object_o *v44; // x20
  UnityEngine_Object_o *v45; // x20
  UISprite_o *v46; // x20
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  bool IsServantEquip; // w0
  const MethodInfo *v51; // x6
  const MethodInfo *v52; // x4
  const MethodInfo *v53; // x4
  const MethodInfo *v54; // x6
  const MethodInfo *v55; // x2
  UnityEngine_Object_o *shiningIcon; // x20
  const MethodInfo *v57; // x2
  __int64 *v58; // x8
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct IconLabelInfo_o **p_info1; // x0
  int32_t v66; // w1
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  struct IconLabelInfo_o **p_info2; // x0
  int32_t v74; // w1
  const MethodInfo *v75; // x2
  int32_t classId; // [xsp+30h] [xbp-70h]

  if ( (byte_4CC689E & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantFaceIconComponent_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_20484/*"img_frames_nodata"*/);
    sub_1C713B0(&StringLiteral_20250/*"icon_common_new01"*/);
    sub_1C713B0(&StringLiteral_21384/*"listframes_shadow"*/);
    sub_1C713B0(&StringLiteral_20275/*"icon_eventjoin_01"*/);
    byte_4CC689E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_114;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_114;
  v25 = (ServantEntity_o *)Instance;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.faceSprite,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  this->fields.isGrand = isGrandServant;
  v27 = (UnityEngine_Object_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v27, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_114;
    UIMeshSprite__Initialize((UIMeshSprite_o *)v27, 0);
  }
  if ( imageLimitCount < 0 )
  {
    if ( svtId < 1 )
    {
      imageLimitCount = 0;
    }
    else
    {
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
      imageLimitCount = (int)Instance;
      if ( isCheckSeal )
      {
        Instance = (DataManager_o *)ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                      (ServantFaceIconComponent_o *)Instance,
                                      svtId,
                                      (int32_t)Instance,
                                      v35);
        imageLimitCount = (int)Instance;
      }
    }
  }
  v28 = imageSvtId ? imageSvtId : svtId;
  if ( !v25 )
    goto LABEL_114;
  classId = v25->fields.classId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Instance
    || (FrameTypeFixRarity = ServantExceedMaster__GetFrameTypeFixRarity(
                               (ServantExceedMaster_o *)Instance,
                               svtId,
                               exceedCount,
                               actualRarity,
                               isGrandServant,
                               0),
        (Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0) )
  {
LABEL_114:
    sub_1C71608(Instance, v24);
  }
  v30 = lv;
  FrameType = ServantLvDetailMaster__GetFrameType(
                (ServantLvDetailMaster_o *)Instance,
                actualRarity,
                lv,
                FrameTypeFixRarity,
                isGrandServant,
                0);
  ServantFaceIconComponent__SetCostumeIcon(this, 0, v32);
  this->fields.collectionStatus = collectionStatus;
  switch ( collectionStatus )
  {
    case 0:
      backSprite = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(backSprite, 0);
      Instance = (DataManager_o *)this->fields.backSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20484/*"img_frames_nodata"*/, 0);
      Instance = (DataManager_o *)AtlasManager__IsUseFaceBattle(0);
      faceSprite = this->fields.faceSprite;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetFaceImage(faceSprite, 0, 0, 1, 0, 0);
        v30 = lv;
      }
      else
      {
        if ( !faceSprite )
          goto LABEL_114;
        v30 = lv;
        UISprite__set_spriteName(this->fields.faceSprite, 0, 0);
      }
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
      Instance = (DataManager_o *)this->fields.typeSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
      equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(equipSprite, 0, 0) )
        goto LABEL_91;
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_114;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
        goto LABEL_83;
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_114;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
LABEL_83:
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
LABEL_85:
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
        goto LABEL_91;
      Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
      if ( !Instance )
        goto LABEL_114;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
LABEL_91:
      IsServantEquip = ServantEntity__get_IsServantEquip(v25, 0);
      ServantFaceIconComponent__SetClassSprite(this, 0, IsServantEquip, classId, FrameType, isGrandServant, v51);
      ServantFaceIconComponent__SetLimitCountSprite(this, 0, v25->fields.limitMax, limitCount, v52);
      ServantFaceIconComponent__SetLimitCountIcon(this, 0, v25->fields.limitMax, limitCount, v53);
      ServantFaceIconComponent__SetRaritySprite(this, 0, rarity, exceedCount, v30, actualRarity, v54);
      ServantFaceIconComponent__SetFaceEffectSprite(this, 0, v55);
      shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(shiningIcon, 0, 0) )
      {
        if ( isTemporarySubscription && (this->fields.collectionStatus & 0xFFFFFFFE) != 6 )
        {
          Instance = (DataManager_o *)this->fields.shiningIcon;
          if ( !Instance )
            goto LABEL_114;
          v58 = &StringLiteral_20275/*"icon_eventjoin_01"*/;
        }
        else
        {
          if ( !isNew || (this->fields.collectionStatus & 0xFFFFFFFE) == 6 )
          {
            Instance = (DataManager_o *)this->fields.shiningIcon;
            if ( Instance )
            {
              ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, v24);
              goto LABEL_105;
            }
            goto LABEL_114;
          }
          Instance = (DataManager_o *)this->fields.shiningIcon;
          if ( !Instance )
            goto LABEL_114;
          v58 = &StringLiteral_20250/*"icon_common_new01"*/;
        }
        ShiningIconComponent__Set_41293588((ShiningIconComponent_o *)Instance, (System_String_o *)*v58, v57);
      }
LABEL_105:
      ServantFaceIconComponent__ClearEquip(this, v24);
      if ( info1 && !IconLabelInfo__IsClear(info1, 0) )
      {
        this->fields.info1 = info1;
        p_info1 = &this->fields.info1;
        v66 = (int)info1;
      }
      else
      {
        this->fields.info1 = 0;
        p_info1 = &this->fields.info1;
        v66 = 0;
      }
      sub_1C71354((GrandQuestFolderBoardItem_o *)p_info1, v66, v59, v60, v61, v62, v63, v64);
      if ( info2 && !IconLabelInfo__IsClear(info2, 0) )
      {
        this->fields.info2 = info2;
        p_info2 = &this->fields.info2;
        v74 = (int)info2;
      }
      else
      {
        this->fields.info2 = 0;
        p_info2 = &this->fields.info2;
        v74 = 0;
      }
      sub_1C71354((GrandQuestFolderBoardItem_o *)p_info2, v74, v67, v68, v69, v70, v71, v72);
      ServantFaceIconComponent__SetIconLabel(this, 0, v75);
      return;
    case 1:
      v38 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceBaseIcon(v38, FrameType, classId, isGrandServant, 0);
      AtlasManager__SetFaceImage(this->fields.faceSprite, v28, imageLimitCount, 0, 0, 0);
      ServantFaceIconComponent__SetCostumeIcon(this, svtCostumeEntity, v39);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( Instance )
        goto LABEL_45;
      goto LABEL_114;
    case 2:
    case 3:
    case 5:
    case 8:
    case 9:
    case 10:
      v33 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceBaseIcon(v33, FrameType, classId, isGrandServant, 0);
      AtlasManager__SetFaceImage(this->fields.faceSprite, v28, imageLimitCount, 1, imagePartsGroupIdxs, 0);
      ServantFaceIconComponent__SetCostumeIcon(this, svtCostumeEntity, v34);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21384/*"listframes_shadow"*/, 0);
      AtlasManager__SetServantType(this->fields.typeSprite, v25->fields.type, FrameType, classId, isGrandServant, 0);
      goto LABEL_91;
    case 4:
      v40 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceBaseIcon(v40, FrameType, classId, isGrandServant, 0);
      AtlasManager__SetHideFace(this->fields.faceSprite, 0);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_114;
LABEL_45:
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21384/*"listframes_shadow"*/, 0);
      AtlasManager__SetServantType(this->fields.typeSprite, v25->fields.type, FrameType, classId, isGrandServant, 0);
      v30 = lv;
      goto LABEL_91;
    case 6:
      v41 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceBaseIcon(v41, FrameType, classId, isGrandServant, 0);
      v42 = this->fields.faceSprite;
      v43 = ServantFaceIconComponent_TypeInfo;
      if ( !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
        v43 = ServantFaceIconComponent_TypeInfo;
      }
      AtlasManager__SetFaceImage(
        v42,
        v43->static_fields->SECRET_SERVANT_ID,
        v43->static_fields->SECRET_LIMIT_COUNT,
        1,
        0,
        0);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_114;
      v30 = lv;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21384/*"listframes_shadow"*/, 0);
      AtlasManager__SetServantType(this->fields.typeSprite, v25->fields.type, FrameType, classId, isGrandServant, 0);
      v44 = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v44, 0, 0) )
        goto LABEL_91;
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_114;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v45 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v45, 0, 0) )
        goto LABEL_85;
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_114;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      goto LABEL_85;
    case 7:
      v46 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDataLostFaceBaseIcon(v46, 0);
      AtlasManager__SetDataLostFace(this->fields.faceSprite, 0);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
      Instance = (DataManager_o *)this->fields.typeSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
      goto LABEL_91;
    default:
      goto LABEL_91;
  }
}


void ServantFaceIconComponent__SetIconLabel(ServantFaceIconComponent_o *this, int32_t count, const MethodInfo *method)
{
  char v3; // w20
  UnityEngine_Object_o *iconLabel; // x21
  IconLabelInfo_o *info1; // x1
  int32_t collectionStatus; // w8
  UIIconLabel_o *v8; // x0
  __int64 v9; // x9

  v3 = count;
  if ( (byte_4CC68AF & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68AF = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0, 0) )
  {
    info1 = this->fields.info1;
    if ( !info1 && !this->fields.info2 || (collectionStatus = this->fields.collectionStatus, collectionStatus == 7) )
    {
      v8 = this->fields.iconLabel;
      if ( v8 )
      {
        UIIconLabel__Clear(v8, 0);
        return;
      }
LABEL_20:
      sub_1C71608(v8, info1);
    }
    if ( this->fields.info2 )
    {
      v8 = this->fields.iconLabel;
      v9 = 208;
      if ( (v3 & 1) == 0 )
        v9 = 200;
      if ( !v8 )
        goto LABEL_20;
      info1 = *(IconLabelInfo_o **)((char *)&this->klass + v9);
    }
    else
    {
      v8 = this->fields.iconLabel;
      if ( !v8 )
        goto LABEL_20;
    }
    if ( collectionStatus == 4 )
      UIIconLabel__Set_41411312(v8, info1, 1, 0);
    else
      UIIconLabel__Set(v8, info1, 0);
  }
}


void ServantFaceIconComponent__SetIconLabelBitmapFont(
        ServantFaceIconComponent_o *this,
        UIFont_o *bitmapFont,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x21
  __int64 v6; // x1
  UIIconLabel_o *v7; // x0

  if ( (byte_4CC68B5 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68B5 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0, 0) )
  {
    v7 = this->fields.iconLabel;
    if ( !v7 )
      sub_1C71608(0, v6);
    UIIconLabel__SetTextLabelBitmapFont(v7, bitmapFont, 0);
  }
}


void ServantFaceIconComponent__SetLimitCountIcon(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        int32_t limitMax,
        int32_t limitCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *limitCountIcon; // x23
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  LimitCountIconComponent_o *v12; // x0
  int32_t collectionStatus; // w8

  if ( (byte_4CC68A3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68A3 = 1;
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(limitCountIcon, 0, 0) )
  {
    if ( isCommandCode )
    {
      v12 = this->fields.limitCountIcon;
      if ( !v12 )
LABEL_15:
        sub_1C71608(v12, v10);
      goto LABEL_11;
    }
    collectionStatus = this->fields.collectionStatus;
    v12 = this->fields.limitCountIcon;
    if ( (unsigned int)(collectionStatus - 4) < 7 || !collectionStatus )
    {
      if ( !v12 )
        goto LABEL_15;
LABEL_11:
      LimitCountIconComponent__Clear(v12, v10);
      return;
    }
    if ( !v12 )
      goto LABEL_15;
    LimitCountIconComponent__Set(v12, limitCount, limitMax, v11);
  }
}


void ServantFaceIconComponent__SetLimitCountSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        int32_t limitMax,
        int32_t limitCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *limitCountSprite; // x23
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  int32_t collectionStatus; // w8
  bool v13; // w1

  if ( (byte_4CC68A2 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68A2 = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(limitCountSprite, 0, 0) )
  {
    if ( isCommandCode )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.limitCountSprite;
      if ( !gameObject )
        goto LABEL_18;
    }
    else
    {
      collectionStatus = this->fields.collectionStatus;
      gameObject = (UnityEngine_Component_o *)this->fields.limitCountSprite;
      if ( (unsigned int)(collectionStatus - 4) >= 7 && collectionStatus )
      {
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
        {
LABEL_18:
          sub_1C71608(gameObject, v10);
        }
        v13 = limitMax > 0 && limitCount >= limitMax;
        goto LABEL_13;
      }
      if ( !gameObject )
        goto LABEL_18;
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_18;
    v13 = 0;
LABEL_13:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v13, 0);
  }
}


void ServantFaceIconComponent__SetLost(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x23
  Il2CppObject *Entity; // x24
  int32_t v16; // w23
  int32_t ServantLimitCountSealAfter; // w25
  int32_t v18; // w26
  int DispLimitCountFromUserServantCollection; // w24
  int32_t LimitCountByImageLimit_40703836; // w1
  int32_t v21; // w4
  const MethodInfo *v22; // x5
  int32_t v23; // w25
  int32_t actualRarity; // w28
  int32_t collectionStatus; // w29
  int32_t maxLimitCount; // w26
  bool IsNew; // w27
  bool IsGrandServant; // w0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4CC6895 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC6895 = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
    v13 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v31.fields.currentCryptoKey = v13;
    *(_QWORD *)&v31.fields.fakeValue = v12;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v31, 0);
    if ( !v14 )
      goto LABEL_29;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v14,
               (int32_t)Instance,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(userSvtColEntity->fields.svtId, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_29;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v16,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0);
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(userSvtColEntity->fields.svtId, 0);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    Instance = (void *)ImageLimitCount__GetCardImageLimitCount(v18, ServantLimitCountSealAfter, 1, 0, 0);
    if ( !Entity )
      goto LABEL_29;
    DispLimitCountFromUserServantCollection = ServantEntity__GetDispLimitCountFromUserServantCollection(
                                                (ServantEntity_o *)Entity,
                                                (int32_t)Instance,
                                                0);
    LimitCountByImageLimit_40703836 = DispLimitCountFromUserServantCollection;
    if ( DispLimitCountFromUserServantCollection <= 10 )
    {
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimit_40703836 = ImageLimitCount__GetLimitCountByImageLimit_40703836(
                                          DispLimitCountFromUserServantCollection,
                                          ServantLimitCountSealAfter,
                                          0);
    }
    Instance = UserServantCollectionEntity__GetOverwriteStatus(userSvtColEntity, LimitCountByImageLimit_40703836, 0);
    if ( !Instance )
LABEL_29:
      sub_1C71608(Instance, v10);
    if ( userSvtColEntity->fields.status )
    {
      v23 = *((_DWORD *)Instance + 6);
      actualRarity = *((_DWORD *)Instance + 10);
      if ( UserServantCollectionEntity__IsLinkLostStateServant(userSvtColEntity, 0) )
      {
        collectionStatus = 8;
      }
      else if ( UserServantCollectionEntity__IsLinkBadStateServant(userSvtColEntity, 0) )
      {
        collectionStatus = 9;
      }
      else if ( UserServantCollectionEntity__IsLinkCloseStateServant(userSvtColEntity, 0) )
      {
        collectionStatus = 10;
      }
      else
      {
        collectionStatus = 7;
      }
      maxLimitCount = userSvtColEntity->fields.maxLimitCount;
      IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0);
      IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtColEntity, 0);
      ServantFaceIconComponent__SetIcon(
        this,
        v16,
        v23,
        maxLimitCount,
        DispLimitCountFromUserServantCollection,
        0,
        info1,
        info2,
        collectionStatus,
        IsNew,
        0,
        0,
        0,
        0,
        0,
        0,
        actualRarity,
        IsGrandServant,
        v30);
      ServantFaceIconComponent__ClearEquip(this, v29);
    }
    else
    {
      ServantFaceIconComponent__Set_41283476(this, userSvtColEntity, info1, info2, v21, v22);
    }
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
  }
}


void ServantFaceIconComponent__SetRaritySprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        int32_t actualRarity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *raritySprite; // x25
  System_String_o *Icon; // x0
  __int64 v15; // x1
  int32_t collectionStatus; // w8
  struct UISprite_o *v17; // x20
  System_String_o *v18; // x1
  System_String_o *Icon_40715116; // x23
  int32_t RarityIcon; // w22
  bool v21; // w21
  UISprite_o *v22; // x20

  if ( (byte_4CC68A4 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Rarity_TypeInfo);
    byte_4CC68A4 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Icon = (System_String_o *)UnityEngine_Object__op_Equality(raritySprite, 0, 0);
  if ( ((unsigned __int8)Icon & 1) == 0 )
  {
    collectionStatus = this->fields.collectionStatus;
    if ( isCommandCode )
    {
      v17 = this->fields.raritySprite;
      if ( collectionStatus )
      {
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon = Rarity__getIcon(rarity, 0);
        if ( !v17 )
          goto LABEL_37;
        v18 = Icon;
        Icon = (System_String_o *)v17;
        goto LABEL_12;
      }
      if ( !v17 )
        goto LABEL_37;
      Icon = (System_String_o *)this->fields.raritySprite;
    }
    else
    {
      if ( (collectionStatus | 4) != 4 && (collectionStatus & 0xFFFFFFFE) != 6 )
      {
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon_40715116 = Rarity__getIcon_40715116(rarity, exceedCount, lv, actualRarity, 0);
        if ( exceedCount < 1 )
        {
          v21 = 1;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Icon = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantExceedMaster___);
          if ( !Icon )
            goto LABEL_37;
          RarityIcon = ServantExceedMaster__GetRarityIcon(
                         (ServantExceedMaster_o *)Icon,
                         actualRarity,
                         exceedCount,
                         0,
                         0,
                         0);
          Icon = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
          if ( !Icon )
            goto LABEL_37;
          v21 = ServantLvDetailMaster__GetRarityIcon(
                  (ServantLvDetailMaster_o *)Icon,
                  actualRarity,
                  lv,
                  RarityIcon,
                  0,
                  0) < 3;
        }
        v22 = this->fields.raritySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( !v21 )
        {
          AtlasManager__SetEventSprite(v22, Icon_40715116, 0);
LABEL_13:
          Icon = (System_String_o *)this->fields.raritySprite;
          if ( Icon )
          {
            ((void (__fastcall *)(System_String_o *, void *))Icon->klass[1]._1.generic_class)(
              Icon,
              Icon->klass[1]._1.typeMetadataHandle);
            return;
          }
LABEL_37:
          sub_1C71608(Icon, v15);
        }
        AtlasManager__SetCommon(v22, 0);
        Icon = (System_String_o *)this->fields.raritySprite;
        if ( !Icon )
          goto LABEL_37;
        v18 = Icon_40715116;
LABEL_12:
        UISprite__set_spriteName((UISprite_o *)Icon, v18, 0);
        goto LABEL_13;
      }
      Icon = (System_String_o *)this->fields.raritySprite;
      if ( !Icon )
        goto LABEL_37;
    }
    UISprite__set_spriteName((UISprite_o *)Icon, 0, 0);
  }
}


void ServantFaceIconComponent__Set_41281652(
        ServantFaceIconComponent_o *this,
        int64_t userSvtId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v12; // x5

  if ( (byte_4CC6890 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC6890 = 1;
  }
  if ( userSvtId <= 0 )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
      sub_1C71608(Instance, v10);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               userSvtId,
               (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantFaceIconComponent__Set_41281880(this, (UserServantEntity_o *)Entity, 0, info1, info2, v12);
  }
}


void ServantFaceIconComponent__Set_41281864(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  ServantFaceIconComponent__Set_41281880(this, userSvtEntity, 0, info1, info2, v5);
}


void ServantFaceIconComponent__Set_41281880(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v11; // x23
  __int64 v12; // x25
  int32_t v13; // w23
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v15; // x1
  __int128 v16; // q1
  int32_t Rarity_k__BackingField; // w22
  int32_t ActualRarity_k__BackingField; // w25
  int64_t v19; // x26
  NetworkManager_c *v20; // x0
  int32_t actualRarity; // w19
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v23; // x3
  int32_t IconLimitCountSealAfter; // w0
  __int64 v25; // x27
  __int64 v26; // x28
  int32_t v27; // w26
  int32_t v28; // w0
  int32_t exceedCount; // w27
  int32_t v30; // w28
  bool IsNew; // w29
  bool IsEventJoin; // w0
  int32_t lv; // w25
  bool v34; // w21
  bool IsGrandServant; // w0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x4
  ServantFaceIconComponent_o *FriendIconLimitCount; // x0
  const MethodInfo *v39; // x3
  int32_t v40; // w0
  __int64 v41; // x27
  __int64 v42; // x28
  int32_t v43; // w26
  int32_t v44; // w0
  int32_t v45; // w21
  int32_t v46; // w25
  int32_t v47; // w27
  bool v48; // w0
  const MethodInfo *v49; // [xsp+50h] [xbp-D0h]
  IconLabelInfo_o *v50; // [xsp+68h] [xbp-B8h]
  IconLabelInfo_o *info1a; // [xsp+70h] [xbp-B0h]
  System_Int64_array *userSvtIdList; // [xsp+78h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+A0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4CC6892 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC6892 = 1;
  }
  if ( userSvtEntity )
  {
    v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v55.fields.currentCryptoKey = v12;
    *(_QWORD *)&v55.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v55, 0);
    OverwriteStatus = UserServantEntity__GetOverwriteStatus(userSvtEntity, 0, 0);
    if ( !OverwriteStatus )
      sub_1C71608(0, v15);
    info1a = info1;
    v16 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    Rarity_k__BackingField = OverwriteStatus->fields._Rarity_k__BackingField;
    ActualRarity_k__BackingField = OverwriteStatus->fields._ActualRarity_k__BackingField;
    *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v54.fields.fakeValue = v16;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v53 = v54;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v53, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CC112A )
    {
      sub_1C713B0(&NetworkManager_TypeInfo);
      byte_4CC112A = 1;
    }
    v20 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v20 = NetworkManager_TypeInfo;
    }
    userSvtIdList = equipIdList;
    actualRarity = ActualRarity_k__BackingField;
    if ( v19 == v20->static_fields->userIdNumber )
    {
      v50 = info2;
      IconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0);
      IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                  IconLimitCount,
                                  v13,
                                  (int32_t)IconLimitCount,
                                  v23);
      v26 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v25 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v27 = IconLimitCountSealAfter;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v56.fields.currentCryptoKey = v26;
      *(_QWORD *)&v56.fields.fakeValue = v25;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v56, 0);
      exceedCount = userSvtEntity->fields.exceedCount;
      v30 = v28;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0);
      lv = userSvtEntity->fields.lv;
      v34 = IsEventJoin;
      IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0);
      ServantFaceIconComponent__SetIcon(
        this,
        v13,
        Rarity_k__BackingField,
        v30,
        v27,
        exceedCount,
        info1a,
        v50,
        2,
        IsNew,
        v34,
        0,
        0,
        lv,
        0,
        0,
        actualRarity,
        IsGrandServant,
        v49);
    }
    else
    {
      FriendIconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getFriendIconLimitCount(
                                                             userSvtEntity,
                                                             0,
                                                             0);
      v40 = ServantFaceIconComponent__GetIconLimitCountSealAfter(
              FriendIconLimitCount,
              v13,
              (int32_t)FriendIconLimitCount,
              v39);
      v42 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v41 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v43 = v40;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v57.fields.currentCryptoKey = v42;
      *(_QWORD *)&v57.fields.fakeValue = v41;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v57, 0);
      v45 = userSvtEntity->fields.exceedCount;
      v46 = userSvtEntity->fields.lv;
      v47 = v44;
      v48 = UserServantEntity__IsGrandServant(userSvtEntity, 0);
      ServantFaceIconComponent__SetIcon(
        this,
        v13,
        Rarity_k__BackingField,
        v47,
        v43,
        v45,
        info1a,
        info2,
        2,
        0,
        0,
        0,
        0,
        v46,
        0,
        0,
        actualRarity,
        v48,
        v49);
    }
    if ( userSvtIdList && userSvtIdList->max_length )
      ServantFaceIconComponent__SetEquip_41280320(this, v13, userSvtIdList, 0, v37);
    else
      ServantFaceIconComponent__ClearEquip(this, v36);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


void ServantFaceIconComponent__Set_41283156(
        ServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t imageLimitCount,
        int32_t exceedCount,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t collectionStatus,
        bool isNew,
        bool isTemporarySubscription,
        ServantCostumeEntity_o *svtCostumeEntity,
        bool isCheckSeal,
        int32_t lv,
        int32_t imageSvtId,
        int32_t frameLimitCount,
        System_Int32_array *imagePartsGroupIdxs,
        bool isGrandServant,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t actualRarity; // w0
  const MethodInfo *v25; // [xsp+50h] [xbp-90h]

  if ( (byte_4CC689D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC689D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Master_object )
    sub_1C71608(0, v22);
  if ( frameLimitCount <= 0 )
    v23 = limitCount;
  else
    v23 = frameLimitCount;
  actualRarity = ServantExceedMaster__GetRarity_42966656((ServantExceedMaster_o *)Master_object, svtId, v23, 0);
  ServantFaceIconComponent__SetIcon(
    this,
    svtId,
    actualRarity,
    limitCount,
    imageLimitCount,
    exceedCount,
    info1,
    info2,
    collectionStatus,
    isNew,
    isTemporarySubscription,
    svtCostumeEntity,
    isCheckSeal,
    lv,
    imageSvtId,
    imagePartsGroupIdxs,
    actualRarity,
    isGrandServant,
    v25);
}


void ServantFaceIconComponent__Set_41283476(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t frameLimitCount,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x24
  __int64 v14; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  Il2CppObject *Entity; // x0
  int32_t status; // w27
  ServantEntity_o *v18; // x24
  int32_t v19; // w23
  int32_t ServantLimitCountSealAfter; // w26
  int DispLimitCountFromUserServantCollection; // w25
  int32_t LimitCountByImageLimit_40703836; // w1
  int32_t v23; // w26
  int32_t actualRarity; // w28
  bool IsEnemyCollectionDetail; // w0
  int32_t maxLimitCount; // w24
  int32_t collectionStatus; // w29
  bool IsNew; // w27
  bool IsGrandServant; // w0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4CC6894 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC6894 = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
    v14 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v32.fields.currentCryptoKey = v14;
    *(_QWORD *)&v32.fields.fakeValue = v13;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v32, 0);
    if ( !v15 )
      goto LABEL_23;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v15,
               (int32_t)Instance,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    status = userSvtColEntity->fields.status;
    v18 = (ServantEntity_o *)Entity;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(userSvtColEntity->fields.svtId, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_23;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v19,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    Instance = (void *)ImageLimitCount__GetCardImageLimitCount(v19, ServantLimitCountSealAfter, 1, 0, 0);
    if ( !v18 )
      goto LABEL_23;
    DispLimitCountFromUserServantCollection = ServantEntity__GetDispLimitCountFromUserServantCollection(
                                                v18,
                                                (int32_t)Instance,
                                                0);
    LimitCountByImageLimit_40703836 = DispLimitCountFromUserServantCollection;
    if ( DispLimitCountFromUserServantCollection <= 10 )
    {
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimit_40703836 = ImageLimitCount__GetLimitCountByImageLimit_40703836(
                                          DispLimitCountFromUserServantCollection,
                                          ServantLimitCountSealAfter,
                                          0);
    }
    Instance = UserServantCollectionEntity__GetOverwriteStatus(userSvtColEntity, LimitCountByImageLimit_40703836, 0);
    if ( !Instance )
LABEL_23:
      sub_1C71608(Instance, v11);
    v23 = *((_DWORD *)Instance + 6);
    actualRarity = *((_DWORD *)Instance + 10);
    IsEnemyCollectionDetail = ServantEntity__get_IsEnemyCollectionDetail(v18, 0);
    maxLimitCount = userSvtColEntity->fields.maxLimitCount;
    if ( status == 0 || !IsEnemyCollectionDetail )
      collectionStatus = status;
    else
      collectionStatus = 3;
    IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0);
    IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtColEntity, 0);
    ServantFaceIconComponent__SetIcon(
      this,
      v19,
      v23,
      maxLimitCount,
      DispLimitCountFromUserServantCollection,
      0,
      info1,
      info2,
      collectionStatus,
      IsNew,
      0,
      0,
      0,
      0,
      0,
      0,
      actualRarity,
      IsGrandServant,
      v31);
    ServantFaceIconComponent__ClearEquip(this, v30);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
  }
}


void ServantFaceIconComponent__Set_41285296(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        ServantCostumeEntity_o *svtCostumeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isSecret,
        const MethodInfo *method)
{
  int32_t status; // w25
  int32_t id; // w26
  int32_t collectionStatus; // w29
  ServantOverwriteStatus_o *v16; // x25
  bool IsGrandServant; // w0
  __int64 v18; // x27
  __int64 v19; // x28
  bool v20; // w26
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4CC6897 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&ServantOverwriteStatus_TypeInfo);
    byte_4CC6897 = 1;
  }
  if ( userSvtColEntity && svtCostumeEntity )
  {
    status = userSvtColEntity->fields.status;
    if ( ServantCostumeEntity__checkFlag(svtCostumeEntity, 16, 0)
      && !UserServantCollectionEntity__IsCostumeGet(userSvtColEntity, svtCostumeEntity->fields.id, 0) )
    {
      status = 0;
    }
    id = svtCostumeEntity->fields.id;
    if ( isSecret )
      collectionStatus = 6;
    else
      collectionStatus = status;
    v16 = (ServantOverwriteStatus_o *)sub_1C715FC(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_33652792(v16, userSvtColEntity, id, 0);
    IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtColEntity, 0);
    v19 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v20 = IsGrandServant;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v19;
    *(_QWORD *)&v25.fields.fakeValue = v18;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v25, 0);
    if ( !v16 )
      sub_1C71608(v21, v22);
    ServantFaceIconComponent__SetIcon(
      this,
      v21,
      v16->fields._Rarity_k__BackingField,
      userSvtColEntity->fields.maxLimitCount,
      svtCostumeEntity->fields.id,
      0,
      info1,
      info2,
      collectionStatus,
      0,
      0,
      svtCostumeEntity,
      0,
      0,
      0,
      0,
      v16->fields._ActualRarity_k__BackingField,
      v20 && !isSecret,
      v24);
    ServantFaceIconComponent__ClearEquip(this, v23);
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)userSvtColEntity);
  }
}


void ServantFaceIconComponent__Set_41285736(
        ServantFaceIconComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isNewIconDisp,
        int32_t imageSvtId,
        const MethodInfo *method)
{
  int32_t IconLimitCount; // w24
  __int64 v14; // x26
  __int64 v15; // x27
  ServantFaceIconComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  int v18; // w21
  __int64 v19; // x26
  __int64 v20; // x27
  const MethodInfo *v21; // x1
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v23; // x1
  int32_t Rarity_k__BackingField; // w26
  int32_t actualRarity; // w22
  __int64 v26; // x27
  __int64 v27; // x28
  int32_t v28; // w21
  int32_t v29; // w0
  int32_t limitCount; // w28
  int32_t exceedCount; // w27
  int32_t v32; // w29
  int64_t userId; // x25
  bool IsNew; // w0
  int32_t lv; // w23
  bool v36; // w25
  bool IsGrandSvt; // w0
  int32_t v38; // w23
  bool v39; // w0
  const MethodInfo *v40; // x1
  __int64 v41; // x21
  __int64 v42; // x22
  int32_t v43; // w21
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x22
  bool v45; // w3
  const MethodInfo *v46; // x4
  const MethodInfo *v47; // [xsp+50h] [xbp-80h]
  IconLabelInfo_o *v48; // [xsp+58h] [xbp-78h]
  IconLabelInfo_o *v49; // [xsp+60h] [xbp-70h]
  int32_t collectionStatus; // [xsp+6Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4CC6898 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&OtherUserNewManager_TypeInfo);
    byte_4CC6898 = 1;
  }
  if ( servantLeaderInfo )
  {
    IconLimitCount = ServantLeaderInfo__getIconLimitCount(servantLeaderInfo, 0);
    if ( !ServantLeaderInfo__IsNpc(servantLeaderInfo, 0) )
    {
      v15 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v15;
      *(_QWORD *)&v51.fields.fakeValue = v14;
      v16 = (ServantFaceIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v51, 0);
      IconLimitCount = ServantFaceIconComponent__GetIconLimitCountSealAfter(v16, (int32_t)v16, IconLimitCount, v17);
    }
    if ( ServantLeaderInfo__IsHideSupport(servantLeaderInfo, 0) )
    {
      v18 = 4;
    }
    else if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0) )
    {
      v18 = 5;
    }
    else
    {
      v18 = 2;
    }
    v20 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v52.fields.currentCryptoKey = v20;
    *(_QWORD *)&v52.fields.fakeValue = v19;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v52, 0) )
    {
      collectionStatus = v18;
      OverwriteStatus = ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0);
      if ( !OverwriteStatus )
        sub_1C71608(0, v23);
      v48 = info1;
      v49 = info2;
      Rarity_k__BackingField = OverwriteStatus->fields._Rarity_k__BackingField;
      actualRarity = OverwriteStatus->fields._ActualRarity_k__BackingField;
      v27 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      v28 = imageSvtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v53.fields.currentCryptoKey = v27;
      *(_QWORD *)&v53.fields.fakeValue = v26;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v53, 0);
      limitCount = servantLeaderInfo->fields.limitCount;
      exceedCount = servantLeaderInfo->fields.exceedCount;
      v32 = v29;
      if ( isNewIconDisp )
      {
        userId = servantLeaderInfo->fields.userId;
        if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
        IsNew = OtherUserNewManager__IsNew(userId, 0);
        lv = servantLeaderInfo->fields.lv;
        v36 = IsNew;
        IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0);
        ServantFaceIconComponent__SetIcon(
          this,
          v32,
          Rarity_k__BackingField,
          limitCount,
          IconLimitCount,
          exceedCount,
          v48,
          v49,
          collectionStatus,
          v36,
          0,
          0,
          0,
          lv,
          v28,
          0,
          actualRarity,
          IsGrandSvt,
          v47);
      }
      else
      {
        v38 = servantLeaderInfo->fields.lv;
        v39 = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0);
        ServantFaceIconComponent__SetIcon(
          this,
          v32,
          Rarity_k__BackingField,
          limitCount,
          IconLimitCount,
          exceedCount,
          v48,
          v49,
          collectionStatus,
          0,
          0,
          0,
          0,
          v38,
          v28,
          0,
          actualRarity,
          v39,
          v47);
      }
    }
    else
    {
      ServantFaceIconComponent__NoMount(this, v21);
    }
    if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0) && ServantLeaderInfo__IsHideEquip(servantLeaderInfo, 0) )
    {
      ServantFaceIconComponent__HideEquip(this, v40);
    }
    else
    {
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(servantLeaderInfo, 0);
      v42 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v41 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v54.fields.currentCryptoKey = v42;
      *(_QWORD *)&v54.fields.fakeValue = v41;
      v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v54, 0);
      EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(servantLeaderInfo, 0);
      v45 = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(servantLeaderInfo, 0) > 0;
      ServantFaceIconComponent__SetEquip_41286996(this, v43, EquipTargetInfoList, v45, v46);
    }
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)servantLeaderInfo);
  }
}


void ServantFaceIconComponent__Set_41287948(
        ServantFaceIconComponent_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  int32_t v12; // w1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // [xsp+48h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4CC6899 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC6899 = 1;
  }
  if ( equipTargetInfo )
  {
    v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v15.fields.currentCryptoKey = v10;
    *(_QWORD *)&v15.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v15, 0);
    ServantFaceIconComponent__Set_41283156(
      this,
      v11,
      equipTargetInfo->fields.limitCount,
      0,
      0,
      info1,
      info2,
      2,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      equipTargetInfo->fields._ImagePartsGroupIdxs_k__BackingField,
      0,
      v14);
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(equipTargetInfo->fields.svtId, 0);
    ServantFaceIconComponent__ClearEquip_41288212(this, v12, v13);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)equipTargetInfo);
  }
}


void ServantFaceIconComponent__Set_41289308(
        ServantFaceIconComponent_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int128 v9; // q1
  int64_t v10; // x23
  NetworkManager_c *v11; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  int64_t userIdNumber; // x26
  int32_t v15; // w0
  const MethodInfo *v16; // x6
  bool v17; // zf
  int32_t v18; // w23
  bool v19; // w0
  const MethodInfo *v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4CC689A & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC689A = 1;
  }
  if ( userCommandCodeEntity )
  {
    v9 = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.fakeValue;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v9;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v21 = v22;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v21, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CC112A )
    {
      sub_1C713B0(&NetworkManager_TypeInfo);
      byte_4CC112A = 1;
    }
    v11 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v11 = NetworkManager_TypeInfo;
    }
    v13 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    userIdNumber = v11->static_fields->userIdNumber;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v13;
    *(_QWORD *)&v23.fields.fakeValue = v12;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v23, 0);
    v17 = v10 == userIdNumber;
    v18 = v15;
    v19 = v17 && UserCommandCodeEntity__IsNew(userCommandCodeEntity, 0);
    ServantFaceIconComponent__SetCommandCode(this, v18, info1, info2, 2, v19, v16);
    ServantFaceIconComponent__ClearEquip(this, v20);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void ServantFaceIconComponent__Set_41290856(
        ServantFaceIconComponent_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isNew,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w0
  const MethodInfo *v14; // x6
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4CC689B & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC689B = 1;
  }
  if ( userCommandCodeEntity )
  {
    v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v16, 0);
    ServantFaceIconComponent__SetCommandCode(this, v13, info1, info2, 2, isNew, v14);
    ServantFaceIconComponent__ClearEquip(this, v15);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void ServantFaceIconComponent__Set_41291048(
        ServantFaceIconComponent_o *this,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  int32_t status; // w23
  int32_t v13; // w24
  bool IsNew; // w0
  const MethodInfo *v15; // x6
  const MethodInfo *v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CC689C & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC689C = 1;
  }
  if ( userCommandCodeCollectionEntity )
  {
    v10 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v17, 0);
    status = userCommandCodeCollectionEntity->fields.status;
    v13 = v11;
    IsNew = UserCommandCodeCollectionEntity__IsNew(userCommandCodeCollectionEntity, 0);
    ServantFaceIconComponent__SetCommandCode(this, v13, info1, info2, status, IsNew, v15);
    ServantFaceIconComponent__ClearEquip(this, v16);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeCollectionEntity);
  }
}


bool ServantFaceIconComponent__UpdateAlpha(ServantFaceIconComponent_o *this, float alpha, const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v6; // x1
  UIIconLabel_o *v7; // x0

  if ( (byte_4CC68B0 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC68B0 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) && this->fields.info1 && this->fields.info2 )
  {
    v7 = this->fields.iconLabel;
    if ( !v7 )
      sub_1C71608(0, v6);
    UIIconLabel__SetAlpha(v7, alpha, 0);
  }
  return 1;
}