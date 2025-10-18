void ServantClassIconComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C4244E & 1) == 0 )
  {
    sub_1C37058(&ServantClassIconComponent_TypeInfo);
    byte_4C4244E = 1;
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
  UISprite_o *v4; // x0
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *nameLabel; // x20

  if ( (byte_4C42444 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42444 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v4 = this->fields.iconSprite;
    if ( !v4 )
      goto LABEL_19;
    UISprite__set_spriteName(v4, 0, 0);
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0, 0) )
  {
    v4 = this->fields.nameSprite;
    if ( !v4 )
      goto LABEL_19;
    UISprite__set_spriteName(v4, 0, 0);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
  {
    v4 = (UISprite_o *)this->fields.nameLabel;
    if ( v4 )
    {
      UILabel__set_text((UILabel_o *)v4, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_19:
    sub_1C372B4(v4);
  }
}


int32_t ServantClassIconComponent__GetIconSpriteScaledWidth(
        ServantClassIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Component_o *transform; // x0
  int klass; // w19
  float v7; // s8
  float v8; // s8
  int32_t v9; // w9

  if ( (byte_4C4244A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4244A = 1;
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
    sub_1C372B4(transform);
  }
  LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  if ( !byte_4C3C920 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
  }
  v8 = v7 * (float)klass;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = vcvtms_s32_f32(v8);
  if ( floorf(v8) == INFINITY )
    return 0x80000000;
  else
    return v9;
}


void ServantClassIconComponent__OverwriteTextNameLabel(
        ServantClassIconComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UILabel_o *nameLabel; // x0

  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    sub_1C372B4(0);
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
  if ( (byte_4C4244C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4244C = 1;
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
  if ( (byte_4C4244D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4244D = 1;
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
  struct UISprite_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v11; // x0
  UIWidget_o *v12; // x20
  int mWidth; // w22
  ServantClassIconComponent_c *v14; // x0
  float v15; // s0
  int32_t v16; // w1
  float v17; // s0
  int32_t v18; // w1
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4244B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantClassIconComponent_TypeInfo);
    byte_4C4244B = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconSprite, 0, 0) )
  {
    v6 = this->fields.iconSprite;
    if ( !v6 )
      goto LABEL_23;
    if ( !v6->fields.mSpriteName )
      return;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    LocalScale = GameObjectExtensions__GetLocalScale(gameObject, 0);
    v6 = this->fields.iconSprite;
    if ( !v6 )
      goto LABEL_23;
    x = LocalScale.fields.x;
    y = LocalScale.fields.y;
    z = LocalScale.fields.z;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v6,
      v6->klass->vtable._33_MakePixelPerfect.method);
    v6 = this->fields.iconSprite;
    if ( !v6 )
      goto LABEL_23;
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    v20.fields.x = x;
    v20.fields.y = y;
    v20.fields.z = z;
    GameObjectExtensions__SetLocalScale(v11, v20, 0);
    if ( !isEnemy )
      return;
    v12 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v12 )
      goto LABEL_23;
    mWidth = v12->fields.mWidth;
    v14 = ServantClassIconComponent_TypeInfo;
    if ( !ServantClassIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantClassIconComponent_TypeInfo);
      v14 = ServantClassIconComponent_TypeInfo;
    }
    v15 = v14->static_fields->ENEMY_ICON_SCALE * (float)mWidth;
    v16 = v15 == INFINITY ? 0x80000000 : (int)v15;
    UIWidget__set_width(v12, v16, 0);
    v6 = this->fields.iconSprite;
    if ( !v6 )
LABEL_23:
      sub_1C372B4(v6);
    v17 = ServantClassIconComponent_TypeInfo->static_fields->ENEMY_ICON_SCALE * (float)v6->fields.mHeight;
    if ( v17 == INFINITY )
      v18 = 0x80000000;
    else
      v18 = (int)v17;
    UIWidget__set_height((UIWidget_o *)v6, v18, 0);
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
  UIWidget_o *v9; // x0
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *nameLabel; // x20
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4C42449 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42449 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v9 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v9 )
      goto LABEL_19;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UIWidget__set_color(v9, v12, 0);
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0, 0) )
  {
    v9 = (UIWidget_o *)this->fields.nameSprite;
    if ( !v9 )
      goto LABEL_19;
    v13.fields.r = r;
    v13.fields.g = g;
    v13.fields.b = b;
    v13.fields.a = a;
    UIWidget__set_color(v9, v13, 0);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
  {
    v9 = (UIWidget_o *)this->fields.nameLabel;
    if ( v9 )
    {
      v14.fields.b = b;
      v14.fields.a = a;
      v14.fields.r = r;
      v14.fields.g = g;
      UIWidget__set_color(v9, v14, 0);
      return;
    }
LABEL_19:
    sub_1C372B4(v9);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x25
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *iconSprite; // x24
  Il2CppObject *v17; // x23
  UISprite_o *v18; // x24
  int32_t monitor_high; // w25
  UnityEngine_Object_o *nameSprite; // x22
  UISprite_o *v21; // x22
  int32_t v22; // w24
  UnityEngine_Object_o *nameLabel; // x21
  System_String_o **p_monitor; // x8

  if ( (byte_4C42448 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42448 = 1;
  }
  this->fields._IsNormalClassIcon_k__BackingField = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v14 = Master_object;
  if ( isGrandServant )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
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
  if ( !v14 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             classId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  v17 = Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(iconSprite, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v18 = this->fields.iconSprite;
    if ( v17 )
    {
      monitor_high = HIDWORD(v17[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClassIcon(v18, monitor_high, frameType, 0, isGrandEffect, 0);
    }
    else
    {
      if ( !v18 )
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
    v21 = this->fields.nameSprite;
    if ( v17 )
    {
      v22 = HIDWORD(v17[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClassTextIcon(v21, v22, frameType, 0, 0);
    }
    else
    {
      if ( !v21 )
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
    if ( v17 )
    {
      if ( Master_object )
      {
        p_monitor = (System_String_o **)&v17[1].monitor;
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
    sub_1C372B4(Master_object);
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
  bool v12; // w23
  int32_t FrameType_42684144; // w2
  const MethodInfo *v14; // x6

  if ( (byte_4C42447 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42447 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  v12 = isGrand;
  FrameType_42684144 = ServantExceedMaster__GetFrameType_42684144(
                         (ServantExceedMaster_o *)Instance,
                         svtId,
                         limitCount,
                         0,
                         v12,
                         0);
  ServantClassIconComponent__SetImage(this, classId, FrameType_42684144, 0, v12, 0, v14);
}


void ServantClassIconComponent__Set_40990536(
        ServantClassIconComponent_o *this,
        int32_t classId,
        int32_t rarity,
        const MethodInfo *method)
{
  int32_t FrameTypeImage; // w2
  const MethodInfo *v8; // x6

  if ( (byte_4C42445 & 1) == 0 )
  {
    sub_1C37058(&Rarity_TypeInfo);
    byte_4C42445 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  FrameTypeImage = Rarity__getFrameTypeImage(rarity, 0, 0);
  ServantClassIconComponent__SetImage(this, classId, FrameTypeImage, 0, 0, 0, v8);
}


void ServantClassIconComponent__Set_40990672(
        ServantClassIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x23
  const MethodInfo *v11; // x6

  if ( (byte_4C42446 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42446 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   svtId,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0
    || (Instance = (Il2CppObject *)ServantExceedMaster__GetFrameType_42684144(
                                     (ServantExceedMaster_o *)Instance,
                                     svtId,
                                     limitCount,
                                     exceedCount,
                                     0,
                                     0),
        !Entity) )
  {
    sub_1C372B4(Instance);
  }
  ServantClassIconComponent__SetImage(this, (int32_t)Entity[5].klass, (int32_t)Instance, 0, 0, 0, v11);
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