void __fastcall ServantClassIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1B9E1 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantClassIconComponent_TypeInfo, v1);
    byte_4B1B9E1 = 1;
  }
  LODWORD(ServantClassIconComponent_TypeInfo->static_fields->ENEMY_ICON_SCALE) = (struct ServantClassIconComponent_StaticFields)1061158912;
}


void __fastcall ServantClassIconComponent___ctor(ServantClassIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantClassIconComponent__Clear(ServantClassIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v5; // x1
  UISprite_o *v6; // x0
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *nameLabel; // x20

  if ( (byte_4B1B9D7 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v3);
    byte_4B1B9D7 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v6 = this->fields.iconSprite;
    if ( !v6 )
      goto LABEL_19;
    UISprite__set_spriteName(v6, 0LL, 0LL);
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
  {
    v6 = this->fields.nameSprite;
    if ( !v6 )
      goto LABEL_19;
    UISprite__set_spriteName(v6, 0LL, 0LL);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    v6 = (UISprite_o *)this->fields.nameLabel;
    if ( v6 )
    {
      UILabel__set_text((UILabel_o *)v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_19:
    sub_1BCB254(v6, v5);
  }
}


int32_t __fastcall ServantClassIconComponent__GetIconSpriteScaledWidth(
        ServantClassIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  int klass; // w19
  __int64 v8; // x1
  float v9; // s8
  float v10; // s8
  int32_t v11; // w9

  if ( (byte_4B1B9DD & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1B9DD = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(iconSprite, 0LL, 0LL) )
    return 0;
  transform = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !transform
    || (klass = (int)transform[7].klass,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL) )
  {
    sub_1BCB254(transform, v4);
  }
  LODWORD(v9) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  if ( !byte_4B16190 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, v8);
    byte_4B16190 = 1;
  }
  v10 = v9 * (float)klass;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = vcvtms_s32_f32(v10);
  if ( floorf(v10) == INFINITY )
    return 0x80000000;
  else
    return v11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__RePositionClassIcon(
        ServantClassIconComponent_o *this,
        UnityEngine_Vector2_o position,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4B1B9DF & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1B9DF = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconSprite, 0LL, 0LL) )
  {
    v7.fields.z = 0.0;
    v7.fields.x = x;
    v7.fields.y = y;
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.iconSprite, v7, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__RePositionClassName(
        ServantClassIconComponent_o *this,
        UnityEngine_Vector2_o position,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4B1B9E0 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1B9E0 = 1;
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nameSprite, 0LL, 0LL) )
  {
    v7.fields.z = 0.0;
    v7.fields.x = x;
    v7.fields.y = y;
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.nameSprite, v7, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__ReSizeClassIcon(
        ServantClassIconComponent_o *this,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *iconSprite; // x21
  __int64 v7; // x1
  struct UISprite_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s8
  float v14; // s9
  float v15; // s10
  UnityEngine_GameObject_o *v16; // x0
  UIWidget_o *v17; // x20
  int mWidth; // w22
  ServantClassIconComponent_c *v19; // x0
  float v20; // s0
  int32_t v21; // w1
  float v22; // s0
  int32_t v23; // w1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1B9DE & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isEnemy);
    sub_1BCAFF8(&ServantClassIconComponent_TypeInfo, v5);
    byte_4B1B9DE = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconSprite, 0LL, 0LL) )
  {
    v8 = this->fields.iconSprite;
    if ( !v8 )
      goto LABEL_23;
    if ( !v8->fields.mSpriteName )
      return;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    *(UnityEngine_Vector3_o *)&v10 = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
    v8 = this->fields.iconSprite;
    if ( !v8 )
      goto LABEL_23;
    v13 = v10;
    v14 = v11;
    v15 = v12;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
      v8,
      v8->klass->vtable._34_get_minWidth.methodPtr);
    v8 = this->fields.iconSprite;
    if ( !v8 )
      goto LABEL_23;
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    v24.fields.x = v13;
    v24.fields.y = v14;
    v24.fields.z = v15;
    GameObjectExtensions__SetLocalScale(v16, v24, 0LL);
    if ( !isEnemy )
      return;
    v17 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v17 )
      goto LABEL_23;
    mWidth = v17->fields.mWidth;
    v19 = ServantClassIconComponent_TypeInfo;
    if ( !ServantClassIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantClassIconComponent_TypeInfo);
      v19 = ServantClassIconComponent_TypeInfo;
    }
    v20 = v19->static_fields->ENEMY_ICON_SCALE * (float)mWidth;
    v21 = v20 == INFINITY ? 0x80000000 : (int)v20;
    UIWidget__set_width(v17, v21, 0LL);
    v8 = this->fields.iconSprite;
    if ( !v8 )
LABEL_23:
      sub_1BCB254(v8, v7);
    v22 = ServantClassIconComponent_TypeInfo->static_fields->ENEMY_ICON_SCALE * (float)v8->fields.mHeight;
    if ( v22 == INFINITY )
      v23 = 0x80000000;
    else
      v23 = (int)v22;
    UIWidget__set_height((UIWidget_o *)v8, v23, 0LL);
  }
}


