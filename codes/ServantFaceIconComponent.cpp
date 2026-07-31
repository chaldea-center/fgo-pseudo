void ServantFaceIconComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5937BBC & 1) == 0 )
  {
    sub_21FFC50(&ServantFaceIconComponent_TypeInfo);
    byte_5937BBC = 1;
  }
  *ServantFaceIconComponent_TypeInfo->static_fields = (struct ServantFaceIconComponent_StaticFields)0x1000186A1LL;
}


void ServantFaceIconComponent___ctor(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_UserServantEntity__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5937BBB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
    byte_5937BBB = 1;
  }
  v3 = System_Collections_Generic_List_UserServantEntity__TypeInfo;
  this->fields.collectionStatus = 2;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserSvtEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserSvtEntityList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
  this->fields.equipTargetInfoList = (struct System_Collections_Generic_List_EquipTargetInfo__o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipTargetInfoList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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

  if ( (byte_5937BAD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BAD = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.limitCountSprite;
    if ( !v7 )
      sub_21FFECC(0, v6);
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

  if ( (byte_5937BB0 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BB0 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      sub_21FFECC(transform, v8);
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
  if ( (byte_5937BB2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BB2 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_21FFECC(transform, v8);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(typeSprite, method);
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

  if ( (byte_5937B8A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21308/*"img_commonbg_02"*/);
    byte_5937B8A = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  frameSprite = this->fields.frameSprite;
  if ( !frameSprite )
    sub_21FFECC(0, v3);
  UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_21308/*"img_commonbg_02"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__ChangeClassIcon(
        ServantFaceIconComponent_o *this,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  UISprite_o *classSprite; // x22
  const MethodInfo *v8; // x1

  if ( (byte_5937BB5 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_5937BB5 = 1;
  }
  classSprite = this->fields.classSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&frameType);
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

  if ( (byte_5937B86 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5937B86 = 1;
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
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__) )
      {
        equipUserSvtEntityList = this->fields.equipTargetInfoList;
        if ( !equipUserSvtEntityList )
          goto LABEL_35;
        equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
                                   this->fields.displayEquipIndex,
                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
        if ( !equipUserSvtEntityList )
          goto LABEL_35;
        v7 = *((_QWORD *)equipUserSvtEntityList + 7);
        v8 = *((_QWORD *)equipUserSvtEntityList + 8);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
        *(_QWORD *)&v21.fields.currentCryptoKey = v7;
        *(_QWORD *)&v21.fields.fakeValue = v8;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v21, 0) >= 1 )
        {
          ServantFaceIconComponent__SetActiveEquipSprite(this, 1, v9);
          equipUserSvtEntityList = this->fields.equipTargetInfoList;
          if ( equipUserSvtEntityList )
          {
            equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
                                       this->fields.displayEquipIndex,
                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
            if ( equipUserSvtEntityList )
            {
              v10 = *((_QWORD *)equipUserSvtEntityList + 7);
              v11 = *((_QWORD *)equipUserSvtEntityList + 8);
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
              *(_QWORD *)&v22.fields.currentCryptoKey = v10;
              *(_QWORD *)&v22.fields.fakeValue = v11;
              equipUserSvtEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                 v22,
                                                 0);
              if ( this->fields.equipTargetInfoList )
              {
                v12 = (int)equipUserSvtEntityList;
                equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)this->fields.equipTargetInfoList,
                                           this->fields.displayEquipIndex,
                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
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
                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
                    if ( equipUserSvtEntityList )
                    {
                      ServantFaceIconComponent__SetEquip_48009572(
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
          sub_21FFECC(equipUserSvtEntityList, v4);
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
          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
    goto LABEL_34;
  equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
  if ( !equipUserSvtEntityList )
    goto LABEL_35;
  equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
                             this->fields.displayEquipIndex,
                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !equipUserSvtEntityList )
    goto LABEL_35;
  v16 = *((_QWORD *)equipUserSvtEntityList + 10);
  v17 = *((_QWORD *)equipUserSvtEntityList + 11);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v23.fields.currentCryptoKey = v16;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v23, 0) < 1 )
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
           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  ServantFaceIconComponent__SetEquip(this, (UserServantEntity_o *)Item, v20);
}


void ServantFaceIconComponent__Clear(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UISprite_o *backSprite; // x20
  const MethodInfo *v17; // x1
  UISprite_o *faceSprite; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *costumeIconSprite; // x20
  UnityEngine_Object_o *limitCountSprite; // x20
  UnityEngine_Object_o *limitCountIcon; // x20
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v25; // x1
  UISprite_o *v26; // x20
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *shiningIcon; // x20
  UnityEngine_Object_o *faceEffectSprite; // x20

  if ( (byte_5937B89 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B89 = 1;
  }
  this->fields.isGrand = 0;
  this->fields.info1 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.info1, 0, v2, v3, v4, v5, v6, v7);
  this->fields.info2 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.info2, 0, v9, v10, v11, v12, v13, v14);
  backSprite = this->fields.backSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    faceSprite = this->fields.classSprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0, 0);
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(costumeIconSprite, 0, 0) )
  {
    faceSprite = this->fields.costumeIconSprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0, 0);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0, 0) )
  {
    faceSprite = (UISprite_o *)this->fields.limitCountIcon;
    if ( !faceSprite )
      goto LABEL_53;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)faceSprite, v17);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    v26 = this->fields.raritySprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
    AtlasManager__SetCommon(v26, 0);
    faceSprite = this->fields.raritySprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0, 0);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) )
  {
    faceSprite = (UISprite_o *)this->fields.iconLabel;
    if ( !faceSprite )
      goto LABEL_53;
    UIIconLabel__Clear((UIIconLabel_o *)faceSprite, 0);
  }
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0, 0) )
  {
    faceSprite = (UISprite_o *)this->fields.shiningIcon;
    if ( !faceSprite )
      goto LABEL_53;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)faceSprite, v17);
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(faceEffectSprite, 0, 0) )
  {
    faceSprite = this->fields.faceEffectSprite;
    if ( faceSprite )
    {
      UISprite__set_spriteName(faceSprite, 0, 0);
      goto LABEL_52;
    }
LABEL_53:
    sub_21FFECC(faceSprite, v17);
  }
LABEL_52:
  ServantFaceIconComponent__ClearEquip(this, v17);
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
  UnityEngine_Object_c *v10; // x0
  UnityEngine_Object_o *equipSprite; // x20
  __int64 v12; // x1
  UnityEngine_Object_o *hideEquipSprite; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20

  v2 = this;
  if ( (byte_5937BA6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipTargetInfo__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    this = (ServantFaceIconComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BA6 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(switchEquipInfo, 0, 0) )
  {
    this = (ServantFaceIconComponent_o *)v2->fields.switchEquipInfo;
    if ( !this )
      goto LABEL_44;
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)this, 0);
  }
  v10 = UnityEngine_Object_TypeInfo;
  equipSprite = (UnityEngine_Object_o *)v2->fields.equipSprite;
  v2->fields.equipFriendShipSkillChange = 0;
  if ( !*(&v10->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v10, method);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0, 0) )
    {
      this = (ServantFaceIconComponent_o *)v2->fields.rarity2Sprite;
      if ( !this )
        goto LABEL_44;
      UISprite__set_spriteName((UISprite_o *)this, 0, 0);
    }
    friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)v2->fields.friendShipSvtEquipIconSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      sub_21FFECC(this, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__ClearEquip_48024580(
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
  UnityEngine_Object_c *v12; // x0
  UnityEngine_Object_o *equipSprite; // x21
  __int64 v14; // x1
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x21
  bool IsServant; // w8
  __int64 v17; // x1
  UISprite_o *noneEquipSprite; // x20
  __int64 v19; // x1
  UnityEngine_Object_o *hideEquipSprite; // x20
  __int64 v21; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8
  __int64 v25; // x1
  UnityEngine_Object_o *v26; // x20
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Object_o *v29; // x20

  v4 = this;
  if ( (byte_5937BA7 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipTargetInfo__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (ServantFaceIconComponent_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937BA7 = 1;
  }
  equipUserSvtEntityList = v4->fields.equipUserSvtEntityList;
  v4->fields.displayEquipIndex = 0;
  if ( !equipUserSvtEntityList )
    goto LABEL_72;
  size = equipUserSvtEntityList->fields._size;
  v7 = equipUserSvtEntityList->fields._version + 1;
  equipUserSvtEntityList->fields._size = 0;
  equipUserSvtEntityList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipUserSvtEntityList->fields._items, 0, size, 0);
  equipTargetInfoList = v4->fields.equipTargetInfoList;
  if ( !equipTargetInfoList )
    goto LABEL_72;
  v9 = equipTargetInfoList->fields._size;
  v10 = equipTargetInfoList->fields._version + 1;
  equipTargetInfoList->fields._size = 0;
  equipTargetInfoList->fields._version = v10;
  if ( v9 >= 1 )
    System_Array__Clear((System_Array_o *)equipTargetInfoList->fields._items, 0, v9, 0);
  switchEquipInfo = (UnityEngine_Object_o *)v4->fields.switchEquipInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&baseSvtId);
  if ( UnityEngine_Object__op_Inequality(switchEquipInfo, 0, 0) )
  {
    this = (ServantFaceIconComponent_o *)v4->fields.switchEquipInfo;
    if ( !this )
      goto LABEL_72;
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)this, 0);
  }
  v12 = UnityEngine_Object_TypeInfo;
  equipSprite = (UnityEngine_Object_o *)v4->fields.equipSprite;
  v4->fields.equipFriendShipSkillChange = 0;
  if ( !*(&v12->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v12, *(_QWORD *)&baseSvtId);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0, 0) )
  {
    friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)v4->fields.friendShipSvtEquipIconSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
    {
      this = (ServantFaceIconComponent_o *)v4->fields.friendShipSvtEquipIconSprite;
      if ( !this )
        goto LABEL_72;
      this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    this = (ServantFaceIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ServantFaceIconComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( this )
      {
        this = (ServantFaceIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               baseSvtId,
                                               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( this )
        {
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)this, 0);
          this = (ServantFaceIconComponent_o *)v4->fields.noneEquipSprite;
          if ( IsServant )
          {
            if ( this )
            {
              this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                noneEquipSprite = v4->fields.noneEquipSprite;
                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17);
                AtlasManager__SetEmptyEquipSprite(noneEquipSprite, 0, 1, 0);
                hideEquipSprite = (UnityEngine_Object_o *)v4->fields.hideEquipSprite;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
                if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
                {
                  this = (ServantFaceIconComponent_o *)v4->fields.hideEquipSprite;
                  if ( !this )
                    goto LABEL_72;
                  this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
                  if ( !this )
                    goto LABEL_72;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                }
                this = (ServantFaceIconComponent_o *)v4->fields.equipSprite;
                if ( !this )
                  goto LABEL_72;
                UISprite__set_spriteName((UISprite_o *)this, 0, 0);
                equipLimitCountSprite = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
                if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
                {
                  this = (ServantFaceIconComponent_o *)v4->fields.equipLimitCountSprite;
                  if ( !this )
                    goto LABEL_72;
                  this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
                  if ( !this )
                    goto LABEL_72;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                }
                rarity2Sprite = (UnityEngine_Object_o *)v4->fields.rarity2Sprite;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&baseSvtId);
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
            }
          }
          else if ( this )
          {
            this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              v26 = (UnityEngine_Object_o *)v4->fields.hideEquipSprite;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
              if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
              {
                this = (ServantFaceIconComponent_o *)v4->fields.hideEquipSprite;
                if ( !this )
                  goto LABEL_72;
                this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
                if ( !this )
                  goto LABEL_72;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              }
              this = (ServantFaceIconComponent_o *)v4->fields.equipSprite;
              if ( !this )
                goto LABEL_72;
              UISprite__set_spriteName((UISprite_o *)this, 0, 0);
              v28 = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
              if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
              {
                this = (ServantFaceIconComponent_o *)v4->fields.equipLimitCountSprite;
                if ( !this )
                  goto LABEL_72;
                this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
                if ( !this )
                  goto LABEL_72;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              }
              v29 = (UnityEngine_Object_o *)v4->fields.rarity2Sprite;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&baseSvtId);
              if ( !UnityEngine_Object__op_Inequality(v29, 0, 0) )
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
LABEL_72:
    sub_21FFECC(this, *(_QWORD *)&baseSvtId);
  }
}


void ServantFaceIconComponent__ClearFaceAtlas(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *faceSprite; // x0

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite || (UISprite__set_atlas(faceSprite, 0, 0), (faceSprite = this->fields.faceSprite) == 0) )
    sub_21FFECC(faceSprite, method);
  UISprite__set_spriteName(faceSprite, 0, 0);
}


void ServantFaceIconComponent__ClearShiningIcon(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ShiningIconComponent_o *shiningIcon; // x0

  shiningIcon = this->fields.shiningIcon;
  if ( !shiningIcon )
    sub_21FFECC(0, method);
  ShiningIconComponent__Clear(shiningIcon, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__FaceSpriteDisp(ServantFaceIconComponent_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *faceSprite; // x0
  bool v5; // w1

  faceSprite = (UnityEngine_Component_o *)this->fields.faceSprite;
  if ( !flag )
  {
    if ( faceSprite )
    {
      faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0);
      if ( faceSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, 0, 0);
        faceSprite = (UnityEngine_Component_o *)this->fields.iconLabel;
        if ( faceSprite )
        {
          faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0);
          if ( faceSprite )
          {
            v5 = 0;
            goto LABEL_12;
          }
        }
      }
    }
LABEL_13:
    sub_21FFECC(faceSprite, flag);
  }
  if ( !faceSprite )
    goto LABEL_13;
  faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0);
  if ( !faceSprite )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, 1, 0);
  faceSprite = (UnityEngine_Component_o *)this->fields.iconLabel;
  if ( !faceSprite )
    goto LABEL_13;
  faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0);
  if ( !faceSprite )
    goto LABEL_13;
  v5 = 1;
LABEL_12:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, v5, 0);
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
  if ( (byte_5937B85 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    this = (ServantFaceIconComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B85 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_21FFECC(this, method);
  }
}


System_String_o *ServantFaceIconComponent__GetFaceSpriteName(
        ServantFaceIconComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *faceSprite; // x8

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite )
    sub_21FFECC(this, method);
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

  if ( (byte_5937BB6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937BB6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v7);
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
  __int64 v6; // x1
  UnityEngine_Object_o *hideEquipSprite; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20

  if ( (byte_5937BAB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BAB = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0, 0) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
      if ( noneEquipSprite )
      {
        UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0, 0);
        return;
      }
LABEL_27:
      sub_21FFECC(noneEquipSprite, v4);
    }
  }
}


bool ServantFaceIconComponent__IsUseEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Component_o *noneEquipSprite; // x0
  __int64 v5; // x1
  struct UIMeshSprite_o *v6; // x8

  if ( (byte_5937BAC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BAC = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      sub_21FFECC(noneEquipSprite, v5);
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

  if ( (byte_5937B8B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21348/*"img_frames_nodata"*/);
    byte_5937B8B = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_21FFECC(0, v3);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_21348/*"img_frames_nodata"*/, 0);
}


void ServantFaceIconComponent__NoMountGrandSupport(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *backSprite; // x19

  if ( (byte_5937B8E & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20500/*"formation_grand_select_small"*/);
    byte_5937B8E = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v3);
  AtlasManager__SetPartyOrganizationImage(backSprite, (System_String_o *)StringLiteral_20500/*"formation_grand_select_small"*/, 0);
}


void ServantFaceIconComponent__NoMountSupport(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *backSprite; // x19

  if ( (byte_5937B8D & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20503/*"formation_select_small"*/);
    byte_5937B8D = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v3);
  AtlasManager__SetPartyOrganizationImage(backSprite, (System_String_o *)StringLiteral_20503/*"formation_select_small"*/, 0);
}


void ServantFaceIconComponent__NoMount_48012608(
        ServantFaceIconComponent_o *this,
        System_String_o *imgName,
        bool isDownLoad,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  UISprite_o *backSprite; // x21

  if ( (byte_5937B8C & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_5937B8C = 1;
  }
  ServantFaceIconComponent__Clear(this, (const MethodInfo *)imgName);
  backSprite = this->fields.backSprite;
  if ( isDownLoad )
  {
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
    AtlasManager__SetDownloadCommonSprite(backSprite, imgName, 0);
  }
  else
  {
    if ( !backSprite )
      sub_21FFECC(v7, v8);
    UISprite__set_spriteName(backSprite, imgName, 0);
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

  if ( (byte_5937BB8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BB8 = 1;
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      sub_21FFECC(transform, v4);
    }
  }
}


void ServantFaceIconComponent__ResetIconLabelPos(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0

  if ( (byte_5937BB1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BB1 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0, 0) )
  {
    if ( this->fields.isAdjustIconLabelPos )
    {
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( !transform
        || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0 )
      {
        sub_21FFECC(transform, v4);
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

  if ( (byte_5937BB3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BB3 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        sub_21FFECC(transform, v4);
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
        bool useGroupIcon,
        const MethodInfo *method)
{
  void *OverwriteStatus; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  bool IsGrandServant; // w28
  __int128 v23; // q1
  int v24; // w8
  __int64 v25; // x1
  int64_t v26; // x29
  NetworkManager_c *v27; // x0
  bool v28; // w23
  int32_t IconLimitCountStageSealAfterIndexZero; // w25
  __int64 v30; // x1
  int32_t v31; // w26
  __int64 v32; // x24
  __int64 v33; // x27
  int32_t v34; // w0
  int32_t v35; // w27
  int32_t v36; // w28
  bool IsNew; // w29
  bool IsEventJoin; // w0
  int32_t lv; // w19
  bool v40; // w24
  int32_t FriendIconLimitCount; // w25
  __int64 v42; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v44; // x26
  __int64 v45; // x27
  int32_t ServantImageLimitSealAfter; // w25
  int32_t ServantId; // w26
  int32_t v48; // w0
  int32_t exceedCount; // w27
  int32_t v50; // w24
  int32_t v51; // w28
  const MethodInfo *v52; // x1
  __int64 v53; // x21
  __int64 v54; // x22
  int32_t v55; // w0
  const MethodInfo *v56; // x4
  const MethodInfo *v57; // [xsp+58h] [xbp-D8h]
  int32_t actualRarity; // [xsp+70h] [xbp-C0h]
  int32_t v59; // [xsp+74h] [xbp-BCh]
  System_Int64_array *v60; // [xsp+78h] [xbp-B8h]
  IconLabelInfo_o *v61; // [xsp+80h] [xbp-B0h]
  IconLabelInfo_o *v62; // [xsp+88h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_5937B8F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937B8F = 1;
  }
  if ( !userSvtEntity )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
    return;
  }
  v61 = info1;
  v62 = info2;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(userSvtEntity, questRestrictionInfo, 0);
  if ( !OverwriteStatus )
    goto LABEL_38;
  actualRarity = *((_DWORD *)OverwriteStatus + 10);
  v59 = *((_DWORD *)OverwriteStatus + 6);
  IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0);
  v23 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v64.fields.fakeValue = v23;
  if ( !v24 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
  v63 = v64;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v63, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
  v60 = equipIdList;
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v27 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
    v27 = NetworkManager_TypeInfo;
  }
  v28 = (IsGrandServant || isGrand) && !forceNotGrand;
  if ( v26 != v27->static_fields->userIdNumber )
  {
    FriendIconLimitCount = UserServantEntity__getFriendIconLimitCount(userSvtEntity, 0, 0);
    OverwriteStatus = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( OverwriteStatus )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)OverwriteStatus,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v44 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
      *(_QWORD *)&v66.fields.currentCryptoKey = v44;
      *(_QWORD *)&v66.fields.fakeValue = v45;
      OverwriteStatus = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v66, 0);
      if ( MasterData_object )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)MasterData_object,
                                       (int32_t)OverwriteStatus,
                                       FriendIconLimitCount,
                                       0);
        ServantId = UserServantEntity__GetServantId(userSvtEntity, -1, 0);
        v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(userSvtEntity->fields.limitCount, 0);
        exceedCount = userSvtEntity->fields.exceedCount;
        v50 = userSvtEntity->fields.lv;
        v51 = v48;
        OverwriteStatus = (void *)(useGroupIcon
                                && (__int64)UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0));
        if ( this )
        {
          ServantFaceIconComponent__SetIcon(
            this,
            ServantId,
            v59,
            v51,
            ServantImageLimitSealAfter,
            exceedCount,
            v61,
            v62,
            2,
            0,
            0,
            0,
            0,
            v50,
            0,
            0,
            actualRarity,
            v28,
            (unsigned __int8)OverwriteStatus & 1,
            v57);
          goto LABEL_31;
        }
      }
    }
LABEL_38:
    sub_21FFECC(OverwriteStatus, v20);
  }
  IconLimitCountStageSealAfterIndexZero = UserServantEntity__GetIconLimitCountStageSealAfterIndexZero(
                                            userSvtEntity,
                                            -1,
                                            questRestrictionInfo,
                                            0);
  v31 = UserServantEntity__GetServantId(userSvtEntity, -1, 0);
  v32 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v33 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
  *(_QWORD *)&v65.fields.currentCryptoKey = v32;
  *(_QWORD *)&v65.fields.fakeValue = v33;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v65, 0);
  v35 = userSvtEntity->fields.exceedCount;
  v36 = v34;
  IsNew = UserServantEntity__IsNew(userSvtEntity, 0);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0);
  lv = userSvtEntity->fields.lv;
  v40 = IsEventJoin;
  OverwriteStatus = (void *)(useGroupIcon && UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0));
  if ( !this )
    goto LABEL_38;
  ServantFaceIconComponent__SetIcon(
    this,
    v31,
    v59,
    v36,
    IconLimitCountStageSealAfterIndexZero,
    v35,
    v61,
    v62,
    2,
    IsNew,
    v40,
    0,
    0,
    lv,
    0,
    0,
    actualRarity,
    v28,
    (unsigned __int8)OverwriteStatus & 1,
    v57);
