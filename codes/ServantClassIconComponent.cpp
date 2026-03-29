void ServantClassIconComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4D2FF29 & 1) == 0 )
  {
    sub_1C93AD4(&ServantClassIconComponent_TypeInfo);
    byte_4D2FF29 = 1;
  }
  LODWORD(ServantClassIconComponent_TypeInfo->static_fields->ENEMY_ICON_SCALE) = (struct ServantClassIconComponent_StaticFields)1061158912;
}


void ServantClassIconComponent___ctor(ServantClassIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantClassIconComponent__Clear(ServantClassIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x0
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *nameLabel; // x20

  if ( (byte_4D2FF1F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2FF1F = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      goto LABEL_19;
    UISprite__set_spriteName(v5, 0, 0);
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0, 0) )
  {
    v5 = this->fields.nameSprite;
    if ( !v5 )
      goto LABEL_19;
    UISprite__set_spriteName(v5, 0, 0);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
  {
    v5 = (UISprite_o *)this->fields.nameLabel;
    if ( v5 )
    {
      UILabel__set_text((UILabel_o *)v5, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_19:
    sub_1C93D2C(v5, v4);
  }
}


int32_t ServantClassIconComponent__GetIconSpriteScaledWidth(
        ServantClassIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  int klass; // w19
  float v8; // s8
  float v9; // s8
  int32_t v10; // w9

  if ( (byte_4D2FF25 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FF25 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(iconSprite, 0, 0) )
    return 0;
  transform = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !transform
    || (klass = (int)transform[7].klass,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0) )
  {
    sub_1C93D2C(transform, v4);
  }
  LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  if ( !byte_4D2A138 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v9 = v8 * (float)klass;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = vcvtms_s32_f32(v9);
  if ( floorf(v9) == INFINITY )
    return 0x80000000;
  else
    return v10;
}


void ServantClassIconComponent__OverwriteTextNameLabel(
        ServantClassIconComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UILabel_o *nameLabel; // x0

  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    sub_1C93D2C(0, text);
  UILabel__set_text(nameLabel, text, 0);
}


void ServantClassIconComponent__RePositionClassIcon(
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
  if ( (byte_4D2FF27 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FF27 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconSprite, 0, 0) )
  {
    v7.fields.z = 0.0;
    v7.fields.x = x;
    v7.fields.y = y;
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.iconSprite, v7, 0);
  }
}


void ServantClassIconComponent__RePositionClassName(
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
  if ( (byte_4D2FF28 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FF28 = 1;
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nameSprite, 0, 0) )
  {
    v7.fields.z = 0.0;
    v7.fields.x = x;
    v7.fields.y = y;
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.nameSprite, v7, 0);
  }
}


void ServantClassIconComponent__ReSizeClassIcon(
        ServantClassIconComponent_o *this,
        bool isEnemy,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x21
  __int64 v6; // x1
  struct UISprite_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  UIWidget_o *v10; // x20
  int mWidth; // w22
  ServantClassIconComponent_c *v12; // x0
  float v13; // s0
  int32_t v14; // w1
  float v15; // s0
  int32_t v16; // w1
  UnityEngine_Vector3_o LocalScale; // 0:kr00_12.12

  if ( (byte_4D2FF26 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantClassIconComponent_TypeInfo);
    byte_4D2FF26 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconSprite, 0, 0) )
  {
    v7 = this->fields.iconSprite;
    if ( !v7 )
      goto LABEL_23;
    if ( !v7->fields.mSpriteName )
      return;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
    LocalScale = GameObjectExtensions__GetLocalScale(gameObject, 0);
    v7 = this->fields.iconSprite;
    if ( !v7 )
      goto LABEL_23;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v7,
      v7->klass->vtable._33_MakePixelPerfect.method);
    v7 = this->fields.iconSprite;
    if ( !v7 )
      goto LABEL_23;
    v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
    GameObjectExtensions__SetLocalScale(v9, LocalScale, 0);
    if ( !isEnemy )
      return;
    v10 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v10 )
      goto LABEL_23;
    mWidth = v10->fields.mWidth;
    v12 = ServantClassIconComponent_TypeInfo;
    if ( !ServantClassIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantClassIconComponent_TypeInfo);
      v12 = ServantClassIconComponent_TypeInfo;
    }
    v13 = v12->static_fields->ENEMY_ICON_SCALE * (float)mWidth;
    v14 = v13 == INFINITY ? 0x80000000 : (int)v13;
    UIWidget__set_width(v10, v14, 0);
    v7 = this->fields.iconSprite;
    if ( !v7 )
LABEL_23:
      sub_1C93D2C(v7, v6);
    v15 = ServantClassIconComponent_TypeInfo->static_fields->ENEMY_ICON_SCALE * (float)v7->fields.mHeight;
    if ( v15 == INFINITY )
      v16 = 0x80000000;
    else
      v16 = (int)v15;
    UIWidget__set_height((UIWidget_o *)v7, v16, 0);
  }
}


void ServantClassIconComponent__Set(
        ServantClassIconComponent_o *this,
        int32_t classId,
        bool isNonNameLabelOverwrite,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  ServantClassIconComponent__SetImage(this, classId, 2, isNonNameLabelOverwrite, 0, 0, v4);
}


