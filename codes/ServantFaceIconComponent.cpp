void __fastcall ServantFaceIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B01536 & 1) == 0 )
  {
    sub_1BC3008(&ServantFaceIconComponent_TypeInfo, v1);
    byte_4B01536 = 1;
  }
  *ServantFaceIconComponent_TypeInfo->static_fields = (struct ServantFaceIconComponent_StaticFields)0x1000186A1LL;
}


void __fastcall ServantFaceIconComponent___ctor(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B01535 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v4);
    sub_1BC3008(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo, v5);
    byte_4B01535 = 1;
  }
  this->fields.collectionStatus = 2;
  v6 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserSvtEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipUserSvtEntityList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
  this->fields.equipTargetInfoList = (struct System_Collections_Generic_List_EquipTargetInfo__o *)v9;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipTargetInfoList, (int32_t)v9, v10, v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantFaceIconComponent__AdjustDispLimitCountSpritePosY(
        ServantFaceIconComponent_o *this,
        float posY,
        const MethodInfo *method)
{
  UnityEngine_Object_o *limitCountSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B01529 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B01529 = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.limitCountSprite;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, posY, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__AdjustIconLabelPos(
        ServantFaceIconComponent_o *this,
        float offsetX,
        float offsetY,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *transform; // x0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s11
  float v14; // s12
  float v15; // s10
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B0152C & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B0152C = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !transform )
      goto LABEL_14;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_14;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    v13 = v10;
    v14 = v11;
    v15 = v12;
    if ( !this->fields.isAdjustIconLabelPos )
    {
      this->fields.iconLabelInitPos.fields.x = v10;
      this->fields.iconLabelInitPos.fields.y = v11;
      this->fields.iconLabelInitPos.fields.z = v12;
    }
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !transform
      || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
    {
LABEL_14:
      sub_1BC3264(transform, v8);
    }
    v16.fields.x = v13 + offsetX;
    v16.fields.y = v14 + offsetY;
    v16.fields.z = v15;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v16, 0LL);
    this->fields.isAdjustIconLabelPos = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__AdjustIconLabelScale(
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
  struct UnityEngine_Vector2Int_o *monitor; // x8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  if ( (byte_4B0152E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B0152E = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( this->fields.isAdjustIconLabelScale )
    {
      if ( !transform )
        goto LABEL_19;
    }
    else
    {
      if ( !transform )
        goto LABEL_19;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_19;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      this->fields.iconLabelInitScale = localScale;
      if ( !transform )
        goto LABEL_19;
      monitor = (struct UnityEngine_Vector2Int_o *)transform[1].monitor;
      if ( !monitor )
        goto LABEL_19;
      this->fields.textLabelInitSize = monitor[21];
    }
    transform = (UnityEngine_Component_o *)transform[1].monitor;
    if ( transform )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))transform->klass[2]._1.typeMetadataHandle)(
        transform,
        transform->klass[2]._1.interopData);
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( transform )
      {
        transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
        if ( transform )
        {
          v12.fields.x = x;
          v12.fields.y = y;
          v12.fields.z = z;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v12, 0LL);
          this->fields.isAdjustIconLabelScale = 1;
          return;
        }
      }
    }
LABEL_19:
    sub_1BC3264(transform, v8);
  }
}


void __fastcall ServantFaceIconComponent__AdjustRaritySpritePosY(
        ServantFaceIconComponent_o *this,
        float posY,
        const MethodInfo *method)
{
  UnityEngine_Component_o *raritySprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    sub_1BC3264(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(raritySprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, posY, 0LL);
}


void __fastcall ServantFaceIconComponent__Awake(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *typeSprite; // x0
  unsigned int localPosition; // s0
  float v5; // s8
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !typeSprite
    || (typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0LL)) == 0LL
    || (localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)typeSprite,
                                        0LL),
        (typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite) == 0LL)
    || (v5 = *(float *)&localPosition,
        (typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0LL)) == 0LL) )
  {
    sub_1BC3264(typeSprite, method);
  }
  v6.fields.z = 0.0;
  v6.fields.y = -64.0;
  v6.fields.x = v5;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)typeSprite, v6, 0LL);
}