LABEL_31:
  if ( v60 && v60->max_length )
  {
    v54 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v53 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
    *(_QWORD *)&v67.fields.currentCryptoKey = v54;
    *(_QWORD *)&v67.fields.fakeValue = v53;
    v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v67, 0);
    ServantFaceIconComponent__SetEquip_48016656(this, v55, v60, isChangeFriendShipSvtEquipSkill, v56);
  }
  else
  {
    ServantFaceIconComponent__ClearEquip(this, v52);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5937B87 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B87 = 1;
  }
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActiveEquipSprite);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
      sub_21FFECC(gameObject, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5937BA0 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BA0 = 1;
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCommandCode);
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
      sub_21FFECC(v14, v15);
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
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
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
  __int64 v16; // x1
  Il2CppObject *Component_object; // x26
  const MethodInfo *v18; // x6
  int32_t saveNameList; // w23
  __int64 v20; // x1
  UnityEngine_Object_o *equipSprite; // x24
  __int64 v22; // x1
  UnityEngine_Object_o *hideEquipSprite; // x24
  __int64 v24; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x24
  UISprite_o *backSprite; // x25
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x6
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  UnityEngine_Object_o *shiningIcon; // x23
  const MethodInfo *v33; // x2
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct IconLabelInfo_o **p_info1; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct IconLabelInfo_o **p_info2; // x0
  const MethodInfo *v50; // x2

  if ( (byte_5937B9F & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_21348/*"img_frames_nodata"*/);
    sub_21FFC50(&StringLiteral_21104/*"icon_common_new01"*/);
    byte_5937B9F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                commandCodeId,
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_60;
  v15 = Instance;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.faceSprite,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_60;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_object, 0);
  }
  if ( !v15 )
