void __fastcall ServantClassIconComponent___ctor(ServantClassIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantClassIconComponent__Clear(ServantClassIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x0
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *nameLabel; // x20

  if ( (byte_42B1200 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1200 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      goto LABEL_22;
    UISprite__set_spriteName(v5, 0LL, 0LL);
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
  {
    v5 = this->fields.nameSprite;
    if ( !v5 )
      goto LABEL_22;
    UISprite__set_spriteName(v5, 0LL, 0LL);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    v5 = (UISprite_o *)this->fields.nameLabel;
    if ( v5 )
    {
      UILabel__set_text((UILabel_o *)v5, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_22:
    sub_B52A5C(v5, v4);
  }
}


int32_t __fastcall ServantClassIconComponent__GetIconSpriteScaledWidth(
        ServantClassIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  int m_CachedPtr; // w19
  float v8; // s0

  if ( (byte_42B1206 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1206 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(iconSprite, 0LL, 0LL) )
    return 0;
  transform = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !transform
    || (m_CachedPtr = transform[6].fields.m_CachedPtr,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL) )
  {
    sub_B52A5C(transform, v4);
  }
  v8 = COERCE_FLOAT(UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL))
     * (float)m_CachedPtr;
  return UnityEngine_Mathf__FloorToInt(v8, 0LL);
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
  if ( (byte_42B1205 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1205 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v10 )
      goto LABEL_22;
    v13.fields.r = r;
    v13.fields.g = g;
    v13.fields.b = b;
    v13.fields.a = a;
    UIWidget__set_color(v10, v13, 0LL);
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.nameSprite;
    if ( !v10 )
      goto LABEL_22;
    v14.fields.r = r;
    v14.fields.g = g;
    v14.fields.b = b;
    v14.fields.a = a;
    UIWidget__set_color(v10, v14, 0LL);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_22:
    sub_B52A5C(v10, v9);
  }
}


void __fastcall ServantClassIconComponent__SetImage(
        ServantClassIconComponent_o *this,
        int32_t classId,
        int32_t frameType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  WarEntity_o *Entity; // x0
  UnityEngine_Object_o *iconSprite; // x22
  WarEntity_o *v11; // x21
  UISprite_o *v12; // x22
  int32_t longName_high; // w23
  UnityEngine_Object_o *nameSprite; // x22
  UISprite_o *v15; // x22
  int32_t v16; // w23
  UnityEngine_Object_o *nameLabel; // x20
  System_String_o *age; // x1

  if ( (byte_42B1204 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1204 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_38;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             classId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  v11 = Entity;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v12 = this->fields.iconSprite;
    if ( v11 )
    {
      longName_high = HIDWORD(v11->fields.longName);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetClassIcon(v12, longName_high, frameType, 0LL);
    }
    else
    {
      if ( !v12 )
        goto LABEL_38;
      UISprite__set_spriteName(this->fields.iconSprite, 0LL, 0LL);
    }
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v15 = this->fields.nameSprite;
    if ( v11 )
    {
      v16 = HIDWORD(v11->fields.longName);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetClassTextIcon(v15, v16, frameType, 0LL);
    }
    else
    {
      if ( !v15 )
        goto LABEL_38;
      UISprite__set_spriteName(this->fields.nameSprite, 0LL, 0LL);
    }
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.nameLabel;
    if ( v11 )
    {
      if ( Instance )
      {
        age = v11->fields.age;
LABEL_37:
        UILabel__set_text((UILabel_o *)Instance, age, 0LL);
        return;
      }
    }
    else if ( Instance )
    {
      age = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_37;
    }
LABEL_38:
    sub_B52A5C(Instance, v8);
  }
}


void __fastcall ServantClassIconComponent__SetWithClassOverWrite(
        ServantClassIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t classId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t FrameType_30463188; // w2
  const MethodInfo *v12; // x3

  if ( (byte_42B1203 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1203 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v10);
  }
  FrameType_30463188 = ServantExceedMaster__GetFrameType_30463188(
                         (ServantExceedMaster_o *)Instance,
                         svtId,
                         limitCount,
                         0,
                         0LL);
  ServantClassIconComponent__SetImage(this, classId, FrameType_30463188, v12);
}


void __fastcall ServantClassIconComponent__Set_27173920(
        ServantClassIconComponent_o *this,
        int32_t classId,
        int32_t rarity,
        const MethodInfo *method)
{
  int32_t FrameTypeImage; // w2
  const MethodInfo *v8; // x3

  if ( (byte_42B1201 & 1) == 0 )
  {
    sub_B52984(&Rarity_TypeInfo);
    byte_42B1201 = 1;
  }
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  FrameTypeImage = Rarity__getFrameTypeImage(rarity, 0, 0LL);
  ServantClassIconComponent__SetImage(this, classId, FrameTypeImage, v8);
}


void __fastcall ServantClassIconComponent__Set_27174056(
        ServantClassIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  WarEntity_o *Entity; // x23
  const MethodInfo *v12; // x3

  if ( (byte_42B1202 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1202 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   svtId,
                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL
    || (Instance = (DataManager_o *)ServantExceedMaster__GetFrameType_30463188(
                                      (ServantExceedMaster_o *)Instance,
                                      svtId,
                                      limitCount,
                                      exceedCount,
                                      0LL),
        !Entity) )
  {
    sub_B52A5C(Instance, v10);
  }
  ServantClassIconComponent__SetImage(this, Entity->fields.startType, (int32_t)Instance, v12);
}