void __fastcall ServantFaceIconComponent__Blank(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *frameSprite; // x0

  if ( (byte_4B01506 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_20169/*"img_commonbg_02"*/, method);
    byte_4B01506 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  frameSprite = this->fields.frameSprite;
  if ( !frameSprite )
    sub_1BC3264(0LL, v3);
  UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_20169/*"img_commonbg_02"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__ChangeClassIcon(
        ServantFaceIconComponent_o *this,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  UISprite_o *classSprite; // x21

  if ( (byte_4B01531 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&frameType);
    byte_4B01531 = 1;
  }
  classSprite = this->fields.classSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClass(classSprite, classId, frameType, 0, 0LL);
}


void __fastcall ServantFaceIconComponent__ChangeDisplayEquip(
        ServantFaceIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *equipUserSvtEntityList; // x0
  const MethodInfo *v8; // x1
  int v9; // w8
  int v10; // w8
  __int64 v11; // x20
  __int64 v12; // x21
  const MethodInfo *v13; // x2
  __int64 v14; // x20
  __int64 v15; // x21
  int32_t v16; // w20
  _DWORD *v17; // x8
  int32_t v18; // w21
  const MethodInfo *v19; // x5
  __int64 v20; // x20
  __int64 v21; // x21
  const MethodInfo *v22; // x2
  Il2CppObject *Item; // x1
  const MethodInfo *v24; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B01502 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B01502 = 1;
  }
  equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
  v8 = (const MethodInfo *)(unsigned int)(this->fields.displayEquipIndex + 1);
  this->fields.displayEquipIndex = (int)v8;
  if ( !equipUserSvtEntityList )
    goto LABEL_35;
  v9 = *((_DWORD *)equipUserSvtEntityList + 6);
  if ( v9 < 2 )
  {
    equipUserSvtEntityList = this->fields.equipTargetInfoList;
    if ( !equipUserSvtEntityList )
      goto LABEL_35;
    v10 = *((_DWORD *)equipUserSvtEntityList + 6);
    if ( v10 >= 2 )
    {
      if ( (int)v8 >= v10 )
      {
        LODWORD(v8) = 0;
        this->fields.displayEquipIndex = 0;
      }
      if ( System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
             (int32_t)v8,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__) )
      {
        equipUserSvtEntityList = this->fields.equipTargetInfoList;
        if ( !equipUserSvtEntityList )
          goto LABEL_35;
        equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
                                   this->fields.displayEquipIndex,
                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
        if ( !equipUserSvtEntityList )
          goto LABEL_35;
        v12 = *((_QWORD *)equipUserSvtEntityList + 7);
        v11 = *((_QWORD *)equipUserSvtEntityList + 8);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v25.fields.currentCryptoKey = v12;
        *(_QWORD *)&v25.fields.fakeValue = v11;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v25, 0LL) >= 1 )
        {
          ServantFaceIconComponent__SetActiveEquipSprite(this, 1, v13);
          equipUserSvtEntityList = this->fields.equipTargetInfoList;
          if ( equipUserSvtEntityList )
          {
            equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
                                       this->fields.displayEquipIndex,
                                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
            if ( equipUserSvtEntityList )
            {
              v15 = *((_QWORD *)equipUserSvtEntityList + 7);
              v14 = *((_QWORD *)equipUserSvtEntityList + 8);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v26.fields.currentCryptoKey = v15;
              *(_QWORD *)&v26.fields.fakeValue = v14;
              equipUserSvtEntityList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                 v26,
                                                 0LL);
              if ( this->fields.equipTargetInfoList )
              {
                v16 = (int)equipUserSvtEntityList;
                equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)this->fields.equipTargetInfoList,
                                           this->fields.displayEquipIndex,
                                           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
                if ( equipUserSvtEntityList )
                {
                  v17 = equipUserSvtEntityList;
                  equipUserSvtEntityList = this->fields.equipTargetInfoList;
                  if ( equipUserSvtEntityList )
                  {
                    v18 = v17[18];
                    equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
                                               this->fields.displayEquipIndex,
                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
                    if ( equipUserSvtEntityList )
                    {
                      ServantFaceIconComponent__SetEquip_40027284(
                        this,
                        0,
                        v16,
                        v18,
                        *((System_Int32_array **)equipUserSvtEntityList + 17),
                        v19);
                      return;
                    }
                  }
                }
              }
            }
          }
LABEL_35:
          sub_1BC3264(equipUserSvtEntityList, v8);
        }
      }
    }
    goto LABEL_34;
  }
  if ( (int)v8 >= v9 )
  {
    LODWORD(v8) = 0;
    this->fields.displayEquipIndex = 0;
  }
  if ( !System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
          (int32_t)v8,
          (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
    goto LABEL_34;
  equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
  if ( !equipUserSvtEntityList )
    goto LABEL_35;
  equipUserSvtEntityList = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
                             this->fields.displayEquipIndex,
                             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !equipUserSvtEntityList )
    goto LABEL_35;
  v21 = *((_QWORD *)equipUserSvtEntityList + 10);
  v20 = *((_QWORD *)equipUserSvtEntityList + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v21;
  *(_QWORD *)&v27.fields.fakeValue = v20;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v27, 0LL) < 1 )
  {
LABEL_34:
    ServantFaceIconComponent__SetEmptyEquipSprite(this, v8);
    return;
  }
  ServantFaceIconComponent__SetActiveEquipSprite(this, 1, v22);
  equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
  if ( !equipUserSvtEntityList )
    goto LABEL_35;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)equipUserSvtEntityList,
           this->fields.displayEquipIndex,
           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  ServantFaceIconComponent__SetEquip(this, (UserServantEntity_o *)Item, v24);
}


void __fastcall ServantFaceIconComponent__Clear(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UISprite_o *backSprite; // x20
  const MethodInfo *v9; // x1
  UISprite_o *faceSprite; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *costumeIconSprite; // x20
  UnityEngine_Object_o *limitCountSprite; // x20
  UnityEngine_Object_o *limitCountIcon; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UISprite_o *v16; // x20
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *shiningIcon; // x20
  UnityEngine_Object_o *faceEffectSprite; // x20

  if ( (byte_4B01505 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B01505 = 1;
  }
  this->fields.info1 = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.info1, 0, v2, v3);
  this->fields.info2 = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.info2, 0, v6, v7);
  backSprite = this->fields.backSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(backSprite, 0LL);
  AtlasManager__SetCommon(this->fields.typeSprite, 0LL);
  faceSprite = this->fields.backSprite;
  if ( !faceSprite )
    goto LABEL_53;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  faceSprite = this->fields.faceSprite;
  if ( !faceSprite )
    goto LABEL_53;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  faceSprite = this->fields.frameSprite;
  if ( !faceSprite )
    goto LABEL_53;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  faceSprite = this->fields.typeSprite;
  if ( !faceSprite )
    goto LABEL_53;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.classSprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(costumeIconSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.costumeIconSprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.limitCountSprite;
    if ( !faceSprite )
      goto LABEL_53;
    faceSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)faceSprite, 0LL);
    if ( !faceSprite )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, 0, 0LL);
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0LL, 0LL) )
  {
    faceSprite = (UISprite_o *)this->fields.limitCountIcon;
    if ( !faceSprite )
      goto LABEL_53;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)faceSprite, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v16 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(v16, 0LL);
    faceSprite = this->fields.raritySprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    faceSprite = (UISprite_o *)this->fields.iconLabel;
    if ( !faceSprite )
      goto LABEL_53;
    UIIconLabel__Clear((UIIconLabel_o *)faceSprite, v9);
  }
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
  {
    faceSprite = (UISprite_o *)this->fields.shiningIcon;
    if ( !faceSprite )
      goto LABEL_53;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)faceSprite, v9);
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(faceEffectSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.faceEffectSprite;
    if ( faceSprite )
    {
      UISprite__set_spriteName(faceSprite, 0LL, 0LL);
      goto LABEL_52;
    }
LABEL_53:
    sub_1BC3264(faceSprite, v9);
  }
LABEL_52:
  ServantFaceIconComponent__ClearEquip(this, v9);
}


void __fastcall ServantFaceIconComponent__ClearEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ServantFaceIconComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  int32_t size; // w2
  int v7; // w9
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  int32_t v9; // w2
  int v10; // w9
  UnityEngine_Object_o *switchEquipInfo; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct SwitchUIWidgetComponent_o *v14; // x20
  const MethodInfo *v15; // x1
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20

  v2 = this;
  if ( (byte_4B01522 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__Clear__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, v3);
    this = (ServantFaceIconComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4B01522 = 1;
  }
  equipUserSvtEntityList = v2->fields.equipUserSvtEntityList;
  v2->fields.displayEquipIndex = 0;
  if ( !equipUserSvtEntityList )
    goto LABEL_38;
  size = equipUserSvtEntityList->fields._size;
  v7 = equipUserSvtEntityList->fields._version + 1;
  equipUserSvtEntityList->fields._size = 0;
  equipUserSvtEntityList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipUserSvtEntityList->fields._items, 0, size, 0LL);
  equipTargetInfoList = v2->fields.equipTargetInfoList;
  if ( !equipTargetInfoList )
    goto LABEL_38;
  v9 = equipTargetInfoList->fields._size;
  v10 = equipTargetInfoList->fields._version + 1;
  equipTargetInfoList->fields._size = 0;
  equipTargetInfoList->fields._version = v10;
  if ( v9 >= 1 )
    System_Array__Clear((System_Array_o *)equipTargetInfoList->fields._items, 0, v9, 0LL);
  switchEquipInfo = (UnityEngine_Object_o *)v2->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFaceIconComponent_o *)UnityEngine_Object__op_Inequality(switchEquipInfo, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v2->fields.switchEquipInfo;
    if ( !v14 )
      goto LABEL_38;
    v14->fields.isEnableSingle = 0;
    v14->fields.componentList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v14->fields.componentList, 0, v12, v13);
    SwitchUIWidgetComponent__ClearParam(v14, v15);
  }
  v2->fields.equipFriendShipSkillChange = 0;
  equipSprite = (UnityEngine_Object_o *)v2->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    this = (ServantFaceIconComponent_o *)v2->fields.noneEquipSprite;
    if ( !this )
      goto LABEL_38;
    this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    hideEquipSprite = (UnityEngine_Object_o *)v2->fields.hideEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
    {
      this = (ServantFaceIconComponent_o *)v2->fields.hideEquipSprite;
      if ( !this )
        goto LABEL_38;
      this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    this = (ServantFaceIconComponent_o *)v2->fields.equipSprite;
    if ( !this )
      goto LABEL_38;
    UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)v2->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      this = (ServantFaceIconComponent_o *)v2->fields.equipLimitCountSprite;
      if ( !this )
        goto LABEL_38;
      this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    rarity2Sprite = (UnityEngine_Object_o *)v2->fields.rarity2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL) )
    {
      this = (ServantFaceIconComponent_o *)v2->fields.rarity2Sprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
        return;
      }
LABEL_38:
      sub_1BC3264(this, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__ClearEquip_40042228(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  int32_t size; // w2
  int v13; // w9
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  int32_t v15; // w2
  int v16; // w9
  UnityEngine_Object_o *switchEquipInfo; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct SwitchUIWidgetComponent_o *v20; // x21
  const MethodInfo *v21; // x1
  UnityEngine_Object_o *equipSprite; // x21
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x21
  char v24; // w20
  UISprite_o *noneEquipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8
  UnityEngine_Object_o *v30; // x20
  UnityEngine_Object_o *v31; // x20
  UnityEngine_Object_o *v32; // x20

  v4 = this;
  if ( (byte_4B01523 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&baseSvtId);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__Clear__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    this = (ServantFaceIconComponent_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B01523 = 1;
  }
  equipUserSvtEntityList = v4->fields.equipUserSvtEntityList;
  v4->fields.displayEquipIndex = 0;
  if ( !equipUserSvtEntityList )
    goto LABEL_70;
  size = equipUserSvtEntityList->fields._size;
  v13 = equipUserSvtEntityList->fields._version + 1;
  equipUserSvtEntityList->fields._size = 0;
  equipUserSvtEntityList->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipUserSvtEntityList->fields._items, 0, size, 0LL);
  equipTargetInfoList = v4->fields.equipTargetInfoList;
  if ( !equipTargetInfoList )
    goto LABEL_70;
  v15 = equipTargetInfoList->fields._size;
  v16 = equipTargetInfoList->fields._version + 1;
  equipTargetInfoList->fields._size = 0;
  equipTargetInfoList->fields._version = v16;
  if ( v15 >= 1 )
    System_Array__Clear((System_Array_o *)equipTargetInfoList->fields._items, 0, v15, 0LL);
  switchEquipInfo = (UnityEngine_Object_o *)v4->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFaceIconComponent_o *)UnityEngine_Object__op_Inequality(switchEquipInfo, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v20 = v4->fields.switchEquipInfo;
    if ( !v20 )
      goto LABEL_70;
    v20->fields.isEnableSingle = 0;
    v20->fields.componentList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v20->fields.componentList, 0, v18, v19);
    SwitchUIWidgetComponent__ClearParam(v20, v21);
  }
  v4->fields.equipFriendShipSkillChange = 0;
  equipSprite = (UnityEngine_Object_o *)v4->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)v4->fields.friendShipSvtEquipIconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0LL, 0LL) )
    {
      this = (ServantFaceIconComponent_o *)v4->fields.friendShipSvtEquipIconSprite;
      if ( !this )
        goto LABEL_70;
      this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    this = (ServantFaceIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ServantFaceIconComponent_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( this )
      {
        this = (ServantFaceIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               baseSvtId,
                                               (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( this )
        {
          this = (ServantFaceIconComponent_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
          if ( v4->fields.noneEquipSprite )
          {
            v24 = (char)this;
            this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v4->fields.noneEquipSprite,
                                                   0LL);
            if ( this )
            {
              if ( (v24 & 1) != 0 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                noneEquipSprite = v4->fields.noneEquipSprite;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEmptyEquipSprite(noneEquipSprite, 0, 1, 0LL);
                hideEquipSprite = (UnityEngine_Object_o *)v4->fields.hideEquipSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
                {
                  this = (ServantFaceIconComponent_o *)v4->fields.hideEquipSprite;
                  if ( !this )
                    goto LABEL_70;
                  this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
                  if ( !this )
                    goto LABEL_70;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                }
                this = (ServantFaceIconComponent_o *)v4->fields.equipSprite;
                if ( !this )
                  goto LABEL_70;
                UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
                equipLimitCountSprite = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                {
                  this = (ServantFaceIconComponent_o *)v4->fields.equipLimitCountSprite;
                  if ( !this )
                    goto LABEL_70;
                  this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
                  if ( !this )
                    goto LABEL_70;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                }
                rarity2Sprite = (UnityEngine_Object_o *)v4->fields.rarity2Sprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (ServantFaceIconComponent_o *)UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  return;
                raritySprite = v4->fields.raritySprite;
                if ( raritySprite )
                {
                  this = (ServantFaceIconComponent_o *)v4->fields.rarity2Sprite;
                  if ( this )
                  {
                    UISprite__set_spriteName((UISprite_o *)this, raritySprite->fields.mSpriteName, 0LL);
                    this = (ServantFaceIconComponent_o *)v4->fields.rarity2Sprite;
                    if ( this )
                    {
                      (*(void (__fastcall **)(ServantFaceIconComponent_o *, void *))&this->klass[2]._1.byval_arg.bits)(
                        this,
                        this->klass[2]._1.this_arg.data);
                      return;
                    }
                  }
                }
              }
              else
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                v30 = (UnityEngine_Object_o *)v4->fields.hideEquipSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
                {
                  this = (ServantFaceIconComponent_o *)v4->fields.hideEquipSprite;
                  if ( !this )
                    goto LABEL_70;
                  this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
                  if ( !this )
                    goto LABEL_70;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                }
                this = (ServantFaceIconComponent_o *)v4->fields.equipSprite;
                if ( !this )
                  goto LABEL_70;
                UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
                v31 = (UnityEngine_Object_o *)v4->fields.equipLimitCountSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
                {
                  this = (ServantFaceIconComponent_o *)v4->fields.equipLimitCountSprite;
                  if ( !this )
                    goto LABEL_70;
                  this = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
                  if ( !this )
                    goto LABEL_70;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                }
                v32 = (UnityEngine_Object_o *)v4->fields.rarity2Sprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
                  return;
                this = (ServantFaceIconComponent_o *)v4->fields.rarity2Sprite;
                if ( this )
                {
                  UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_70:
    sub_1BC3264(this, *(_QWORD *)&baseSvtId);
  }
}


void __fastcall ServantFaceIconComponent__ClearFaceAtlas(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *faceSprite; // x0

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite || (UISprite__set_atlas(faceSprite, 0LL, 0LL), (faceSprite = this->fields.faceSprite) == 0LL) )
    sub_1BC3264(faceSprite, method);
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
}


void __fastcall ServantFaceIconComponent__ClearShiningIcon(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ShiningIconComponent_o *shiningIcon; // x0

  shiningIcon = this->fields.shiningIcon;
  if ( !shiningIcon )
    sub_1BC3264(0LL, method);
  ShiningIconComponent__Clear(shiningIcon, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__FaceSpriteDisp(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *faceSprite; // x0
  bool v6; // w1

  faceSprite = (UnityEngine_Component_o *)this->fields.faceSprite;
  if ( !faceSprite )
    goto LABEL_11;
  faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0LL);
  if ( !faceSprite )
    goto LABEL_11;
  if ( !flag )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, 0, 0LL);
    faceSprite = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( faceSprite )
    {
      faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0LL);
      if ( faceSprite )
      {
        v6 = 0;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_1BC3264(faceSprite, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, 1, 0LL);
  faceSprite = (UnityEngine_Component_o *)this->fields.iconLabel;
  if ( !faceSprite )
    goto LABEL_11;
  faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0LL);
  if ( !faceSprite )
    goto LABEL_11;
  v6 = 1;
LABEL_10:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, v6, 0LL);
}


void __fastcall ServantFaceIconComponent__FadeEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ServantFaceIconComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  UnityEngine_Object_o *equipUiWidget; // x20
  struct SwitchUIWidgetComponent_o *switchEquipInfo; // x8
  const MethodInfo *v9; // x1

  v2 = this;
  if ( (byte_4B01501 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v3);
    this = (ServantFaceIconComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4B01501 = 1;
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
      ((void (__fastcall *)(struct UIWidget_o *, Il2CppClass *, float))equipUiWidget->klass[1]._1.castClass)(
        v2->fields.equipUiWidget,
        equipUiWidget->klass[1]._1.declaringType,
        switchEquipInfo->fields._Alpha_k__BackingField);
      equipUiWidget = (UnityEngine_Object_o *)v2->fields.equipUiWidget;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUiWidget, 0LL, 0LL) )
  {
    this = (ServantFaceIconComponent_o *)v2->fields.equipUiWidget;
    if ( this )
    {
      if ( ((float (__fastcall *)(ServantFaceIconComponent_o *, void *))this->klass[1]._1.namespaze)(
             this,
             this->klass[1]._1.byval_arg.data) <= 0.0 )
        ServantFaceIconComponent__ChangeDisplayEquip(v2, v9);
      return;
    }
LABEL_17:
    sub_1BC3264(this, method);
  }
}


System_String_o *__fastcall ServantFaceIconComponent__GetFaceSpriteName(
        ServantFaceIconComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *faceSprite; // x8

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite )
    sub_1BC3264(this, method);
  return faceSprite->fields.mSpriteName;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantFaceIconComponent__GetIconLimitCountSealAfter(
        ServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t iconLimit,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B01532 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B01532 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v8);
  }
  return ServantLimitImageMaster__GetServantImageLimitSealAfter(
           (ServantLimitImageMaster_o *)Instance,
           svtId,
           iconLimit,
           0LL);
}


void __fastcall ServantFaceIconComponent__HideEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20

  if ( (byte_4B01527 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B01527 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite )
      goto LABEL_27;
    noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !noneEquipSprite )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
      if ( !noneEquipSprite )
        goto LABEL_27;
      noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
      if ( !noneEquipSprite )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 1, 0LL);
    }
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !noneEquipSprite )
      goto LABEL_27;
    UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !noneEquipSprite )
        goto LABEL_27;
      noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
      if ( !noneEquipSprite )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
    }
    rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
      if ( noneEquipSprite )
      {
        UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
        return;
      }
LABEL_27:
      sub_1BC3264(noneEquipSprite, v4);
    }
  }
}


bool __fastcall ServantFaceIconComponent__IsUseEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Component_o *noneEquipSprite; // x0
  __int64 v5; // x1
  struct UIMeshSprite_o *v6; // x8

  if ( (byte_4B01528 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B01528 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL);
  if ( ((unsigned __int8)noneEquipSprite & 1) != 0 )
  {
    v6 = this->fields.equipSprite;
    if ( !v6 )
      goto LABEL_13;
    if ( !System_String__IsNullOrEmpty(v6->fields.mSpriteName, 0LL) )
      return 1;
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite
      || (noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL)) == 0LL )
    {
LABEL_13:
      sub_1BC3264(noneEquipSprite, v5);
    }
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)noneEquipSprite, 0LL) )
      return 1;
  }
  return 0;
}


// attributes: thunk
void __fastcall ServantFaceIconComponent__LateUpdate(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ServantFaceIconComponent__FadeEquip(this, method);
}


void __fastcall ServantFaceIconComponent__NoMount(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *backSprite; // x0

  if ( (byte_4B01507 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_20205/*"img_frames_nodata"*/, method);
    byte_4B01507 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_1BC3264(0LL, v3);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_20205/*"img_frames_nodata"*/, 0LL);
}


void __fastcall ServantFaceIconComponent__NoMount_40030376(
        ServantFaceIconComponent_o *this,
        System_String_o *imgName,
        bool isDownLoad,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  UISprite_o *backSprite; // x20

  if ( (byte_4B01508 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, imgName);
    byte_4B01508 = 1;
  }
  ServantFaceIconComponent__Clear(this, (const MethodInfo *)imgName);
  backSprite = this->fields.backSprite;
  if ( isDownLoad )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetDownloadCommonSprite(backSprite, imgName, 0LL);
  }
  else
  {
    if ( !backSprite )
      sub_1BC3264(v7, v8);
    UISprite__set_spriteName(backSprite, imgName, 0LL);
  }
}


void __fastcall ServantFaceIconComponent__NoMount_Support(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *backSprite; // x0

  if ( (byte_4B01509 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_20206/*"img_frames_nodata3"*/, method);
    byte_4B01509 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_1BC3264(0LL, v3);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_20206/*"img_frames_nodata3"*/, 0LL);
}


void __fastcall ServantFaceIconComponent__NotHaveServantSet(
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

  if ( (byte_4B0150C & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, servantData);
    byte_4B0150C = 1;
  }
  if ( servantData )
  {
    v10 = *(_QWORD *)&servantData->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&servantData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v17, 0LL);
    IconLimitCount = (ServantFaceIconComponent_o *)ServantLeaderInfo__getIconLimitCount(servantData, 0LL);
    IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                IconLimitCount,
                                v11,
                                (int32_t)IconLimitCount,
                                v13);
    ServantFaceIconComponent__Set_40037156(
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
      0LL,
      0,
      0,
      0,
      0,
      0LL,
      0,
      v16);
    ServantFaceIconComponent__ClearEquip(this, v15);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)servantData);
  }
}