LABEL_60:
    sub_21FFECC(Instance, v14);
  saveNameList = (int32_t)v15->fields.saveNameList;
  this->fields.collectionStatus = collectionStatus;
  if ( collectionStatus == 2 || collectionStatus == 1 )
  {
    backSprite = this->fields.backSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
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
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21348/*"img_frames_nodata"*/, 0);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
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
  ServantFaceIconComponent__SetClassSprite(this, 1, 0, 0, 0, 0, v18);
  ServantFaceIconComponent__SetLimitCountSprite(this, 1, 0, 0, v27);
  ServantFaceIconComponent__SetLimitCountIcon(this, 1, 0, 0, v28);
  ServantFaceIconComponent__SetRaritySprite(this, 1, saveNameList, 0, 0, 0, v29);
  ServantFaceIconComponent__SetFaceEffectSprite(this, 1, v30);
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0, 0) )
  {
    if ( isNew && this->fields.collectionStatus != 6 )
    {
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( Instance )
      {
        ShiningIconComponent__Set_48030064(
          (ShiningIconComponent_o *)Instance,
          (System_String_o *)StringLiteral_21104/*"icon_common_new01"*/,
          v33);
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
    v40 = (int)info1;
    this->fields.info1 = info1;
    p_info1 = &this->fields.info1;
  }
  else
  {
    v40 = 0;
    this->fields.info1 = 0;
    p_info1 = &this->fields.info1;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_info1, v40, v34, v35, v36, v37, v38, v39);
  if ( info2 && !IconLabelInfo__IsClear(info2, 0) )
  {
    v48 = (int)info2;
    this->fields.info2 = info2;
    p_info2 = &this->fields.info2;
  }
  else
  {
    v48 = 0;
    this->fields.info2 = 0;
    p_info2 = &this->fields.info2;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_info2, v48, v42, v43, v44, v45, v46, v47);
  ServantFaceIconComponent__SetIconLabel(this, 0, v50);
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
  __int64 v12; // x1
  System_String_o *v13; // x20
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5937BB7 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_25100/*"svt_costume_icon_"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937BB7 = 1;
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtCostumeEntity);
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
        v13 = System_String__Concat_75438412((System_String_o *)StringLiteral_25100/*"svt_costume_icon_"*/, v11, 0);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
        if ( AtlasManager__SetEventSprite(v10, v13, 0) )
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
                v14.fields.z = 0.0;
                v14.fields.x = -47.0;
                v14.fields.y = -42.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v14, 0);
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
          sub_21FFECC(transform, v6);
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
  ServantFaceIconComponent_o *v8; // x20
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  __int64 v12; // x1
  ServantFaceIconComponent_c *v13; // x8
  int32_t limitCount; // w22
  int32_t v15; // w23
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // [xsp+50h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v8 = this;
  if ( (byte_5937B95 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantFaceIconComponent_o *)sub_21FFC50(&ServantFaceIconComponent_TypeInfo);
    byte_5937B95 = 1;
  }
  if ( !equipTargetInfo )
    sub_21FFECC(this, equipTargetInfo);
  v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v9;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0);
  v13 = ServantFaceIconComponent_TypeInfo;
  limitCount = equipTargetInfo->fields.limitCount;
  v15 = v11;
  if ( !*(&ServantFaceIconComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo, v12);
    v13 = ServantFaceIconComponent_TypeInfo;
  }
  ServantFaceIconComponent__Set_48021296(
    v8,
    v15,
    limitCount,
    v13->static_fields->SECRET_LIMIT_COUNT,
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
    0,
    v17);
  ServantFaceIconComponent__ClearEquip(v8, v16);
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__SetDispClassSprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *classSprite; // x0

  classSprite = (UnityEngine_Behaviour_o *)this->fields.classSprite;
  if ( !classSprite )
    sub_21FFECC(0, flag);
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
    sub_21FFECC(limitCountIcon, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitCountIcon, flag, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__SetDispRaritySprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *raritySprite; // x0

  raritySprite = (UnityEngine_Behaviour_o *)this->fields.raritySprite;
  if ( !raritySprite )
    sub_21FFECC(0, flag);
  UnityEngine_Behaviour__set_enabled(raritySprite, flag, 0);
}


void ServantFaceIconComponent__SetEmptyEquipSprite(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  __int64 v6; // x1
  UISprite_o *v7; // x20
  int32_t displayEquipIndex; // w19

  if ( (byte_5937B88 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B88 = 1;
  }
  ServantFaceIconComponent__SetActiveEquipSprite(this, 0, v2);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( !UnityEngine_Object__op_Equality(noneEquipSprite, 0, 0) )
  {
    v7 = this->fields.noneEquipSprite;
    displayEquipIndex = this->fields.displayEquipIndex;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
    AtlasManager__SetEmptyEquipSprite(v7, displayEquipIndex, 1, 0);
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

  if ( (byte_5937B92 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5937B92 = 1;
  }
  if ( userServantEntity )
  {
    v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
    *(_QWORD *)&v12.fields.currentCryptoKey = v5;
    *(_QWORD *)&v12.fields.fakeValue = v6;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v12, 0);
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v13.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    v9 = v7;
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v13, 0);
    ServantFaceIconComponent__SetEquip_48009572(this, 0, v9, v10, 0, v11);
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
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x22
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  const MethodInfo *v21; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_5937BA5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipTargetInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5937BA5 = 1;
  }
  ServantFaceIconComponent__NoMount(this, (const MethodInfo *)info);
  if ( info )
  {
    v6 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    *(_QWORD *)&v22.fields.currentCryptoKey = v6;
    *(_QWORD *)&v22.fields.fakeValue = v7;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v22, 0) )
    {
      v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v8,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
      if ( !v8
        || (items = v8->fields._items,
            v18 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__,
            ++v8->fields._version,
            !items) )
      {
        sub_21FFECC(v9, v10);
      }
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)info,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v20[4] = (Il2CppClass *)info;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)info, v11, v12, v13, v14, v15, v16);
      }
      ServantFaceIconComponent__SetEquip_48023364(
        this,
        0,
        (System_Collections_Generic_List_EquipTargetInfo__o *)v8,
        0,
        v21);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__SetEquip_48009572(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x24
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *noneEquipSprite; // x23
  _BOOL8 v15; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *hideEquipSprite; // x23
  UISprite_o *v19; // x23
  __int64 v20; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  __int64 v22; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *Entity; // x21
  int32_t monitor; // w8
  UnityEngine_Object_o *rarity2Sprite; // x20
  __int64 v28; // x1
  UnityEngine_Object_o *raritySprite; // x20
  struct UISprite_o *v30; // x8
  int32_t displayEquipIndex; // w21
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20
  UnityEngine_Object_o *v33; // x20
  UISprite_o *v34; // x20
  int v35; // w8
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  UnityEngine_Object_o *typeSprite; // x20

  if ( (byte_5937BAA & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_20606/*"func_group_icon_385"*/);
    sub_21FFC50(&StringLiteral_21282/*"img_bond_category"*/);
    byte_5937BAA = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&baseSvtId);
  if ( UnityEngine_Object__op_Equality(equipSprite, 0, 0) )
    return;
  if ( svtId < 1 )
  {
    ServantFaceIconComponent__ClearEquip_48024580(this, baseSvtId, v13);
    return;
  }
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(noneEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_83;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_83;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
    if ( !gameObject )
      goto LABEL_83;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v19 = (UISprite_o *)this->fields.equipSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
  AtlasManager__SetEquipFace(v19, svtId, imagePartsGroupIdxs, 0);
  equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( Master_object )
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 svtId,
                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    else
      Entity = 0;
    gameObject = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
    if ( !gameObject )
      goto LABEL_83;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( Entity )
    {
      monitor = (int32_t)Entity[5].monitor;
      v15 = monitor > 0 && monitor <= limitCount;
      if ( !gameObject )
        goto LABEL_83;
    }
    else
    {
      v15 = 0;
      if ( !gameObject )
        goto LABEL_83;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v15, 0);
  }
  rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0, 0) )
  {
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(raritySprite, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      v30 = this->fields.raritySprite;
      if ( !v30 )
        goto LABEL_83;
      gameObject = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
      if ( !gameObject )
        goto LABEL_83;
      UISprite__set_spriteName((UISprite_o *)gameObject, v30->fields.mSpriteName, 0);
    }
    gameObject = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
    if ( !gameObject )
      goto LABEL_83;
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
      gameObject,
      gameObject->klass[2]._1.generic_class);
  }
  displayEquipIndex = this->fields.displayEquipIndex;
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !gameObject )
      goto LABEL_83;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, displayEquipIndex == 1, 0);
  }
  v33 = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
  if ( displayEquipIndex != 1 || ((unsigned __int8)gameObject & 1) == 0 )
    goto LABEL_73;
  v34 = this->fields.friendShipSvtEquipIconSprite;
  v35 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.equipFriendShipSkillChange )
  {
    if ( !v35 )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
    gameObject = (UnityEngine_Component_o *)AtlasManager__SetEventUI(v34, (System_String_o *)StringLiteral_20606/*"func_group_icon_385"*/, 0);
    goto LABEL_73;
  }
  if ( !v35 )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
  AtlasManager__SetCommon(v34, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !gameObject )
LABEL_83:
    sub_21FFECC(gameObject, v15);
  UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_21282/*"img_bond_category"*/, 0);