void __fastcall ServantClassIconComponent__Set(
        ServantClassIconComponent_o *this,
        int32_t classId,
        bool isNonNameLabelOverwrite,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  ServantClassIconComponent__SetImage(this, classId, 2, isNonNameLabelOverwrite, 0, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__SetColor(
        ServantClassIconComponent_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v9; // x1
  UIWidget_o *v10; // x0
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *nameLabel; // x20
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4B1B9DC & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1B9DC = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v10 )
      goto LABEL_19;
    v13.fields.r = r;
    v13.fields.g = g;
    v13.fields.b = b;
    v13.fields.a = a;
    UIWidget__set_color(v10, v13, 0LL);
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.nameSprite;
    if ( !v10 )
      goto LABEL_19;
    v14.fields.r = r;
    v14.fields.g = g;
    v14.fields.b = b;
    v14.fields.a = a;
    UIWidget__set_color(v10, v14, 0LL);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.nameLabel;
    if ( v10 )
    {
      v15.fields.b = b;
      v15.fields.a = a;
      v15.fields.r = r;
      v15.fields.g = g;
      UIWidget__set_color(v10, v15, 0LL);
      return;
    }
LABEL_19:
    sub_1BCB254(v10, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__SetImage(
        ServantClassIconComponent_o *this,
        int32_t classId,
        int32_t frameType,
        bool isNonNameLabelOverwrite,
        bool isGrandServant,
        bool isGrandEffect,
        const MethodInfo *method)
{
  int32_t v11; // w23
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v20; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x25
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *iconSprite; // x24
  Il2CppObject *v24; // x23
  UISprite_o *v25; // x24
  int32_t monitor_high; // w25
  UnityEngine_Object_o *nameSprite; // x22
  UISprite_o *v28; // x22
  int32_t v29; // w24
  UnityEngine_Object_o *nameLabel; // x21
  System_String_o **p_monitor; // x8

  v11 = classId;
  if ( (byte_4B1B9DB & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, *(_QWORD *)&classId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GrandGraphDetailMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantClassMaster___, v14);
    sub_1BCAFF8(&DataManager_TypeInfo, v15);
    sub_1BCAFF8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v16);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v17);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v18);
    byte_4B1B9DB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v21 = Master_object;
  if ( isGrandServant )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GrandGraphDetailMaster__GetGrandClassId(
                                                                    (GrandGraphDetailMaster_o *)Master_object,
                                                                    v11,
                                                                    0LL);
    if ( (int)Master_object > 0 )
      v11 = (int)Master_object;
  }
  if ( !v21 )
    goto LABEL_41;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v21,
             v11,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  v24 = Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v25 = this->fields.iconSprite;
    if ( v24 )
    {
      monitor_high = HIDWORD(v24[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClassIcon(v25, monitor_high, frameType, 0, isGrandEffect, 0LL);
    }
    else
    {
      if ( !v25 )
        goto LABEL_41;
      UISprite__set_spriteName(this->fields.iconSprite, 0LL, 0LL);
    }
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v28 = this->fields.nameSprite;
    if ( v24 )
    {
      v29 = HIDWORD(v24[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClassTextIcon(v28, v29, frameType, 0, 0LL);
    }
    else
    {
      if ( !v28 )
        goto LABEL_41;
      UISprite__set_spriteName(this->fields.nameSprite, 0LL, 0LL);
    }
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) && !isNonNameLabelOverwrite )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nameLabel;
    if ( v24 )
    {
      if ( Master_object )
      {
        p_monitor = (System_String_o **)&v24[1].monitor;
LABEL_40:
        UILabel__set_text((UILabel_o *)Master_object, *p_monitor, 0LL);
        return;
      }
    }
    else if ( Master_object )
    {
      p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
      goto LABEL_40;
    }
LABEL_41:
    sub_1BCB254(Master_object, v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__SetWithClassOverWrite(
        ServantClassIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t classId,
        bool isGrand,
        const MethodInfo *method)
{
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  bool v14; // w23
  int32_t FrameType_41831384; // w2
  const MethodInfo *v16; // x6

  if ( (byte_4B1B9DA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B1B9DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v13);
  }
  v14 = isGrand;
  FrameType_41831384 = ServantExceedMaster__GetFrameType_41831384(
                         (ServantExceedMaster_o *)Instance,
                         svtId,
                         limitCount,
                         0,
                         v14,
                         0LL);
  ServantClassIconComponent__SetImage(this, classId, FrameType_41831384, 0, v14, 0, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__Set_40175468(
        ServantClassIconComponent_o *this,
        int32_t classId,
        int32_t rarity,
        const MethodInfo *method)
{
  int32_t FrameTypeImage; // w2
  const MethodInfo *v8; // x6

  if ( (byte_4B1B9D8 & 1) == 0 )
  {
    sub_1BCAFF8(&Rarity_TypeInfo, *(_QWORD *)&classId);
    byte_4B1B9D8 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  FrameTypeImage = Rarity__getFrameTypeImage(rarity, 0, 0LL);
  ServantClassIconComponent__SetImage(this, classId, FrameTypeImage, 0, 0, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__Set_40175604(
        ServantClassIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x23
  const MethodInfo *v15; // x6

  if ( (byte_4B1B9D9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B1B9D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   svtId,
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL
    || (Instance = (Il2CppObject *)ServantExceedMaster__GetFrameType_41831384(
                                     (ServantExceedMaster_o *)Instance,
                                     svtId,
                                     limitCount,
                                     exceedCount,
                                     0,
                                     0LL),
        !Entity) )
  {
    sub_1BCB254(Instance, v13);
  }
  ServantClassIconComponent__SetImage(this, (int32_t)Entity[5].klass, (int32_t)Instance, 0, 0, 0, v15);
}