void __fastcall ServantFaceIconComponent__OnDestroy(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall ServantFaceIconComponent__ParameterChange(
        ServantFaceIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ServantFaceIconComponent__SetIconLabel(this, count, method);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__ReSizeClassIcon(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *classSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s8
  float v10; // s9
  float v11; // s10
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B01534 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B01534 = 1;
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(classSprite, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.classSprite;
    if ( !transform )
      goto LABEL_17;
    if ( *(_QWORD *)&transform[19].fields.m_CachedPtr )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( transform )
      {
        *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)this->fields.classSprite;
        if ( transform )
        {
          v9 = v6;
          v10 = v7;
          v11 = v8;
          UIWidget__set_pivot((UIWidget_o *)transform, 4, 0LL);
          transform = (UnityEngine_Component_o *)this->fields.classSprite;
          if ( transform )
          {
            ((void (__fastcall *)(UnityEngine_Component_o *, void *))transform->klass[2]._1.typeMetadataHandle)(
              transform,
              transform->klass[2]._1.interopData);
            transform = (UnityEngine_Component_o *)this->fields.classSprite;
            if ( transform )
            {
              transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
              if ( transform )
              {
                v12.fields.x = v9;
                v12.fields.y = v10;
                v12.fields.z = v11;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v12, 0LL);
                transform = (UnityEngine_Component_o *)this->fields.classSprite;
                if ( transform )
                {
                  UIWidget__set_width((UIWidget_o *)transform, SLODWORD(transform[7].klass) / 2, 0LL);
                  transform = (UnityEngine_Component_o *)this->fields.classSprite;
                  if ( transform )
                  {
                    UIWidget__set_height((UIWidget_o *)transform, SHIDWORD(transform[7].klass) / 2, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_17:
      sub_1BC3264(transform, v4);
    }
  }
}


void __fastcall ServantFaceIconComponent__ResetIconLabelPos(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0

  if ( (byte_4B0152D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B0152D = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    if ( this->fields.isAdjustIconLabelPos )
    {
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( !transform
        || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
      {
        sub_1BC3264(transform, v4);
      }
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.iconLabelInitPos, 0LL);
    }
    this->fields.isAdjustIconLabelPos = 0;
  }
}


void __fastcall ServantFaceIconComponent__ResetIconLabelScale(
        ServantFaceIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UIIconLabel_o *transform; // x0
  UnityEngine_Vector2Int_o textLabelInitSize; // 0:x1.8

  if ( (byte_4B0152F & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B0152F = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    if ( this->fields.isAdjustIconLabelScale )
    {
      transform = this->fields.iconLabel;
      if ( !transform
        || (textLabelInitSize = this->fields.textLabelInitSize,
            UIIconLabel__SetTextLabelSize(transform, textLabelInitSize, v5),
            (transform = this->fields.iconLabel) == 0LL)
        || (transform = (UIIconLabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
      {
        sub_1BC3264(transform, v4);
      }
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, this->fields.iconLabelInitScale, 0LL);
    }
    this->fields.isAdjustIconLabelScale = 0;
  }
}


void __fastcall ServantFaceIconComponent__Set(
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  void *OverwriteStatus; // x0
  __int64 v23; // x1
  bool IsGrandServant; // w0
  __int128 v25; // q0
  bool v26; // w28
  __int64 v27; // x1
  int64_t v28; // x29
  NetworkManager_c *v29; // x0
  bool v30; // w27
  bool v31; // w26
  bool v32; // w24
  int32_t IconLimitCount; // w26
  int32_t v34; // w0
  Il2CppObject *v35; // x0
  __int64 v36; // x27
  __int64 v37; // x28
  ServantLimitImageMaster_o *v38; // x25
  int32_t v39; // w25
  int32_t v40; // w26
  int32_t v41; // w0
  int32_t exceedCount; // w27
  int32_t v43; // w28
  bool IsNew; // w29
  bool IsEventJoin; // w0
  const MethodInfo *v46; // x1
  int32_t FriendIconLimitCount; // w25
  Il2CppObject *MasterData_object; // x0
  __int64 v49; // x27
  __int64 v50; // x28
  ServantLimitImageMaster_o *v51; // x26
  int32_t ServantImageLimitSealAfter; // w25
  int32_t v53; // w26
  int32_t v54; // w0
  __int64 v55; // x21
  __int64 v56; // x22
  int32_t v57; // w0
  const MethodInfo *v58; // x4
  const MethodInfo *v59; // [xsp+50h] [xbp-D0h]
  int32_t actualRarity; // [xsp+70h] [xbp-B0h]
  int32_t v61; // [xsp+74h] [xbp-ACh]
  IconLabelInfo_o *info2a; // [xsp+78h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+A0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B0150A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtEntity);
    sub_1BC3008(&NetworkManager_TypeInfo, v18);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4B0150A = 1;
  }
  if ( !userSvtEntity )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
    return;
  }
  info2a = info2;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(userSvtEntity, questRestrictionInfo, 0LL);
  if ( !OverwriteStatus )
    goto LABEL_34;
  actualRarity = *((_DWORD *)OverwriteStatus + 10);
  v61 = *((_DWORD *)OverwriteStatus + 6);
  IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0LL);
  v25 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  v26 = IsGrandServant;
  *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v64.fields.fakeValue = v25;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v63 = v64;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v63, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v27);
    byte_4AFC1F1 = 1;
  }
  v29 = NetworkManager_TypeInfo;
  v30 = v26 || isGrand;
  v31 = !forceNotGrand;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v29 = NetworkManager_TypeInfo;
  }
  v32 = v30 && v31;
  if ( v28 != v29->static_fields->userIdNumber )
  {
    FriendIconLimitCount = UserServantEntity__getFriendIconLimitCount(userSvtEntity, 0, 0LL);
    OverwriteStatus = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( OverwriteStatus )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)OverwriteStatus,
                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v50 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v49 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      v51 = (ServantLimitImageMaster_o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v66.fields.currentCryptoKey = v50;
      *(_QWORD *)&v66.fields.fakeValue = v49;
      OverwriteStatus = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v66, 0LL);
      if ( v51 )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       v51,
                                       (int32_t)OverwriteStatus,
                                       FriendIconLimitCount,
                                       0LL);
        v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(userSvtEntity->fields.svtId, 0LL);
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(userSvtEntity->fields.limitCount, 0LL);
        ServantFaceIconComponent__SetIcon(
          this,
          v53,
          v61,
          v54,
          ServantImageLimitSealAfter,
          userSvtEntity->fields.exceedCount,
          info1,
          info2a,
          2,
          0,
          0,
          0LL,
          0,
          userSvtEntity->fields.lv,
          0,
          0LL,
          actualRarity,
          v32,
          v59);
        goto LABEL_28;
      }
    }
LABEL_34:
    sub_1BC3264(OverwriteStatus, v23);
  }
  IconLimitCount = UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
  if ( questRestrictionInfo )
  {
    v34 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42410260(questRestrictionInfo, userSvtEntity, 0LL);
    if ( v34 >= 0 )
      IconLimitCount = v34;
  }
  OverwriteStatus = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !OverwriteStatus )
    goto LABEL_34;
  v35 = DataManager__GetMasterData_object_(
          (DataManager_o *)OverwriteStatus,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v38 = (ServantLimitImageMaster_o *)v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v65.fields.currentCryptoKey = v37;
  *(_QWORD *)&v65.fields.fakeValue = v36;
  OverwriteStatus = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v65, 0LL);
  if ( !v38 )
    goto LABEL_34;
  v39 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v38, (int32_t)OverwriteStatus, IconLimitCount, 0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(userSvtEntity->fields.svtId, 0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(userSvtEntity->fields.limitCount, 0LL);
  exceedCount = userSvtEntity->fields.exceedCount;
  v43 = v41;
  IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  ServantFaceIconComponent__SetIcon(
    this,
    v40,
    v61,
    v43,
    v39,
    exceedCount,
    info1,
    info2a,
    2,
    IsNew,
    IsEventJoin,
    0LL,
    0,
    userSvtEntity->fields.lv,
    0,
    0LL,
    actualRarity,
    v32,
    v59);
LABEL_28:
  if ( equipIdList && *(_QWORD *)&equipIdList->max_length )
  {
    v56 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v55 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v67.fields.currentCryptoKey = v56;
    *(_QWORD *)&v67.fields.fakeValue = v55;
    v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v67, 0LL);
    ServantFaceIconComponent__SetEquip_40034304(this, v57, equipIdList, isChangeFriendShipSvtEquipSkill, v58);
  }
  else
  {
    ServantFaceIconComponent__ClearEquip(this, v46);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetActiveEquipSprite(
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

  if ( (byte_4B01503 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, isActiveEquipSprite);
    byte_4B01503 = 1;
  }
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_29;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, !isActiveEquipSprite, 0LL);
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_29;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActiveEquipSprite, 0LL);
  }
  if ( !isActiveEquipSprite )
  {
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !gameObject )
        goto LABEL_29;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          return;
        }
      }
LABEL_29:
      sub_1BC3264(gameObject, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetClassSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        bool isServantEquip,
        int32_t classId,
        int32_t frameType,
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v13; // x1
  UnityEngine_Object_o *classSprite; // x25
  UISprite_o *v15; // x0
  __int64 v16; // x1
  int32_t collectionStatus; // w8
  UISprite_o *v18; // x24
  const MethodInfo *v19; // x1

  if ( (byte_4B0151C & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, isCommandCode);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    byte_4B0151C = 1;
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = (UISprite_o *)UnityEngine_Object__op_Equality(classSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) == 0 )
  {
    if ( isCommandCode
      || (collectionStatus = this->fields.collectionStatus, (collectionStatus | 4) == 4)
      || (collectionStatus & 0xFFFFFFFE) == 6 )
    {
      v15 = this->fields.classSprite;
      if ( v15 )
      {
LABEL_9:
        UISprite__set_spriteName(v15, 0LL, 0LL);
        return;
      }
LABEL_17:
      sub_1BC3264(v15, v16);
    }
    v18 = this->fields.classSprite;
    if ( isServantEquip )
    {
      if ( v18 )
      {
        v15 = this->fields.classSprite;
        goto LABEL_9;
      }
      goto LABEL_17;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetClass(v18, classId, frameType, isGrandServant, 0LL);
    ServantFaceIconComponent__ReSizeClassIcon(this, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetCommandCode(
        ServantFaceIconComponent_o *this,
        int32_t commandCodeId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t collectionStatus,
        bool isNew,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v21; // x1
  DataManager_o *v22; // x23
  Il2CppObject *Component_object; // x26
  const MethodInfo *v24; // x6
  int32_t saveNameList; // w23
  UnityEngine_Object_o *equipSprite; // x24
  UnityEngine_Object_o *hideEquipSprite; // x24
  UnityEngine_Object_o *equipLimitCountSprite; // x24
  UISprite_o *backSprite; // x25
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x6
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *shiningIcon; // x23
  const MethodInfo *v35; // x2
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct IconLabelInfo_o **p_info1; // x0
  int32_t v39; // w1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct IconLabelInfo_o **p_info2; // x0
  int32_t v43; // w1
  const MethodInfo *v44; // x2

  if ( (byte_4B0151B & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v13);
    sub_1BC3008(&Method_DataManager_GetMasterData_CommandCodeMaster___, v14);
    sub_1BC3008(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v15);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v16);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BC3008(&StringLiteral_20205/*"img_frames_nodata"*/, v18);
    sub_1BC3008(&StringLiteral_19980/*"icon_common_new01"*/, v19);
    byte_4B0151B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                commandCodeId,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_60;
  v22 = Instance;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.faceSprite,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_60;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_object, 0LL);
  }
  if ( !v22 )
LABEL_60:
    sub_1BC3264(Instance, v21);
  saveNameList = (int32_t)v22->fields.saveNameList;
  this->fields.collectionStatus = collectionStatus;
  if ( collectionStatus == 2 || collectionStatus == 1 )
  {
    backSprite = this->fields.backSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommandCodeBaseIcon(backSprite, saveNameList, 0LL);
    AtlasManager__SetCommandCodeImage(this->fields.faceSprite, commandCodeId, 0LL);
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = (DataManager_o *)this->fields.typeSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  else if ( !collectionStatus )
  {
    Instance = (DataManager_o *)this->fields.backSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20205/*"img_frames_nodata"*/, 0LL);
    Instance = (DataManager_o *)this->fields.faceSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = (DataManager_o *)this->fields.typeSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_60;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_60;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
      {
        Instance = (DataManager_o *)this->fields.hideEquipSprite;
        if ( !Instance )
          goto LABEL_60;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_60;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      {
        Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
        if ( !Instance )
          goto LABEL_60;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_60;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
    }
  }
  ServantFaceIconComponent__SetClassSprite(this, 1, 0, 0, 0, 0, v24);
  ServantFaceIconComponent__SetLimitCountSprite(this, 1, 0, 0, v30);
  ServantFaceIconComponent__SetLimitCountIcon(this, 1, 0, 0, v31);
  ServantFaceIconComponent__SetRaritySprite(this, 1, saveNameList, 0, 0, 0, v32);
  ServantFaceIconComponent__SetFaceEffectSprite(this, 1, v33);
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
  {
    if ( isNew && this->fields.collectionStatus != 6 )
    {
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( Instance )
      {
        ShiningIconComponent__Set_40047632(
          (ShiningIconComponent_o *)Instance,
          (System_String_o *)StringLiteral_19980/*"icon_common_new01"*/,
          v35);
        goto LABEL_51;
      }
    }
    else
    {
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( Instance )
      {
        ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, v21);
        goto LABEL_51;
      }
    }
    goto LABEL_60;
  }
LABEL_51:
  ServantFaceIconComponent__ClearEquip(this, v21);
  if ( info1 && !IconLabelInfo__IsClear(info1, 0LL) )
  {
    this->fields.info1 = info1;
    p_info1 = &this->fields.info1;
    v39 = (int)info1;
  }
  else
  {
    this->fields.info1 = 0LL;
    p_info1 = &this->fields.info1;
    v39 = 0;
  }
  sub_1BC2FAC((CGThumbnailListItem_o *)p_info1, v39, v36, v37);
  if ( info2 && !IconLabelInfo__IsClear(info2, 0LL) )
  {
    this->fields.info2 = info2;
    p_info2 = &this->fields.info2;
    v43 = (int)info2;
  }
  else
  {
    this->fields.info2 = 0LL;
    p_info2 = &this->fields.info2;
    v43 = 0;
  }
  sub_1BC2FAC((CGThumbnailListItem_o *)p_info2, v43, v40, v41);
  ServantFaceIconComponent__SetIconLabel(this, 0, v44);
}


void __fastcall ServantFaceIconComponent__SetCostumeIcon(
        ServantFaceIconComponent_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *costumeIconSprite; // x21
  __int64 v9; // x1
  UISprite_o *transform; // x0
  int32_t v11; // w20
  int32_t iconId; // t1
  UISprite_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B01533 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, svtCostumeEntity);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_23640/*"svt_costume_icon_"*/, v6);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    byte_4B01533 = 1;
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(costumeIconSprite, 0LL, 0LL) )
  {
    transform = this->fields.costumeIconSprite;
    if ( !transform )
      goto LABEL_21;
    UISprite__set_spriteName(transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    transform = this->fields.costumeIconSprite;
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v11 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v13 = this->fields.costumeIconSprite;
        v14 = System_Int32__ToString(v11, 0LL);
        v15 = System_String__Concat_62348648((System_String_o *)StringLiteral_23640/*"svt_costume_icon_"*/, v14, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( AtlasManager__SetEventSprite(v13, v15, 0LL) )
        {
          transform = this->fields.costumeIconSprite;
          if ( transform )
          {
            UIWidget__set_pivot((UIWidget_o *)transform, 4, 0LL);
            transform = this->fields.costumeIconSprite;
            if ( transform )
            {
              transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
              if ( transform )
              {
                v16.fields.z = 0.0;
                v16.fields.x = -47.0;
                v16.fields.y = -42.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v16, 0LL);
                transform = this->fields.costumeIconSprite;
                if ( transform )
                {
                  UIWidget__set_width((UIWidget_o *)transform, 34, 0LL);
                  transform = this->fields.costumeIconSprite;
                  if ( transform )
                  {
                    UIWidget__set_height((UIWidget_o *)transform, 34, 0LL);
                    transform = this->fields.costumeIconSprite;
                    if ( transform )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
LABEL_21:
          sub_1BC3264(transform, v9);
        }
      }
    }
  }
}


void __fastcall ServantFaceIconComponent__SetDataNotOpened(
        ServantFaceIconComponent_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t v12; // w0
  ServantFaceIconComponent_c *v13; // x8
  int32_t limitCount; // w22
  int32_t v15; // w23
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // [xsp+48h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v8 = this;
  if ( (byte_4B01511 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo);
    this = (ServantFaceIconComponent_o *)sub_1BC3008(&ServantFaceIconComponent_TypeInfo, v9);
    byte_4B01511 = 1;
  }
  if ( !equipTargetInfo )
    sub_1BC3264(this, equipTargetInfo);
  v11 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v18, 0LL);
  v13 = ServantFaceIconComponent_TypeInfo;
  limitCount = equipTargetInfo->fields.limitCount;
  v15 = v12;
  if ( !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
    v13 = ServantFaceIconComponent_TypeInfo;
  }
  ServantFaceIconComponent__Set_40037156(
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
    0LL,
    0,
    0,
    0,
    0,
    0LL,
    0,
    v17);
  ServantFaceIconComponent__ClearEquip(v8, v16);
}


void __fastcall ServantFaceIconComponent__SetDispClassSprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *classSprite; // x0

  classSprite = (UnityEngine_Behaviour_o *)this->fields.classSprite;
  if ( !classSprite )
    sub_1BC3264(0LL, flag);
  UnityEngine_Behaviour__set_enabled(classSprite, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetDispLimitCountIcon(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *limitCountIcon; // x0

  limitCountIcon = (UnityEngine_Component_o *)this->fields.limitCountIcon;
  if ( !limitCountIcon
    || (limitCountIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(limitCountIcon, 0LL)) == 0LL )
  {
    sub_1BC3264(limitCountIcon, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitCountIcon, flag, 0LL);
}


void __fastcall ServantFaceIconComponent__SetDispRaritySprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *raritySprite; // x0

  raritySprite = (UnityEngine_Behaviour_o *)this->fields.raritySprite;
  if ( !raritySprite )
    sub_1BC3264(0LL, flag);
  UnityEngine_Behaviour__set_enabled(raritySprite, flag, 0LL);
}


void __fastcall ServantFaceIconComponent__SetEmptyEquipSprite(
        ServantFaceIconComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UISprite_o *v6; // x20
  int32_t displayEquipIndex; // w19

  if ( (byte_4B01504 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4B01504 = 1;
  }
  ServantFaceIconComponent__SetActiveEquipSprite(this, 0, v2);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(noneEquipSprite, 0LL, 0LL) )
  {
    v6 = this->fields.noneEquipSprite;
    displayEquipIndex = this->fields.displayEquipIndex;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEmptyEquipSprite(v6, displayEquipIndex, 1, 0LL);
  }
}


void __fastcall ServantFaceIconComponent__SetEquip(
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

  if ( (byte_4B0150E & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
    byte_4B0150E = 1;
  }
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v12.fields.currentCryptoKey = v6;
    *(_QWORD *)&v12.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v12, 0LL);
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v13.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    v9 = v7;
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v13, 0LL);
    ServantFaceIconComponent__SetEquip_40027284(this, 0, v9, v10, 0LL, v11);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userServantEntity);
  }
}