LABEL_73:
  equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
  if ( !equipUserSvtEntityList )
    goto LABEL_83;
  if ( equipUserSvtEntityList->fields._size <= 1 )
  {
    equipTargetInfoList = this->fields.equipTargetInfoList;
    if ( !equipTargetInfoList )
      goto LABEL_83;
    if ( equipTargetInfoList->fields._size <= 1 )
    {
      typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      if ( !UnityEngine_Object__op_Equality(typeSprite, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
        if ( !gameObject )
          goto LABEL_83;
        UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__SetEquip_48016656(
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
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  MissionNaviTransitionBoardItem_o *v35; // x0
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
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct UIWidget_o *v53; // x23
  __int64 v54; // x22
  __int64 v55; // x1
  __int64 v56; // x21
  __int64 v57; // x22
  __int64 v58; // x21
  __int64 v59; // x22
  int32_t v60; // w21
  int32_t v61; // w0
  const MethodInfo *v62; // x5
  __int64 v63; // x0
  int32_t v64; // [xsp+4h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_5937BA8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipTargetInfo__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&UIWidget___TypeInfo);
    sub_21FFC50(&UserServantEntity_TypeInfo);
    byte_5937BA8 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  entity = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&baseSvtId);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
      sub_21FFECC(Master_object, v11);
    max_length = userSvtIdList->max_length;
    if ( max_length <= 1 )
    {
      if ( !max_length )
        goto LABEL_71;
      if ( !userSvtIdList->m_Items[0] )
      {
        ServantFaceIconComponent__ClearEquip_48024580(this, baseSvtId, v19);
        return;
      }
    }
    v64 = baseSvtId;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
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
               (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          Master_object = (__int64)this->fields.equipUserSvtEntityList;
          if ( !Master_object )
            goto LABEL_70;
          v31 = *(_QWORD *)(Master_object + 16);
          v11 = entity;
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
          v35 = (MissionNaviTransitionBoardItem_o *)(v34 + 32);
        }
        else
        {
LABEL_33:
          v36 = this->fields.equipUserSvtEntityList;
          v37 = (UserServantEntity_o *)sub_21FFEBC(UserServantEntity_TypeInfo);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v42 + 192) + 112LL));
            goto LABEL_41;
          }
          v41 = &items->obj.klass + v40;
          LODWORD(v11) = (_DWORD)v37;
          v36->fields._size = v40 + 1;
          v41[4] = (Il2CppClass *)v37;
          v35 = (MissionNaviTransitionBoardItem_o *)(v41 + 4);
        }
        sub_21FFBF4(v35, (int32_t)v11, v25, v26, v27, v28, v29, v30);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( !UnityEngine_Object__op_Inequality(v44, 0, 0) )
      goto LABEL_60;
    equipUiWidget = (UnityEngine_Object_o *)this->fields.equipUiWidget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( !UnityEngine_Object__op_Inequality(equipUiWidget, 0, 0) )
      goto LABEL_60;
    v46 = this->fields.switchEquipInfo;
    Master_object = sub_21FFD10(UIWidget___TypeInfo, 1);
    if ( !Master_object )
      goto LABEL_70;
    v53 = this->fields.equipUiWidget;
    v54 = Master_object;
    if ( v53 )
    {
      Master_object = sub_21FFDA4(this->fields.equipUiWidget, *(_QWORD *)(*(_QWORD *)Master_object + 64LL));
      if ( !Master_object )
      {
        v63 = sub_21FFEF0(0, v55);
        sub_21FFD90(v63, 0);
      }
    }
    if ( *(_DWORD *)(v54 + 24) )
    {
      *(_QWORD *)(v54 + 32) = v53;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v54 + 32), (int32_t)v53, v47, v48, v49, v50, v51, v52);
      if ( !v46 )
        goto LABEL_70;
      SwitchUIWidgetComponent__Set(v46, (UIWidget_array *)v54, 1, 0);
      Master_object = (__int64)this->fields.equipUserSvtEntityList;
      if ( !Master_object )
        goto LABEL_70;
      Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)Master_object,
                                 0,
                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Master_object )
        goto LABEL_70;
      v56 = *(_QWORD *)(Master_object + 80);
      v57 = *(_QWORD *)(Master_object + 88);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
      *(_QWORD *)&v66.fields.currentCryptoKey = v56;
      *(_QWORD *)&v66.fields.fakeValue = v57;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v66, 0) <= 0 )
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
                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( Master_object )
        {
          v58 = *(_QWORD *)(Master_object + 80);
          v59 = *(_QWORD *)(Master_object + 88);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
          *(_QWORD *)&v67.fields.currentCryptoKey = v58;
          *(_QWORD *)&v67.fields.fakeValue = v59;
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v67, 0);
          if ( this->fields.equipUserSvtEntityList )
          {
            v60 = Master_object;
            Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this->fields.equipUserSvtEntityList,
                                       this->fields.displayEquipIndex,
                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( Master_object )
            {
              v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(Master_object + 96),
                      0);
              ServantFaceIconComponent__SetEquip_48009572(this, v64, v60, v61, 0, v62);
              return;
            }
          }
        }
      }
      goto LABEL_70;
    }
LABEL_71:
    sub_21FFED4(Master_object);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__SetEquip_48023364(
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  UnityEngine_Object_o *v26; // x22
  __int64 v27; // x1
  UnityEngine_Object_o *equipUiWidget; // x22
  SwitchUIWidgetComponent_o *v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct UIWidget_o *v36; // x24
  __int64 v37; // x23
  __int64 v38; // x1
  __int64 v39; // x22
  __int64 v40; // x23
  const MethodInfo *v41; // x1
  __int64 v42; // x22
  __int64 v43; // x23
  int32_t v44; // w22
  int32_t v45; // w23
  const MethodInfo *v46; // x5
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_5937BA9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&UIWidget___TypeInfo);
    byte_5937BA9 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&baseSvtId);
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
                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    if ( !IsNullOrEmpty )
      goto LABEL_47;
    v13 = *(_QWORD *)(IsNullOrEmpty + 56);
    v14 = *(_QWORD *)(IsNullOrEmpty + 64);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    *(_QWORD *)&v48.fields.currentCryptoKey = v13;
    *(_QWORD *)&v48.fields.fakeValue = v14;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v48, 0);
    if ( (int)IsNullOrEmpty <= 0 )
    {
LABEL_7:
      ServantFaceIconComponent__ClearEquip_48024580(this, baseSvtId, v10);
      return;
    }
  }
  equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
  this->fields.displayEquipIndex = 0;
  this->fields.equipFriendShipSkillChange = isChangeFriendShipSvtEquipSkill;
  if ( !equipUserSvtEntityList )
    goto LABEL_47;
  size = equipUserSvtEntityList->fields._size;
  v17 = equipUserSvtEntityList->fields._version + 1;
  equipUserSvtEntityList->fields._size = 0;
  equipUserSvtEntityList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipUserSvtEntityList->fields._items, 0, size, 0);
  switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(switchEquipInfo, 0, 0) )
  {
    IsNullOrEmpty = (__int64)this->fields.switchEquipInfo;
    if ( !IsNullOrEmpty )
      goto LABEL_47;
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)IsNullOrEmpty, 0);
  }
  this->fields.equipTargetInfoList = equipTargetList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipTargetInfoList,
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
    sub_21FFECC(IsNullOrEmpty, v12);
  if ( equipTargetInfoList->fields._size < 2 )
    goto LABEL_40;
  v26 = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Inequality(v26, 0, 0) )
    goto LABEL_40;
  equipUiWidget = (UnityEngine_Object_o *)this->fields.equipUiWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( !UnityEngine_Object__op_Inequality(equipUiWidget, 0, 0) )
    goto LABEL_40;
  v29 = this->fields.switchEquipInfo;
  IsNullOrEmpty = sub_21FFD10(UIWidget___TypeInfo, 1);
  if ( !IsNullOrEmpty )
    goto LABEL_47;
  v36 = this->fields.equipUiWidget;
  v37 = IsNullOrEmpty;
  if ( v36 )
  {
    IsNullOrEmpty = sub_21FFDA4(this->fields.equipUiWidget, *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 64LL));
    if ( !IsNullOrEmpty )
    {
      v47 = sub_21FFEF0(0, v38);
      sub_21FFD90(v47, 0);
    }
  }
  if ( !*(_DWORD *)(v37 + 24) )
    sub_21FFED4(IsNullOrEmpty);
  *(_QWORD *)(v37 + 32) = v36;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 32), (int32_t)v36, v30, v31, v32, v33, v34, v35);
  if ( !v29 )
    goto LABEL_47;
  SwitchUIWidgetComponent__Set(v29, (UIWidget_array *)v37, 1, 0);
  IsNullOrEmpty = (__int64)this->fields.equipTargetInfoList;
  if ( !IsNullOrEmpty )
    goto LABEL_47;
  IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                             0,
                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
  if ( !IsNullOrEmpty )
    goto LABEL_47;
  v39 = *(_QWORD *)(IsNullOrEmpty + 56);
  v40 = *(_QWORD *)(IsNullOrEmpty + 64);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v49.fields.currentCryptoKey = v39;
  *(_QWORD *)&v49.fields.fakeValue = v40;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v49, 0) > 0 )
  {
LABEL_40:
    IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)equipTargetList,
                               0,
                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    if ( IsNullOrEmpty )
    {
      v42 = *(_QWORD *)(IsNullOrEmpty + 56);
      v43 = *(_QWORD *)(IsNullOrEmpty + 64);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
      *(_QWORD *)&v50.fields.currentCryptoKey = v42;
      *(_QWORD *)&v50.fields.fakeValue = v43;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v50, 0);
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)equipTargetList,
                                 0,
                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
      if ( IsNullOrEmpty )
      {
        v45 = *(_DWORD *)(IsNullOrEmpty + 72);
        IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipTargetList,
                                   0,
                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
        if ( IsNullOrEmpty )
        {
          ServantFaceIconComponent__SetEquip_48009572(
            this,
            baseSvtId,
            v44,
            v45,
            *(System_Int32_array **)(IsNullOrEmpty + 136),
            v46);
          return;
        }
      }
    }
    goto LABEL_47;
  }
  ServantFaceIconComponent__SetEmptyEquipSprite(this, v41);
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
  __int64 v10; // x1
  UISprite_o *backSprite; // x23
  int32_t v12; // w22
  int v13; // w9
  __int64 v14; // x1
  UISprite_o *faceSprite; // x23
  __int64 v16; // x1
  UnityEngine_Object_o *equipSprite; // x21
  __int64 v18; // x1
  UnityEngine_Object_o *hideEquipSprite; // x21
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  UnityEngine_Object_o *classSprite; // x21
  UnityEngine_Object_o *limitCountSprite; // x21
  UnityEngine_Object_o *limitCountIcon; // x21
  UnityEngine_Object_o *raritySprite; // x21
  const MethodInfo *v25; // x1
  UISprite_o *v26; // x21
  const MethodInfo *v27; // x2

  if ( (byte_5937B9E & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_22319/*"listframes_shadow"*/);
    byte_5937B9E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_58;
  FrameType = ServantExceedMaster__GetFrameType((ServantExceedMaster_o *)Instance, rarity, 0, 0, 0);
  backSprite = this->fields.backSprite;
  v12 = FrameType;
  v13 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
  if ( rarity < 1 )
  {
    if ( !v13 )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
    AtlasManager__SetDataLostFaceBaseIcon(backSprite, 0);
  }
  else
  {
    if ( !v13 )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
    AtlasManager__SetFaceBaseIcon(backSprite, v12, 0, 0, 0);
  }
  faceSprite = this->fields.faceSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
  AtlasManager__SetFaceImage(faceSprite, iconId, 0, 1, 0, 0, 0);
  Instance = (DataManager_o *)this->fields.frameSprite;
  if ( !Instance )
    goto LABEL_58;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_22319/*"listframes_shadow"*/, 0);
  AtlasManager__SetServantType(this->fields.typeSprite, 6, v12, 0, 0, 0);
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(equipSprite, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_58;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
    Instance = (DataManager_o *)this->fields.noneEquipSprite;
    if ( !Instance )
      goto LABEL_58;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_58;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_58;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
      if ( !Instance )
        goto LABEL_58;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_58;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.classSprite;
    if ( !Instance )
      goto LABEL_58;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.limitCountSprite;
    if ( !Instance )
      goto LABEL_58;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.limitCountIcon;
    if ( !Instance )
      goto LABEL_58;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)Instance, v8);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    v26 = this->fields.raritySprite;
    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v25);
    Instance = (DataManager_o *)Rarity__getIcon(rarity, 0);
    if ( v26 )
    {
      UISprite__set_spriteName(v26, (System_String_o *)Instance, 0);
      Instance = (DataManager_o *)this->fields.raritySprite;
      if ( Instance )
      {
        ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.parent)(
          Instance,
          Instance->klass[2]._1.generic_class);
        goto LABEL_57;
      }
    }
