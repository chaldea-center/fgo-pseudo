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

  if ( (byte_4BB3BEB & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v3);
    byte_4BB3BEB = 1;
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
    sub_1C13F80(v6, v5);
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

  if ( (byte_4BB3BF1 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB3BF1 = 1;
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
    sub_1C13F80(transform, v4);
  }
  LODWORD(v9) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  if ( !byte_4BAEDA0 )
  {
    sub_1C13D24(&System_Math_TypeInfo, v8);
    byte_4BAEDA0 = 1;
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


void __fastcall ServantClassIconComponent__Set(
        ServantClassIconComponent_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ServantClassIconComponent__SetImage(this, classId, 2, v3);
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
  if ( (byte_4BB3BF0 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB3BF0 = 1;
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
    sub_1C13F80(v10, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__SetImage(
        ServantClassIconComponent_o *this,
        int32_t classId,
        int32_t frameType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *iconSprite; // x22
  Il2CppObject *v16; // x21
  UISprite_o *v17; // x22
  int32_t monitor_high; // w23
  UnityEngine_Object_o *nameSprite; // x22
  UISprite_o *v20; // x22
  int32_t v21; // w23
  UnityEngine_Object_o *nameLabel; // x20
  System_String_o **p_monitor; // x8

  if ( (byte_4BB3BEF & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, *(_QWORD *)&classId);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantClassMaster___, v7);
    sub_1C13D24(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C13D24(&StringLiteral_1/*""*/, v11);
    byte_4BB3BEF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             classId,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  v16 = Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v17 = this->fields.iconSprite;
    if ( v16 )
    {
      monitor_high = HIDWORD(v16[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClassIcon(v17, monitor_high, frameType, 0LL);
    }
    else
    {
      if ( !v17 )
        goto LABEL_33;
      UISprite__set_spriteName(this->fields.iconSprite, 0LL, 0LL);
    }
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v20 = this->fields.nameSprite;
    if ( v16 )
    {
      v21 = HIDWORD(v16[2].monitor);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClassTextIcon(v20, v21, frameType, 0LL);
    }
    else
    {
      if ( !v20 )
        goto LABEL_33;
      UISprite__set_spriteName(this->fields.nameSprite, 0LL, 0LL);
    }
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.nameLabel;
    if ( v16 )
    {
      if ( Instance )
      {
        p_monitor = (System_String_o **)&v16[1].monitor;
LABEL_32:
        UILabel__set_text((UILabel_o *)Instance, *p_monitor, 0LL);
        return;
      }
    }
    else if ( Instance )
    {
      p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
      goto LABEL_32;
    }
LABEL_33:
    sub_1C13F80(Instance, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__SetWithClassOverWrite(
        ServantClassIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  int32_t FrameType_40830668; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4BB3BEE & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BB3BEE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
    sub_1C13F80(Instance, v11);
  }
  FrameType_40830668 = ServantExceedMaster__GetFrameType_40830668(
                         (ServantExceedMaster_o *)Instance,
                         svtId,
                         limitCount,
                         0,
                         0LL);
  ServantClassIconComponent__SetImage(this, classId, FrameType_40830668, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__Set_39354416(
        ServantClassIconComponent_o *this,
        int32_t classId,
        int32_t rarity,
        const MethodInfo *method)
{
  int32_t FrameTypeImage; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4BB3BEC & 1) == 0 )
  {
    sub_1C13D24(&Rarity_TypeInfo, *(_QWORD *)&classId);
    byte_4BB3BEC = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  FrameTypeImage = Rarity__getFrameTypeImage(rarity, 0, 0LL);
  ServantClassIconComponent__SetImage(this, classId, FrameTypeImage, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__Set_39354540(
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
  const MethodInfo *v15; // x3

  if ( (byte_4BB3BED & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BB3BED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   svtId,
                   (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL
    || (Instance = (Il2CppObject *)ServantExceedMaster__GetFrameType_40830668(
                                     (ServantExceedMaster_o *)Instance,
                                     svtId,
                                     limitCount,
                                     exceedCount,
                                     0LL),
        !Entity) )
  {
    sub_1C13F80(Instance, v13);
  }
  ServantClassIconComponent__SetImage(this, (int32_t)Entity[5].klass, (int32_t)Instance, v15);
}