void __fastcall ServantFaceIconComponent__SetEquipDangling(
        ServantFaceIconComponent_o *this,
        EquipTargetInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x22
  System_Collections_Generic_List_object__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  const MethodInfo *v19; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B01521 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__Add__, info);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo___ctor__, v5);
    sub_1BC3008(&System_Collections_Generic_List_EquipTargetInfo__TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B01521 = 1;
  }
  ServantFaceIconComponent__NoMount(this, (const MethodInfo *)info);
  if ( info )
  {
    v9 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v9;
    *(_QWORD *)&v20.fields.fakeValue = v8;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v20, 0LL) )
    {
      v10 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EquipTargetInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v10,
        (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EquipTargetInfo___ctor__);
      if ( !v10
        || (items = v10->fields._items,
            v16 = Method_System_Collections_Generic_List_EquipTargetInfo__Add__,
            ++v10->fields._version,
            !items) )
      {
        sub_1BC3264(v11, v12);
      }
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)info,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v18[4] = (Il2CppClass *)info;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)info, v13, v14);
      }
      ServantFaceIconComponent__SetEquip_40040996(
        this,
        0,
        (System_Collections_Generic_List_EquipTargetInfo__o *)v10,
        0,
        v19);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_40027284(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *equipSprite; // x24
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_Object_o *hideEquipSprite; // x23
  UISprite_o *v24; // x23
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Component_o *v26; // x21
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8
  int32_t displayEquipIndex; // w21
  UnityEngine_Object_o *friendShipSvtEquipIconSprite; // x20
  UnityEngine_Object_o *v31; // x20
  _BOOL4 equipFriendShipSkillChange; // w21
  UISprite_o *v33; // x20
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8

  if ( (byte_4B01526 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&baseSvtId);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v14);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BC3008(&StringLiteral_19531/*"func_group_icon_385"*/, v17);
    sub_1BC3008(&StringLiteral_20143/*"img_bond_category"*/, v18);
    byte_4B01526 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
    return;
  if ( svtId < 1 )
  {
    ServantFaceIconComponent__ClearEquip_40042228(this, baseSvtId, v21);
    return;
  }
  noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
  if ( !noneEquipSprite )
    goto LABEL_59;
  noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
  if ( !noneEquipSprite )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
  noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
  if ( !noneEquipSprite )
    goto LABEL_59;
  noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
  if ( !noneEquipSprite )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 1, 0LL);
  hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
  {
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
    if ( !noneEquipSprite )
      goto LABEL_59;
    noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !noneEquipSprite )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
  }
  v24 = (UISprite_o *)this->fields.equipSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v24, svtId, imagePartsGroupIdxs, 0LL);
  equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
  {
    noneEquipSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !noneEquipSprite )
      goto LABEL_59;
    noneEquipSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)noneEquipSprite,
                                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !noneEquipSprite )
      goto LABEL_59;
    noneEquipSprite = (UnityEngine_Component_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)noneEquipSprite,
                                                   svtId,
                                                   (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !this->fields.equipLimitCountSprite )
      goto LABEL_59;
    v26 = noneEquipSprite;
    noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                                   0LL);
    if ( !v26 || !noneEquipSprite )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)noneEquipSprite,
      v26[3].fields.m_CachedPtr > 0 && v26[3].fields.m_CachedPtr <= limitCount,
      0LL);
  }
  rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)noneEquipSprite & 1) != 0 )
  {
    raritySprite = this->fields.raritySprite;
    if ( !raritySprite )
      goto LABEL_59;
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
    if ( !noneEquipSprite )
      goto LABEL_59;
    UISprite__set_spriteName((UISprite_o *)noneEquipSprite, raritySprite->fields.mSpriteName, 0LL);
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
    if ( !noneEquipSprite )
      goto LABEL_59;
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))noneEquipSprite->klass[2]._1.typeMetadataHandle)(
      noneEquipSprite,
      noneEquipSprite->klass[2]._1.interopData);
  }
  displayEquipIndex = this->fields.displayEquipIndex;
  friendShipSvtEquipIconSprite = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSvtEquipIconSprite, 0LL, 0LL) )
  {
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !noneEquipSprite )
      goto LABEL_59;
    noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !noneEquipSprite )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, displayEquipIndex == 1, 0LL);
  }
  v31 = (UnityEngine_Object_o *)this->fields.friendShipSvtEquipIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
  if ( displayEquipIndex == 1 && ((unsigned __int8)noneEquipSprite & 1) != 0 )
  {
    equipFriendShipSkillChange = this->fields.equipFriendShipSkillChange;
    v33 = this->fields.friendShipSvtEquipIconSprite;
    if ( AtlasManager_TypeInfo->_2.cctor_finished )
    {
      if ( this->fields.equipFriendShipSkillChange )
      {
LABEL_47:
        noneEquipSprite = (UnityEngine_Component_o *)AtlasManager__SetEventUI(
                                                       v33,
                                                       (System_String_o *)StringLiteral_19531/*"func_group_icon_385"*/,
                                                       0LL);
        goto LABEL_52;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( equipFriendShipSkillChange )
        goto LABEL_47;
    }
    AtlasManager__SetCommon(v33, 0LL);
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.friendShipSvtEquipIconSprite;
    if ( !noneEquipSprite )
      goto LABEL_59;
    UISprite__set_spriteName((UISprite_o *)noneEquipSprite, (System_String_o *)StringLiteral_20143/*"img_bond_category"*/, 0LL);
  }
LABEL_52:
  equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
  if ( !equipUserSvtEntityList )
    goto LABEL_59;
  if ( equipUserSvtEntityList->fields._size <= 1 )
  {
    equipTargetInfoList = this->fields.equipTargetInfoList;
    if ( !equipTargetInfoList )
      goto LABEL_59;
    if ( equipTargetInfoList->fields._size <= 1 )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
      if ( noneEquipSprite )
      {
        UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
        return;
      }
LABEL_59:
      sub_1BC3264(noneEquipSprite, v20);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_40034304(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        System_Int64_array *userSvtIdList,
        bool isChangeFriendShipSvtEquipSkill,
        const MethodInfo *method)
{
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
  UnityEngine_Object_o *equipSprite; // x23
  __int64 Master_object; // x0
  Il2CppObject *v22; // x1
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  int32_t size; // w2
  int v25; // w9
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  int32_t v27; // w2
  int v28; // w9
  UnityEngine_Object_o *switchEquipInfo; // x23
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x3
  struct SwitchUIWidgetComponent_o *v32; // x23
  const MethodInfo *v33; // x1
  __int64 v34; // x8
  unsigned __int64 v35; // x25
  int64_t v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  CGThumbnailListItem_o *v43; // x0
  struct System_Collections_Generic_List_UserServantEntity__o *v44; // x22
  UserServantEntity_o *v45; // x23
  struct UserServantEntity_array *items; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  __int64 v50; // x8
  struct System_Collections_Generic_List_UserServantEntity__o *v51; // x8
  UnityEngine_Object_o *v52; // x21
  UnityEngine_Object_o *equipUiWidget; // x21
  SwitchUIWidgetComponent_o *v54; // x21
  const MethodInfo *v55; // x3
  struct UIWidget_o *v56; // x23
  __int64 v57; // x22
  const MethodInfo *v58; // x3
  __int64 v59; // x21
  __int64 v60; // x22
  __int64 v61; // x21
  __int64 v62; // x22
  int32_t v63; // w21
  int32_t v64; // w0
  const MethodInfo *v65; // x5
  __int64 v66; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4B01524 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&baseSvtId);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__Clear__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v15);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v16);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BC3008(&UIWidget___TypeInfo, v18);
    sub_1BC3008(&UserServantEntity_TypeInfo, v19);
    byte_4B01524 = 1;
  }
  entity = 0LL;
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL);
  if ( (Master_object & 1) == 0 )
  {
    equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
    this->fields.displayEquipIndex = 0;
    if ( !equipUserSvtEntityList )
      goto LABEL_70;
    size = equipUserSvtEntityList->fields._size;
    v25 = equipUserSvtEntityList->fields._version + 1;
    equipUserSvtEntityList->fields._size = 0;
    equipUserSvtEntityList->fields._version = v25;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)equipUserSvtEntityList->fields._items, 0, size, 0LL);
    equipTargetInfoList = this->fields.equipTargetInfoList;
    if ( !equipTargetInfoList )
      goto LABEL_70;
    v27 = equipTargetInfoList->fields._size;
    v28 = equipTargetInfoList->fields._version + 1;
    equipTargetInfoList->fields._size = 0;
    equipTargetInfoList->fields._version = v28;
    if ( v27 >= 1 )
      System_Array__Clear((System_Array_o *)equipTargetInfoList->fields._items, 0, v27, 0LL);
    switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = UnityEngine_Object__op_Inequality(switchEquipInfo, 0LL, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      v32 = this->fields.switchEquipInfo;
      if ( !v32 )
        goto LABEL_70;
      v32->fields.isEnableSingle = 0;
      v32->fields.componentList = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v32->fields.componentList, 0, (int32_t)v30, v31);
      SwitchUIWidgetComponent__ClearParam(v32, v33);
    }
    this->fields.equipFriendShipSkillChange = isChangeFriendShipSvtEquipSkill;
    if ( !userSvtIdList )