LABEL_58:
    sub_21FFECC(Instance, v8);
  }
LABEL_57:
  ServantFaceIconComponent__ClearEquip(this, v25);
  ServantFaceIconComponent__SetIconLabel(this, 0, v27);
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__SetFaceEffectSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *faceEffectSprite; // x21
  UISprite_o *v6; // x0
  __int64 v7; // x1
  int32_t collectionStatus; // w8
  UISprite_o *v9; // x19
  __int64 *v10; // x8

  if ( (byte_5937BA4 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_20236/*"f_1000013"*/);
    sub_21FFC50(&StringLiteral_22292/*"linklost_svt_material"*/);
    sub_21FFC50(&StringLiteral_22290/*"linkclose_svt_material"*/);
    sub_21FFC50(&StringLiteral_22289/*"linkbad_svt_material"*/);
    byte_5937BA4 = 1;
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCommandCode);
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(faceEffectSprite, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( isCommandCode )
    {
      v6 = this->fields.faceEffectSprite;
      if ( v6 )
      {
LABEL_8:
        UISprite__set_spriteName(v6, 0, 0);
        return;
      }
      goto LABEL_29;
    }
    collectionStatus = this->fields.collectionStatus;
    v9 = this->fields.faceEffectSprite;
    if ( collectionStatus > 9 )
    {
      if ( collectionStatus == 10 )
      {
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
        v10 = &StringLiteral_22290/*"linkclose_svt_material"*/;
        goto LABEL_28;
      }
      if ( collectionStatus == 11 )
      {
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
        v10 = &StringLiteral_20236/*"f_1000013"*/;
        goto LABEL_28;
      }
    }
    else
    {
      if ( collectionStatus == 8 )
      {
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
        v10 = &StringLiteral_22292/*"linklost_svt_material"*/;
        goto LABEL_28;
      }
      if ( collectionStatus == 9 )
      {
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
        v10 = &StringLiteral_22289/*"linkbad_svt_material"*/;
LABEL_28:
        AtlasManager__SetEventSprite(v9, (System_String_o *)*v10, 0);
        return;
      }
    }
    if ( v9 )
    {
      v6 = v9;
      goto LABEL_8;
    }
LABEL_29:
    sub_21FFECC(v6, v7);
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

  if ( (byte_5937BB9 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_5937BB9 = 1;
  }
  isGrand = this->fields.isGrand;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, maskSprite);
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

  if ( (byte_5937BBA & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_5937BBA = 1;
  }
  isGrand = this->fields.isGrand;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, maskSprite);
  AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(isGrand, maskSprite, defaultSpriteName, defaultMaskAtlas, 0);
}


void ServantFaceIconComponent__SetIcon(
        ServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t rarity,
        int32_t limitCount,
        int32_t iconLimitCount,
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
        bool useGroupIcon,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v25; // x1
  ServantEntity_o *v26; // x27
  __int64 v27; // x1
  Il2CppObject *Component_object; // x22
  UnityEngine_Object_c *v29; // x0
  int32_t v30; // w21
  int32_t v31; // w22
  int32_t classId; // w28
  int32_t FrameTypeFixRarity; // w29
  int32_t FrameType; // w29
  const MethodInfo *v35; // x2
  __int64 v36; // x1
  UISprite_o *v37; // x26
  const MethodInfo *v38; // x2
  bool IsServantEquip; // w0
  const MethodInfo *v40; // x6
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x4
  const MethodInfo *v43; // x6
  const MethodInfo *v44; // x2
  __int64 v45; // x1
  UnityEngine_Object_o *shiningIcon; // x19
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x3
  UISprite_o *v49; // x19
  UISprite_o *v50; // x21
  const MethodInfo *v51; // x2
  __int64 *v52; // x8
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t v59; // w1
  struct IconLabelInfo_o **p_info1; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  int32_t v67; // w1
  struct IconLabelInfo_o **p_info2; // x0
  const MethodInfo *v69; // x2
  UISprite_o *v70; // x19
  UISprite_o *faceSprite; // x19
  UISprite_o *backSprite; // x19
  UISprite_o *v73; // x19
  __int64 v74; // x1
  UISprite_o *v75; // x19
  ServantFaceIconComponent_c *v76; // x0
  __int64 v77; // x1
  UnityEngine_Object_o *v78; // x19
  __int64 v79; // x1
  UnityEngine_Object_o *v80; // x19
  __int64 v81; // x1
  UnityEngine_Object_o *equipSprite; // x19
  __int64 v83; // x1
  UnityEngine_Object_o *hideEquipSprite; // x19
  UnityEngine_Object_o *equipLimitCountSprite; // x19

  if ( (byte_5937B9D & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantFaceIconComponent_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_21348/*"img_frames_nodata"*/);
    sub_21FFC50(&StringLiteral_21104/*"icon_common_new01"*/);
    sub_21FFC50(&StringLiteral_22319/*"listframes_shadow"*/);
    sub_21FFC50(&StringLiteral_21129/*"icon_eventjoin_01"*/);
    byte_5937B9D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_124;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_124;
  v26 = (ServantEntity_o *)Instance;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.faceSprite,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  v29 = UnityEngine_Object_TypeInfo;
  this->fields.isGrand = isGrandServant;
  if ( !*(&v29->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v29, v27);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  v30 = actualRarity;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_124;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_object, 0);
  }
  if ( iconLimitCount < 0 )
  {
    if ( svtId < 1 )
    {
      iconLimitCount = 0;
    }
    else
    {
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v25);
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
      iconLimitCount = (int)Instance;
      if ( isCheckSeal )
      {
        Instance = (DataManager_o *)ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                      (ServantFaceIconComponent_o *)Instance,
                                      svtId,
                                      (int32_t)Instance,
                                      v48);
        iconLimitCount = (int)Instance;
      }
    }
  }
  v31 = imageSvtId ? imageSvtId : svtId;
  if ( !v26 )
    goto LABEL_124;
  classId = v26->fields.classId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_124;
  FrameTypeFixRarity = ServantExceedMaster__GetFrameTypeFixRarity(
                         (ServantExceedMaster_o *)Instance,
                         svtId,
                         exceedCount,
                         actualRarity,
                         isGrandServant,
                         0);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
  if ( !Instance )
    goto LABEL_124;
  FrameType = ServantLvDetailMaster__GetFrameType(
                (ServantLvDetailMaster_o *)Instance,
                actualRarity,
                lv,
                FrameTypeFixRarity,
                isGrandServant,
                0);
  ServantFaceIconComponent__SetCostumeIcon(this, 0, v35);
  this->fields.collectionStatus = collectionStatus;
  if ( collectionStatus <= 5 )
  {
    if ( collectionStatus > 1 )
    {
      if ( (unsigned int)(collectionStatus - 2) >= 2 )
      {
        if ( collectionStatus == 4 )
        {
          backSprite = this->fields.backSprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36);
          AtlasManager__SetFaceBaseIcon(backSprite, FrameType, classId, isGrandServant, 0);
          AtlasManager__SetHideFace(this->fields.faceSprite, 0);
          goto LABEL_30;
        }
        if ( collectionStatus != 5 )
          goto LABEL_32;
      }
LABEL_27:
      v37 = this->fields.backSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36);
      AtlasManager__SetFaceBaseIcon(v37, FrameType, classId, isGrandServant, 0);
      AtlasManager__SetFaceImage(this->fields.faceSprite, v31, iconLimitCount, 1, imagePartsGroupIdxs, useGroupIcon, 0);
      ServantFaceIconComponent__SetCostumeIcon(this, svtCostumeEntity, v38);
LABEL_30:
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_124;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_22319/*"listframes_shadow"*/, 0);
      AtlasManager__SetServantType(this->fields.typeSprite, v26->fields.type, FrameType, classId, isGrandServant, 0);
      goto LABEL_32;
    }
    if ( collectionStatus )
    {
      if ( collectionStatus == 1 )
      {
        v50 = this->fields.backSprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36);
        AtlasManager__SetFaceBaseIcon(v50, FrameType, classId, isGrandServant, 0);
        AtlasManager__SetFaceImage(this->fields.faceSprite, v31, iconLimitCount, 0, 0, useGroupIcon, 0);
        ServantFaceIconComponent__SetCostumeIcon(this, svtCostumeEntity, v51);
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_124;
        UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_22319/*"listframes_shadow"*/, 0);
        AtlasManager__SetServantType(this->fields.typeSprite, v26->fields.type, FrameType, classId, isGrandServant, 0);
        v30 = actualRarity;
      }
      goto LABEL_32;
    }
    v70 = this->fields.backSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36);
    AtlasManager__SetCommon(v70, 0);
    Instance = (DataManager_o *)this->fields.backSprite;
    if ( Instance )
    {
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21348/*"img_frames_nodata"*/, 0);
      Instance = (DataManager_o *)AtlasManager__IsUseFaceBattle(0);
      faceSprite = this->fields.faceSprite;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
        AtlasManager__SetFaceImage(faceSprite, 0, 0, 1, 0, 0, 0);
      }
      else
      {
        if ( !faceSprite )
          goto LABEL_124;
        UISprite__set_spriteName(this->fields.faceSprite, 0, 0);
      }
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( Instance )
      {
        UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
        Instance = (DataManager_o *)this->fields.typeSprite;
        if ( Instance )
        {
          UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
          equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v81);
          if ( !UnityEngine_Object__op_Inequality(equipSprite, 0, 0) )
            goto LABEL_32;
          Instance = (DataManager_o *)this->fields.noneEquipSprite;
          if ( !Instance )
            goto LABEL_124;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          if ( !Instance )
            goto LABEL_124;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83);
          if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0, 0) )
          {
            Instance = (DataManager_o *)this->fields.hideEquipSprite;
            if ( !Instance )
              goto LABEL_124;
            Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( !Instance )
              goto LABEL_124;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          }
          Instance = (DataManager_o *)this->fields.equipSprite;
          if ( !Instance )
            goto LABEL_124;
          UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
          goto LABEL_118;
        }
      }
    }