void ServantClassIconComponent__SetColor(
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
  if ( (byte_4D2FF24 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FF24 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v10 )
      goto LABEL_19;
    v13.fields.r = r;
    v13.fields.g = g;
    v13.fields.b = b;
    v13.fields.a = a;
    UIWidget__set_color(v10, v13, 0);
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.nameSprite;
    if ( !v10 )
      goto LABEL_19;
    v14.fields.r = r;
    v14.fields.g = g;
    v14.fields.b = b;
    v14.fields.a = a;
    UIWidget__set_color(v10, v14, 0);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.nameLabel;
    if ( v10 )
    {
      v15.fields.b = b;
      v15.fields.a = a;
      v15.fields.r = r;
      v15.fields.g = g;
      UIWidget__set_color(v10, v15, 0);
      return;
    }
LABEL_19:
    sub_1C93D2C(v10, v9);
  }
}


void ServantClassIconComponent__SetImage(
        ServantClassIconComponent_o *this,
        int32_t classId,
        int32_t frameType,
        bool isNonNameLabelOverwrite,
        bool isGrandServant,
        bool isGrandEffect,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v14; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x25
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *iconSprite; // x24
  Il2CppObject *v18; // x23
  UISprite_o *v19; // x24
  int32_t monitor_high; // w25
  UnityEngine_Object_o *nameSprite; // x22
  UISprite_o *v22; // x22
  int32_t v23; // w24
  UnityEngine_Object_o *nameLabel; // x21
  System_String_o **p_monitor; // x8

  if ( (byte_4D2FF23 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2FF23 = 1;
  }
  this->fields._IsNormalClassIcon_k__BackingField = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v15 = Master_object;
  if ( isGrandServant )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    if ( !Master_object )
      goto LABEL_42;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GrandGraphDetailMaster__GetGrandClassId(
                                                                    (GrandGraphDetailMaster_o *)Master_object,
                                                                    classId,
                                                                    0);
    if ( (int)Master_object > 0 )
      classId = (int)Master_object;
    this->fields._IsNormalClassIcon_k__BackingField = (int)Master_object < 1;
  }
  if ( !v15 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v15,
             classId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  v18 = Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(iconSprite, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v19 = this->fields.iconSprite;
    if ( v18 )
    {
      monitor_high = HIDWORD(v18[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClassIcon(v19, monitor_high, frameType, 0, isGrandEffect, 0);
    }
    else
    {
      if ( !v19 )
        goto LABEL_42;
      UISprite__set_spriteName(this->fields.iconSprite, 0, 0);
    }
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(nameSprite, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v22 = this->fields.nameSprite;
    if ( v18 )
    {
      v23 = HIDWORD(v18[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClassTextIcon(v22, v23, frameType, 0, 0);
    }
    else
    {
      if ( !v22 )
        goto LABEL_42;
      UISprite__set_spriteName(this->fields.nameSprite, 0, 0);
    }
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) && !isNonNameLabelOverwrite )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nameLabel;
    if ( v18 )
    {
      if ( Master_object )
      {
        p_monitor = (System_String_o **)&v18[1].monitor;
LABEL_41:
        UILabel__set_text((UILabel_o *)Master_object, *p_monitor, 0);
        return;
      }
    }
    else if ( Master_object )
    {
      p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
      goto LABEL_41;
    }
LABEL_42:
    sub_1C93D2C(Master_object, v14);
  }
}


void ServantClassIconComponent__SetWithClassOverWrite(
        ServantClassIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t classId,
        bool isGrand,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  bool v13; // w23
  int32_t FrameType_43397868; // w2
  const MethodInfo *v15; // x6

  if ( (byte_4D2FF22 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2FF22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v12);
  }
  v13 = isGrand;
  FrameType_43397868 = ServantExceedMaster__GetFrameType_43397868(
                         (ServantExceedMaster_o *)Instance,
                         svtId,
                         limitCount,
                         0,
                         v13,
                         0);
  ServantClassIconComponent__SetImage(this, classId, FrameType_43397868, 0, v13, 0, v15);
}


void ServantClassIconComponent__Set_41796884(
        ServantClassIconComponent_o *this,
        int32_t classId,
        int32_t rarity,
        const MethodInfo *method)
{
  int32_t FrameTypeImage; // w2
  const MethodInfo *v8; // x6

  if ( (byte_4D2FF20 & 1) == 0 )
  {
    sub_1C93AD4(&Rarity_TypeInfo);
    byte_4D2FF20 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  FrameTypeImage = Rarity__getFrameTypeImage(rarity, 0, 0);
  ServantClassIconComponent__SetImage(this, classId, FrameTypeImage, 0, 0, 0, v8);
}


void ServantClassIconComponent__Set_41797020(
        ServantClassIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x23
  const MethodInfo *v12; // x6

  if ( (byte_4D2FF21 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2FF21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   svtId,
                   (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0
    || (Instance = (Il2CppObject *)ServantExceedMaster__GetFrameType_43397868(
                                     (ServantExceedMaster_o *)Instance,
                                     svtId,
                                     limitCount,
                                     exceedCount,
                                     0,
                                     0),
        !Entity) )
  {
    sub_1C93D2C(Instance, v10);
  }
  ServantClassIconComponent__SetImage(this, (int32_t)Entity[5].klass, (int32_t)Instance, 0, 0, 0, v12);
}


bool ServantClassIconComponent__get_IsNormalClassIcon(ServantClassIconComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsNormalClassIcon_k__BackingField;
}


void ServantClassIconComponent__set_IsNormalClassIcon(
        ServantClassIconComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNormalClassIcon_k__BackingField = value;
}