LABEL_70:
      sub_1BC3264(Master_object, v22);
    v34 = *(_QWORD *)&userSvtIdList->max_length;
    if ( (int)v34 > 1 )
    {
LABEL_22:
      v35 = 0LL;
      while ( 1 )
      {
        if ( v35 >= (unsigned int)v34 )
          goto LABEL_71;
        v36 = userSvtIdList->m_Items[v35];
        if ( !v36 )
          goto LABEL_33;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Master_object )
          goto LABEL_70;
        if ( DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               &entity,
               v36,
               (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          Master_object = (__int64)this->fields.equipUserSvtEntityList;
          if ( !Master_object )
            goto LABEL_70;
          v22 = entity;
          v39 = *(_QWORD *)(Master_object + 16);
          v40 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++*(_DWORD *)(Master_object + 28);
          if ( !v39 )
            goto LABEL_70;
          v41 = *(int *)(Master_object + 24);
          if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
          {
            v50 = v40[4];
            goto LABEL_40;
          }
          v42 = v39 + 8 * v41;
          *(_DWORD *)(Master_object + 24) = v41 + 1;
          *(_QWORD *)(v42 + 32) = v22;
          v43 = (CGThumbnailListItem_o *)(v42 + 32);
        }
        else
        {
LABEL_33:
          v44 = this->fields.equipUserSvtEntityList;
          v45 = (UserServantEntity_o *)sub_1BC3254(UserServantEntity_TypeInfo);
          UserServantEntity___ctor(v45, 0LL);
          if ( !v44 )
            goto LABEL_70;
          items = v44->fields._items;
          v47 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v44->fields._version;
          if ( !items )
            goto LABEL_70;
          v48 = v44->fields._size;
          if ( (unsigned int)v48 >= items->max_length )
          {
            v50 = v47[4];
            Master_object = (__int64)v44;
            v22 = (Il2CppObject *)v45;
LABEL_40:
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              v22,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v50 + 192) + 112LL));
            goto LABEL_41;
          }
          v49 = &items->obj.klass + v48;
          v44->fields._size = v48 + 1;
          v49[4] = (Il2CppClass *)v45;
          v43 = (CGThumbnailListItem_o *)(v49 + 4);
          LODWORD(v22) = (_DWORD)v45;
        }
        sub_1BC2FAC(v43, (int32_t)v22, v37, v38);
LABEL_41:
        LODWORD(v34) = userSvtIdList->max_length;
        if ( (__int64)++v35 >= (int)v34 )
          goto LABEL_42;
      }
    }
    if ( (_DWORD)v34 )
    {
      if ( !userSvtIdList->m_Items[0] )
      {
        ServantFaceIconComponent__ClearEquip_40042228(this, baseSvtId, v30);
        return;
      }
      if ( (int)v34 >= 1 )
        goto LABEL_22;
LABEL_42:
      v51 = this->fields.equipUserSvtEntityList;
      if ( !v51 )
        goto LABEL_70;
      if ( v51->fields._size < 2 )
        goto LABEL_60;
      v52 = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
        goto LABEL_60;
      equipUiWidget = (UnityEngine_Object_o *)this->fields.equipUiWidget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(equipUiWidget, 0LL, 0LL) )
        goto LABEL_60;
      v54 = this->fields.switchEquipInfo;
      Master_object = sub_1BC30B0(UIWidget___TypeInfo, 1LL);
      if ( !Master_object )
        goto LABEL_70;
      v56 = this->fields.equipUiWidget;
      v57 = Master_object;
      if ( v56 )
      {
        Master_object = sub_1BC3144(this->fields.equipUiWidget, *(_QWORD *)(*(_QWORD *)Master_object + 64LL));
        if ( !Master_object )
        {
          v66 = sub_1BC3288(0LL);
          sub_1BC3130(v66, 0LL);
        }
      }
      if ( *(_DWORD *)(v57 + 24) )
      {
        *(_QWORD *)(v57 + 32) = v56;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v57 + 32), (int32_t)v56, (int32_t)v30, v55);
        if ( !v54 )
          goto LABEL_70;
        SwitchUIWidgetComponent__Set(v54, (UIWidget_array *)v57, 1, v58);
        Master_object = (__int64)this->fields.equipUserSvtEntityList;
        if ( !Master_object )
          goto LABEL_70;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)Master_object,
                                   0,
                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_70;
        v60 = *(_QWORD *)(Master_object + 80);
        v59 = *(_QWORD *)(Master_object + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v68.fields.currentCryptoKey = v60;
        *(_QWORD *)&v68.fields.fakeValue = v59;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v68, 0LL) <= 0 )
        {
          ServantFaceIconComponent__SetEmptyEquipSprite(this, (const MethodInfo *)v22);
          return;
        }
LABEL_60:
        Master_object = (__int64)this->fields.equipUserSvtEntityList;
        if ( Master_object )
        {
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)Master_object,
                                     this->fields.displayEquipIndex,
                                     (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( Master_object )
          {
            v62 = *(_QWORD *)(Master_object + 80);
            v61 = *(_QWORD *)(Master_object + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v69.fields.currentCryptoKey = v62;
            *(_QWORD *)&v69.fields.fakeValue = v61;
            Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v69, 0LL);
            if ( this->fields.equipUserSvtEntityList )
            {
              v63 = Master_object;
              Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this->fields.equipUserSvtEntityList,
                                         this->fields.displayEquipIndex,
                                         (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
              if ( Master_object )
              {
                v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(Master_object + 96),
                        0LL);
                ServantFaceIconComponent__SetEquip_40027284(this, baseSvtId, v63, v64, 0LL, v65);
                return;
              }
            }
          }
        }
        goto LABEL_70;
      }
    }
LABEL_71:
    sub_1BC326C(Master_object, v22, v30);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_40040996(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        System_Collections_Generic_List_EquipTargetInfo__o *equipTargetList,
        bool isChangeFriendShipSvtEquipSkill,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *equipSprite; // x23
  const MethodInfo *v15; // x2
  __int64 IsNullOrEmpty; // x0
  __int64 v17; // x1
  Il2CppClass *v18; // x23
  void *v19; // x24
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserSvtEntityList; // x8
  int32_t size; // w2
  int v22; // w9
  UnityEngine_Object_o *switchEquipInfo; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct SwitchUIWidgetComponent_o *v26; // x22
  const MethodInfo *v27; // x1
  struct System_Collections_Generic_List_EquipTargetInfo__o **p_equipTargetInfoList; // x22
  struct System_Collections_Generic_List_EquipTargetInfo__o *equipTargetInfoList; // x8
  UnityEngine_Object_o *v30; // x23
  UnityEngine_Object_o *equipUiWidget; // x23
  SwitchUIWidgetComponent_o *v32; // x23
  __int64 v33; // x2
  const MethodInfo *v34; // x3
  struct UIWidget_o *v35; // x25
  __int64 v36; // x24
  const MethodInfo *v37; // x3
  Il2CppClass *v38; // x22
  void *v39; // x23
  const MethodInfo *v40; // x1
  Il2CppClass *v41; // x22
  void *v42; // x23
  int32_t v43; // w22
  int32_t v44; // w23
  const MethodInfo *v45; // x5
  __int64 v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4B01525 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, *(_QWORD *)&baseSvtId);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BC3008(&UIWidget___TypeInfo, v13);
    byte_4B01525 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
    goto LABEL_7;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)equipTargetList, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
    goto LABEL_7;
  if ( !equipTargetList )
    goto LABEL_47;
  if ( equipTargetList->fields._size <= 1 )
  {
    IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)equipTargetList,
                               0,
                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    if ( !IsNullOrEmpty )
      goto LABEL_47;
    v19 = *(void **)(IsNullOrEmpty + 56);
    v18 = *(Il2CppClass **)(IsNullOrEmpty + 64);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v47.fields.currentCryptoKey = v19;
    *(_QWORD *)&v47.fields.fakeValue = v18;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v47, 0LL);
    if ( (int)IsNullOrEmpty <= 0 )
    {
LABEL_7:
      ServantFaceIconComponent__ClearEquip_40042228(this, baseSvtId, v15);
      return;
    }
  }
  equipUserSvtEntityList = this->fields.equipUserSvtEntityList;
  this->fields.equipFriendShipSkillChange = isChangeFriendShipSvtEquipSkill;
  this->fields.displayEquipIndex = 0;
  if ( !equipUserSvtEntityList )
    goto LABEL_47;
  size = equipUserSvtEntityList->fields._size;
  v22 = equipUserSvtEntityList->fields._version + 1;
  equipUserSvtEntityList->fields._size = 0;
  equipUserSvtEntityList->fields._version = v22;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipUserSvtEntityList->fields._items, 0, size, 0LL);
  switchEquipInfo = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsNullOrEmpty = UnityEngine_Object__op_Inequality(switchEquipInfo, 0LL, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v26 = this->fields.switchEquipInfo;
    if ( !v26 )
      goto LABEL_47;
    v26->fields.isEnableSingle = 0;
    v26->fields.componentList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v26->fields.componentList, 0, v24, v25);
    SwitchUIWidgetComponent__ClearParam(v26, v27);
  }
  p_equipTargetInfoList = &this->fields.equipTargetInfoList;
  this->fields.equipTargetInfoList = equipTargetList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipTargetInfoList, (int32_t)equipTargetList, v24, v25);
  equipTargetInfoList = this->fields.equipTargetInfoList;
  if ( !equipTargetInfoList )