LABEL_124:
    sub_21FFECC(Instance, v25);
  }
  if ( (unsigned int)(collectionStatus - 8) < 4 )
    goto LABEL_27;
  if ( collectionStatus == 6 )
  {
    v73 = this->fields.backSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36);
    AtlasManager__SetFaceBaseIcon(v73, FrameType, classId, isGrandServant, 0);
    v75 = this->fields.faceSprite;
    v76 = ServantFaceIconComponent_TypeInfo;
    if ( !*(&ServantFaceIconComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo, v74);
      v76 = ServantFaceIconComponent_TypeInfo;
    }
    AtlasManager__SetFaceImage(
      v75,
      v76->static_fields->SECRET_SERVANT_ID,
      v76->static_fields->SECRET_LIMIT_COUNT,
      1,
      0,
      0,
      0);
    Instance = (DataManager_o *)this->fields.frameSprite;
    v30 = actualRarity;
    if ( !Instance )
      goto LABEL_124;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_22319/*"listframes_shadow"*/, 0);
    AtlasManager__SetServantType(this->fields.typeSprite, v26->fields.type, FrameType, classId, isGrandServant, 0);
    v78 = (UnityEngine_Object_o *)this->fields.equipSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
    if ( !UnityEngine_Object__op_Equality(v78, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_124;
      UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_124;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_124;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v80 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
      if ( UnityEngine_Object__op_Inequality(v80, 0, 0) )
      {
        Instance = (DataManager_o *)this->fields.hideEquipSprite;
        if ( !Instance )
          goto LABEL_124;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_124;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
LABEL_118:
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
      {
        Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
        if ( !Instance )
          goto LABEL_124;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_124;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
    }
  }
  else if ( collectionStatus == 7 )
  {
    v49 = this->fields.backSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36);
    AtlasManager__SetDataLostFaceBaseIcon(v49, 0);
    AtlasManager__SetDataLostFace(this->fields.faceSprite, 0);
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_124;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
    Instance = (DataManager_o *)this->fields.typeSprite;
    if ( !Instance )
      goto LABEL_124;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
  }
LABEL_32:
  IsServantEquip = ServantEntity__get_IsServantEquip(v26, 0);
  ServantFaceIconComponent__SetClassSprite(this, 0, IsServantEquip, classId, FrameType, isGrandServant, v40);
  ServantFaceIconComponent__SetLimitCountSprite(this, 0, v26->fields.limitMax, limitCount, v41);
  ServantFaceIconComponent__SetLimitCountIcon(this, 0, v26->fields.limitMax, limitCount, v42);
  ServantFaceIconComponent__SetRaritySprite(this, 0, rarity, exceedCount, lv, v30, v43);
  ServantFaceIconComponent__SetFaceEffectSprite(this, 0, v44);
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0, 0) )
  {
    if ( isTemporarySubscription && (this->fields.collectionStatus & 0xFFFFFFFE) != 6 )
    {
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( !Instance )
        goto LABEL_124;
      v52 = &StringLiteral_21129/*"icon_eventjoin_01"*/;
    }
    else
    {
      if ( !isNew || (this->fields.collectionStatus & 0xFFFFFFFE) == 6 )
      {
        Instance = (DataManager_o *)this->fields.shiningIcon;
        if ( Instance )
        {
          ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, v25);
          goto LABEL_65;
        }
        goto LABEL_124;
      }
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( !Instance )
        goto LABEL_124;
      v52 = &StringLiteral_21104/*"icon_common_new01"*/;
    }
    ShiningIconComponent__Set_48030064((ShiningIconComponent_o *)Instance, (System_String_o *)*v52, v47);
  }
LABEL_65:
  ServantFaceIconComponent__ClearEquip(this, v25);
  if ( info1 && !IconLabelInfo__IsClear(info1, 0) )
  {
    v59 = (int)info1;
    this->fields.info1 = info1;
    p_info1 = &this->fields.info1;
  }
  else
  {
    v59 = 0;
    this->fields.info1 = 0;
    p_info1 = &this->fields.info1;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_info1, v59, v53, v54, v55, v56, v57, v58);
  if ( info2 && !IconLabelInfo__IsClear(info2, 0) )
  {
    v67 = (int)info2;
    this->fields.info2 = info2;
    p_info2 = &this->fields.info2;
  }
  else
  {
    v67 = 0;
    this->fields.info2 = 0;
    p_info2 = &this->fields.info2;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_info2, v67, v61, v62, v63, v64, v65, v66);
  ServantFaceIconComponent__SetIconLabel(this, 0, v69);
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__SetIconLabel(ServantFaceIconComponent_o *this, int32_t count, const MethodInfo *method)
{
  char v3; // w20
  UnityEngine_Object_o *iconLabel; // x21
  IconLabelInfo_o *info1; // x1
  int32_t collectionStatus; // w8
  UIIconLabel_o *v8; // x0
  __int64 v9; // x9

  v3 = count;
  if ( (byte_5937BAE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BAE = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
  if ( UnityEngine_Object__op_Equality(iconLabel, 0, 0) )
    return;
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
    sub_21FFECC(v8, info1);
  }
  if ( this->fields.info2 )
  {
    v9 = 208;
    if ( (v3 & 1) == 0 )
      v9 = 200;
    v8 = this->fields.iconLabel;
    info1 = *(IconLabelInfo_o **)((char *)&this->klass + v9);
    if ( collectionStatus == 4 )
      goto LABEL_15;
  }
  else
  {
    v8 = this->fields.iconLabel;
    if ( collectionStatus == 4 )
    {
LABEL_15:
      if ( !v8 )
        goto LABEL_20;
      UIIconLabel__Set_48064564(v8, info1, 1, 0);
      return;
    }
  }
  if ( !v8 )
    goto LABEL_20;
  UIIconLabel__Set(v8, info1, 0);
}


void ServantFaceIconComponent__SetIconLabelBitmapFont(
        ServantFaceIconComponent_o *this,
        UIFont_o *bitmapFont,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x21
  __int64 v6; // x1
  UIIconLabel_o *v7; // x0

  if ( (byte_5937BB4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BB4 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bitmapFont);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0, 0) )
  {
    v7 = this->fields.iconLabel;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UIIconLabel__SetTextLabelBitmapFont(v7, bitmapFont, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t collectionStatus; // w8
  LimitCountIconComponent_o *v13; // x0

  if ( (byte_5937BA2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BA2 = 1;
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCommandCode);
  if ( !UnityEngine_Object__op_Equality(limitCountIcon, 0, 0) )
  {
    if ( isCommandCode
      || (collectionStatus = this->fields.collectionStatus, (unsigned int)(collectionStatus - 4) < 8)
      || !collectionStatus )
    {
      v13 = this->fields.limitCountIcon;
      if ( v13 )
      {
        LimitCountIconComponent__Clear(v13, v10);
        return;
      }
    }
    else
    {
      v13 = this->fields.limitCountIcon;
      if ( v13 )
      {
        LimitCountIconComponent__Set(v13, limitCount, limitMax, v11);
        return;
      }
    }
    sub_21FFECC(v13, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__SetLimitCountSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        int32_t limitMax,
        int32_t limitCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *limitCountSprite; // x23
  __int64 v10; // x1
  int32_t collectionStatus; // w8
  UnityEngine_Component_o *gameObject; // x0
  bool v13; // w1

  if ( (byte_5937BA1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BA1 = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCommandCode);
  if ( !UnityEngine_Object__op_Equality(limitCountSprite, 0, 0) )
  {
    if ( isCommandCode
      || (collectionStatus = this->fields.collectionStatus, (unsigned int)(collectionStatus - 4) < 8)
      || !collectionStatus )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.limitCountSprite;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          v13 = 0;
LABEL_11:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v13, 0);
          return;
        }
      }
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)this->fields.limitCountSprite;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          v13 = limitMax > 0 && limitCount >= limitMax;
          goto LABEL_11;
        }
      }
    }
    sub_21FFECC(gameObject, v10);
  }
}


void ServantFaceIconComponent__SetLost(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool useGroupIcon,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x1
  __int64 v15; // x25
  __int64 v16; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x24
  Il2CppObject *Entity; // x25
  int32_t v19; // w24
  int32_t ServantLimitCountSealAfter; // w27
  __int64 v21; // x1
  int32_t v22; // w26
  int DispLimitCountFromUserServantCollection; // w26
  int32_t LimitCountByImageLimit_47362432; // w1
  int32_t v25; // w4
  const MethodInfo *v26; // x6
  int32_t v27; // w27
  int32_t actualRarity; // w28
  IconLabelInfo_o *v29; // x20
  int32_t collectionStatus; // w29
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  bool v32; // w19
  int32_t maxLimitCount; // w23
  bool IsNew; // w25
  bool IsGrandServant; // w0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // [xsp+58h] [xbp-78h]
  IconLabelInfo_o *info1a; // [xsp+68h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_5937B94 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937B94 = 1;
  }
  if ( !userSvtColEntity )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v39.fields.currentCryptoKey = v15;
  *(_QWORD *)&v39.fields.fakeValue = v16;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v39, 0);
  if ( !v17 )
    goto LABEL_38;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v17,
             (int32_t)Instance,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(userSvtColEntity->fields.svtId, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_38;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 v19,
                                 userSvtColEntity->fields.maxLimitCount,
                                 0);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(userSvtColEntity->fields.svtId, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v21);
  Instance = (void *)ImageLimitCount__GetCardImageLimitCount(v22, ServantLimitCountSealAfter, 1, 0, 0);
  if ( !Entity )
    goto LABEL_38;
  DispLimitCountFromUserServantCollection = ServantEntity__GetDispLimitCountFromUserServantCollection(
                                              (ServantEntity_o *)Entity,
                                              (int32_t)Instance,
                                              0);
  LimitCountByImageLimit_47362432 = DispLimitCountFromUserServantCollection;
  if ( DispLimitCountFromUserServantCollection <= 10 )
  {
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, (unsigned int)DispLimitCountFromUserServantCollection);
    LimitCountByImageLimit_47362432 = ImageLimitCount__GetLimitCountByImageLimit_47362432(
                                        DispLimitCountFromUserServantCollection,
                                        ServantLimitCountSealAfter,
                                        0);
  }
  Instance = UserServantCollectionEntity__GetOverwriteStatus(userSvtColEntity, LimitCountByImageLimit_47362432, 0);
  if ( !Instance )
LABEL_38:
    sub_21FFECC(Instance, v12);
  if ( !userSvtColEntity->fields.status )
  {
    ServantFaceIconComponent__Set_48019324(this, userSvtColEntity, info1, info2, v25, useGroupIcon, v26);
    return;
  }
  v27 = *((_DWORD *)Instance + 6);
  actualRarity = *((_DWORD *)Instance + 10);
  info1a = info1;
  if ( UserServantCollectionEntity__IsLinkLostStateServant(userSvtColEntity, 0) )
  {
    v29 = info2;
    collectionStatus = 8;
    if ( !useGroupIcon )
      goto LABEL_36;
  }
  else
  {
    v29 = info2;
    if ( UserServantCollectionEntity__IsLinkBadStateServant(userSvtColEntity, 0) )
    {
      collectionStatus = 9;
      if ( !useGroupIcon )
        goto LABEL_36;
    }
    else if ( UserServantCollectionEntity__IsLinkCloseStateServant(userSvtColEntity, 0) )
    {
      collectionStatus = 10;
      if ( !useGroupIcon )
        goto LABEL_36;
    }
    else
    {
      if ( UserServantCollectionEntity__IsCollectionState6Servant(userSvtColEntity, 0) )
        collectionStatus = 11;
      else
        collectionStatus = 7;
      if ( !useGroupIcon )
        goto LABEL_36;
    }
  }
  TransformInfo = ServantEntity__GetTransformInfo((ServantEntity_o *)Entity, 0);
  if ( !TransformInfo )
  {
LABEL_36:
    v32 = 0;
    goto LABEL_37;
  }
  v32 = TransformInfo->fields.saveTransform > 0;