LABEL_47:
    sub_1BC3264(IsNullOrEmpty, v17);
  if ( equipTargetInfoList->fields._size < 2 )
    goto LABEL_40;
  v30 = (UnityEngine_Object_o *)this->fields.switchEquipInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
    goto LABEL_40;
  equipUiWidget = (UnityEngine_Object_o *)this->fields.equipUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(equipUiWidget, 0LL, 0LL) )
    goto LABEL_40;
  v32 = this->fields.switchEquipInfo;
  IsNullOrEmpty = sub_1BC30B0(UIWidget___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_47;
  v35 = this->fields.equipUiWidget;
  v36 = IsNullOrEmpty;
  if ( v35 )
  {
    IsNullOrEmpty = sub_1BC3144(this->fields.equipUiWidget, *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 64LL));
    if ( !IsNullOrEmpty )
    {
      v46 = sub_1BC3288(0LL);
      sub_1BC3130(v46, 0LL);
    }
  }
  if ( !*(_DWORD *)(v36 + 24) )
    sub_1BC326C(IsNullOrEmpty, v17, v33);
  *(_QWORD *)(v36 + 32) = v35;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v36 + 32), (int32_t)v35, v33, v34);
  if ( !v32 )
    goto LABEL_47;
  SwitchUIWidgetComponent__Set(v32, (UIWidget_array *)v36, 1, v37);
  IsNullOrEmpty = (__int64)*p_equipTargetInfoList;
  if ( !*p_equipTargetInfoList )
    goto LABEL_47;
  IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                             0,
                             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
  if ( !IsNullOrEmpty )
    goto LABEL_47;
  v39 = *(void **)(IsNullOrEmpty + 56);
  v38 = *(Il2CppClass **)(IsNullOrEmpty + 64);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v39;
  *(_QWORD *)&v48.fields.fakeValue = v38;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v48, 0LL) > 0 )
  {
LABEL_40:
    IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)equipTargetList,
                               0,
                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    if ( IsNullOrEmpty )
    {
      v42 = *(void **)(IsNullOrEmpty + 56);
      v41 = *(Il2CppClass **)(IsNullOrEmpty + 64);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v49.fields.currentCryptoKey = v42;
      *(_QWORD *)&v49.fields.fakeValue = v41;
      v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v49, 0LL);
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)equipTargetList,
                                 0,
                                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
      if ( IsNullOrEmpty )
      {
        v44 = *(_DWORD *)(IsNullOrEmpty + 72);
        IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipTargetList,
                                   0,
                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
        if ( IsNullOrEmpty )
        {
          ServantFaceIconComponent__SetEquip_40027284(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEventBonus(
        ServantFaceIconComponent_o *this,
        int32_t iconId,
        int32_t rarity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  int32_t FrameType; // w0
  UISprite_o *backSprite; // x23
  int32_t v16; // w22
  UISprite_o *faceSprite; // x23
  UnityEngine_Object_o *equipSprite; // x21
  UnityEngine_Object_o *hideEquipSprite; // x21
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  UnityEngine_Object_o *classSprite; // x21
  UnityEngine_Object_o *limitCountSprite; // x21
  UnityEngine_Object_o *limitCountIcon; // x21
  UnityEngine_Object_o *raritySprite; // x21
  const MethodInfo *v25; // x1
  UISprite_o *v26; // x21
  const MethodInfo *v27; // x2

  if ( (byte_4B0151A & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&iconId);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantExceedMaster___, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&Rarity_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BC3008(&StringLiteral_21077/*"listframes_shadow"*/, v11);
    byte_4B0151A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_56;
  FrameType = ServantExceedMaster__GetFrameType((ServantExceedMaster_o *)Instance, rarity, 0, 0, 0LL);
  backSprite = this->fields.backSprite;
  v16 = FrameType;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( rarity < 1 )
    AtlasManager__SetDataLostFaceBaseIcon(backSprite, 0LL);
  else
    AtlasManager__SetFaceBaseIcon(backSprite, v16, 0, 0, 0LL);
  faceSprite = this->fields.faceSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceImage(faceSprite, iconId, 0, 1, 0LL, 0LL);
  Instance = (DataManager_o *)this->fields.frameSprite;
  if ( !Instance )
    goto LABEL_56;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21077/*"listframes_shadow"*/, 0LL);
  AtlasManager__SetServantType(this->fields.typeSprite, 6, v16, 0, 0, 0LL);
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = (DataManager_o *)this->fields.noneEquipSprite;
    if ( !Instance )
      goto LABEL_56;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_56;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
      if ( !Instance )
        goto LABEL_56;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.classSprite;
    if ( !Instance )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.limitCountSprite;
    if ( !Instance )
      goto LABEL_56;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.limitCountIcon;
    if ( !Instance )
      goto LABEL_56;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)Instance, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v26 = this->fields.raritySprite;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = (DataManager_o *)Rarity__getIcon(rarity, 0LL);
    if ( v26 )
    {
      UISprite__set_spriteName(v26, (System_String_o *)Instance, 0LL);
      Instance = (DataManager_o *)this->fields.raritySprite;
      if ( Instance )
      {
        ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
          Instance,
          Instance->klass[2]._1.interopData);
        goto LABEL_55;
      }
    }
LABEL_56:
    sub_1BC3264(Instance, v13);
  }
LABEL_55:
  ServantFaceIconComponent__ClearEquip(this, v25);
  ServantFaceIconComponent__SetIconLabel(this, 0, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetFaceEffectSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *faceEffectSprite; // x21
  __int64 v10; // x1
  UISprite_o *v11; // x0
  int32_t collectionStatus; // w8
  UISprite_o *v13; // x19
  __int64 *v14; // x8

  if ( (byte_4B01520 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, isCommandCode);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_21050/*"linklost_svt_material"*/, v6);
    sub_1BC3008(&StringLiteral_21048/*"linkclose_svt_material"*/, v7);
    sub_1BC3008(&StringLiteral_21047/*"linkbad_svt_material"*/, v8);
    byte_4B01520 = 1;
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(faceEffectSprite, 0LL, 0LL) )
  {
    if ( isCommandCode )
    {
LABEL_7:
      v11 = this->fields.faceEffectSprite;
      if ( !v11 )
        sub_1BC3264(0LL, v10);
      UISprite__set_spriteName(v11, 0LL, 0LL);
      return;
    }
    collectionStatus = this->fields.collectionStatus;
    switch ( collectionStatus )
    {
      case 10:
        v13 = this->fields.faceEffectSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v14 = &StringLiteral_21048/*"linkclose_svt_material"*/;
        break;
      case 9:
        v13 = this->fields.faceEffectSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v14 = &StringLiteral_21047/*"linkbad_svt_material"*/;
        break;
      case 8:
        v13 = this->fields.faceEffectSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v14 = &StringLiteral_21050/*"linklost_svt_material"*/;
        break;
      default:
        goto LABEL_7;
    }
    AtlasManager__SetEventSprite(v13, (System_String_o *)*v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetIcon(
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v39; // x1
  ServantEntity_o *v40; // x27
  Il2CppObject *Component_object; // x22
  int32_t v42; // w22
  int32_t FrameTypeFixRarity; // w29
  int32_t v44; // w21
  int32_t FrameType; // w29
  const MethodInfo *v46; // x2
  UISprite_o *v47; // x25
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x3
  UISprite_o *backSprite; // x20
  UISprite_o *faceSprite; // x20
  UISprite_o *v52; // x26
  const MethodInfo *v53; // x2
  UISprite_o *v54; // x21
  UISprite_o *v55; // x20
  UISprite_o *v56; // x20
  ServantFaceIconComponent_c *v57; // x0
  UnityEngine_Object_o *v58; // x20
  UnityEngine_Object_o *v59; // x20
  UISprite_o *v60; // x20
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  bool IsServantEquip; // w0
  const MethodInfo *v65; // x6
  const MethodInfo *v66; // x4
  const MethodInfo *v67; // x4
  const MethodInfo *v68; // x6
  const MethodInfo *v69; // x2
  UnityEngine_Object_o *shiningIcon; // x20
  const MethodInfo *v71; // x2
  __int64 *v72; // x8
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct IconLabelInfo_o **p_info1; // x0
  int32_t v76; // w1
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct IconLabelInfo_o **p_info2; // x0
  int32_t v80; // w1
  const MethodInfo *v81; // x2
  int32_t classId; // [xsp+30h] [xbp-70h]

  if ( (byte_4B01519 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v24);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v25);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantExceedMaster___, v26);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v27);
    sub_1BC3008(&DataManager_TypeInfo, v28);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v30);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v31);
    sub_1BC3008(&ServantFaceIconComponent_TypeInfo, v32);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    sub_1BC3008(&StringLiteral_20205/*"img_frames_nodata"*/, v34);
    sub_1BC3008(&StringLiteral_19980/*"icon_common_new01"*/, v35);
    sub_1BC3008(&StringLiteral_21077/*"listframes_shadow"*/, v36);
    sub_1BC3008(&StringLiteral_20005/*"icon_eventjoin_01"*/, v37);
    byte_4B01519 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_114;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_114;
  v40 = (ServantEntity_o *)Instance;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.faceSprite,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_114;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_object, 0LL);
  }
  if ( (imageLimitCount & 0x80000000) != 0 )
  {
    if ( svtId < 1 )
    {
      imageLimitCount = 0;
    }
    else
    {
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
      imageLimitCount = (int)Instance;
      if ( isCheckSeal )
      {
        Instance = (DataManager_o *)ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                      (ServantFaceIconComponent_o *)Instance,
                                      svtId,
                                      (int32_t)Instance,
                                      v49);
        imageLimitCount = (int)Instance;
      }
    }
  }
  v42 = imageSvtId ? imageSvtId : svtId;
  if ( !v40 )
    goto LABEL_114;
  classId = v40->fields.classId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Instance
    || (FrameTypeFixRarity = ServantExceedMaster__GetFrameTypeFixRarity(
                               (ServantExceedMaster_o *)Instance,
                               svtId,
                               exceedCount,
                               actualRarity,
                               isGrandServant,
                               0LL),
        (Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0LL) )
  {
LABEL_114:
    sub_1BC3264(Instance, v39);
  }
  v44 = lv;
  FrameType = ServantLvDetailMaster__GetFrameType(
                (ServantLvDetailMaster_o *)Instance,
                actualRarity,
                lv,
                FrameTypeFixRarity,
                isGrandServant,
                0LL);
  ServantFaceIconComponent__SetCostumeIcon(this, 0LL, v46);
  this->fields.collectionStatus = collectionStatus;
  switch ( collectionStatus )
  {
    case 0:
      backSprite = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(backSprite, 0LL);
      Instance = (DataManager_o *)this->fields.backSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20205/*"img_frames_nodata"*/, 0LL);
      Instance = (DataManager_o *)AtlasManager__IsUseFaceBattle(0LL);
      faceSprite = this->fields.faceSprite;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetFaceImage(faceSprite, 0, 0, 1, 0LL, 0LL);
        v44 = lv;
      }
      else
      {
        v44 = lv;
        if ( !faceSprite )
          goto LABEL_114;
        UISprite__set_spriteName(this->fields.faceSprite, 0LL, 0LL);
      }
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      Instance = (DataManager_o *)this->fields.typeSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
        goto LABEL_91;
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_114;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
        goto LABEL_83;
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_114;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
LABEL_83:
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
LABEL_85:
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
        goto LABEL_91;
      Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
      if ( !Instance )
        goto LABEL_114;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
LABEL_91:
      IsServantEquip = ServantEntity__get_IsServantEquip(v40, 0LL);
      ServantFaceIconComponent__SetClassSprite(this, 0, IsServantEquip, classId, FrameType, isGrandServant, v65);
      ServantFaceIconComponent__SetLimitCountSprite(this, 0, v40->fields.limitMax, limitCount, v66);
      ServantFaceIconComponent__SetLimitCountIcon(this, 0, v40->fields.limitMax, limitCount, v67);
      ServantFaceIconComponent__SetRaritySprite(this, 0, rarity, exceedCount, v44, actualRarity, v68);
      ServantFaceIconComponent__SetFaceEffectSprite(this, 0, v69);
      shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
      {
        if ( isTemporarySubscription && (this->fields.collectionStatus & 0xFFFFFFFE) != 6 )
        {
          Instance = (DataManager_o *)this->fields.shiningIcon;
          if ( !Instance )
            goto LABEL_114;
          v72 = &StringLiteral_20005/*"icon_eventjoin_01"*/;
        }
        else
        {
          if ( !isNew || (this->fields.collectionStatus & 0xFFFFFFFE) == 6 )
          {
            Instance = (DataManager_o *)this->fields.shiningIcon;
            if ( Instance )
            {
              ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, v39);
              goto LABEL_105;
            }
            goto LABEL_114;
          }
          Instance = (DataManager_o *)this->fields.shiningIcon;
          if ( !Instance )
            goto LABEL_114;
          v72 = &StringLiteral_19980/*"icon_common_new01"*/;
        }
        ShiningIconComponent__Set_40047632((ShiningIconComponent_o *)Instance, (System_String_o *)*v72, v71);
      }
LABEL_105:
      ServantFaceIconComponent__ClearEquip(this, v39);
      if ( info1 && !IconLabelInfo__IsClear(info1, 0LL) )
      {
        this->fields.info1 = info1;
        p_info1 = &this->fields.info1;
        v76 = (int)info1;
      }
      else
      {
        this->fields.info1 = 0LL;
        p_info1 = &this->fields.info1;
        v76 = 0;
      }
      sub_1BC2FAC((CGThumbnailListItem_o *)p_info1, v76, v73, v74);
      if ( info2 && !IconLabelInfo__IsClear(info2, 0LL) )
      {
        this->fields.info2 = info2;
        p_info2 = &this->fields.info2;
        v80 = (int)info2;
      }
      else
      {
        this->fields.info2 = 0LL;
        p_info2 = &this->fields.info2;
        v80 = 0;
      }
      sub_1BC2FAC((CGThumbnailListItem_o *)p_info2, v80, v77, v78);
      ServantFaceIconComponent__SetIconLabel(this, 0, v81);
      return;
    case 1:
      v52 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceBaseIcon(v52, FrameType, classId, isGrandServant, 0LL);
      AtlasManager__SetFaceImage(this->fields.faceSprite, v42, imageLimitCount, 0, 0LL, 0LL);
      ServantFaceIconComponent__SetCostumeIcon(this, svtCostumeEntity, v53);
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
      v47 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceBaseIcon(v47, FrameType, classId, isGrandServant, 0LL);
      AtlasManager__SetFaceImage(this->fields.faceSprite, v42, imageLimitCount, 1, imagePartsGroupIdxs, 0LL);
      ServantFaceIconComponent__SetCostumeIcon(this, svtCostumeEntity, v48);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21077/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v40->fields.type, FrameType, classId, isGrandServant, 0LL);
      goto LABEL_91;
    case 4:
      v54 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceBaseIcon(v54, FrameType, classId, isGrandServant, 0LL);
      AtlasManager__SetHideFace(this->fields.faceSprite, 0LL);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_114;
LABEL_45:
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21077/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v40->fields.type, FrameType, classId, isGrandServant, 0LL);
      v44 = lv;
      goto LABEL_91;
    case 6:
      v55 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceBaseIcon(v55, FrameType, classId, isGrandServant, 0LL);
      v56 = this->fields.faceSprite;
      v57 = ServantFaceIconComponent_TypeInfo;
      if ( !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
        v57 = ServantFaceIconComponent_TypeInfo;
      }
      AtlasManager__SetFaceImage(
        v56,
        v57->static_fields->SECRET_SERVANT_ID,
        v57->static_fields->SECRET_LIMIT_COUNT,
        1,
        0LL,
        0LL);
      Instance = (DataManager_o *)this->fields.frameSprite;
      v44 = lv;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21077/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v40->fields.type, FrameType, classId, isGrandServant, 0LL);
      v58 = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v58, 0LL, 0LL) )
        goto LABEL_91;
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_114;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v59 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v59, 0LL, 0LL) )
        goto LABEL_85;
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_114;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_114;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      goto LABEL_85;
    case 7:
      v60 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDataLostFaceBaseIcon(v60, 0LL);
      AtlasManager__SetDataLostFace(this->fields.faceSprite, 0LL);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      Instance = (DataManager_o *)this->fields.typeSprite;
      if ( !Instance )
        goto LABEL_114;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      goto LABEL_91;
    default:
      goto LABEL_91;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetIconLabel(
        ServantFaceIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  char v3; // w20
  UnityEngine_Object_o *iconLabel; // x21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  struct IconLabelInfo_o *info1; // x1
  int32_t collectionStatus; // w8
  UIIconLabel_o *v10; // x0
  __int64 v11; // x9

  v3 = count;
  if ( (byte_4B0152A & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
    byte_4B0152A = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    info1 = this->fields.info1;
    if ( !info1 && !this->fields.info2 || (collectionStatus = this->fields.collectionStatus, collectionStatus == 7) )
    {
      v10 = this->fields.iconLabel;
      if ( v10 )
      {
        UIIconLabel__Clear(v10, (const MethodInfo *)info1);
        return;
      }
LABEL_20:
      sub_1BC3264(v10, info1);
    }
    if ( this->fields.info2 )
    {
      v10 = this->fields.iconLabel;
      v11 = 208LL;
      if ( (v3 & 1) == 0 )
        v11 = 200LL;
      if ( !v10 )
        goto LABEL_20;
      info1 = *(struct IconLabelInfo_o **)((char *)&this->klass + v11);
    }
    else
    {
      v10 = this->fields.iconLabel;
      if ( !v10 )
        goto LABEL_20;
    }
    if ( collectionStatus == 4 )
      UIIconLabel__Set_40050636(v10, info1, 1, v7);
    else
      UIIconLabel__Set(v10, info1, v6);
  }
}


void __fastcall ServantFaceIconComponent__SetIconLabelBitmapFont(
        ServantFaceIconComponent_o *this,
        UIFont_o *bitmapFont,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x21
  UILabel_o *textLabel; // x0
  __int64 v7; // x1
  struct UIIconLabel_o *v8; // x8

  if ( (byte_4B01530 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, bitmapFont);
    byte_4B01530 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  textLabel = (UILabel_o *)UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL);
  if ( ((unsigned __int8)textLabel & 1) == 0 )
  {
    v8 = this->fields.iconLabel;
    if ( !v8 || (textLabel = v8->fields.textLabel) == 0LL )
      sub_1BC3264(textLabel, v7);
    UILabel__set_bitmapFont(textLabel, bitmapFont, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetLimitCountIcon(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        int32_t limitMax,
        int32_t limitCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *limitCountIcon; // x23
  __int64 v10; // x1
  LimitCountIconComponent_o *v11; // x0
  int32_t collectionStatus; // w8

  if ( (byte_4B0151E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, isCommandCode);
    byte_4B0151E = 1;
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(limitCountIcon, 0LL, 0LL) )
  {
    if ( isCommandCode )
    {
      v11 = this->fields.limitCountIcon;
      if ( !v11 )
LABEL_15:
        sub_1BC3264(v11, v10);
      goto LABEL_11;
    }
    collectionStatus = this->fields.collectionStatus;
    v11 = this->fields.limitCountIcon;
    if ( (unsigned int)(collectionStatus - 4) < 7 || !collectionStatus )
    {
      if ( !v11 )
        goto LABEL_15;
LABEL_11:
      LimitCountIconComponent__Clear(v11, 0LL);
      return;
    }
    if ( !v11 )
      goto LABEL_15;
    LimitCountIconComponent__Set(v11, limitCount, limitMax, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetLimitCountSprite(
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

  if ( (byte_4B0151D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, isCommandCode);
    byte_4B0151D = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(limitCountSprite, 0LL, 0LL) )
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
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
        {
LABEL_18:
          sub_1BC3264(gameObject, v10);
        }
        v13 = limitMax > 0 && limitCount >= limitMax;
        goto LABEL_13;
      }
      if ( !gameObject )
        goto LABEL_18;
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    v13 = 0;
LABEL_13:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v13, 0LL);
  }
}


void __fastcall ServantFaceIconComponent__SetLost(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x24
  __int64 v18; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x23
  Il2CppObject *Entity; // x24
  int32_t v21; // w23
  int32_t ServantLimitCountSealAfter; // w25
  int32_t v23; // w26
  int DispLimitCountFromUserServantCollection; // w24
  int32_t LimitCountByImageLimit_39470800; // w1
  int32_t v26; // w4
  const MethodInfo *v27; // x5
  int32_t v28; // w25
  int32_t actualRarity; // w28
  int32_t collectionStatus; // w29
  int32_t maxLimitCount; // w26
  bool IsNew; // w27
  bool IsGrandServant; // w0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4B01510 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtColEntity);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B01510 = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    v18 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v36.fields.currentCryptoKey = v18;
    *(_QWORD *)&v36.fields.fakeValue = v17;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v36, 0LL);
    if ( !v19 )
      goto LABEL_29;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v19,
               (int32_t)Instance,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(userSvtColEntity->fields.svtId, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_29;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v21,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(userSvtColEntity->fields.svtId, 0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    Instance = (void *)ImageLimitCount__GetCardImageLimitCount(v23, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( !Entity )
      goto LABEL_29;
    DispLimitCountFromUserServantCollection = ServantEntity__GetDispLimitCountFromUserServantCollection(
                                                (ServantEntity_o *)Entity,
                                                (int32_t)Instance,
                                                0LL);
    LimitCountByImageLimit_39470800 = DispLimitCountFromUserServantCollection;
    if ( DispLimitCountFromUserServantCollection <= 10 )
    {
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimit_39470800 = ImageLimitCount__GetLimitCountByImageLimit_39470800(
                                          DispLimitCountFromUserServantCollection,
                                          ServantLimitCountSealAfter,
                                          0LL);
    }
    Instance = UserServantCollectionEntity__GetOverwriteStatus(userSvtColEntity, LimitCountByImageLimit_39470800, 0LL);
    if ( !Instance )
LABEL_29:
      sub_1BC3264(Instance, v15);
    if ( userSvtColEntity->fields.status )
    {
      v28 = *((_DWORD *)Instance + 6);
      actualRarity = *((_DWORD *)Instance + 10);
      if ( UserServantCollectionEntity__IsLinkLostStateServant(userSvtColEntity, 0LL) )
      {
        collectionStatus = 8;
      }
      else if ( UserServantCollectionEntity__IsLinkBadStateServant(userSvtColEntity, 0LL) )
      {
        collectionStatus = 9;
      }
      else if ( UserServantCollectionEntity__IsLinkCloseStateServant(userSvtColEntity, 0LL) )
      {
        collectionStatus = 10;
      }
      else
      {
        collectionStatus = 7;
      }
      maxLimitCount = userSvtColEntity->fields.maxLimitCount;
      IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
      IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtColEntity, 0LL);
      ServantFaceIconComponent__SetIcon(
        this,
        v21,
        v28,
        maxLimitCount,
        DispLimitCountFromUserServantCollection,
        0,
        info1,
        info2,
        collectionStatus,
        IsNew,
        0,
        0LL,
        0,
        0,
        0,
        0LL,
        actualRarity,
        IsGrandServant,
        v35);
      ServantFaceIconComponent__ClearEquip(this, v34);
    }
    else
    {
      ServantFaceIconComponent__Set_40037476(this, userSvtColEntity, info1, info2, v26, v27);
    }
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetRaritySprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        int32_t actualRarity,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *raritySprite; // x25
  System_String_o *Icon; // x0
  __int64 v20; // x1
  int32_t collectionStatus; // w8
  struct UISprite_o *v22; // x20
  System_String_o *v23; // x1
  System_String_o *Icon_39481952; // x23
  int32_t RarityIcon; // w22
  bool v26; // w21
  UISprite_o *v27; // x20

  if ( (byte_4B0151F & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, isCommandCode);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantExceedMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v14);
    sub_1BC3008(&DataManager_TypeInfo, v15);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v16);
    sub_1BC3008(&Rarity_TypeInfo, v17);
    byte_4B0151F = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Icon = (System_String_o *)UnityEngine_Object__op_Equality(raritySprite, 0LL, 0LL);
  if ( ((unsigned __int8)Icon & 1) == 0 )
  {
    collectionStatus = this->fields.collectionStatus;
    if ( isCommandCode )
    {
      v22 = this->fields.raritySprite;
      if ( collectionStatus )
      {
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon = Rarity__getIcon(rarity, 0LL);
        if ( !v22 )
          goto LABEL_37;
        v23 = Icon;
        Icon = (System_String_o *)v22;
        goto LABEL_12;
      }
      if ( !v22 )
        goto LABEL_37;
      Icon = (System_String_o *)this->fields.raritySprite;
    }
    else
    {
      if ( (collectionStatus | 4) != 4 && (collectionStatus & 0xFFFFFFFE) != 6 )
      {
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon_39481952 = Rarity__getIcon_39481952(rarity, exceedCount, lv, actualRarity, 0LL);
        if ( exceedCount < 1 )
        {
          v26 = 1;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Icon = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantExceedMaster___);
          if ( !Icon )
            goto LABEL_37;
          RarityIcon = ServantExceedMaster__GetRarityIcon(
                         (ServantExceedMaster_o *)Icon,
                         actualRarity,
                         exceedCount,
                         0,
                         0,
                         0LL);
          Icon = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
          if ( !Icon )
            goto LABEL_37;
          v26 = ServantLvDetailMaster__GetRarityIcon(
                  (ServantLvDetailMaster_o *)Icon,
                  actualRarity,
                  lv,
                  RarityIcon,
                  0,
                  0LL) < 3;
        }
        v27 = this->fields.raritySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( !v26 )
        {
          AtlasManager__SetEventSprite(v27, Icon_39481952, 0LL);
LABEL_13:
          Icon = (System_String_o *)this->fields.raritySprite;
          if ( Icon )
          {
            ((void (__fastcall *)(System_String_o *, void *))Icon->klass[1]._1.typeMetadataHandle)(
              Icon,
              Icon->klass[1]._1.interopData);
            return;
          }
LABEL_37:
          sub_1BC3264(Icon, v20);
        }
        AtlasManager__SetCommon(v27, 0LL);
        Icon = (System_String_o *)this->fields.raritySprite;
        if ( !Icon )
          goto LABEL_37;
        v23 = Icon_39481952;
LABEL_12:
        UISprite__set_spriteName((UISprite_o *)Icon, v23, 0LL);
        goto LABEL_13;
      }
      Icon = (System_String_o *)this->fields.raritySprite;
      if ( !Icon )
        goto LABEL_37;
    }
    UISprite__set_spriteName((UISprite_o *)Icon, 0LL, 0LL);
  }
}


void __fastcall ServantFaceIconComponent__Set_40035652(
        ServantFaceIconComponent_o *this,
        int64_t userSvtId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v14; // x5

  if ( (byte_4B0150B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B0150B = 1;
  }
  if ( userSvtId <= 0 )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1BC3264(Instance, v12);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               userSvtId,
               (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantFaceIconComponent__Set_40035880(this, (UserServantEntity_o *)Entity, 0LL, info1, info2, v14);
  }
}


void __fastcall ServantFaceIconComponent__Set_40035864(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  ServantFaceIconComponent__Set_40035880(this, userSvtEntity, 0LL, info1, info2, v5);
}


void __fastcall ServantFaceIconComponent__Set_40035880(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x25
  int32_t v15; // w23
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v17; // x1
  __int128 v18; // q1
  int32_t Rarity_k__BackingField; // w22
  int32_t ActualRarity_k__BackingField; // w25
  __int64 v21; // x1
  int64_t v22; // x26
  NetworkManager_c *v23; // x0
  int32_t actualRarity; // w19
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v26; // x3
  int32_t IconLimitCountSealAfter; // w0
  __int64 v28; // x27
  __int64 v29; // x28
  int32_t v30; // w26
  int32_t v31; // w0
  int32_t exceedCount; // w27
  int32_t v33; // w28
  bool IsNew; // w29
  bool IsEventJoin; // w0
  int32_t lv; // w25
  bool v37; // w21
  bool IsGrandServant; // w0
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x4
  ServantFaceIconComponent_o *FriendIconLimitCount; // x0
  const MethodInfo *v42; // x3
  int32_t v43; // w0
  __int64 v44; // x27
  __int64 v45; // x28
  int32_t v46; // w26
  int32_t v47; // w0
  int32_t v48; // w21
  int32_t v49; // w25
  int32_t v50; // w27
  bool v51; // w0
  const MethodInfo *v52; // [xsp+50h] [xbp-D0h]
  IconLabelInfo_o *v53; // [xsp+68h] [xbp-B8h]
  IconLabelInfo_o *info1a; // [xsp+70h] [xbp-B0h]
  System_Int64_array *userSvtIdList; // [xsp+78h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+A0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4B0150D & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, userSvtEntity);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_4B0150D = 1;
  }
  if ( userSvtEntity )
  {
    v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v58.fields.currentCryptoKey = v14;
    *(_QWORD *)&v58.fields.fakeValue = v13;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v58, 0LL);
    OverwriteStatus = UserServantEntity__GetOverwriteStatus(userSvtEntity, 0LL, 0LL);
    if ( !OverwriteStatus )
      sub_1BC3264(0LL, v17);
    info1a = info1;
    v18 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    Rarity_k__BackingField = OverwriteStatus->fields._Rarity_k__BackingField;
    ActualRarity_k__BackingField = OverwriteStatus->fields._ActualRarity_k__BackingField;
    *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v57.fields.fakeValue = v18;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v56 = v57;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v56, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, v21);
      byte_4AFC1F1 = 1;
    }
    v23 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v23 = NetworkManager_TypeInfo;
    }
    userSvtIdList = equipIdList;
    actualRarity = ActualRarity_k__BackingField;
    if ( v22 == v23->static_fields->userIdNumber )
    {
      v53 = info2;
      IconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
      IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                  IconLimitCount,
                                  v15,
                                  (int32_t)IconLimitCount,
                                  v26);
      v29 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v28 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v30 = IconLimitCountSealAfter;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v59.fields.currentCryptoKey = v29;
      *(_QWORD *)&v59.fields.fakeValue = v28;
      v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v59, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v33 = v31;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      lv = userSvtEntity->fields.lv;
      v37 = IsEventJoin;
      IsGrandServant = UserServantEntity__IsGrandServant(userSvtEntity, 0LL);
      ServantFaceIconComponent__SetIcon(
        this,
        v15,
        Rarity_k__BackingField,
        v33,
        v30,
        exceedCount,
        info1a,
        v53,
        2,
        IsNew,
        v37,
        0LL,
        0,
        lv,
        0,
        0LL,
        actualRarity,
        IsGrandServant,
        v52);
    }
    else
    {
      FriendIconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getFriendIconLimitCount(
                                                             userSvtEntity,
                                                             0,
                                                             0LL);
      v43 = ServantFaceIconComponent__GetIconLimitCountSealAfter(
              FriendIconLimitCount,
              v15,
              (int32_t)FriendIconLimitCount,
              v42);
      v45 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v44 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v46 = v43;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v60.fields.currentCryptoKey = v45;
      *(_QWORD *)&v60.fields.fakeValue = v44;
      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v60, 0LL);
      v48 = userSvtEntity->fields.exceedCount;
      v49 = userSvtEntity->fields.lv;
      v50 = v47;
      v51 = UserServantEntity__IsGrandServant(userSvtEntity, 0LL);
      ServantFaceIconComponent__SetIcon(
        this,
        v15,
        Rarity_k__BackingField,
        v50,
        v46,
        v48,
        info1a,
        info2,
        2,
        0,
        0,
        0LL,
        0,
        v49,
        0,
        0LL,
        actualRarity,
        v51,
        v52);
    }
    if ( userSvtIdList && *(_QWORD *)&userSvtIdList->max_length )
      ServantFaceIconComponent__SetEquip_40034304(this, v15, userSvtIdList, 0, v40);
    else
      ServantFaceIconComponent__ClearEquip(this, v39);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__Set_40037156(
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
  __int64 v21; // x1
  Il2CppObject *Master_object; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t actualRarity; // w0
  const MethodInfo *v26; // [xsp+50h] [xbp-90h]

  if ( (byte_4B01518 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&DataManager_TypeInfo, v21);
    byte_4B01518 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Master_object )
    sub_1BC3264(0LL, v23);
  if ( frameLimitCount <= 0 )
    v24 = limitCount;
  else
    v24 = frameLimitCount;
  actualRarity = ServantExceedMaster__GetRarity_41669740((ServantExceedMaster_o *)Master_object, svtId, v24, 0LL);
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
    v26);
}