LABEL_37:
  maxLimitCount = userSvtColEntity->fields.maxLimitCount;
  IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0);
  IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtColEntity, 0);
  ServantFaceIconComponent__SetIcon(
    this,
    v19,
    v27,
    maxLimitCount,
    DispLimitCountFromUserServantCollection,
    0,
    info1a,
    v29,
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
    v32,
    v37);
  ServantFaceIconComponent__ClearEquip(this, v36);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v19; // x1
  System_String_o *Icon_47373532; // x23
  int32_t RarityIcon; // w22
  UISprite_o *v22; // x20
  UISprite_o *v23; // x20

  if ( (byte_5937BA3 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    byte_5937BA3 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCommandCode);
  Icon = (System_String_o *)UnityEngine_Object__op_Equality(raritySprite, 0, 0);
  if ( ((unsigned __int8)Icon & 1) == 0 )
  {
    collectionStatus = this->fields.collectionStatus;
    if ( isCommandCode )
    {
      v17 = this->fields.raritySprite;
      if ( collectionStatus )
      {
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v15);
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
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v15);
        Icon_47373532 = Rarity__getIcon_47373532(rarity, exceedCount, lv, actualRarity, 0);
        if ( exceedCount >= 1 )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
          Icon = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
          if ( !Icon )
            goto LABEL_37;
          RarityIcon = ServantExceedMaster__GetRarityIcon(
                         (ServantExceedMaster_o *)Icon,
                         actualRarity,
                         exceedCount,
                         0,
                         0,
                         0);
          Icon = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
          if ( !Icon )
            goto LABEL_37;
          if ( ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)Icon, actualRarity, lv, RarityIcon, 0, 0) >= 3 )
          {
            v23 = this->fields.raritySprite;
            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
            AtlasManager__SetEventSprite(v23, Icon_47373532, 0);
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
            sub_21FFECC(Icon, v15);
          }
        }
        v22 = this->fields.raritySprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
        AtlasManager__SetCommon(v22, 0);
        Icon = (System_String_o *)this->fields.raritySprite;
        if ( !Icon )
          goto LABEL_37;
        v18 = Icon_47373532;
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


void ServantFaceIconComponent__Set_48018012(
        ServantFaceIconComponent_o *this,
        int64_t userSvtId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v12; // x6

  if ( (byte_5937B90 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937B90 = 1;
  }
  if ( userSvtId <= 0 )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
      sub_21FFECC(Instance, v10);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               userSvtId,
               (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantFaceIconComponent__Set_48018248(this, (UserServantEntity_o *)Entity, 0, info1, info2, 1, v12);
  }
}


void ServantFaceIconComponent__Set_48018228(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool useGroupIcon,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  ServantFaceIconComponent__Set_48018248(this, userSvtEntity, 0, info1, info2, useGroupIcon, v6);
}


void ServantFaceIconComponent__Set_48018248(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool useGroupIcon,
        const MethodInfo *method)
{
  int32_t ServantId; // w23
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v15; // x1
  __int128 v16; // q1
  int v17; // w9
  __int64 v18; // x1
  int64_t v19; // x21
  NetworkManager_c *v20; // x0
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v22; // x3
  int32_t v23; // w0
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x22
  int32_t v27; // w0
  int32_t v28; // w28
  int32_t v29; // w29
  bool IsNew; // w24
  bool IsEventJoin; // w0
  int32_t lv; // w27
  bool v33; // w21
  bool v34; // w22
  ServantFaceIconComponent_o *FriendIconLimitCount; // x0
  const MethodInfo *v36; // x3
  __int64 v37; // x1
  int32_t IconLimitCountSealAfter; // w27
  __int64 v39; // x21
  __int64 v40; // x22
  int32_t v41; // w0
  int32_t exceedCount; // w28
  int32_t v43; // w22
  int32_t v44; // w24
  bool IsGrandServant; // w21
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x4
  const MethodInfo *v48; // [xsp+58h] [xbp-D8h]
  int32_t v49; // [xsp+74h] [xbp-BCh]
  IconLabelInfo_o *v50; // [xsp+78h] [xbp-B8h]
  int32_t actualRarity; // [xsp+80h] [xbp-B0h]
  int32_t Rarity_k__BackingField; // [xsp+84h] [xbp-ACh]
  IconLabelInfo_o *info1a; // [xsp+88h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_5937B91 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5937B91 = 1;
  }
  if ( !userSvtEntity )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
    return;
  }
  ServantId = UserServantEntity__GetServantId(userSvtEntity, -1, 0);
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(userSvtEntity, 0, 0);
  if ( !OverwriteStatus )
    goto LABEL_34;
  v16 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  actualRarity = OverwriteStatus->fields._ActualRarity_k__BackingField;
  Rarity_k__BackingField = OverwriteStatus->fields._Rarity_k__BackingField;
  *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v55.fields.fakeValue = v16;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
  info1a = info1;
  v54 = v55;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v54, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v20 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    v20 = NetworkManager_TypeInfo;
  }
  if ( v19 != v20->static_fields->userIdNumber )
  {
    FriendIconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getFriendIconLimitCount(userSvtEntity, 0, 0);
    IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                FriendIconLimitCount,
                                ServantId,
                                (int32_t)FriendIconLimitCount,
                                v36);
    v39 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v40 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
    *(_QWORD *)&v57.fields.currentCryptoKey = v39;
    *(_QWORD *)&v57.fields.fakeValue = v40;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v57, 0);
    exceedCount = userSvtEntity->fields.exceedCount;
    v43 = userSvtEntity->fields.lv;
    v44 = v41;
    IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0);
    OverwriteStatus = (ServantOverwriteStatus_o *)(useGroupIcon
                                                && UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0));
    if ( this )
    {
      ServantFaceIconComponent__SetIcon(
        this,
        ServantId,
        Rarity_k__BackingField,
        v44,
        IconLimitCountSealAfter,
        exceedCount,
        info1a,
        info2,
        2,
        0,
        0,
        0,
        0,
        v43,
        0,
        0,
        actualRarity,
        IsGrandServant,
        (unsigned __int8)OverwriteStatus & 1,
        v48);
      goto LABEL_29;
    }
LABEL_34:
    sub_21FFECC(OverwriteStatus, v15);
  }
  v50 = info2;
  IconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0);
  v23 = ServantFaceIconComponent__GetIconLimitCountSealAfter(IconLimitCount, ServantId, (int32_t)IconLimitCount, v22);
  v25 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v26 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  v49 = v23;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v56.fields.currentCryptoKey = v25;
  *(_QWORD *)&v56.fields.fakeValue = v26;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v56, 0);
  v28 = userSvtEntity->fields.exceedCount;
  v29 = v27;
  IsNew = UserServantEntity__IsNew(userSvtEntity, 0);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0);
  lv = userSvtEntity->fields.lv;
  v33 = IsEventJoin;
  v34 = UserServantEntity__IsGrandServant(userSvtEntity, 0);
  OverwriteStatus = (ServantOverwriteStatus_o *)(useGroupIcon
                                              && UserServantEntity__get_IsSaveTransformServant(userSvtEntity, 0));
  if ( !this )
    goto LABEL_34;
  ServantFaceIconComponent__SetIcon(
    this,
    ServantId,
    Rarity_k__BackingField,
    v29,
    v49,
    v28,
    info1a,
    v50,
    2,
    IsNew,
    v33,
    0,
    0,
    lv,
    0,
    0,
    actualRarity,
    v34,
    (unsigned __int8)OverwriteStatus & 1,
    v48);
LABEL_29:
  if ( equipIdList && equipIdList->max_length )
    ServantFaceIconComponent__SetEquip_48016656(this, ServantId, equipIdList, 0, v47);
  else
    ServantFaceIconComponent__ClearEquip(this, v46);
}


void ServantFaceIconComponent__Set_48019324(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t frameLimitCount,
        bool useGroupIcon,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x1
  __int64 v16; // x25
  __int64 v17; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x24
  Il2CppObject *Entity; // x25
  int32_t collectionStatus; // w28
  int32_t v21; // w24
  __int64 v22; // x1
  int32_t ServantLimitCountSealAfter; // w27
  int DispLimitCountFromUserServantCollection; // w26
  int32_t LimitCountByImageLimit_47362432; // w1
  int32_t v26; // w27
  int32_t actualRarity; // w29
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  bool v29; // w19
  int32_t maxLimitCount; // w23
  bool IsNew; // w25
  bool IsGrandServant; // w0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // [xsp+58h] [xbp-78h]
  IconLabelInfo_o *info1a; // [xsp+68h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_5937B93 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937B93 = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    v16 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    *(_QWORD *)&v36.fields.currentCryptoKey = v16;
    *(_QWORD *)&v36.fields.fakeValue = v17;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v36, 0);
    if ( !v18 )
      goto LABEL_26;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v18,
               (int32_t)Instance,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    collectionStatus = userSvtColEntity->fields.status;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(userSvtColEntity->fields.svtId, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    info1a = info1;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_26;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v21,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0);
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v22);
    Instance = (void *)ImageLimitCount__GetCardImageLimitCount(v21, ServantLimitCountSealAfter, 1, 0, 0);
    if ( !Entity )
      goto LABEL_26;
    DispLimitCountFromUserServantCollection = ServantEntity__GetDispLimitCountFromUserServantCollection(
                                                (ServantEntity_o *)Entity,
                                                (int32_t)Instance,
                                                0);
    LimitCountByImageLimit_47362432 = DispLimitCountFromUserServantCollection;
    if ( DispLimitCountFromUserServantCollection <= 10 )
    {
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, (unsigned int)DispLimitCountFromUserServantCollection);
      LimitCountByImageLimit_47362432 = ImageLimitCount__GetLimitCountByImageLimit_47362432(
                                          DispLimitCountFromUserServantCollection,
                                          ServantLimitCountSealAfter,
                                          0);
    }
    Instance = UserServantCollectionEntity__GetOverwriteStatus(userSvtColEntity, LimitCountByImageLimit_47362432, 0);
    if ( !Instance )
LABEL_26:
      sub_21FFECC(Instance, v13);
    v26 = *((_DWORD *)Instance + 6);
    actualRarity = *((_DWORD *)Instance + 10);
    if ( ServantEntity__get_IsEnemyCollectionDetail((ServantEntity_o *)Entity, 0) && collectionStatus != 0 )
      collectionStatus = 3;
    v29 = useGroupIcon
       && (TransformInfo = ServantEntity__GetTransformInfo((ServantEntity_o *)Entity, 0)) != 0
       && TransformInfo->fields.saveTransform > 0;
    maxLimitCount = userSvtColEntity->fields.maxLimitCount;
    IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0);
    IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtColEntity, 0);
    ServantFaceIconComponent__SetIcon(
      this,
      v21,
      v26,
      maxLimitCount,
      DispLimitCountFromUserServantCollection,
      0,
      info1a,
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
      v29,
      v34);
    ServantFaceIconComponent__ClearEquip(this, v33);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantFaceIconComponent__Set_48021296(
        ServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t iconLimitCount,
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
        bool useGroupIcon,
        const MethodInfo *method)
{
  int32_t v19; // w27
  Il2CppObject *Master_object; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  int32_t actualRarity; // w27
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  bool v33; // w8
  const MethodInfo *v34; // [xsp+58h] [xbp-78h]

  v19 = frameLimitCount;
  if ( (byte_5937B9C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_5937B9C = 1;
  }
  if ( frameLimitCount <= 0 )
    v19 = limitCount;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Master_object )
    goto LABEL_17;
  actualRarity = ServantExceedMaster__GetRarity_49643660((ServantExceedMaster_o *)Master_object, svtId, v19, 0);
  if ( !useGroupIcon )
  {
LABEL_15:
    v33 = 0;
    goto LABEL_16;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          svtId,
                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_17:
    sub_21FFECC(Master_object, v29);
  }
  TransformInfo = ServantEntity__GetTransformInfo((ServantEntity_o *)Master_object, 0);
  if ( !TransformInfo )
    goto LABEL_15;
  v33 = TransformInfo->fields.saveTransform > 0;
LABEL_16:
  ServantFaceIconComponent__SetIcon(
    this,
    svtId,
    actualRarity,
    limitCount,
    iconLimitCount,
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
    v33,
    v34);
}


void ServantFaceIconComponent__Set_48021764(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        ServantCostumeEntity_o *svtCostumeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isSecret,
        const MethodInfo *method)
{
  int32_t status; // w27
  int32_t id; // w26
  ServantOverwriteStatus_o *v15; // x25
  _BOOL8 IsGrandServant; // x0
  __int64 v17; // x1
  int32_t collectionStatus; // w8
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // [xsp+58h] [xbp-58h]

  if ( (byte_5937B96 & 1) == 0 )
  {
    sub_21FFC50(&ServantOverwriteStatus_TypeInfo);
    byte_5937B96 = 1;
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
    v15 = (ServantOverwriteStatus_o *)sub_21FFEBC(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_40387584(v15, userSvtColEntity, id, 0);
    IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtColEntity, 0);
    if ( !v15 )
      sub_21FFECC(IsGrandServant, v17);
    if ( isSecret )
      collectionStatus = 6;
    else
      collectionStatus = status;
    ServantFaceIconComponent__SetIcon(
      this,
      svtCostumeEntity->fields.svtId,
      v15->fields._Rarity_k__BackingField,
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
      v15->fields._ActualRarity_k__BackingField,
      IsGrandServant & ~isSecret,
      0,
      v20);
    ServantFaceIconComponent__ClearEquip(this, v19);
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)userSvtColEntity);
  }
}


void ServantFaceIconComponent__Set_48022124(
        ServantFaceIconComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isNewIconDisp,
        int32_t imageSvtId,
        bool unuseEquip,
        bool useGroupIcon,
        const MethodInfo *method)
{
  __int64 v17; // x1
  int v18; // w8
  __int64 v19; // x22
  __int64 v20; // x23
  const MethodInfo *v21; // x1
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v23; // x1
  int32_t Rarity_k__BackingField; // w21
  int32_t actualRarity; // w27
  int32_t IconLimitCountStageSealAfterIndexZero; // w24
  int32_t ServantId; // w0
  __int64 v28; // x1
  int32_t limitCount; // w22
  int32_t exceedCount; // w29
  int32_t v31; // w23
  int64_t userId; // x26
  bool IsNew; // w0
  int32_t lv; // w28
  bool v35; // w26
  bool IsGrandSvt; // w0
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  __int64 v39; // x1
  __int64 v40; // x21
  __int64 v41; // x22
  int32_t v42; // w21
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x22
  int32_t v44; // w8
  const MethodInfo *v45; // x4
  int32_t v46; // w26
  bool v47; // w0
  const MethodInfo *v48; // [xsp+58h] [xbp-98h]
  int32_t v49; // [xsp+70h] [xbp-80h]
  bool v50; // [xsp+74h] [xbp-7Ch]
  IconLabelInfo_o *v51; // [xsp+78h] [xbp-78h]
  IconLabelInfo_o *v52; // [xsp+80h] [xbp-70h]
  int32_t collectionStatus; // [xsp+8Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_5937B97 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&OtherUserNewManager_TypeInfo);
    byte_5937B97 = 1;
  }
  if ( !servantLeaderInfo )
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)servantLeaderInfo);
    return;
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
  v19 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  collectionStatus = v18;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v20;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v54, 0) )
  {
    v49 = imageSvtId;
    v50 = unuseEquip;
    v51 = info1;
    v52 = info2;
    OverwriteStatus = ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0);
    if ( !OverwriteStatus )
      sub_21FFECC(0, v23);
    Rarity_k__BackingField = OverwriteStatus->fields._Rarity_k__BackingField;
    actualRarity = OverwriteStatus->fields._ActualRarity_k__BackingField;
    IconLimitCountStageSealAfterIndexZero = ServantLeaderInfo__GetIconLimitCountStageSealAfterIndexZero(
                                              servantLeaderInfo,
                                              0);
    ServantId = ServantLeaderInfo__GetServantId(servantLeaderInfo, -1, 0);
    limitCount = servantLeaderInfo->fields.limitCount;
    exceedCount = servantLeaderInfo->fields.exceedCount;
    v31 = ServantId;
    if ( isNewIconDisp )
    {
      userId = servantLeaderInfo->fields.userId;
      if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v28);
      IsNew = OtherUserNewManager__IsNew(userId, 0);
      lv = servantLeaderInfo->fields.lv;
      v35 = IsNew;
      IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0);
      ServantFaceIconComponent__SetIcon(
        this,
        v31,
        Rarity_k__BackingField,
        limitCount,
        IconLimitCountStageSealAfterIndexZero,
        exceedCount,
        v51,
        v52,
        collectionStatus,
        v35,
        0,
        0,
        0,
        lv,
        v49,
        0,
        actualRarity,
        IsGrandSvt,
        useGroupIcon,
        v48);
    }
    else
    {
      v46 = servantLeaderInfo->fields.lv;
      v47 = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0);
      ServantFaceIconComponent__SetIcon(
        this,
        v31,
        Rarity_k__BackingField,
        limitCount,
        IconLimitCountStageSealAfterIndexZero,
        exceedCount,
        v51,
        v52,
        collectionStatus,
        0,
        0,
        0,
        0,
        v46,
        v49,
        0,
        actualRarity,
        v47,
        useGroupIcon,
        v48);
    }
    if ( v50 )
      goto LABEL_27;
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, v21);
    if ( unuseEquip )
    {
LABEL_27:
      ServantFaceIconComponent__ClearEquip(this, v37);
      return;
    }
  }
  if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0) && ServantLeaderInfo__IsHideEquip(servantLeaderInfo, 0) )
  {
    ServantFaceIconComponent__HideEquip(this, v38);
  }
  else
  {
    ServantLeaderInfo__SetEquipImagePartsGroupIdxs(servantLeaderInfo, 0);
    v40 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v41 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    *(_QWORD *)&v55.fields.currentCryptoKey = v40;
    *(_QWORD *)&v55.fields.fakeValue = v41;
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v55, 0);
    EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(servantLeaderInfo, 0);
    v44 = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(servantLeaderInfo, 0);
    ServantFaceIconComponent__SetEquip_48023364(this, v42, EquipTargetInfoList, v44 > 0, v45);
  }
}


void ServantFaceIconComponent__Set_48024312(
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
  const MethodInfo *v14; // [xsp+50h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_5937B98 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5937B98 = 1;
  }
  if ( equipTargetInfo )
  {
    v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo);
    *(_QWORD *)&v15.fields.currentCryptoKey = v9;
    *(_QWORD *)&v15.fields.fakeValue = v10;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0);
    ServantFaceIconComponent__Set_48021296(
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
      0,
      v14);
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(equipTargetInfo->fields.svtId, 0);
    ServantFaceIconComponent__ClearEquip_48024580(this, v12, v13);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)equipTargetInfo);
  }
}


void ServantFaceIconComponent__Set_48025688(
        ServantFaceIconComponent_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int128 v9; // q1
  int v10; // w8
  __int64 v11; // x1
  int64_t v12; // x23
  NetworkManager_c *v13; // x0
  __int64 v14; // x24
  __int64 v15; // x25
  int v16; // w8
  int32_t v17; // w23
  bool IsNew; // w5
  const MethodInfo *v19; // x6
  ServantFaceIconComponent_o *v20; // x0
  int32_t v21; // w1
  IconLabelInfo_o *v22; // x2
  IconLabelInfo_o *v23; // x3
  const MethodInfo *v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_5937B99 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5937B99 = 1;
  }
  if ( userCommandCodeEntity )
  {
    v9 = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.fakeValue;
    v10 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v26.fields.fakeValue = v9;
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userCommandCodeEntity);
    v25 = v26;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v25, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
      v13 = NetworkManager_TypeInfo;
    }
    v15 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1);
    if ( v12 == v13->static_fields->userIdNumber )
    {
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
      *(_QWORD *)&v27.fields.currentCryptoKey = v15;
      *(_QWORD *)&v27.fields.fakeValue = v14;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v27, 0);
      IsNew = UserCommandCodeEntity__IsNew(userCommandCodeEntity, 0);
      v20 = this;
      v21 = v17;
      v22 = info1;
      v23 = info2;
    }
    else
    {
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
      *(_QWORD *)&v28.fields.currentCryptoKey = v15;
      *(_QWORD *)&v28.fields.fakeValue = v14;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v28, 0);
      v20 = this;
      v22 = info1;
      v23 = info2;
      IsNew = 0;
    }
    ServantFaceIconComponent__SetCommandCode(v20, v21, v22, v23, 2, IsNew, v19);
    ServantFaceIconComponent__ClearEquip(this, v24);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void ServantFaceIconComponent__Set_48027268(
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

  if ( (byte_5937B9A & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5937B9A = 1;
  }
  if ( userCommandCodeEntity )
  {
    v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeEntity);
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0);
    ServantFaceIconComponent__SetCommandCode(this, v13, info1, info2, 2, isNew, v14);
    ServantFaceIconComponent__ClearEquip(this, v15);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void ServantFaceIconComponent__Set_48027460(
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

  if ( (byte_5937B9B & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5937B9B = 1;
  }
  if ( userCommandCodeCollectionEntity )
  {
    v9 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        userCommandCodeCollectionEntity);
    *(_QWORD *)&v17.fields.currentCryptoKey = v9;
    *(_QWORD *)&v17.fields.fakeValue = v10;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v17, 0);
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

  if ( (byte_5937BAF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BAF = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) && this->fields.info1 && this->fields.info2 )
  {
    v7 = this->fields.iconLabel;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UIIconLabel__SetAlpha(v7, alpha, 0);
  }
  return 1;
}