void __fastcall ServantFaceIconComponent__Set_40037476(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t frameLimitCount,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x24
  __int64 v19; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x23
  Il2CppObject *Entity; // x0
  int32_t status; // w27
  ServantEntity_o *v23; // x24
  int32_t v24; // w23
  int32_t ServantLimitCountSealAfter; // w26
  int DispLimitCountFromUserServantCollection; // w25
  int32_t LimitCountByImageLimit_39470800; // w1
  int32_t v28; // w26
  int32_t actualRarity; // w28
  bool IsEnemyCollectionDetail; // w0
  int32_t maxLimitCount; // w24
  int32_t collectionStatus; // w29
  bool IsNew; // w27
  bool IsGrandServant; // w0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B0150F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtColEntity);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B0150F = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    v19 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v37.fields.currentCryptoKey = v19;
    *(_QWORD *)&v37.fields.fakeValue = v18;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v37, 0LL);
    if ( !v20 )
      goto LABEL_23;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v20,
               (int32_t)Instance,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    status = userSvtColEntity->fields.status;
    v23 = (ServantEntity_o *)Entity;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(userSvtColEntity->fields.svtId, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_23;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v24,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    Instance = (void *)ImageLimitCount__GetCardImageLimitCount(v24, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( !v23 )
      goto LABEL_23;
    DispLimitCountFromUserServantCollection = ServantEntity__GetDispLimitCountFromUserServantCollection(
                                                v23,
                                                (int32_t)Instance,
                                                0LL);
    LimitCountByImageLimit_39470800 = DispLimitCountFromUserServantCollection;
    if ( DispLimitCountFromUserServantCollection <= 10 )
    {
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimit_39470800 = ImageLimitCount__GetLimitCountByImageLimit_39470800(
                                          DispLimitCountFromUserServantCollection,
                                          ServantLimitCountSealAfter,
                                          0LL);
    }
    Instance = UserServantCollectionEntity__GetOverwriteStatus(userSvtColEntity, LimitCountByImageLimit_39470800, 0LL);
    if ( !Instance )
LABEL_23:
      sub_1BC3264(Instance, v16);
    v28 = *((_DWORD *)Instance + 6);
    actualRarity = *((_DWORD *)Instance + 10);
    IsEnemyCollectionDetail = ServantEntity__get_IsEnemyCollectionDetail(v23, 0LL);
    maxLimitCount = userSvtColEntity->fields.maxLimitCount;
    if ( status == 0 || !IsEnemyCollectionDetail )
      collectionStatus = status;
    else
      collectionStatus = 3;
    IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
    IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtColEntity, 0LL);
    ServantFaceIconComponent__SetIcon(
      this,
      v24,
      v28,
      maxLimitCount,
      DispLimitCountFromUserServantCollection,
      0,
      info1,
      info2,
      collectionStatus,
      IsNew,
      0,
      0LL,
      0,
      0,
      0,
      0LL,
      actualRarity,
      IsGrandServant,
      v36);
    ServantFaceIconComponent__ClearEquip(this, v35);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_40039296(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        ServantCostumeEntity_o *svtCostumeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isSecret,
        const MethodInfo *method)
{
  __int64 v13; // x1
  int32_t status; // w26
  int32_t id; // w25
  int32_t collectionStatus; // w29
  ServantOverwriteStatus_o *v17; // x24
  __int64 v18; // x25
  __int64 v19; // x26
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t Rarity_k__BackingField; // w26
  int32_t maxLimitCount; // w27
  int32_t v24; // w28
  int32_t actualRarity; // w24
  int32_t v26; // w25
  bool IsGrandServant; // w0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4B01512 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtColEntity);
    sub_1BC3008(&ServantOverwriteStatus_TypeInfo, v13);
    byte_4B01512 = 1;
  }
  if ( userSvtColEntity && svtCostumeEntity )
  {
    status = userSvtColEntity->fields.status;
    if ( ServantCostumeEntity__checkFlag(svtCostumeEntity, 16, 0LL)
      && !UserServantCollectionEntity__IsCostumeGet(userSvtColEntity, svtCostumeEntity->fields.id, 0LL) )
    {
      status = 0;
    }
    id = svtCostumeEntity->fields.id;
    if ( isSecret )
      collectionStatus = 6;
    else
      collectionStatus = status;
    v17 = (ServantOverwriteStatus_o *)sub_1BC3254(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_32954288(v17, userSvtColEntity, id, 0LL);
    v19 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v19;
    *(_QWORD *)&v30.fields.fakeValue = v18;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v30, 0LL);
    if ( !v17 )
      sub_1BC3264(v20, v21);
    Rarity_k__BackingField = v17->fields._Rarity_k__BackingField;
    maxLimitCount = userSvtColEntity->fields.maxLimitCount;
    v24 = svtCostumeEntity->fields.id;
    actualRarity = v17->fields._ActualRarity_k__BackingField;
    v26 = v20;
    IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtColEntity, 0LL);
    ServantFaceIconComponent__SetIcon(
      this,
      v26,
      Rarity_k__BackingField,
      maxLimitCount,
      v24,
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
      0LL,
      actualRarity,
      IsGrandServant,
      v29);
    ServantFaceIconComponent__ClearEquip(this, v28);
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)userSvtColEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_40039736(
        ServantFaceIconComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isNewIconDisp,
        int32_t imageSvtId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  int32_t IconLimitCount; // w24
  __int64 v15; // x26
  __int64 v16; // x27
  ServantFaceIconComponent_o *v17; // x0
  const MethodInfo *v18; // x3
  int v19; // w21
  __int64 v20; // x26
  __int64 v21; // x27
  const MethodInfo *v22; // x1
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v24; // x1
  int32_t Rarity_k__BackingField; // w26
  int32_t actualRarity; // w22
  __int64 v27; // x27
  __int64 v28; // x28
  int32_t v29; // w21
  int32_t v30; // w0
  int32_t limitCount; // w28
  int32_t exceedCount; // w27
  int32_t v33; // w29
  int64_t userId; // x25
  bool IsNew; // w0
  int32_t lv; // w23
  bool v37; // w25
  bool IsGrandSvt; // w0
  int32_t v39; // w23
  bool v40; // w0
  const MethodInfo *v41; // x1
  __int64 v42; // x21
  __int64 v43; // x22
  int32_t v44; // w21
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x22
  bool v46; // w3
  const MethodInfo *v47; // x4
  const MethodInfo *v48; // [xsp+50h] [xbp-80h]
  IconLabelInfo_o *v49; // [xsp+58h] [xbp-78h]
  IconLabelInfo_o *v50; // [xsp+60h] [xbp-70h]
  int32_t collectionStatus; // [xsp+6Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4B01513 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, servantLeaderInfo);
    sub_1BC3008(&OtherUserNewManager_TypeInfo, v13);
    byte_4B01513 = 1;
  }
  if ( servantLeaderInfo )
  {
    IconLimitCount = ServantLeaderInfo__getIconLimitCount(servantLeaderInfo, 0LL);
    if ( !ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) )
    {
      v16 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v52.fields.currentCryptoKey = v16;
      *(_QWORD *)&v52.fields.fakeValue = v15;
      v17 = (ServantFaceIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v52, 0LL);
      IconLimitCount = ServantFaceIconComponent__GetIconLimitCountSealAfter(v17, (int32_t)v17, IconLimitCount, v18);
    }
    if ( ServantLeaderInfo__IsHideSupport(servantLeaderInfo, 0LL) )
    {
      v19 = 4;
    }
    else if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) )
    {
      v19 = 5;
    }
    else
    {
      v19 = 2;
    }
    v21 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v53.fields.currentCryptoKey = v21;
    *(_QWORD *)&v53.fields.fakeValue = v20;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v53, 0LL) )
    {
      collectionStatus = v19;
      OverwriteStatus = ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0LL);
      if ( !OverwriteStatus )
        sub_1BC3264(0LL, v24);
      v49 = info1;
      v50 = info2;
      Rarity_k__BackingField = OverwriteStatus->fields._Rarity_k__BackingField;
      actualRarity = OverwriteStatus->fields._ActualRarity_k__BackingField;
      v28 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      v29 = imageSvtId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v54.fields.currentCryptoKey = v28;
      *(_QWORD *)&v54.fields.fakeValue = v27;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v54, 0LL);
      limitCount = servantLeaderInfo->fields.limitCount;
      exceedCount = servantLeaderInfo->fields.exceedCount;
      v33 = v30;
      if ( isNewIconDisp )
      {
        userId = servantLeaderInfo->fields.userId;
        if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
        IsNew = OtherUserNewManager__IsNew(userId, 0LL);
        lv = servantLeaderInfo->fields.lv;
        v37 = IsNew;
        IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0LL);
        ServantFaceIconComponent__SetIcon(
          this,
          v33,
          Rarity_k__BackingField,
          limitCount,
          IconLimitCount,
          exceedCount,
          v49,
          v50,
          collectionStatus,
          v37,
          0,
          0LL,
          0,
          lv,
          v29,
          0LL,
          actualRarity,
          IsGrandSvt,
          v48);
      }
      else
      {
        v39 = servantLeaderInfo->fields.lv;
        v40 = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0LL);
        ServantFaceIconComponent__SetIcon(
          this,
          v33,
          Rarity_k__BackingField,
          limitCount,
          IconLimitCount,
          exceedCount,
          v49,
          v50,
          collectionStatus,
          0,
          0,
          0LL,
          0,
          v39,
          v29,
          0LL,
          actualRarity,
          v40,
          v48);
      }
    }
    else
    {
      ServantFaceIconComponent__NoMount(this, v22);
    }
    if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) && ServantLeaderInfo__IsHideEquip(servantLeaderInfo, 0LL) )
    {
      ServantFaceIconComponent__HideEquip(this, v41);
    }
    else
    {
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(servantLeaderInfo, 0LL);
      v43 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v42 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v55.fields.currentCryptoKey = v43;
      *(_QWORD *)&v55.fields.fakeValue = v42;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v55, 0LL);
      EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(servantLeaderInfo, 0LL);
      v46 = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(servantLeaderInfo, 0LL) > 0;
      ServantFaceIconComponent__SetEquip_40040996(this, v44, EquipTargetInfoList, v46, v47);
    }
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)servantLeaderInfo);
  }
}


void __fastcall ServantFaceIconComponent__Set_40041964(
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

  if ( (byte_4B01514 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo);
    byte_4B01514 = 1;
  }
  if ( equipTargetInfo )
  {
    v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v15.fields.currentCryptoKey = v10;
    *(_QWORD *)&v15.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v15, 0LL);
    ServantFaceIconComponent__Set_40037156(
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
      0LL,
      0,
      0,
      0,
      0,
      equipTargetInfo->fields._ImagePartsGroupIdxs_k__BackingField,
      0,
      v14);
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(equipTargetInfo->fields.svtId, 0LL);
    ServantFaceIconComponent__ClearEquip_40042228(this, v12, v13);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)equipTargetInfo);
  }
}


void __fastcall ServantFaceIconComponent__Set_40043344(
        ServantFaceIconComponent_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int128 v11; // q1
  __int64 v12; // x1
  int64_t v13; // x23
  NetworkManager_c *v14; // x0
  __int64 v15; // x24
  __int64 v16; // x25
  int64_t userIdNumber; // x26
  int32_t v18; // w0
  const MethodInfo *v19; // x6
  bool v20; // zf
  int32_t v21; // w23
  bool v22; // w0
  const MethodInfo *v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B01515 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, userCommandCodeEntity);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_4B01515 = 1;
  }
  if ( userCommandCodeEntity )
  {
    v11 = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.fakeValue;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v25.fields.fakeValue = v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v24 = v25;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v24, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, v12);
      byte_4AFC1F1 = 1;
    }
    v14 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v14 = NetworkManager_TypeInfo;
    }
    v16 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    userIdNumber = v14->static_fields->userIdNumber;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v26.fields.currentCryptoKey = v16;
    *(_QWORD *)&v26.fields.fakeValue = v15;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v26, 0LL);
    v20 = v13 == userIdNumber;
    v21 = v18;
    v22 = v20 && UserCommandCodeEntity__IsNew(userCommandCodeEntity, 0LL);
    ServantFaceIconComponent__SetCommandCode(this, v21, info1, info2, 2, v22, v19);
    ServantFaceIconComponent__ClearEquip(this, v23);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_40044892(
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

  if ( (byte_4B01516 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeEntity);
    byte_4B01516 = 1;
  }
  if ( userCommandCodeEntity )
  {
    v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL);
    ServantFaceIconComponent__SetCommandCode(this, v13, info1, info2, 2, isNew, v14);
    ServantFaceIconComponent__ClearEquip(this, v15);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_40045084(
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

  if ( (byte_4B01517 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeCollectionEntity);
    byte_4B01517 = 1;
  }
  if ( userCommandCodeCollectionEntity )
  {
    v10 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v17, 0LL);
    status = userCommandCodeCollectionEntity->fields.status;
    v13 = v11;
    IsNew = UserCommandCodeCollectionEntity__IsNew(userCommandCodeCollectionEntity, 0LL);
    ServantFaceIconComponent__SetCommandCode(this, v13, info1, info2, status, IsNew, v15);
    ServantFaceIconComponent__ClearEquip(this, v16);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeCollectionEntity);
  }
}


bool __fastcall ServantFaceIconComponent__UpdateAlpha(
        ServantFaceIconComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  const MethodInfo *v6; // x1
  UIIconLabel_o *v7; // x0

  if ( (byte_4B0152B & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B0152B = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) && this->fields.info1 && this->fields.info2 )
  {
    v7 = this->fields.iconLabel;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    UIIconLabel__SetAlpha(v7, alpha, v6);
  }
  return 1;
}